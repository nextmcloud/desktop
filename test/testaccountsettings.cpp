/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <QtTest>
#include "accountsettings.h"
#include "gui/nextcloudCore_autogen/include_Debug/ui_accountsettings.h"

#define MEM_SIZE 100
using namespace OCC;

class TestAccountSettings: public QObject
{
    Q_OBJECT

private slots:
    void testslotMoreMemory()
    {
        QPointer<AccountSettings> accountSet;
        accountSet->slotMoreMemory();
    }

    void testslotUpdateQuota_Memory50Per()
    {
        AccountSettings *accountSet = (AccountSettings *)malloc(MEM_SIZE);
        Ui::AccountSettings *uiAccountSet = new Ui::AccountSettings;
        uiAccountSet->quotaProgressBar = new QProgressBar();
        uiAccountSet->quotaProgressLabel = new QLabel();
        uiAccountSet->quotaInfoLabel = new QLabel();
        accountSet->_ui= uiAccountSet;

        qint64 total = 2;
        qint64 used = 1;
        double percent = (used * 100) / (double)total;

        QString usedStr = Utility::octetsToString(used);
        QString totalStr = Utility::octetsToString(total);
        QString percentStr = Utility::compactFormatDouble(percent, 1);

        char expectToolTip[110];
        sprintf(expectToolTip, "%s (%s%%) of %s. Some folders, including network "
                "mounted or shared folders, might have different limits.",
                usedStr.toStdString().c_str(), percentStr.toStdString().c_str(),
                totalStr.toStdString().c_str());
        char expectInfoText[20];
        sprintf(expectInfoText, "<b> %s </b> of %s", usedStr.toStdString().c_str(),
                totalStr.toStdString().c_str());
        char expectProgressText[25];
        sprintf(expectProgressText, "Memory Occupied to %d", (int)(percent));
        QString expectStyleSheet = "QLabel { background-color :%1 ; font: 18px; color : #191919; }";

        accountSet->slotUpdateQuota(total, used);

        QCOMPARE(accountSet->_ui->quotaInfoLabel->text(), expectInfoText);
        QCOMPARE(accountSet->_ui->quotaInfoLabel->styleSheet(), expectStyleSheet);
        QCOMPARE(accountSet->_ui->quotaInfoLabel->toolTip(), expectToolTip);
        QCOMPARE(accountSet->_ui->quotaProgressBar->toolTip(), expectToolTip);
        QCOMPARE(accountSet->_ui->quotaProgressLabel->text(), expectProgressText);

        free(accountSet);
        delete uiAccountSet;
    }

    void testslotUpdateQuota_Memory100Per()
    {
        AccountSettings *accountSet = (AccountSettings *)malloc(MEM_SIZE);
        Ui::AccountSettings *uiAccountSet = new Ui::AccountSettings;
        uiAccountSet->quotaProgressBar = new QProgressBar();
        uiAccountSet->quotaProgressLabel = new QLabel();
        uiAccountSet->quotaInfoLabel = new QLabel();
        accountSet->_ui= uiAccountSet;

        qint64 total = 1;
        qint64 used = 1;
        double percent = (used * 100) / (double)total;

        QString usedStr = Utility::octetsToString(used);
        QString totalStr = Utility::octetsToString(total);
        QString percentStr = Utility::compactFormatDouble(percent, 1);

        char expectToolTip[110];
        sprintf(expectToolTip, "%s (%s%%) of %s. Some folders, including network "
                "mounted or shared folders, might have different limits.",
                usedStr.toStdString().c_str(), percentStr.toStdString().c_str(),
                totalStr.toStdString().c_str());
        char expectInfoText[20];
        sprintf(expectInfoText, "<b> %s </b> of %s", usedStr.toStdString().c_str(),
                totalStr.toStdString().c_str());
        char expectProgressText[25];
        sprintf(expectProgressText, "Memory Occupied to %d", (int)((used * 100)/total));
        QString expectStyleSheet = "QLabel { background-color :%1 ; font: 18px; color : #191919; }";

        accountSet->slotUpdateQuota(total, used);

        QCOMPARE(accountSet->_ui->quotaInfoLabel->text(), expectInfoText);
        QCOMPARE(accountSet->_ui->quotaInfoLabel->styleSheet(), expectStyleSheet);
        QCOMPARE(accountSet->_ui->quotaInfoLabel->toolTip(), expectToolTip);
        QCOMPARE(accountSet->_ui->quotaProgressBar->toolTip(), expectToolTip);
        QCOMPARE(accountSet->_ui->quotaProgressLabel->text(), expectProgressText);

        free(accountSet);
        delete uiAccountSet;
    }

    void testslotUpdateQuota_NegativeTotal()
    {
        AccountSettings *accountSet = (AccountSettings *)malloc(MEM_SIZE);
        Ui::AccountSettings *uiAccountSet = new Ui::AccountSettings;
        uiAccountSet->quotaProgressBar = new QProgressBar();
        uiAccountSet->moreMemoryButton = new QPushButton();
        uiAccountSet->quotaProgressLabel = new QLabel();
        uiAccountSet->quotaInfoLabel = new QLabel();
        accountSet->_ui= uiAccountSet;

        qint64 total = -2;
        qint64 used = 5;
        QString usedStr = Utility::octetsToString(used);

        char expectInfoText[4];
        sprintf(expectInfoText, "%s", usedStr.toStdString().c_str());

        accountSet->slotUpdateQuota(total, used);

        QCOMPARE(accountSet->_ui->quotaInfoLabel->text(), expectInfoText);

        free(accountSet);
        delete uiAccountSet;
    }
};

QTEST_MAIN(TestAccountSettings)
#include "testaccountsettings.moc"
