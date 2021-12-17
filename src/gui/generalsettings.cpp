/*
 * Copyright (C) by Daniel Molkentin <danimo@owncloud.com>
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

#include "generalsettings.h"
#include "ui_generalsettings.h"

#include "theme.h"
#include "configfile.h"
#include "application.h"
#include "configfile.h"
#include "owncloudsetupwizard.h"
#include "accountmanager.h"

#if defined(BUILD_UPDATER)
#include "updater/updater.h"
#include "updater/ocupdater.h"
#ifdef Q_OS_MAC
// FIXME We should unify those, but Sparkle does everything behind the scene transparently
#include "updater/sparkleupdater.h"
#endif
#endif

#include "ignorelisteditor.h"
#include "common/utility.h"
#include "logger.h"

#include "config.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QNetworkProxy>
#include <QDir>
#include <QScopedValueRollback>
#include <QMessageBox>

#include <private/qzipwriter_p.h>

#define QTLEGACY (QT_VERSION < QT_VERSION_CHECK(5,9,0))

#if !(QTLEGACY)
#include <QOperatingSystemVersion>
#endif

namespace {
struct ZipEntry {
    QString localFilename;
    QString zipFilename;
};

ZipEntry fileInfoToZipEntry(const QFileInfo &info)
{
    return {
        info.absoluteFilePath(),
        info.fileName()
    };
}

ZipEntry fileInfoToLogZipEntry(const QFileInfo &info)
{
    auto entry = fileInfoToZipEntry(info);
    entry.zipFilename.prepend(QStringLiteral("logs/"));
    return entry;
}

ZipEntry syncFolderToZipEntry(OCC::Folder *f)
{
    const auto journalPath = f->journalDb()->databaseFilePath();
    const auto journalInfo = QFileInfo(journalPath);
    return fileInfoToZipEntry(journalInfo);
}

QVector<ZipEntry> createFileList()
{
    auto list = QVector<ZipEntry>();
    OCC::ConfigFile cfg;

    list.append(fileInfoToZipEntry(QFileInfo(cfg.configFile())));

    const auto logger = OCC::Logger::instance();

    if (!logger->logDir().isEmpty()) {
        list.append({QString(), QStringLiteral("logs")});

        QDir dir(logger->logDir());
        const auto infoList = dir.entryInfoList(QDir::Files);
        std::transform(std::cbegin(infoList), std::cend(infoList),
                       std::back_inserter(list),
                       fileInfoToLogZipEntry);
    } else if (!logger->logFile().isEmpty()) {
        list.append(fileInfoToZipEntry(QFileInfo(logger->logFile())));
    }

    const auto folders = OCC::FolderMan::instance()->map().values();
    std::transform(std::cbegin(folders), std::cend(folders),
                   std::back_inserter(list),
                   syncFolderToZipEntry);

    return list;
}

void createDebugArchive(const QString &filename)
{
    const auto entries = createFileList();

    QZipWriter zip(filename);
    for (const auto &entry : entries) {
        if (entry.localFilename.isEmpty()) {
            zip.addDirectory(entry.zipFilename);
        } else {
            QFile file(entry.localFilename);
            if (!file.open(QFile::ReadOnly)) {
                continue;
            }
            zip.addFile(entry.zipFilename, &file);
        }
    }

    zip.addFile("__nextcloud_client_parameters.txt", QCoreApplication::arguments().join(' ').toUtf8());

    const auto buildInfo = QString(OCC::Theme::instance()->about() + "\n\n" + OCC::Theme::instance()->aboutDetails());
    zip.addFile("__nextcloud_client_buildinfo.txt", buildInfo.toUtf8());
}
}

namespace OCC {

GeneralSettings::GeneralSettings(QWidget *parent)
    : QWidget(parent)
    , _ui(new Ui::GeneralSettings)
{
    _ui->setupUi(this);
    _ui->autoCheckForUpdatesCheckBox->setVisible(true);
    _ui->restartButton->setVisible(false);
    _ui->updateButton->setVisible(false);
    _ui->debugArchiveButton->setVisible(false);

    connect(_ui->serverNotificationsCheckBox, &QAbstractButton::toggled,
        this, &GeneralSettings::slotToggleOptionalServerNotifications);
    _ui->serverNotificationsCheckBox->setToolTip(tr("Server notifications that require attention."));
    connect(_ui->autoCheckForUpdatesCheckBox, &QAbstractButton::toggled, this, &GeneralSettings::slotToggleAutoUpdateCheck);

    slotShowInExplorerNavigationPane(true);

    if(Utility::hasSystemLaunchOnStartup(Theme::instance()->appName())) {
        _ui->autostartCheckBox->setChecked(true);
        _ui->autostartCheckBox->setDisabled(true);
        _ui->autostartCheckBox->setToolTip(tr("You cannot disable autostart because system-wide autostart is enabled."));
    } else {
        const bool hasAutoStart = Utility::hasLaunchOnStartup(Theme::instance()->appName());
        // make sure the binary location is correctly set
        slotToggleLaunchOnStartup(hasAutoStart);
        _ui->autostartCheckBox->setChecked(hasAutoStart);
        connect(_ui->autostartCheckBox, &QAbstractButton::toggled, this, &GeneralSettings::slotToggleLaunchOnStartup);
    }

    // setup data privacy section
    connect(_ui->transferUsageDataCheckBox, &QAbstractButton::toggled, this, &GeneralSettings::slotTransferUsageData);

    _ui->imprintLabel->setTextInteractionFlags(Qt::TextSelectableByMouse | Qt::TextBrowserInteraction);
    _ui->imprintLabel->setOpenExternalLinks(true);
    _ui->imprintLabel->setTextFormat(Qt::RichText);
    _ui->imprintLabel->setText(tr("<a href='%1' style=\"color: #e20074;\">Impressum</a>").arg(QString::fromLatin1(APPLICATION_IMPRINT_URL)));

    _ui->privacyPolicyLabel->setTextInteractionFlags(Qt::TextSelectableByMouse | Qt::TextBrowserInteraction);
    _ui->privacyPolicyLabel->setOpenExternalLinks(true);
    _ui->privacyPolicyLabel->setTextFormat(Qt::RichText);
    _ui->privacyPolicyLabel->setText(tr("<a href='%1' style=\"color: #e20074;\";>Datenschutzbestimmungen</a>").arg(QString::fromLatin1(APPLICATION_PRIVACY_URL)));

    _ui->openSourceSwLabel->setTextInteractionFlags(Qt::TextSelectableByMouse | Qt::TextBrowserInteraction);
    _ui->openSourceSwLabel->setOpenExternalLinks(true);
    _ui->openSourceSwLabel->setTextFormat(Qt::RichText);
    _ui->openSourceSwLabel->setText(tr("<a href='%1' style=\"color: #e20074;\">Verwendete OpenSource Software</a>").arg(QString::fromLatin1(APPLICATION_OPEN_SOURCE_URL)));

    QString about = Theme::instance()->about();
    _ui->aboutLabel->setTextInteractionFlags(Qt::TextSelectableByMouse | Qt::TextBrowserInteraction);
    _ui->aboutLabel->setOpenExternalLinks(true);
    _ui->aboutLabel->setText(about);

    QString infoUrl = Theme::instance()->helpUrl();
    _ui->infoLabel->setTextInteractionFlags(Qt::TextSelectableByMouse | Qt::TextBrowserInteraction);
    _ui->infoLabel->setOpenExternalLinks(true);
    _ui->infoLabel->setText(tr("<a href='%1' style=\"color: #e20074;\">Mehr Informationen</a>").arg(infoUrl));

    loadMiscSettings();
    // updater info now set in: customizeStyle
    //slotUpdateInfo();

    // misc
    connect(_ui->crashreporterCheckBox, &QAbstractButton::toggled, this, &GeneralSettings::saveMiscSettings);
    connect(_ui->newFolderLimitCheckBox, &QAbstractButton::toggled, this, &GeneralSettings::saveMiscSettings);
    connect(_ui->newFolderLimitSpinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), this, &GeneralSettings::saveMiscSettings);

#ifndef WITH_CRASHREPORTER
    _ui->crashreporterCheckBox->setVisible(false);
#endif

    // Hide on non-Windows, or WindowsVersion < 10.
    // The condition should match the default value of ConfigFile::showInExplorerNavigationPane.

    /* Set the left contents margin of the layout to zero to make the checkboxes
     * align properly vertically , fixes bug #3758
     */
    int m0 = 0;
    int m1 = 0;
    int m2 = 0;
    int m3 = 0;
    _ui->horizontalLayout_3->getContentsMargins(&m0, &m1, &m2, &m3);
    _ui->horizontalLayout_3->setContentsMargins(0, m1, m2, m3);

    connect(_ui->debugArchiveButton, &QAbstractButton::clicked, this, &GeneralSettings::slotCreateDebugArchive);

    // accountAdded means the wizard was finished and the wizard might change some options.
    connect(AccountManager::instance(), &AccountManager::accountAdded, this, &GeneralSettings::loadMiscSettings);

    customizeStyle();
}

