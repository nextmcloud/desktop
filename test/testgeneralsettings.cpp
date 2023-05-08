/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
/* MagentaCustomizationV25 */

#include <QtTest>
#include "theme.h"
#include "folderman.h"
#include "configfile.h"
#define private public
#include "generalsettings.h"
#undef private
#include "gui/nextcloudCore_autogen/include_Release/ui_generalsettings.h"

using namespace OCC;

class TestGeneralSettings: public QObject
{
    Q_OBJECT

private slots:
    void testSlotShowInExplorerNavigationPane_False()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());

        QMetaObject::invokeMethod( &genSetting, "slotShowInExplorerNavigationPane", Q_ARG( bool, false ));

        QCOMPARE(cfgFile.showInExplorerNavigationPane(), false);
        QCOMPARE(FolderMan::instance()->navigationPaneHelper().showInExplorerNavigationPane(), false);
    }

    void testSlotShowInExplorerNavigationPane_True()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());

        QMetaObject::invokeMethod( &genSetting, "slotShowInExplorerNavigationPane", Q_ARG( bool, true ));

        QCOMPARE(cfgFile.showInExplorerNavigationPane(), true);
        QCOMPARE(FolderMan::instance()->navigationPaneHelper().showInExplorerNavigationPane(), true);
    }

    void testGeneralSettings()
    {
        QString expectedImprintLabel = tr("<a href='%1' style=\"color: #e20074;\">Imprint</a>").arg(QString::fromLatin1(APPLICATION_IMPRINT_URL));
        QString expectedPrivacyPolicyLabel = tr("<a href='%1' style=\"color: #e20074;\";>Privacy Policy</a>").arg(QString::fromLatin1(APPLICATION_PRIVACY_URL));
        QString expectedOpenSourceSwLabel = tr("<a href='%1' style=\"color: #e20074;\">Used Open Source Software</a>").arg(QString::fromLatin1(APPLICATION_OPEN_SOURCE_URL));
        QString expectedInfoLabel = tr("<a href='%1' style=\"color: #e20074;\">Further Information</a>").arg(Theme::instance()->helpUrl());

        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());

        GeneralSettings genSetting(new QWidget());

        QCOMPARE(genSetting._ui->autoCheckForUpdatesCheckBox->isHidden(), false);
        QCOMPARE(genSetting._ui->restartButton->isHidden(), true);
        QCOMPARE(genSetting._ui->updateButton->isHidden(), true);
        QCOMPARE(genSetting._ui->debugArchiveButton->isHidden(), true);
        QCOMPARE(cfgFile.showInExplorerNavigationPane(), true);

        QCOMPARE(genSetting._ui->imprintLabel->openExternalLinks(), true);
        QCOMPARE(genSetting._ui->imprintLabel->text(), expectedImprintLabel);

        QCOMPARE(genSetting._ui->privacyPolicyLabel->openExternalLinks(), true);
        QCOMPARE(genSetting._ui->privacyPolicyLabel->text(), expectedPrivacyPolicyLabel);

        QCOMPARE(genSetting._ui->openSourceSwLabel->openExternalLinks(), true);
        QCOMPARE(genSetting._ui->openSourceSwLabel->text(), expectedOpenSourceSwLabel);

        QCOMPARE(genSetting._ui->aboutLabel->openExternalLinks(), true);
        QCOMPARE(genSetting._ui->aboutLabel->text(), Theme::instance()->about());

        QCOMPARE(genSetting._ui->infoLabel->openExternalLinks(), true);
        QCOMPARE(genSetting._ui->infoLabel->text(), expectedInfoLabel);

        QCOMPARE(cfgFile.confirmExternalStorage(), true);
    }

    void testLoadMiscSettings_Checked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());
        cfgFile.setAutoUpdateCheck(true, QString());
        cfgFile.setTransferUsageData(true, QString());

        QMetaObject::invokeMethod( &genSetting, "loadMiscSettings");

        QCOMPARE(genSetting._ui->autoCheckForUpdatesCheckBox->isChecked(), true);
        QCOMPARE(genSetting._ui->transferUsageDataCheckBox->isChecked(), true);
        QCOMPARE(cfgFile.confirmExternalStorage(), true);
    }

    void testLoadMiscSettings_UnChecked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());
        cfgFile.setAutoUpdateCheck(false, QString());
        cfgFile.setTransferUsageData(false, QString());

        QMetaObject::invokeMethod( &genSetting, "loadMiscSettings");

        QCOMPARE(genSetting._ui->autoCheckForUpdatesCheckBox->isChecked(), false);
        QCOMPARE(genSetting._ui->transferUsageDataCheckBox->isChecked(), false);
        QCOMPARE(cfgFile.confirmExternalStorage(), true);
    }

