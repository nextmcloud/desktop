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
#include "wizard/owncloudadvancedsetuppagewindows.h"
#include "account.h"
#include "theme.h"
#include "configfile.h"
#include "selectivesyncdialog.h"
#include <folderman.h>
#include "creds/abstractcredentials.h"
#include "networkjobs.h"
#include "wizard/owncloudwizard.h"

namespace OCC {

OwncloudAdvancedSetupPageWindows::OwncloudAdvancedSetupPageWindows(OwncloudWizard *wizard)
    : QWizardPage()
    , _progressIndi(new QProgressIndicator(this))
    , _ocWizard(wizard)
{
    _ui.setupUi(this);

    auto sizePolicy = _progressIndi->sizePolicy();
    sizePolicy.setRetainSizeWhenHidden(true);
    _progressIndi->setSizePolicy(sizePolicy);
    stopSpinner();
    setupCustomization();

    connect(_ui.pbSelectLocalFolder, &QAbstractButton::clicked, this, &OwncloudAdvancedSetupPageWindows::slotSelectFolder);
    setButtonText(QWizard::NextButton, tr("Connect"));

    const QIcon productIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/Product-icon.svg"));
    QPixmap pixmap = productIcon.pixmap(QSize(94, 71));
    _ui.lServerIcon->setPixmap(pixmap);

    _ui.statusIcon->setPixmap(QPixmap(":/client/theme/magenta/status.png"));
}

void OwncloudAdvancedSetupPageWindows::setupCustomization()
{
    _ui.pbSelectLocalFolder->setStyleSheet("QPushButton {height : 28 ; width : 160px ; font: 13px; font-style: Segoe UI; color: #191919; border: 1px solid #191919; "
                              "border-radius: 15px;border-style: outset; "
                              "background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
                              " stop: 0 #ffffff, stop: 1 #ffffff); "
                              "padding: 5px }");

    Theme *theme = Theme::instance();
    QVariant variant = theme->customMedia(Theme::oCSetupTop);

    variant = theme->customMedia(Theme::oCSetupBottom);

    WizardCommon::customizeHintLabel(_ui.lFreeSpace);
    WizardCommon::customizeHintLabel(_ui.serverAddressLabel); 
}

bool OwncloudAdvancedSetupPageWindows::isComplete() const
{
    return !_checking && _localFolderValid;
}

void OwncloudAdvancedSetupPageWindows::initializePage()
{
    _checking = false;

    // Update the local folder - this is not guaranteed to find a good one
    ConfigFile cfg;
    const auto overrideLocalDir = !cfg.overrideLocalDir().isEmpty();

    auto goodLocalFolder = FolderMan::instance()->findGoodPathForNewSyncFolder(localFolder(), serverUrl(), FolderMan::GoodPathStrategy::AllowOnlyNewPath);
    if (overrideLocalDir) {
        ConfigFile cfg;
        goodLocalFolder = FolderMan::instance()->findGoodPathForNewSyncFolder(cfg.overrideLocalDir(), serverUrl(), FolderMan::GoodPathStrategy::AllowOverrideExistingPath);
    }
    wizard()->setProperty("localFolder", goodLocalFolder);

    // call to init label
    updateStatus();

    // ensure "next" gets the focus, not obSelectLocalFolder
    QTimer::singleShot(0, wizard()->button(QWizard::NextButton), qOverload<>(&QWidget::setFocus));

    auto acc = static_cast<OwncloudWizard *>(wizard())->account();
    auto quotaJob = new PropfindJob(acc, _remoteFolder, this);
    quotaJob->setProperties(QList<QByteArray>() << "http://owncloud.org/ns:size");

    connect(quotaJob, &PropfindJob::result, this, &OwncloudAdvancedSetupPageWindows::slotQuotaRetrieved);
    quotaJob->start();
    setUserInformation();

    customizeStyle();

    auto nextButton = qobject_cast<QPushButton *>(_ocWizard->button(QWizard::NextButton));
    if (nextButton) {
        nextButton->setDefault(true);
    }
}

void OwncloudAdvancedSetupPageWindows::setUserInformation()
{
    const auto account = _ocWizard->account();
    const auto serverUrl = account->url().toString();
    setServerAddressLabelUrl(serverUrl);
    const auto userName = account->davDisplayName();
    _ui.userNameLabel->setText(userName);
}

void OwncloudAdvancedSetupPageWindows::setServerAddressLabelUrl(const QUrl &url)
{
    if (!url.isValid()) {
        return;
    }

    const auto prettyUrl = url.toString().mid(url.scheme().size() + 3); // + 3 because we need to remove ://
    _ui.serverAddressLabel->setText(prettyUrl);
}

// Called if the user changes the user- or url field. Adjust the texts and
// evtl. warnings on the dialog.
void OwncloudAdvancedSetupPageWindows::updateStatus()
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
    }

    const bool dirNotEmpty(QDir(locFolder).entryList(QDir::AllEntries | QDir::NoDotAndDotDot).count() > 0);
    if (dirNotEmpty) {
        t += tr("Warning: The local folder is not empty. Pick a resolution!");
    }

    QString lfreeSpaceStr = Utility::octetsToString(availableLocalSpace());
    _ui.lFreeSpace->setText(QString(tr("%1 free space", "%1 gets replaced with the size and a matching unit. Example: 3 MB or 5 GB")).arg(lfreeSpaceStr));

}