GeneralSettings::~GeneralSettings()
{
    delete _ui;
}

QSize GeneralSettings::sizeHint() const
{
    return {
        ownCloudGui::settingsDialogSize().width(),
        QWidget::sizeHint().height()
    };
}

void GeneralSettings::loadMiscSettings()
{
    QScopedValueRollback<bool> scope(_currentlyLoading, true);
    ConfigFile cfgFile;
    _ui->serverNotificationsCheckBox->setChecked(cfgFile.optionalServerNotifications());
    _ui->crashreporterCheckBox->setChecked(cfgFile.crashReporter());
    auto newFolderLimit = cfgFile.newBigFolderSizeLimit();
    _ui->newFolderLimitCheckBox->setChecked(newFolderLimit.first);
    _ui->newFolderLimitSpinBox->setValue(newFolderLimit.second);
    _ui->transferUsageDataCheckBox->setChecked(cfgFile.transferUsageData());
    _ui->autoCheckForUpdatesCheckBox->setChecked(ConfigFile().autoUpdateCheck());

    cfgFile.setConfirmExternalStorage(true);
}

#if defined(BUILD_UPDATER)
void GeneralSettings::slotUpdateInfo()
{
    if (ConfigFile().skipUpdateCheck() || !Updater::instance()) {
        // updater disabled on compile
        _ui->autoCheckForUpdatesCheckBox->setVisible(true);
        _ui->restartButton->setVisible(false);
        _ui->updateButton->setVisible(false);
        return;
    }

    // Note: the sparkle-updater is not an OCUpdater
    auto *ocupdater = qobject_cast<OCUpdater *>(Updater::instance());
    if (ocupdater) {
        connect(ocupdater, &OCUpdater::downloadStateChanged, this, &GeneralSettings::slotUpdateInfo, Qt::UniqueConnection);
        connect(_ui->restartButton, &QAbstractButton::clicked, ocupdater, &OCUpdater::slotStartInstaller, Qt::UniqueConnection);
        connect(_ui->restartButton, &QAbstractButton::clicked, qApp, &QApplication::quit, Qt::UniqueConnection);
        connect(_ui->updateButton, &QAbstractButton::clicked, this, &GeneralSettings::slotUpdateCheckNow, Qt::UniqueConnection);

        _ui->restartButton->setVisible(ocupdater->downloadState() == OCUpdater::DownloadComplete);

        _ui->updateButton->setEnabled(ocupdater->downloadState() != OCUpdater::CheckingServer &&
                                      ocupdater->downloadState() != OCUpdater::Downloading &&
                                      ocupdater->downloadState() != OCUpdater::DownloadComplete);

    }
#if defined(Q_OS_MAC) && defined(HAVE_SPARKLE)
    else if (auto sparkleUpdater = qobject_cast<SparkleUpdater *>(Updater::instance())) {
        _ui->restartButton->setVisible(false);
    }
#endif
}

