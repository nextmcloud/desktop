/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <QtTest>
#include "gui/nextcloudCore_autogen/include_Debug/ui_accountsettings.h"

#define AccountSettings(a, b) AccountSettings(a)
#include "accountsettings.h"
#undef AccountSettings

using namespace OCC;

AccountSettings::AccountSettings(AccountState *accountState) :
    _ui(new Ui::AccountSettings), _userInfo(accountState, false, true)
{
    _ui->quotaProgressBar = new QProgressBar();
    _ui->moreMemoryButton = new QPushButton();
    _ui->quotaProgressLabel = new QLabel();
    _ui->quotaInfoLabel = new QLabel();
    _ui->selectiveSyncCancel = new QPushButton();
    _ui->selectiveSyncApply = new QPushButton();
    _ui->selectiveSyncStatus = new QWidget();
    _ui->selectiveSyncButtons = new QWidget();
    _ui->selectiveSyncLabel = new QLabel();

    _wasDisabledBefore = (false);
    _accountState = accountState;
    _menuShown = (false);
};

class TestAccountSettings: public QObject
{
    Q_OBJECT

private slots:

    void testcustomizeStyle()
    {
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        AccountSettings *accountSet = new AccountSettings(accountSt);

        accountSet->customizeStyle();

        QString expMoreMemoryStyleSheet("QPushButton {height : 24px ; font : 13px; border: 2px solid #CCCCCC; backgroud:#E1E1E1}");
        QString expQuotaStylesheet( "QProgressBar {border: 0px solid grey;border-radius: 5px; height: 4px;background-color: #CCCCCC;"
                                    "text-align: center;}QProgressBar::chunk {background-color: #e20074; height: 4px;}");
        QCOMPARE(accountSet->_ui->moreMemoryButton->styleSheet(), expMoreMemoryStyleSheet);
        QCOMPARE(accountSet->_ui->quotaProgressBar->styleSheet(), expQuotaStylesheet);

        delete accountSet;
        delete accountSt;
    }

    void testslotUpdateQuota_Memory50Per()
    {
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        AccountSettings *accountSet = new AccountSettings(accountSt);

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
        sprintf(expectProgressText, "Memory Occupied to %d %%", (int)(percent));
        QString expectStyleSheet = "QLabel { background-color :%1 ; font: 18px; color : #191919; }";

        accountSet->slotUpdateQuota(total, used);

        QCOMPARE(accountSet->_ui->quotaInfoLabel->text(), expectInfoText);
        QCOMPARE(accountSet->_ui->quotaInfoLabel->styleSheet(), expectStyleSheet);
        QCOMPARE(accountSet->_ui->quotaInfoLabel->toolTip(), expectToolTip);
        QCOMPARE(accountSet->_ui->quotaProgressBar->toolTip(), expectToolTip);
        QCOMPARE(accountSet->_ui->quotaProgressLabel->text(), expectProgressText);

        delete accountSet;
        delete accountSt;
    }

    void testslotUpdateQuota_Memory100Per()
    {
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        AccountSettings *accountSet = new AccountSettings(accountSt);

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
        sprintf(expectProgressText, "Memory Occupied to %d %%", (int)((used * 100)/total));
        QString expectStyleSheet = "QLabel { background-color :%1 ; font: 18px; color : #191919; }";

        accountSet->slotUpdateQuota(total, used);

        QCOMPARE(accountSet->_ui->quotaInfoLabel->text(), expectInfoText);
        QCOMPARE(accountSet->_ui->quotaInfoLabel->styleSheet(), expectStyleSheet);
        QCOMPARE(accountSet->_ui->quotaInfoLabel->toolTip(), expectToolTip);
        QCOMPARE(accountSet->_ui->quotaProgressBar->toolTip(), expectToolTip);
        QCOMPARE(accountSet->_ui->quotaProgressLabel->text(), expectProgressText);

        delete accountSet;
        delete accountSt;
    }

