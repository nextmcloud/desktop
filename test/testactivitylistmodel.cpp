/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */

#include <QtTest>
#include "account.h"
#include "accountstate.h"
#include "gui/tray/ActivityListModel.h"

#define LESS_DATA 5
#define MORE_DATA 10

using namespace OCC;

class TestActivityListModel: public QObject
{
    Q_OBJECT

private slots:
    void testcombineActivityLists_LessData()
    {
        AccountPtr account = Account::create();
        AccountState *accountState = new AccountState(account);
        ActivityListModel *actList = new ActivityListModel(accountState);

        Activity actData;
        for(int i=0;i<=LESS_DATA;i++)
        {
            actList->_notificationErrorsLists.push_back(actData);
            actList->_notificationLists.push_back(actData);
            actList->_syncFileItemLists.push_back(actData);
        }

        actList->combineActivityLists();
        int totalSize = actList->_notificationErrorsLists.count() +
                        actList->_notificationLists.count() +
                        actList->_syncFileItemLists.count();

        QCOMPARE(actList->_finalList.count(), totalSize);

        delete accountState;
        delete actList;
    }
    void testcombineActivityLists_MoreData()
    {
        AccountPtr account = Account::create();
        AccountState *accountState=new AccountState(account);
        ActivityListModel *actList = new ActivityListModel(accountState);

        Activity actData;
        for(int i=0;i<=MORE_DATA;i++)
        {
            actList->_notificationErrorsLists.push_back(actData);
            actList->_notificationLists.push_back(actData);
            actList->_syncFileItemLists.push_back(actData);
        }
        actList->combineActivityLists();

        actList->combineActivityLists();
        int totalSize = actList->_notificationErrorsLists.count() +
                        actList->_notificationLists.count() +
                        actList->_syncFileItemLists.count();

        QCOMPARE(actList->_finalList.count(), totalSize);

        delete accountState;
        delete actList;
    }
};

QTEST_GUILESS_MAIN(TestActivityListModel)
#include "testactivitylistmodel.moc"
