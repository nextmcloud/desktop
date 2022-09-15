/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */

#include <QtTest>

#define TEST_OWNCL_ADVANCE
#include "gui/nextcloudCore_autogen/include_Release/ui_owncloudadvancedsetuppage.h"
#include "gui/wizard/owncloudadvancedsetuppage.h"
#include "gui/wizard/owncloudwizard.h"

using namespace OCC;

class TestOwncloudAdvancedSetupPage: public QWidget
{
    Q_OBJECT

private slots:
    void test_setupCustomization()
    {
        QWidget *parent = new QWidget();
        OwncloudWizard *ownCloud = new OwncloudWizard(parent);
        OwncloudAdvancedSetupPage *advanceSetup = new OwncloudAdvancedSetupPage(ownCloud);

        advanceSetup->setupCustomization();

        QString expStyleSheet("QPushButton {height : 25 ; width : 160px ; font: 13px; font-style: Segoe UI; color: #191919; border: 1px solid #191919; "
                              "border-radius: 10px;border-style: outset; "
                              "background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
                              " stop: 0 #ffffff, stop: 1 #ffffff); "
                              "padding: 5px }");

        QCOMPARE(advanceSetup->_ui.pbSelectLocalFolder->styleSheet(), expStyleSheet);

        delete advanceSetup;
        delete ownCloud;
        delete parent;
    }

    void teststyleSyncLogo()
    {
        QWidget *parent = new QWidget();
        OwncloudWizard *ownCloud = new OwncloudWizard(parent);
        OwncloudAdvancedSetupPage *advanceSetup = new OwncloudAdvancedSetupPage(ownCloud);

        advanceSetup->styleSyncLogo();

        QLabel *expSyncLogoLabel = advanceSetup->_ui.syncLogoLabel;
        expSyncLogoLabel->setPixmap(QPixmap(":/client/theme/Combined Shape.svg"));

        QCOMPARE(advanceSetup->_ui.syncLogoLabel->pixmap(), expSyncLogoLabel->pixmap());

        delete advanceSetup;
        delete ownCloud;
        delete parent;
     }

    /* UI based test cases */
    void test_screen()
    {
        QWidget *parent = new QWidget();
        OwncloudWizard *ownCloud = new OwncloudWizard(parent);
        OwncloudAdvancedSetupPage *advanceSetup = new OwncloudAdvancedSetupPage(ownCloud);
        advanceSetup->_ui.retranslateUi(parent);
        advanceSetup->_ui.setupUi(parent);

        /* verify UI screen labels */
        QCOMPARE(advanceSetup->_ui.userNameLabel_2->text(), "<b>Magenta</b>CLOUD");
        QCOMPARE(advanceSetup->_ui.userNameLabel->text(), "User name");
        QCOMPARE(advanceSetup->_ui.serverAddressLabel->text(), "Server address");
        QCOMPARE(advanceSetup->_ui.syncLogoLabel->text(), "Sync Logo");
        QCOMPARE(advanceSetup->_ui.localFolderDescriptionLabel->text(),
                 "<html><head/><body><p><b><span style=\" font-size:14px;\">"
                 "Local Folder</span></b></p></body></html>");
        QCOMPARE(advanceSetup->_ui.localFolderHead_5->text(),
                 "<html><head/><body><p><b><span style=\" font-size:14px;\">"
                 "Please check your local folder</span></b></p></body></html>");
        QCOMPARE(advanceSetup->_ui.localFolderHead_6->text(), "Due to the change to a new product,"
                 " we cannot be sure where your previous MagentaCLOUD folder is stored. If you have"
                 " adjusted the location in the previous software, please select the location again above.");
//        QCOMPARE(advanceSetup->_ui.localFolderHead_7->text(), "<html><head/><body><p><b><span style=\""
//                 " font-size:14px;\">Brand new: Virtual files!</span></b></p></body></html>");
//        QCOMPARE(advanceSetup->_ui.localFolderHead_8->text(), "<html><head/><body><p>Files in your local"
//                 " folder are not downloaded completely all the time, but instead only on demand. The advantage"
//                 " is that all files and folders are visible to you without taking up storage space.</p><p>You"
//                 " can see whether a file is currently occupying your storage space by the green checkmarks in"
//                 " the explorer. You can also force folders and files to be available completely downloaded."
//                 " To do this, right-click on the object, navigate to the entry  \"MagentaCLOUD\" and select "
//                 " \"Always make available locally\".</p><p>Conversely, you can release storage space more"
//                 " quickly in the same menu than would otherwise happen automatically. The blue cloud symbol"
//                 " shows you which objects are currently not consuming any storage space.</p></body></html>");
//        QCOMPARE(advanceSetup->_ui.statusIcon->text(), "png");
        QCOMPARE(advanceSetup->_ui.lServerIcon->text(), "Avatar");
        QCOMPARE(advanceSetup->_ui.lLocal->text(), "&Local Folder");
        QCOMPARE(advanceSetup->_ui.lFreeSpace->text(), "Free space");

        delete advanceSetup;
        delete ownCloud;
        delete parent;
    }
};

QTEST_MAIN(TestOwncloudAdvancedSetupPage)
#include "testowncloudadvancedsetuppage.moc"
