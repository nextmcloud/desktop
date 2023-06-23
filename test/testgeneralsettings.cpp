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

        //Advanced
        QCOMPARE(genSetting._ui->newExternalStorage->isHidden(), true);
        QCOMPARE(cfgFile.confirmExternalStorage(), true);
        QCOMPARE(genSetting._ui->showInExplorerNavigationPaneCheckBox->isHidden(), true);
        QCOMPARE(cfgFile.showInExplorerNavigationPane(), true);
        QCOMPARE(genSetting._ui->ignoredFilesButton->isHidden(), true);
        QCOMPARE(genSetting._ui->debugArchiveButton->isHidden(), true);


    }

    void testLoadMiscSettings_Checked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());
        cfgFile.setOptionalServerNotifications(true);
        cfgFile.setShowInExplorerNavigationPane(true);

        QMetaObject::invokeMethod( &genSetting, "loadMiscSettings");

        QCOMPARE(genSetting._ui->serverNotificationsCheckBox->isChecked(), true);
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

        QCOMPARE(genSetting._ui->serverNotificationsCheckBox->isChecked(), false);
        QCOMPARE(genSetting._ui->showInExplorerNavigationPaneCheckBox->isChecked(), false);
        QCOMPARE(cfgFile.confirmExternalStorage(), true);


    }

    void test_Screen_text()
    {
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());

        QCOMPARE(genSetting._ui->generalGroupBox->title(), "General Settings");
        QCOMPARE( genSetting._ui->serverNotificationsCheckBox->text(), "Show Server &Notifications" );

        QCOMPARE(genSetting._ui->groupBox->title(), "Advanced");
        QCOMPARE(genSetting._ui->newFolderLimitCheckBox->text(), "Ask for confirmation before synchronizing folders larger than");
        QCOMPARE(genSetting._ui->updatesGroupBox->title(), "Updates");
        QCOMPARE(genSetting._ui->autoCheckForUpdatesCheckBox->text(), "&Automatically check for Updates");
        QCOMPARE(genSetting._ui->restartButton->text(), "&Restart && Update");
        QCOMPARE(genSetting._ui->updateButton->text(), "&Check for Update now");
    }
};

QTEST_MAIN(TestGeneralSettings)
#include "testgeneralsettings.moc"