void OwncloudAdvancedSetupPageWindows::startSpinner()
{
   // _ui.resultLayout->setEnabled(true);
    _progressIndi->setVisible(true);
    _progressIndi->startAnimation();
}

void OwncloudAdvancedSetupPageWindows::stopSpinner()
{
    //_ui.resultLayout->setEnabled(false);
    _progressIndi->setVisible(false);
    _progressIndi->stopAnimation();
}

QUrl OwncloudAdvancedSetupPageWindows::serverUrl() const
{
    const QString urlString = static_cast<OwncloudWizard *>(wizard())->ocUrl();
    const QString user = static_cast<OwncloudWizard *>(wizard())->getCredentials()->user();

    QUrl url(urlString);
    url.setUserName(user);
    return url;
}

int OwncloudAdvancedSetupPageWindows::nextId() const
{
    // tells the caller that this is the last dialog page
    return -1;
}

QString OwncloudAdvancedSetupPageWindows::localFolder() const
{
    QString folder = wizard()->property("localFolder").toString();
    return folder;
}

QStringList OwncloudAdvancedSetupPageWindows::selectiveSyncBlacklist() const
{
    return _selectiveSyncBlacklist;
}

bool OwncloudAdvancedSetupPageWindows::useVirtualFileSync() const
{
    return true;//_ui.rVirtualFileSync->isChecked();
}

bool OwncloudAdvancedSetupPageWindows::isConfirmBigFolderChecked() const
{
    return false; //_ui.rSyncEverything->isChecked() && _ui.confCheckBoxSize->isChecked();
}

bool OwncloudAdvancedSetupPageWindows::validatePage()
{
    if (useVirtualFileSync()) {
        const auto availability = Vfs::checkAvailability(localFolder());
        if (!availability) {
            auto msg = new QMessageBox(QMessageBox::Warning, tr("Virtual files are not available for the selected folder"), availability.error(), QMessageBox::Ok, this);
            msg->setAttribute(Qt::WA_DeleteOnClose);
            msg->open();
            return false;
        }
    }

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

void OwncloudAdvancedSetupPageWindows::setErrorString(const QString &err)
{
    _checking = false;
    emit completeChanged();
}

void OwncloudAdvancedSetupPageWindows::directoriesCreated()
{
    _checking = false;
    _created = true;
    stopSpinner();
    emit completeChanged();
}

void OwncloudAdvancedSetupPageWindows::setRemoteFolder(const QString &remoteFolder)
{
    if (!remoteFolder.isEmpty()) {
        _remoteFolder = remoteFolder;
    }
}

void OwncloudAdvancedSetupPageWindows::slotSelectFolder()
{
    QString dir = QFileDialog::getExistingDirectory(nullptr, tr("Local Sync Folder"), QDir::homePath());
    if (!dir.isEmpty()) {
        setLocalFolderPushButtonPath(dir);
        wizard()->setProperty("localFolder", dir);
        updateStatus();
    }
}


void OwncloudAdvancedSetupPageWindows::setLocalFolderPushButtonPath(const QString &path)
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

void OwncloudAdvancedSetupPageWindows::slotVirtualFileSyncClicked()
{

}

void OwncloudAdvancedSetupPageWindows::slotQuotaRetrieved(const QVariantMap &result)
{
    _rSize = result["size"].toDouble();

    updateStatus();
}

qint64 OwncloudAdvancedSetupPageWindows::availableLocalSpace() const
{
    QString localDir = localFolder();
    QString path = !QDir(localDir).exists() && localDir.contains(QDir::homePath()) ?
                QDir::homePath() : localDir;
    QStorageInfo storage(QDir::toNativeSeparators(path));

    return storage.bytesAvailable();
}

QString OwncloudAdvancedSetupPageWindows::checkLocalSpace(qint64 remoteSize) const
{
    return (availableLocalSpace()>remoteSize) ? QString() : tr("There isn't enough free space in the local folder!");
}

void OwncloudAdvancedSetupPageWindows::slotStyleChanged()
{
    customizeStyle();
}

void OwncloudAdvancedSetupPageWindows::customizeStyle()
{
    if (_progressIndi) {
        const auto isDarkBackground = Theme::isDarkColor(palette().window().color());
        if (isDarkBackground) {
            _progressIndi->setColor(Qt::white);
        } else {
            _progressIndi->setColor(Qt::black);
        }
    }

    styleSyncLogo();
    styleLocalFolderLabel();
}

void OwncloudAdvancedSetupPageWindows::styleLocalFolderLabel()
{
    const QIcon avatarIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/Computer-Icon.svg"));
    QPixmap pixmap = avatarIcon.pixmap(QSize(100, 64));
    _ui.lLocal->setPixmap(pixmap);
}

void OwncloudAdvancedSetupPageWindows::styleSyncLogo()
{
    _ui.syncLogoLabel->setPixmap(QPixmap(":/client/theme/magenta/Combined Shape.svg"));
}


void OwncloudAdvancedSetupPageWindows::setVirtualFilesInfo()
{

}

} // namespace OCC