void GeneralSettings::slotUpdateCheckNow()
{
    auto *updater = qobject_cast<OCUpdater *>(Updater::instance());
    if (ConfigFile().skipUpdateCheck()) {
        updater = nullptr; // don't show update info if updates are disabled
    }

    if (updater) {
        _ui->updateButton->setEnabled(false);
        updater->checkForUpdate();
    }
}
#endif // defined(BUILD_UPDATER)

void GeneralSettings::slotToggleAutoUpdateCheck()
{
    ConfigFile cfgFile;
    bool isChecked = _ui->autoCheckForUpdatesCheckBox->isChecked();
    cfgFile.setAutoUpdateCheck(isChecked, QString());
}

void GeneralSettings::slotTransferUsageData()
{
    ConfigFile cfgFile;
    bool isChecked = _ui->transferUsageDataCheckBox->isChecked();
    cfgFile.setTransferUsageData(isChecked, QString());
}

void GeneralSettings::saveMiscSettings()
{
    if (_currentlyLoading)
        return;
    ConfigFile cfgFile;
    cfgFile.setCrashReporter(_ui->crashreporterCheckBox->isChecked());

    cfgFile.setNewBigFolderSizeLimit(_ui->newFolderLimitCheckBox->isChecked(),
        _ui->newFolderLimitSpinBox->value());
}

void GeneralSettings::slotToggleLaunchOnStartup(bool enable)
{
    Theme *theme = Theme::instance();
    Utility::setLaunchOnStartup(theme->appName(), theme->appNameGUI(), enable);
}

void GeneralSettings::slotToggleOptionalServerNotifications(bool enable)
{
    ConfigFile cfgFile;
    cfgFile.setOptionalServerNotifications(enable);
}

void GeneralSettings::slotShowInExplorerNavigationPane(bool checked)
{
    ConfigFile cfgFile;
    cfgFile.setShowInExplorerNavigationPane(checked);
    // Now update the registry with the change.
    FolderMan::instance()->navigationPaneHelper().setShowInExplorerNavigationPane(checked);
}

void GeneralSettings::slotCreateDebugArchive()
{
    const auto filename = QFileDialog::getSaveFileName(this, tr("Create Debug Archive"), QString(), tr("Zip Archives") + " (*.zip)");
    if (filename.isEmpty()) {
        return;
    }

    createDebugArchive(filename);
    QMessageBox::information(this, tr("Debug Archive Created"), tr("Debug archive is created at %1").arg(filename));
}

void GeneralSettings::slotStyleChanged()
{
    customizeStyle();
}

void GeneralSettings::customizeStyle()
{
    // setup about section
    QString about = Theme::instance()->about();
    Theme::replaceLinkColorStringBackgroundAware(about);
    _ui->aboutLabel->setText(about);

#if defined(BUILD_UPDATER)
    // updater info
    slotUpdateInfo();
#else
    _ui->autoCheckForUpdatesCheckBox->setVisible(true);
    _ui->restartButton->setVisible(false);
    _ui->updateButton->setVisible(false);
#endif
}

} // namespace OCC
