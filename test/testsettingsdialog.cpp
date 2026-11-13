/*
 * SPDX-FileCopyrightText: 2026 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "settingsdialog.h"

#include "account.h"
#include "accountmanager.h"
#include "accountsettings.h"
#include "configfile.h"
#include "nmcgui/nmcadvancedsettings.h"
#include "nmcgui/nmcgeneralsettings.h"
#include "nmcgui/nmcinfosettings.h"
#include "nmcgui/nmcsettingsdialog.h"
#include "nmclibsync/nmcconfigfile.h"
#include "theme.h"
#if defined(BUILD_UPDATER)
#include "updater/ocupdater.h"
#include "updater/updater.h"
#endif
#include "systray.h"

#include <QAction>
#include <QApplication>
#include <QFrame>
#include <QGroupBox>
#include <QScopeGuard>
#include <QScrollArea>
#include <QSignalSpy>
#include <QStandardPaths>
#include <QTemporaryDir>
#include <QTest>
#include <QToolBar>

class TestSettingsDialog : public QObject
{
    Q_OBJECT

    QTemporaryDir _configDir;
    QPalette _originalPalette;

private Q_SLOTS:
    void initTestCase()
    {
        Q_INIT_RESOURCE(resources);
        QStandardPaths::setTestModeEnabled(true);
        QVERIFY(_configDir.isValid());
        OCC::ConfigFile::setConfDir(_configDir.path());
    }

    void init()
    {
        _originalPalette = QApplication::palette();
    }

    void cleanup()
    {
        QApplication::setPalette(_originalPalette);
    }

    void panelColors_data()
    {
        QTest::addColumn<QColor>("window");
        QTest::addColumn<QColor>("foreground");
        QTest::addColumn<QColor>("candidate");
        QTest::addColumn<QColor>("expected");

#ifdef Q_OS_WIN
        QTest::newRow("light") << QColor(Qt::white) << QColor(Qt::black) << QColor("#f7f7f7") << QColor("#f7f7f7");
        QTest::newRow("dark") << QColor("#202020") << QColor(Qt::white) << QColor("#404040") << QColor("#404040");
#else
        QTest::newRow("white") << QColor(Qt::white) << QColor(Qt::black) << QColor(Qt::white) << QColor("#f7f7f7");
        QTest::newRow("almost-white") << QColor(Qt::white) << QColor(Qt::black) << QColor("#fdfdfd") << QColor("#f7f7f7");
        QTest::newRow("black") << QColor(Qt::black) << QColor(Qt::white) << QColor(Qt::black) << QColor("#0f0f0f");
        QTest::newRow("dark") << QColor("#202020") << QColor(Qt::white) << QColor("#202020") << QColor("#2d2d2d");
        QTest::newRow("preserve-light") << QColor(Qt::white) << QColor(Qt::black) << QColor("#f7f7f7") << QColor("#f7f7f7");
        QTest::newRow("preserve-dark") << QColor("#202020") << QColor(Qt::white) << QColor("#404040") << QColor("#404040");
#endif
    }

    void panelColors()
    {
        QFETCH(QColor, window);
        QFETCH(QColor, foreground);
        QFETCH(QColor, candidate);
        QFETCH(QColor, expected);

        auto palette = _originalPalette;
        palette.setColor(QPalette::Window, window);
        palette.setColor(QPalette::WindowText, foreground);
        palette.setColor(QPalette::Light, candidate);
        palette.setColor(QPalette::AlternateBase, candidate);
        QApplication::setPalette(palette);

        OCC::SettingsDialog dialog(nullptr);
        dialog.ensurePolished();
        const auto panel = dialog.findChild<QGroupBox *>(QStringLiteral("generalGroupBox"));
        const auto navigation = dialog.findChild<QScrollArea *>(QStringLiteral("settings_navigation_scroll"));
        QVERIFY(panel);
        QVERIFY(navigation);
        QCOMPARE(dialog.palette().color(QPalette::Window), window);
        QCOMPARE(panel->palette().color(QPalette::Window), expected);
        QCOMPARE(navigation->palette().color(QPalette::Window), expected);
    }

    void panelColorsFollowApplicationPalette()
    {
        OCC::SettingsDialog dialog(nullptr);
        dialog.ensurePolished();
        const auto panel = dialog.findChild<QGroupBox *>(QStringLiteral("generalGroupBox"));
        QVERIFY(panel);

        for (const auto dark : {false, true, false}) {
            const auto background = QColor(dark ? "#202020" : "#ffffff");
#ifdef Q_OS_WIN
            const auto expected = background;
#else
            const auto expected = QColor(dark ? "#2d2d2d" : "#f7f7f7");
#endif
            auto palette = _originalPalette;
            palette.setColor(QPalette::Window, background);
            palette.setColor(QPalette::WindowText, dark ? Qt::white : Qt::black);
            palette.setColor(QPalette::Light, background);
            palette.setColor(QPalette::AlternateBase, background);
            QApplication::setPalette(palette);

            QTRY_COMPARE(dialog.palette().color(QPalette::Window), background);
            QTRY_COMPARE(panel->palette().color(QPalette::Window), expected);
            QCOMPARE(panel->palette().color(QPalette::Inactive, QPalette::Window), expected);

            QEvent themeChange(QEvent::ThemeChange);
            QCoreApplication::sendEvent(&dialog, &themeChange);
            QCOMPARE(panel->palette().color(QPalette::Window), expected);

            OCC::SettingsDialog reopened(nullptr);
            reopened.ensurePolished();
            const auto reopenedPanel = reopened.findChild<QGroupBox *>(QStringLiteral("generalGroupBox"));
            QVERIFY(reopenedPanel);
            QCOMPARE(reopenedPanel->palette().color(QPalette::Window), expected);
        }
    }

    void addAccountActionFollowsAccountsAndOpensWizard()
    {
        auto *const accountManager = OCC::AccountManager::instance();
        QVERIFY(accountManager->accounts().isEmpty());

        auto account = OCC::Account::create();
        account->setUrl(QUrl(QStringLiteral("https://cloud.example.com")));
        account->setDavUser(QStringLiteral("alice"));
        const auto accountState = accountManager->addAccount(account);
        const auto removeAccount = qScopeGuard([accountManager, accountState] {
            accountManager->removeAccountState(accountState);
        });

        OCC::SettingsDialog dialog(nullptr);
        const auto addAccountAction = dialog.findChild<QAction *>(QStringLiteral("settingsdialog_add_account"));
        const auto toolbar = dialog.findChild<QToolBar *>();
        QVERIFY(addAccountAction);
        QVERIFY(toolbar);
        QCOMPARE(toolbar->actions().indexOf(addAccountAction), 1);
        QVERIFY(!addAccountAction->isCheckable());
        QVERIFY(!addAccountAction->icon().isNull());
        QCOMPARE(addAccountAction->text(), OCC::Systray::tr("Add account"));

        const auto systray = OCC::Systray::instance();
        QCOMPARE(addAccountAction->isVisible(), systray->enableAddAccount());
        if (addAccountAction->isVisible()) {
            const auto wizardRequest = QSignalSpy(systray, &OCC::Systray::openAccountWizard);
            addAccountAction->trigger();
            QCOMPARE_EQ(wizardRequest.size(), 1);
        }

        dialog.ensurePolished();
        const auto shortcutsPanel = dialog.findChild<QFrame *>(QStringLiteral("accountShortcutsPanel"));
        const auto statusPanel = dialog.findChild<QFrame *>(QStringLiteral("accountStatusPanel"));
        QVERIFY(shortcutsPanel);
        QVERIFY(statusPanel);
        shortcutsPanel->ensurePolished();
        statusPanel->ensurePolished();
        QCOMPARE(shortcutsPanel->palette().color(QPalette::Window), statusPanel->palette().color(QPalette::Window));
    }

    void magentaNavigationUsesCompactWidth()
    {
        OCC::NMCSettingsDialog dialog(nullptr);
        const auto navigation = dialog.findChild<QScrollArea *>("settings_navigation_scroll"_L1);
        QVERIFY(navigation);
        QCOMPARE(navigation->width(), 280);
        QCOMPARE(navigation->minimumWidth(), 280);
        QCOMPARE(navigation->maximumWidth(), 280);
    }

    void accountNavigationKeepsDefaultIconAfterAvatarChanges()
    {
        auto *const accountManager = OCC::AccountManager::instance();
        QVERIFY(accountManager->accounts().isEmpty());

        auto account = OCC::Account::create();
        account->setUrl(QUrl("https://cloud.example.com"_L1));
        account->setDavUser("alice"_L1);
        const auto accountState = accountManager->addAccount(account);
        const auto removeAccount = qScopeGuard([accountManager, accountState] {
            accountManager->removeAccountState(accountState);
        });

        OCC::NMCSettingsDialog dialog(nullptr);
        const auto toolbar = dialog.findChild<QToolBar *>();
        QVERIFY(toolbar);
        QAction *accountAction = nullptr;
        for (auto *action : toolbar->actions()) {
            if (action->property("iconPath").toString().contains("account.svg"_L1)) {
                accountAction = action;
                break;
            }
        }
        QVERIFY(accountAction);
        const auto defaultIconCacheKey = accountAction->icon().cacheKey();

        QImage avatar(32, 32, QImage::Format_ARGB32);
        avatar.fill(Qt::magenta);
        account->setAvatar(avatar);

        QCOMPARE(accountAction->icon().cacheKey(), defaultIconCacheKey);
        QCOMPARE(accountAction->property("iconPath").toString(), ":/client/theme/account.svg"_L1);
    }

    void magentaSettingsAreGroupedByPurpose()
    {
        OCC::SettingsDialog dialog(nullptr);
        const auto generalSettings = dialog.findChild<OCC::NMCGeneralSettings *>();
        const auto advancedSettings = dialog.findChild<OCC::NMCAdvancedSettings *>();
        const auto infoSettings = dialog.findChild<OCC::NMCInfoSettings *>();
        QVERIFY(generalSettings);
        QVERIFY(advancedSettings);
        QVERIFY(infoSettings);

        QVERIFY(generalSettings->findChild<QObject *>("autostartCheckBox"_L1));
        QVERIFY(generalSettings->findChild<QObject *>("serverNotificationsCheckBox"_L1));
        QVERIFY(!generalSettings->findChild<QObject *>("dataAnalysisCheckBox"_L1));
        const auto generalSettingsSeparator = generalSettings->findChild<QFrame *>("startupSeparator"_L1);
        QVERIFY(generalSettingsSeparator);
        QVERIFY(!generalSettingsSeparator->isHidden());

        const auto dataAnalysisSwitch = advancedSettings->findChild<QAbstractButton *>("dataAnalysisCheckBox"_L1);
        QVERIFY(dataAnalysisSwitch);
        const auto remotePollIntervalRow = advancedSettings->findChild<QWidget *>("horizontalLayoutWidget_remotePollInterval"_L1);
        const auto remotePollIntervalSeparator = advancedSettings->findChild<QFrame *>("remotePollIntervalSeparator"_L1);
        QVERIFY(remotePollIntervalRow);
        QVERIFY(remotePollIntervalSeparator);
        QVERIFY(remotePollIntervalRow->isHidden());
        QVERIFY(remotePollIntervalSeparator->isHidden());

        const auto syncBehaviorLayout = advancedSettings->findChild<QVBoxLayout *>("syncBehaviorLayout"_L1);
        const auto dataAnalysisRow = advancedSettings->findChild<QWidget *>("nmcDataAnalysisRow"_L1);
        const auto moveFilesToTrashRow = advancedSettings->findChild<QHBoxLayout *>("moveFilesToTrashRow"_L1);
        QVERIFY(syncBehaviorLayout);
        QVERIFY(dataAnalysisRow);
        QVERIFY(moveFilesToTrashRow);
        QVERIFY(syncBehaviorLayout->indexOf(dataAnalysisRow) < syncBehaviorLayout->indexOf(moveFilesToTrashRow));
        const auto debugArchiveButton = advancedSettings->findChild<QPushButton *>("debugArchiveButton"_L1);
        const auto ignoredFilesButton = advancedSettings->findChild<QPushButton *>("ignoredFilesButton"_L1);
        QVERIFY(debugArchiveButton);
        QVERIFY(ignoredFilesButton);
        QVERIFY(debugArchiveButton->isHidden());
        QVERIFY(!ignoredFilesButton->isHidden());

        const auto impressumLink = infoSettings->findChild<QPushButton *>("nmcImpressumLink"_L1);
        const auto dataProtectionLink = infoSettings->findChild<QPushButton *>("nmcDataProtectionLink"_L1);
        const auto openSourceLink = infoSettings->findChild<QPushButton *>("nmcOpenSourceLink"_L1);
        const auto furtherInfoLink = infoSettings->findChild<QPushButton *>("nmcFurtherInfoLink"_L1);
        QVERIFY(impressumLink);
        QVERIFY(dataProtectionLink);
        QVERIFY(openSourceLink);
        QVERIFY(furtherInfoLink);
        QCOMPARE(impressumLink->property("url").toString(), "https://www.telekom.de/impressum/"_L1);
        QCOMPARE(dataProtectionLink->property("url").toString(), "https://static.magentacloud.de/privacy/datenschutzhinweise_software.pdf"_L1);
        QCOMPARE(openSourceLink->property("url").toString(), "https://static.magentacloud.de/licences/windowsdesktop.html"_L1);
        QCOMPARE(furtherInfoLink->property("url").toString(), "https://cloud.telekom-dienste.de/hilfe"_L1);
        const auto aboutGroup = infoSettings->findChild<QGroupBox *>("aboutAndUpdatesGroupBox"_L1);
        const auto updatesGroup = infoSettings->findChild<QGroupBox *>("updatesGroupBox"_L1);
        const auto linksGroup = infoSettings->findChild<QGroupBox *>("nmcInfoLinksGroupBox"_L1);
        auto *infoLayout = qobject_cast<QVBoxLayout *>(infoSettings->layout());
        QVERIFY(aboutGroup);
        QVERIFY(updatesGroup);
        QVERIFY(linksGroup);
        QVERIFY(infoLayout);
        QVERIFY(aboutGroup->isHidden());
        QVERIFY(infoLayout->indexOf(linksGroup) > infoLayout->indexOf(updatesGroup));

#if defined(BUILD_UPDATER)
        const auto updater = qobject_cast<OCC::OCUpdater *>(OCC::Updater::instance());
        if (updater) {
            const auto updateStateLabel = infoSettings->findChild<QLabel *>("updateStateLabel"_L1);
            QVERIFY(updateStateLabel);
            const auto previousState = updater->downloadState();
            const auto restoreUpdaterState = qScopeGuard([updater, previousState] {
                updater->setDownloadState(static_cast<OCC::OCUpdater::DownloadState>(previousState));
            });
            updater->setDownloadState(OCC::OCUpdater::UpToDate);
            auto latestStatus = QCoreApplication::translate("OCC::OCUpdater", "No updates available. Your installation is the latest version.");
            const auto sentenceEnd = latestStatus.indexOf(". ");
            if (sentenceEnd >= 0) {
                latestStatus = latestStatus.mid(sentenceEnd + 2);
            }
            if (latestStatus.endsWith('.')) {
                latestStatus.chop(1);
            }
            QCOMPARE(updateStateLabel->text(), OCC::Theme::instance()->about() + " (" + latestStatus + ")");
        }
#endif

        OCC::NMCConfigFile config;
        dataAnalysisSwitch->setChecked(true);
        QVERIFY(config.transferUsageData());
        dataAnalysisSwitch->setChecked(false);
        QVERIFY(!config.transferUsageData());
    }
};

QTEST_MAIN(TestSettingsDialog)
#include "testsettingsdialog.moc"
