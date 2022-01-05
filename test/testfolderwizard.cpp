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

        QWidget *parent = new QWidget();
        QString expectedVal = "Finish";
        FolderMan fm;

        FolderWizard folderStMod(account, parent);

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

//        QString expectedSubHeader  = "Step 1 from 2: Local Folder";
//        QString expectedSubContent = "If you don't make a selection, an empty "
//                                     "folder will automatically be created for you.";
//        QString expectedContent    = "Select a folder on your hard drive, that will be "
//                                     "connected to your MangentaCLOUD and permanently connected. All "
//                                     "files and sub-folders are automatically uploaded and synchronized.";
//        QString expectedLocalFolder  = "Please select a folder";

        /* Update German to english(above) text as per code fixing */
        QString expectedSubHeader  = "Schritt 1 von 2: Lokaler Ordner wählen";
        QString expectedContent    = "Wählen Sie einen Ordner auf Ihrer Festplatte aus,"
                                     " der mit Ihrer MagentaCLOUD dauerhaft verbunden werden"
                                     " soll. Alle Dateien und Unterordner werden automatisch"
                                     " hochgeladen und synchronisiert.";
        QString expectedLocalFolder  = "Bitte wählen Sie einen Ordner aus";

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

//        QString expectedSubHeader  = "Step 2 from 2: Directory in your CLOUD";
//        QString expectedContent    = "Both folders are permanently linked, the respective "
//                                     "contents are automatically compared and updated.";
//        QString expectedSubContent = "Please select or create a target folder in your "
//                                     "MangentaCLOUD, where the content will be uploaded "
//                                     "and synchronized.";

        /* Update German to english(above) text as per code fixing */
        QString expectedSubHeader  = "Schritt 2 von 2: Verzeichnis in Ihrer MagentaCLOUD";
        QString expectedContent    = "Bitte wählen oder erstellen Sie nun einen Ziel Ordner"
                                     " in Ihrer MagentaCLOUD, wo die Inhalte hochgeladen und"
                                     " synchronisiert werden sollen.";
        QString expectedSubContent = "Beide Ordner werden dauerhaft verknüpft, die jeweiligen"
                                     " Inhalte werden automatisch abgeglichen und aktualisiert.";

        FolderWizardRemotePath FolderRemote(account);

        QCOMPARE(FolderRemote._ui.warnLabel->isHidden(), true);
        QCOMPARE(FolderRemote._ui.folderEntry->isHidden(), true);
        QCOMPARE(FolderRemote._ui.content->text(), expectedContent);
        QCOMPARE(FolderRemote._ui.subHeader->text(), expectedSubHeader);
        QCOMPARE(FolderRemote._ui.subContent->text(), expectedSubContent);
    }

    void testFolderWizardRemotePath_showWarn_Hidden()
    {
        auto *cred = new HttpCredentialsTest("testuser", "secret");
        AccountPtr account = Account::create();
        account->setCredentials(cred);
        QUrl url("http://test.de");
        account->setUrl( url );

        FolderWizardRemotePath FolderRemote(account);
        QString warn;
        QString expectedWarn = "TextLabel"; /* Default set */

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
        QString warn("This folder is already synchronized in the MagentaCLOUD.");

        FolderRemote.showWarn(warn);

        QCOMPARE(FolderRemote._ui.warnLabel->text(), warn);
        QCOMPARE(FolderRemote._ui.warnLabel->isHidden(), false);
    }

    void testFormatWarningsWizardPage_formatWarnings()
    {
        FormatWarningsWizardPage formatWarn;
        QStringList warnings;
        warnings.append("This folder is already synchronized in the MagentaCLOUD.");
        QString expectedWarn = tr("<b>Warning:</b> %1").arg("This folder is already synchronized in the MagentaCLOUD.");

        QString ret = formatWarn.formatWarnings(warnings);

        QCOMPARE(ret, expectedWarn);
    }
};

QTEST_MAIN(TestFolderWizard)
#include "testfolderwizard.moc"
