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
#include "gui/nextcloudCore_autogen/include/ui_generalsettings.h"

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
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());

        GeneralSettings genSetting(new QWidget());

        QCOMPARE(genSetting._ui->newExternalStorage->isHidden(), true);
        QCOMPARE(genSetting._ui->showInExplorerNavigationPaneCheckBox->isHidden(), true);
        QCOMPARE(genSetting._ui->ignoredFilesButton->isHidden(), true);
        QCOMPARE(genSetting._ui->debugArchiveButton->isHidden(), true);
        QCOMPARE(cfgFile.showInExplorerNavigationPane(), true);
        QCOMPARE(cfgFile.confirmExternalStorage(), true);
    }

    void testLoadMiscSettings_Checked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());
        cfgFile.setOptionalServerNotifications(true);
        cfgFile.setShowInExplorerNavigationPane(true);

        QMetaObject::invokeMethod( &genSetting, "loadMiscSettings");

        QCOMPARE(genSetting._ui->showInExplorerNavigationPaneCheckBox->isChecked(), true);
        QCOMPARE(cfgFile.confirmExternalStorage(), true);
    }

    void testLoadMiscSettings_UnChecked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());
        cfgFile.setOptionalServerNotifications(false);
        cfgFile.setShowInExplorerNavigationPane(false);

        QMetaObject::invokeMethod( &genSetting, "loadMiscSettings");

        QCOMPARE(genSetting._ui->showInExplorerNavigationPaneCheckBox->isChecked(), false);
        QCOMPARE(cfgFile.confirmExternalStorage(), true);
    }

    /* UI based (event driven) test cases */
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
    }
};

QTEST_MAIN(TestGeneralSettings)
#include "testgeneralsettings.moc"
