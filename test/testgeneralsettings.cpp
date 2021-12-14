/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <QtTest>
#include "theme.h"
#include "folderman.h"
#include "configfile.h"
#define private public
#include "generalsettings.h"
#undef private
#include "gui/nextcloudCore_autogen/include_Debug/ui_generalsettings.h"

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
        QString expectedInfoLabel = tr("<a href='%1' style=\"color: #e20074;\">Further Informations</a>").arg(Theme::instance()->helpUrl());

        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());

        GeneralSettings genSetting(new QWidget());

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

    void testLoadMiscSettings_NotChecked()
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

    void testSlotTransferUsageData_NotChecked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());

        genSetting._ui->transferUsageDataCheckBox->setChecked(false);
        QMetaObject::invokeMethod( &genSetting, "slotTransferUsageData");

        QCOMPARE(cfgFile.transferUsageData(), false);
    }

    void testSlotTransferUsageData_Checked()
    {
        ConfigFile cfgFile;
        FolderMan folderMan(new QObject());
        GeneralSettings genSetting(new QWidget());

        genSetting._ui->transferUsageDataCheckBox->setChecked(true);
        QMetaObject::invokeMethod( &genSetting, "slotTransferUsageData");

        QCOMPARE(cfgFile.transferUsageData(), true);
    }

};

QTEST_MAIN(TestGeneralSettings)
#include "testgeneralsettings.moc"