#if defined(BUILD_UPDATER)
    void testslotUpdateInfo()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());

        QMetaObject::invokeMethod( &genSetting, "slotUpdateInfo");

        QCOMPARE(genSetting._ui->autoCheckForUpdatesCheckBox->isHidden(), false);
        QCOMPARE(genSetting._ui->restartButton->isHidden(), true);
        QCOMPARE(genSetting._ui->updateButton->isHidden(), true);
    }
#endif // defined(BUILD_UPDATER)

    /* UI based (event driven) test cases */
#if defined(BUILD_UPDATER)
    void test_autoCheckForUpdatesCheckBox_Checked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());

        /* Initial set un-checked */
        genSetting._ui->autoCheckForUpdatesCheckBox->setChecked(false);
        QVERIFY( genSetting._ui->autoCheckForUpdatesCheckBox->checkState() == Qt::Unchecked );

        /*to track the SIGNAL emit or not */
        QSignalSpy spy(genSetting._ui->autoCheckForUpdatesCheckBox, SIGNAL(toggled(bool)));

        /* generate event/emit signal */
        genSetting._ui->autoCheckForUpdatesCheckBox->toggle();

        /* verify SIGNAL emit */
        QCOMPARE(spy.count(), 1);

        /* verify SLOT data */
        QVERIFY( genSetting._ui->autoCheckForUpdatesCheckBox->checkState() == Qt::Checked );
        QCOMPARE(cfgFile.autoUpdateCheck(), true);
    }

    void test_autoCheckForUpdatesCheckBox_UnChecked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());

        /* Initial set checked */
        genSetting._ui->autoCheckForUpdatesCheckBox->setChecked(true);
        QVERIFY( genSetting._ui->autoCheckForUpdatesCheckBox->checkState() == Qt::Checked );

        /*to track the SIGNAL emit or not */
        QSignalSpy spy(genSetting._ui->autoCheckForUpdatesCheckBox, SIGNAL(toggled(bool)));

        /* generate event/emit signal */
        genSetting._ui->autoCheckForUpdatesCheckBox->toggle();

        /* verify SIGNAL emit */
        QCOMPARE(spy.count(), 1);

        /* verify SLOT data */
        QCOMPARE(cfgFile.autoUpdateCheck(), false);
        QVERIFY( genSetting._ui->autoCheckForUpdatesCheckBox->checkState() == Qt::Unchecked );
    }
