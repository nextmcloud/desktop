/*
 * Copyright (C) by Klaas Freitag <freitag@owncloud.com>
 * Copyright (C) by Krzesimir Nowak <krzesimir@endocode.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include <QDir>
#include <QFileDialog>
#include <QUrl>
#include <QTimer>
#include <QStorageInfo>
#include <QMessageBox>
#include <QJsonObject>
#include <QStandardPaths>

#include "QProgressIndicator.h"

#include "wizard/owncloudwizard.h"
#include "wizard/owncloudwizardcommon.h"
#include "wizard/owncloudadvancedsetuppagemac.h"
#include "account.h"
#include "theme.h"
#include "configfile.h"
#include "selectivesyncdialog.h"
#include <folderman.h>
#include "creds/abstractcredentials.h"
#include "networkjobs.h"
#include "wizard/owncloudwizard.h"

namespace OCC {

OwncloudAdvancedSetupPageMac::OwncloudAdvancedSetupPageMac(OwncloudWizard *wizard)
    : QWizardPage()
    , _progressIndi(new QProgressIndicator(this))
    , _ocWizard(wizard)
{
    _ui.setupUi(this);
    
    auto sizePolicy = _progressIndi->sizePolicy();
    sizePolicy.setRetainSizeWhenHidden(true);
    _progressIndi->setSizePolicy(sizePolicy);
    
    _ui.resultLayout->addWidget(_progressIndi);
    stopSpinner();
    setupCustomization();
    
    connect(_ui.pbSelectLocalFolder, &QAbstractButton::clicked, this, &OwncloudAdvancedSetupPageMac::slotSelectFolder);
    setButtonText(QWizard::FinishButton, tr("Connect"));
    
    if (Theme::instance()->enforceVirtualFilesSyncFolder()) {
        _ui.rSyncEverything->setDisabled(true);
        _ui.rSelectiveSync->setDisabled(true);
        _ui.bSelectiveSync->setDisabled(true);
    }
    
    connect(_ui.rSyncEverything, &QAbstractButton::clicked, this, &OwncloudAdvancedSetupPageMac::slotSyncEverythingClicked);
    connect(_ui.rSelectiveSync, &QAbstractButton::clicked, this, &OwncloudAdvancedSetupPageMac::slotSelectiveSyncClicked);
    connect(_ui.bSelectiveSync, &QAbstractButton::clicked, this, &OwncloudAdvancedSetupPageMac::slotSelectiveSyncClicked);
    
    const auto theme = Theme::instance();
    const auto appIcon = theme->applicationIcon();
    const auto appIconSize = Theme::isHidpi() ? 128 : 64;
    
    _ui.lServerIcon->setPixmap(appIcon.pixmap(appIconSize));
}

void OwncloudAdvancedSetupPageMac::setupCustomization()
{
    // set defaults for the customize labels.
    _ui.topLabel->hide();
    _ui.bottomLabel->hide();
    
    Theme *theme = Theme::instance();
    QVariant variant = theme->customMedia(Theme::oCSetupTop);
    if (!variant.isNull()) {
        WizardCommon::setupCustomMedia(variant, _ui.topLabel);
    }
    
    _ui.pbSelectLocalFolder->setStyleSheet("QPushButton {height : 25 ; width : 160px ; font: 13px; font-style: Segoe UI; color: #191919; border: 1px solid #191919; "
                                           "border-radius: 10px;border-style: outset; "
                                           "background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
                                           " stop: 0 #ffffff, stop: 1 #ffffff); "
                                           "padding: 5px }");
    
    variant = theme->customMedia(Theme::oCSetupBottom);
    WizardCommon::setupCustomMedia(variant, _ui.bottomLabel);
}

bool OwncloudAdvancedSetupPageMac::isComplete() const
{
    return !_checking && _localFolderValid;
}

void OwncloudAdvancedSetupPageMac::initializePage()
{
    WizardCommon::initErrorLabel(_ui.errorLabel);

    _checking = false;
    _ui.lSelectiveSyncSizeLabel->clear();
    _ui.lSyncEverythingSizeLabel->clear();
    
    // Update the local folder - this is not guaranteed to find a good one
    auto goodLocalFolder = FolderMan::instance()->findGoodPathForNewSyncFolder(localFolder(), serverUrl(), FolderMan::GoodPathStrategy::AllowOnlyNewPath);
    wizard()->setProperty("localFolder", goodLocalFolder);
    
    // call to init label
    updateStatus();
    
    // ensure "next" gets the focus, not obSelectLocalFolder
    QTimer::singleShot(0, wizard()->button(QWizard::FinishButton), qOverload<>(&QWidget::setFocus));
    
    auto acc = static_cast<OwncloudWizard *>(wizard())->account();
    auto quotaJob = new PropfindJob(acc, _remoteFolder, this);
    quotaJob->setProperties(QList<QByteArray>() << "http://owncloud.org/ns:size");
    
    connect(quotaJob, &PropfindJob::result, this, &OwncloudAdvancedSetupPageMac::slotQuotaRetrieved);
    quotaJob->start();
    
    
    if (Theme::instance()->wizardSelectiveSyncDefaultNothing()) {
        _selectiveSyncBlacklist = QStringList("/");
        setRadioChecked(_ui.rSelectiveSync);
        QTimer::singleShot(0, this, &OwncloudAdvancedSetupPageMac::slotSelectiveSyncClicked);
    }
    
    ConfigFile cfgFile;
    auto newFolderLimit = cfgFile.newBigFolderSizeLimit();
    
    fetchUserAvatar();
    setUserInformation();
    
    customizeStyle();
    
    auto nextButton = qobject_cast<QPushButton *>(_ocWizard->button(QWizard::NextButton));
    if (nextButton) {
        nextButton->setDefault(true);
    }
}

void OwncloudAdvancedSetupPageMac::fetchUserAvatar()
{
    const QIcon avatarIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/Product-icon.svg"));
    QPixmap pixmap = avatarIcon.pixmap(QSize(94, 71));
    _ui.lServerIcon->setPixmap(pixmap);
}

void OwncloudAdvancedSetupPageMac::setUserInformation()
{
    const auto account = _ocWizard->account();
    const auto serverUrl = account->url().toString();
    setServerAddressLabelUrl(serverUrl);
    const auto userName = account->davDisplayName();
    _ui.userNameLabel->setText(userName);
}

void OwncloudAdvancedSetupPageMac::refreshVirtualFilesAvailibility(const QString &path)
{
    if (Utility::isPathWindowsDrivePartitionRoot(path)) {
        setRadioChecked(_ui.rSyncEverything);
    }
}

void OwncloudAdvancedSetupPageMac::setServerAddressLabelUrl(const QUrl &url)
{
    if (!url.isValid()) {
        return;
    }
    
    const auto prettyUrl = url.toString().mid(url.scheme().size() + 3); // + 3 because we need to remove ://
    _ui.serverAddressLabel->setText(prettyUrl);
}

// Called if the user changes the user- or url field. Adjust the texts and
// evtl. warnings on the dialog.
void OwncloudAdvancedSetupPageMac::updateStatus()
{
    const QString locFolder = localFolder();
    
    // check if the local folder exists. If so, and if its not empty, show a warning.
    const auto pathValidityCheckResult = FolderMan::instance()->checkPathValidityForNewFolder(locFolder, serverUrl());
    auto errorStr = pathValidityCheckResult.second;
    _localFolderValid = errorStr.isEmpty() || pathValidityCheckResult.first == FolderMan::PathValidityResult::ErrorNonEmptyFolder;

    
    QString t;
    
    setLocalFolderPushButtonPath(locFolder);
    
        if (_remoteFolder.isEmpty() || _remoteFolder == QLatin1String("/")) {
            t = "";
        } else {
            t = Utility::escape(tr(R"(%1 folder "%2" is synced to local folder "%3")")
                                .arg(Theme::instance()->appName(), _remoteFolder,
                                     QDir::toNativeSeparators(locFolder)));
            _ui.rSyncEverything->setText(tr("Sync the folder \"%1\"").arg(_remoteFolder));
        }
        
        const bool dirNotEmpty(QDir(locFolder).entryList(QDir::AllEntries | QDir::NoDotAndDotDot).count() > 0);
        if (dirNotEmpty) {
            t += tr("Warning: The local folder is not empty. Pick a resolution!");
        }
    
    QString lfreeSpaceStr = Utility::octetsToString(availableLocalSpace());
    _ui.lFreeSpace->setText(QString(tr("%1 free space", "%1 gets replaced with the size and a matching unit. Example: 3 MB or 5 GB")).arg(lfreeSpaceStr));
    
    qint64 rSpace = _ui.rSyncEverything->isChecked() ? _rSize : _rSelectedSize;
    
    QString spaceError = checkLocalSpace(rSpace);
    if (!spaceError.isEmpty()) {
        errorStr = spaceError;
    }
    setErrorString(errorStr);
    
    emit completeChanged();
}

void OwncloudAdvancedSetupPageMac::setResolutionGuiVisible(bool value)
{
    //_ui.syncModeLabel->setVisible(value);
    //_ui.rKeepLocal->setVisible(value);
    //_ui.cbSyncFromScratch->setVisible(value);
}

void OwncloudAdvancedSetupPageMac::startSpinner()
{
    _ui.resultLayout->setEnabled(true);
    _progressIndi->setVisible(true);
    _progressIndi->startAnimation();
}

void OwncloudAdvancedSetupPageMac::stopSpinner()
{
    _ui.resultLayout->setEnabled(false);
    _progressIndi->setVisible(false);
    _progressIndi->stopAnimation();
}

QUrl OwncloudAdvancedSetupPageMac::serverUrl() const
{
    const QString urlString = static_cast<OwncloudWizard *>(wizard())->ocUrl();
    const QString user = static_cast<OwncloudWizard *>(wizard())->getCredentials()->user();
    
    QUrl url(urlString);
    url.setUserName(user);
    return url;
}

int OwncloudAdvancedSetupPageMac::nextId() const
{
    // tells the caller that this is the last dialog page
    return -1;
}

QString OwncloudAdvancedSetupPageMac::localFolder() const
{
    QString folder = wizard()->property("localFolder").toString();
    return folder;
}

QStringList OwncloudAdvancedSetupPageMac::selectiveSyncBlacklist() const
{
    return _selectiveSyncBlacklist;
}

bool OwncloudAdvancedSetupPageMac::isConfirmBigFolderChecked() const
{
    return _ui.rSyncEverything->isChecked();
}

bool OwncloudAdvancedSetupPageMac::validatePage()
{
    if (!_created) {
        setErrorString(QString());
        _checking = true;
        startSpinner();
        emit completeChanged();
        
        emit createLocalAndRemoteFolders(localFolder(), _remoteFolder);
        return false;
    } else {
        // connecting is running
        _checking = false;
        emit completeChanged();
        stopSpinner();
        return true;
    }
}

void OwncloudAdvancedSetupPageMac::setErrorString(const QString &err)
{
    if (err.isEmpty()) {
        _ui.errorLabel->setVisible(false);
    } else {
        _ui.errorLabel->setVisible(true);
        _ui.errorLabel->setText(err);
    }
    _checking = false;
    emit completeChanged();
}

void OwncloudAdvancedSetupPageMac::directoriesCreated()
{
    _checking = false;
    _created = true;
    stopSpinner();
    emit completeChanged();
}

void OwncloudAdvancedSetupPageMac::setRemoteFolder(const QString &remoteFolder)
{
    if (!remoteFolder.isEmpty()) {
        _remoteFolder = remoteFolder;
    }
}

void OwncloudAdvancedSetupPageMac::slotSelectFolder()
{
    QString dir = QFileDialog::getExistingDirectory(nullptr, tr("Local Sync Folder"), QDir::homePath());
    if (!dir.isEmpty()) {
        // TODO: remove when UX decision is made
        refreshVirtualFilesAvailibility(dir);
        
        setLocalFolderPushButtonPath(dir);
        wizard()->setProperty("localFolder", dir);
        updateStatus();
    }
    
    qint64 rSpace = _ui.rSyncEverything->isChecked() ? _rSize : _rSelectedSize;
    QString errorStr = checkLocalSpace(rSpace);
    setErrorString(errorStr);
}


void OwncloudAdvancedSetupPageMac::setLocalFolderPushButtonPath(const QString &path)
{
    const auto homeDir = QDir::homePath().endsWith('/') ? QDir::homePath() : QDir::homePath() + QLatin1Char('/');
    
    if (!path.startsWith(homeDir)) {
        _ui.pbSelectLocalFolder->setText(QDir::toNativeSeparators(path));
        return;
    }
    
    auto prettyPath = path;
    prettyPath.remove(0, homeDir.size());
    
    _ui.pbSelectLocalFolder->setText(QDir::toNativeSeparators(prettyPath));
}

void OwncloudAdvancedSetupPageMac::slotSelectiveSyncClicked()
{
    AccountPtr acc = static_cast<OwncloudWizard *>(wizard())->account();
    auto *dlg = new SelectiveSyncDialog(acc, _remoteFolder, _selectiveSyncBlacklist, this);
    dlg->setAttribute(Qt::WA_DeleteOnClose);
    
    connect(dlg, &SelectiveSyncDialog::finished, this, [this, dlg]{
        const int result = dlg->result();
        bool updateBlacklist = false;
        
        // We need to update the selective sync blacklist either when the dialog
        // was accepted in that
        // case the stub blacklist of / was expanded to the actual list of top
        // level folders by the selective sync dialog.
        if (result == QDialog::Accepted) {
            _selectiveSyncBlacklist = dlg->createBlackList();
            updateBlacklist = true;
        } else if (result == QDialog::Rejected && _selectiveSyncBlacklist == QStringList("/")) {
            _selectiveSyncBlacklist = dlg->oldBlackList();
            updateBlacklist = true;
        }
        
        if (updateBlacklist) {
            if (!_selectiveSyncBlacklist.isEmpty()) {
                _ui.rSelectiveSync->blockSignals(true);
                setRadioChecked(_ui.rSelectiveSync);
                _ui.rSelectiveSync->blockSignals(false);
                auto s = dlg->estimatedSize();
                if (s > 0) {
                    _ui.lSelectiveSyncSizeLabel->setText(tr("(%1)").arg(Utility::octetsToString(s)));
                } else {
                    _ui.lSelectiveSyncSizeLabel->setText(QString());
                }
            } else {
                setRadioChecked(_ui.rSyncEverything);
                _ui.lSelectiveSyncSizeLabel->setText(QString());
            }
            wizard()->setProperty("blacklist", _selectiveSyncBlacklist);
        }
        
        updateStatus();
        
    });
    dlg->open();
}

void OwncloudAdvancedSetupPageMac::slotSyncEverythingClicked()
{
    _ui.lSelectiveSyncSizeLabel->setText(QString());
    setRadioChecked(_ui.rSyncEverything);
    _selectiveSyncBlacklist.clear();
    
    QString errorStr = checkLocalSpace(_rSize);
    setErrorString(errorStr);
}

void OwncloudAdvancedSetupPageMac::slotQuotaRetrieved(const QVariantMap &result)
{
    _rSize = result["size"].toDouble();
    _ui.lSyncEverythingSizeLabel->setText(tr("(%1)").arg(Utility::octetsToString(_rSize)));
    
    updateStatus();
}

qint64 OwncloudAdvancedSetupPageMac::availableLocalSpace() const
{
    QString localDir = localFolder();
    QString path = !QDir(localDir).exists() && localDir.contains(QDir::homePath()) ?
    QDir::homePath() : localDir;
    QStorageInfo storage(QDir::toNativeSeparators(path));
    
    return storage.bytesAvailable();
}

QString OwncloudAdvancedSetupPageMac::checkLocalSpace(qint64 remoteSize) const
{
    return (availableLocalSpace()>remoteSize) ? QString() : tr("There isn't enough free space in the local folder!");
}

void OwncloudAdvancedSetupPageMac::slotStyleChanged()
{
    customizeStyle();
}

void OwncloudAdvancedSetupPageMac::customizeStyle()
{
    if (_progressIndi) {
        const auto isDarkBackground = Theme::isDarkColor(palette().window().color());
        if (isDarkBackground) {
            _progressIndi->setColor(Qt::white);
            _ui.lLocal->setPixmap(QPixmap(":/client/theme/magenta/Computer-Icon_white.svg"));
        } else {
            _progressIndi->setColor(Qt::black);
            _ui.lLocal->setPixmap(QPixmap(":/client/theme/magenta/Computer-Icon.svg"));
        }
    }
    
    styleSyncLogo();
}

void OwncloudAdvancedSetupPageMac::styleLocalFolderLabel()
{
    const QIcon avatarIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/Computer-Icon.svg"));
    QPixmap pixmap = avatarIcon.pixmap(QSize(100, 64));
    _ui.lLocal->setPixmap(pixmap);
}

void OwncloudAdvancedSetupPageMac::setRadioChecked(QRadioButton *radio)
{
    // We don't want clicking the radio buttons to immediately adjust the checked state
    // for selective sync and virtual file sync, so we keep them uncheckable until
    // they should be checked.
    radio->setCheckable(true);
    radio->setChecked(true);
    
    if (radio != _ui.rSelectiveSync)
        _ui.rSelectiveSync->setCheckable(false);
}

void OwncloudAdvancedSetupPageMac::styleSyncLogo()
{
    _ui.syncLogoLabel->setPixmap(QPixmap(":/client/theme/magenta/Combined Shape.svg"));
}

} // namespace OCC
