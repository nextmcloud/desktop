/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */

#define TEST_FOLD_WIZ
#include "gui/nextcloudCore_autogen/include_Debug/ui_folderwizardsourcepage.h"
#include "gui/nextcloudCore_autogen/include_Debug/ui_folderwizardtargetpage.h"
#include "creds/abstractcredentials.h"
#include "folderwizard.h"
#include "accountstate.h"
#include "testhelper.h"
#include <QWizardPage>
#include "folderman.h"
#include "account.h"
#include <QtTest>

using namespace OCC;

class TestFolderWizard: public QObject
{
    Q_OBJECT

private slots:

    void testfolderwizard()
    {
        auto *cred = new HttpCredentialsTest("testuser", "secret");
        AccountPtr account = Account::create();
        account->setCredentials(cred);
        QUrl url("http://test.de");
        account->setUrl( url );

        QWidget parent;
        QString expectedVal = "Finish";
        FolderMan fm;

        FolderWizard folderStMod(account, &parent);

        QCOMPARE(folderStMod.buttonText(QWizard::FinishButton), expectedVal);
    }

    void testFolderWizardLocalPath()
    {
        auto *cred = new HttpCredentialsTest("testuser", "secret");
        AccountPtr account = Account::create();
        account->setCredentials(cred);
        QUrl url("http://test.de");
        account->setUrl( url );
        FolderMan fm;

        QString expectedSubHeader  = "Step 1 from 2: Local Folder";
//        QString expectedSubContent = "If you don't make a selection, an empty "
//                                     "folder will automatically be created for you.";
        QString expectedContent    = "Select a folder on your hard drive, that will be "
                                     "connected to your MangentaCLOUD and permanently connected. All "
                                     "files and sub-folders are automatically uploaded and synchronized.";
        QString expectedLocalFolder  = "Please select a folder";

        FolderWizardLocalPath FolderLocal(account);

        QCOMPARE(FolderLocal._ui.warnLabel->isHidden(), true);
        QCOMPARE(FolderLocal._ui.content->text(), expectedContent);
        QCOMPARE(FolderLocal._ui.subHeader->text(), expectedSubHeader);
//        QCOMPARE(FolderLocal._ui.subContent->text(), expectedSubContent);
        QCOMPARE(FolderLocal._ui.localFolderLineEdit->text(), expectedLocalFolder);
    }

    void testFolderWizardRemotePath()
    {
        auto *cred = new HttpCredentialsTest("testuser", "secret");
        AccountPtr account = Account::create();
        account->setCredentials(cred);
        QUrl url("http://test.de");
        account->setUrl( url );

        QString expectedSubHeader  = "Step 2 from 2: Directory in your CLOUD";
        QString expectedContent    = "Both folders are permanently linked, the respective "
                                     "contents are automatically compared and updated.";
        QString expectedSubContent = "Please select or create a target folder in your "
                                     "MangentaCLOUD, where the content will be uploaded "
                                     "and synchronized.";

        FolderWizardRemotePath FolderRemote(account);

//        QCOMPARE(FolderRemote._ui.warnLabel->isHidden(), true);
        QCOMPARE(FolderRemote._ui.folderEntry->isHidden(), true);
        QCOMPARE(FolderRemote._ui.content->text(), expectedContent);
        QCOMPARE(FolderRemote._ui.subHeader->text(), expectedSubHeader);
        QCOMPARE(FolderRemote._ui.subContent->text(), expectedSubContent);
    }

    /* showWarn removed from source code.
    void testFolderWizardRemotePath_showWarn_Hidden()
    {
        auto *cred = new HttpCredentialsTest("testuser", "secret");
        AccountPtr account = Account::create();
        account->setCredentials(cred);
        QUrl url("http://test.de");
        account->setUrl( url );

        FolderWizardRemotePath FolderRemote(account);
        QString warn;
        QString expectedWarn = "TextLabel";

        FolderRemote.showWarn(warn);

        QCOMPARE(FolderRemote._ui.warnLabel->isHidden(), true);
        QCOMPARE(FolderRemote._ui.warnLabel->text(), expectedWarn);
    }

    void testFolderWizardRemotePath_showWarn_Show()
    {
        auto *cred = new HttpCredentialsTest("testuser", "secret");
        AccountPtr account = Account::create();
        account->setCredentials(cred);
        QUrl url("http://test.de");
        account->setUrl( url );

        FolderWizardRemotePath FolderRemote(account);
        QString warn;
        warn = tr("<b>Warning:</b> %1").arg("This folder is already synchronized in the MagentaCLOUD.");

        FolderRemote.showWarn(warn);

        QCOMPARE(FolderRemote._ui.warnLabel->text(), warn);
        QCOMPARE(FolderRemote._ui.warnLabel->isHidden(), false);
    }
    */