#endif // defined(BUILD_UPDATER)

    void test_transferUsageDataCheckBox_Checked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());

        /* Initial set un-checked */
        genSetting._ui->transferUsageDataCheckBox->setChecked(false);
        QVERIFY( genSetting._ui->transferUsageDataCheckBox->checkState() == Qt::Unchecked );

        /*to track the SIGNAL emit or not */
        QSignalSpy spy(genSetting._ui->transferUsageDataCheckBox, SIGNAL(toggled(bool)));

        /* generate event/emit signal */
        genSetting._ui->transferUsageDataCheckBox->toggle();

        /* verify SIGNAL emit */
        QCOMPARE(spy.count(), 1);

        /* verify SLOT data */
        QCOMPARE(cfgFile.transferUsageData(), true);
        QVERIFY( genSetting._ui->transferUsageDataCheckBox->checkState() == Qt::Checked );
    }

    void test_transferUsageDataCheckBox_UnChecked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());

        /* Initial set checked */
        genSetting._ui->transferUsageDataCheckBox->setChecked(true);
        QVERIFY( genSetting._ui->transferUsageDataCheckBox->checkState() == Qt::Checked );

        /*to track the SIGNAL emit or not */
        QSignalSpy spy(genSetting._ui->transferUsageDataCheckBox, SIGNAL(toggled(bool)));

        /* generate event/emit signal */
        genSetting._ui->transferUsageDataCheckBox->toggle();

        /* verify SIGNAL emit */
        QCOMPARE(spy.count(), 1);

        /* verify SLOT data */
        QCOMPARE(cfgFile.transferUsageData(), false);
        QVERIFY( genSetting._ui->transferUsageDataCheckBox->checkState() == Qt::Unchecked );
    }

    void test_serverNotificationsCheckBox_Checked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());

        /* Initial set un-checked */
        genSetting._ui->serverNotificationsCheckBox->setChecked(false);
        QVERIFY( genSetting._ui->serverNotificationsCheckBox->checkState() == Qt::Unchecked );

        /*to track the SIGNAL emit or not */
        QSignalSpy spy(genSetting._ui->serverNotificationsCheckBox, SIGNAL(toggled(bool)));

        /* generate event/emit signal */
        genSetting._ui->serverNotificationsCheckBox->toggle();

        /* verify SIGNAL emit */
        QCOMPARE(spy.count(), 1);

        /* verify SLOT data */
        QCOMPARE(cfgFile.optionalServerNotifications(), true);
        QVERIFY( genSetting._ui->serverNotificationsCheckBox->checkState() == Qt::Checked );
    }

    void test_serverNotificationsCheckBox_UnChecked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());

        /* Initial set checked */
        genSetting._ui->serverNotificationsCheckBox->setChecked(true);
        QVERIFY( genSetting._ui->serverNotificationsCheckBox->checkState() == Qt::Checked );

        /*to track the SIGNAL emit or not */
        QSignalSpy spy(genSetting._ui->serverNotificationsCheckBox, SIGNAL(toggled(bool)));

        /* generate event/emit signal */
        genSetting._ui->serverNotificationsCheckBox->toggle();

        /* verify SIGNAL emit */
        QCOMPARE(spy.count(), 1);

        /* verify SLOT data */
        QCOMPARE(cfgFile.optionalServerNotifications(), false);
        QVERIFY( genSetting._ui->serverNotificationsCheckBox->checkState() == Qt::Unchecked );
    }

#ifndef BUILD_UPDATER
    void testcustomizeStyle()
    {
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());

        QMetaObject::invokeMethod( &genSetting, "customizeStyle");

        QCOMPARE(genSetting._ui->aboutLabel->text(), Theme::instance()->about());
        QCOMPARE(genSetting._ui->autoCheckForUpdatesCheckBox->isHidden(), false);
        QCOMPARE(genSetting._ui->restartButton->isHidden(), true);
        QCOMPARE(genSetting._ui->updateButton->isHidden(), true);
    }
#endif // ifndef(BUILD_UPDATER)

    void test_Screen_text()
    {
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());

        QCOMPARE(genSetting._ui->generalGroupBox->title(), "General Settings");
        QCOMPARE( genSetting._ui->serverNotificationsCheckBox->text(), "Show Server &Notifications" );

        QCOMPARE(genSetting._ui->groupBox->title(), "Advanced");
        QCOMPARE(genSetting._ui->newFolderLimitCheckBox->text(), "Ask for confirmation before synchronizing folders larger than");
        QCOMPARE(genSetting._ui->crashreporterCheckBox->text(), "S&how crash reporter");
        QCOMPARE(genSetting._ui->updatesGroupBox->title(), "Updates");
        QCOMPARE(genSetting._ui->autoCheckForUpdatesCheckBox->text(), "&Automatically check for Updates");
        QCOMPARE(genSetting._ui->restartButton->text(), "&Restart && Update");
        QCOMPARE(genSetting._ui->updateButton->text(), "&Check for Update now");
        QCOMPARE(genSetting._ui->dataPrivacyGroupBox->title(), "Data Privacy");
        QCOMPARE(genSetting._ui->transferUsageDataCheckBox->text(), "Transfer usage data");

        QCOMPARE(genSetting._ui->imprintLabel->styleSheet(), "font: 10pt \"Segoe UI\";");
        QCOMPARE(genSetting._ui->privacyPolicyLabel->styleSheet(), "font: 10pt \"Segoe UI\";");
        QCOMPARE(genSetting._ui->openSourceSwLabel->styleSheet(), "font: 10pt \"Segoe UI\";");
    }
};

QTEST_MAIN(TestGeneralSettings)
#include "testgeneralsettings.moc"