    void testslotUpdateQuota_NegativeTotal()
    {
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        AccountSettings *accountSet = new AccountSettings(accountSt);

        qint64 total = -2;
        qint64 used = 5;
        QString usedStr = Utility::octetsToString(used);

        char expectInfoText[4];
        sprintf(expectInfoText, "%s", usedStr.toStdString().c_str());

        accountSet->slotUpdateQuota(total, used);

        QCOMPARE(accountSet->_ui->quotaInfoLabel->text(), expectInfoText);

        delete accountSet;
        delete accountSt;
    }

    /* UI based (event driven) test cases */
    void test_moreMemoryButton()
    {
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        AccountSettings *accountSet = new AccountSettings(accountSt);

        /*to track the SIGNAL emit or not */
        QSignalSpy moreMemoryButtonSpy(accountSet->_ui->moreMemoryButton, SIGNAL(clicked(bool)));

        connect(accountSet->_ui->moreMemoryButton, &QPushButton::clicked, accountSet,
                &AccountSettings::slotMoreMemory);

        /* generate event/emit signal */
        QTest::mouseClick( accountSet->_ui->moreMemoryButton, Qt::LeftButton );

        /* verify SIGNAL emit */
        QCOMPARE(moreMemoryButtonSpy.count(), 1);

        delete accountSet;
        delete accountSt;
    }

    void test_selectiveSyncCancel()
    {
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        AccountSettings *accountSet = new AccountSettings(accountSt);

        /*to track the SIGNAL emit or not */
        QSignalSpy selectiveSyncCancelSpy(accountSet->_ui->selectiveSyncCancel, SIGNAL(clicked(bool)));

        /*to track the SLOT called or not */
        connect(accountSet->_ui->selectiveSyncCancel, &QAbstractButton::clicked,
                accountSet, &AccountSettings::slotHideSelectiveSyncWidget);

        /* generate event/emit signal */
        QTest::mouseClick( accountSet->_ui->selectiveSyncCancel, Qt::LeftButton );

        /* verify SIGNAL emit */
        QCOMPARE(selectiveSyncCancelSpy.count(), 1);

        /* verify SLOT data */
        QCOMPARE(accountSet->_ui->selectiveSyncApply->isEnabled(), false);
        QCOMPARE(accountSet->_ui->selectiveSyncStatus->isHidden(), true);
        QCOMPARE(accountSet->_ui->selectiveSyncButtons->isHidden(), true);
        QCOMPARE(accountSet->_ui->selectiveSyncLabel->isHidden(), true);

        delete accountSet;
        delete accountSt;
    }

    void test_selectiveSyncApply()
    {
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        AccountSettings *accountSet = new AccountSettings(accountSt);

        /*to track the SIGNAL emit or not */
        QSignalSpy selectiveSyncApplySpy(accountSet->_ui->selectiveSyncApply, SIGNAL(clicked(bool)));

        /*to track the SLOT called or not */
        connect(accountSet->_ui->selectiveSyncApply, &QAbstractButton::clicked,
                accountSet, &AccountSettings::slotHideSelectiveSyncWidget);

        /* generate event/emit signal */
        QTest::mouseClick( accountSet->_ui->selectiveSyncApply, Qt::LeftButton );

        /* verify SIGNAL emit */
        QCOMPARE(selectiveSyncApplySpy.count(), 1);

        /* verify SLOT data */
        QCOMPARE(accountSet->_ui->selectiveSyncApply->isEnabled(), false);
        QCOMPARE(accountSet->_ui->selectiveSyncStatus->isHidden(), true);
        QCOMPARE(accountSet->_ui->selectiveSyncButtons->isHidden(), true);
        QCOMPARE(accountSet->_ui->selectiveSyncLabel->isHidden(), true);

        delete accountSet;
        delete accountSt;
    }
};

QTEST_MAIN(TestAccountSettings)
#include "testaccountsettings.moc"