    void testFormatWarningsWizardPage_formatWarnings()
    {
        FormatWarningsWizardPage formatWarn;
        QStringList warnings;
        warnings.append("This folder is already synchronized in the MagentaCLOUD.");
        QString expectedWarn = tr("<b>Warning:</b> %1").arg("This folder is already synchronized in the MagentaCLOUD.");

        QString ret = formatWarn.formatWarnings(warnings);

        QCOMPARE(ret, expectedWarn);
    }

    /* UI based (event driven) test cases */
    void test_refreshButton()
    {
        auto *cred = new HttpCredentialsTest("testuser", "secret");
        AccountPtr account = Account::create();
        account->setCredentials(cred);

        FolderWizardRemotePath FolderRemote(account);

        FolderRemote._encryptedPaths.append("/test");
        FolderRemote._ui.folderEntry->setText("Test");
        QList<QTreeWidgetItem *> items;
        for (int i = 0; i < 5; ++i)
            items.append(new QTreeWidgetItem(static_cast<QTreeWidget *>(nullptr), QStringList(QString("item: %1").arg(i))));
        FolderRemote._ui.folderTreeWidget->insertTopLevelItems(0, items);

        /* verify set data */
        QCOMPARE(FolderRemote._encryptedPaths.isEmpty(), false);
        QCOMPARE(FolderRemote._ui.folderEntry->text(), "Test");
        QVERIFY(FolderRemote._ui.folderTreeWidget->topLevelItem(0));

        /*to track the SIGNAL emit or not */
        QSignalSpy refreshButtonSpy(FolderRemote._ui.refreshButton, SIGNAL(clicked(bool)));

        /* generate event/emit signal */
        QTest::mouseClick( FolderRemote._ui.refreshButton, Qt::LeftButton );

        /* verify SIGNAL emit */
        QCOMPARE(refreshButtonSpy.count(), 1);

        /* verify SLOT data */
        QCOMPARE(FolderRemote._encryptedPaths.isEmpty(), true);
        QCOMPARE(FolderRemote._ui.folderEntry->text(), "");
        QVERIFY(!(FolderRemote._ui.folderTreeWidget->topLevelItem(0)));
    }

    void test_addFolderButton()
    {
        auto *cred = new HttpCredentialsTest("testuser", "secret");
        AccountPtr account = Account::create();
        account->setCredentials(cred);

        FolderWizardRemotePath FolderRemote(account);

        /*to track the SIGNAL emit or not */
        QSignalSpy addFolderButtonSpy(FolderRemote._ui.addFolderButton, SIGNAL(clicked(bool)));

        /* generate event/emit signal */
        QTest::mouseClick( FolderRemote._ui.addFolderButton, Qt::LeftButton );

        /* verify SIGNAL emit */
        QCOMPARE(addFolderButtonSpy.count(), 1);

        /* verify SLOT data */
        /* NA-only local data set in slot function */
    }

    void test_folderEntry()
    {
        auto *cred = new HttpCredentialsTest("testuser", "secret");
        AccountPtr account = Account::create();
        account->setCredentials(cred);

        FolderWizardRemotePath FolderRemote(account);

        /*to track the SIGNAL emit or not */
        QSignalSpy addFolderButtonSpy(FolderRemote._ui.folderEntry, SIGNAL(textEdited(QString)));

        /* generate event/emit signal */
        QString test = "Test";
        QTest::keyClicks( FolderRemote._ui.folderEntry, test );

        /* verify SIGNAL emit */
        QCOMPARE(addFolderButtonSpy.count(), test.size());

        /* verify SLOT data */
        QCOMPARE(FolderRemote._ui.folderEntry->text(), "Test");
        QVERIFY(!FolderRemote._ui.folderTreeWidget->currentItem());
    }
};

QTEST_MAIN(TestFolderWizard)
#include "testfolderwizard.moc"
