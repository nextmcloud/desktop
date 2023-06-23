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
    void testGeneralSettings()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());

        GeneralSettings genSetting(new QWidget());
	//General
        QCOMPARE(genSetting._ui->monoIconsCheckBox->isHidden(), true);
        QCOMPARE(genSetting._ui->callNotificationsCheckBox->isHidden(), true);



    }

    void testLoadMiscSettings_Checked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());
        cfgFile.setOptionalServerNotifications(true);

        QMetaObject::invokeMethod( &genSetting, "loadMiscSettings");

        QCOMPARE(genSetting._ui->serverNotificationsCheckBox->isChecked(), true);
    }

    void testLoadMiscSettings_UnChecked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());
        cfgFile.setOptionalServerNotifications(false);

        QMetaObject::invokeMethod( &genSetting, "loadMiscSettings");

	QCOMPARE(genSetting._ui->serverNotificationsCheckBox->isChecked(), false);
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
};

QTEST_MAIN(TestGeneralSettings)
#include "testgeneralsettings.moc"
