/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */

#include "localdiscoverytracker.h"
#include "syncrunfilelog.h"
#include "syncengine.h"
#include <QtTest>

#define displayName() d_Name()
#include "account.h"

#define private public
#include "accountstate.h"
#define Folder(a,b,c,d) Folder()
#include "folder.h"
#undef Folder
#include "gui/tray/UserModel.h"
#undef private

using namespace OCC;
FolderDefinition fd;

Folder::Folder()
    : QObject(new QObject)
    , _accountState(new AccountState(Account::create()))
    , _definition(fd)
    , _lastSyncDuration(0)
    , _consecutiveFailingSyncs(0)
    , _consecutiveFollowUpSyncs(0)
    , _journal(_definition.absoluteJournalPath())
    ,_localDiscoveryTracker(new LocalDiscoveryTracker())
{

};

QString  Account::d_Name() const
{
    QString dn = QString("Name");

    return dn;
}
#include "gui/tray/UserModel.cpp"

class TestUserModel: public QObject
{
    Q_OBJECT

private slots:
    void testprocessCompletedSyncItem_Synced()
    {
        Folder *folder = new Folder();
        AccountPtr account = Account::create();

        SyncFileItemPtr item = SyncFileItemPtr::create();
        item->_originalFile = QString("TestFile");
        item->_status = SyncFileItem::Success;
        item->_direction = SyncFileItem::None;

        AccountStatePtr newAccountState(new AccountState(account));
        User user(newAccountState, true);

        user.processCompletedSyncItem(folder, item);

        QCOMPARE(user._activityModel->_syncFileItemLists.at(0)._message,
                 QString("Synced TestFile"));
        QCOMPARE(user._activityModel->_syncFileItemLists.at(0)._status,
                 SyncFileItem::Success);

        delete folder;
    }

    void testprocessCompletedSyncItem_FileRenamed()
    {
        Folder *folder = new Folder();
        AccountPtr account = Account::create();

        SyncFileItemPtr item = SyncFileItemPtr::create();
        item->_instruction = CSYNC_INSTRUCTION_RENAME;
        item->_originalFile = QString("TestFile");
        item->_status = SyncFileItem::Success;
        item->_direction = SyncFileItem::Up;

        AccountStatePtr newAccountState(new AccountState(account));
        User user(newAccountState, true);

        user.processCompletedSyncItem(folder, item);

        QCOMPARE(user._activityModel->_syncFileItemLists.at(0)._message,
                 QString("You renamed TestFile"));
        QCOMPARE(user._activityModel->_syncFileItemLists.at(0)._fileAction,
                 QString("file_renamed"));
        QCOMPARE(user._activityModel->_syncFileItemLists.at(0)._status,
                 SyncFileItem::Success);

        delete folder;
    }

    void testprocessCompletedSyncItem_FileDeleted()
    {
        Folder *folder = new Folder();
        AccountPtr account = Account::create();

        SyncFileItemPtr item = SyncFileItemPtr::create();
        item->_instruction = CSYNC_INSTRUCTION_REMOVE;
        item->_originalFile = QString("TestFile");
        item->_status = SyncFileItem::NoStatus;
        item->_direction = SyncFileItem::Up;

        AccountStatePtr newAccountState(new AccountState(account));
        User user(newAccountState, true);

        user.processCompletedSyncItem(folder, item);

        QCOMPARE(user._activityModel->_syncFileItemLists.at(0)._message,
                 QString("You deleted TestFile"));
        QCOMPARE(user._activityModel->_syncFileItemLists.at(0)._fileAction,
                 QString("file_deleted"));
        QCOMPARE(user._activityModel->_syncFileItemLists.at(0)._status,
                 SyncFileItem::NoStatus);

        delete folder;
    }

    void testprocessCompletedSyncItem_FileCreated()
    {
        Folder *folder = new Folder();
        AccountPtr account = Account::create();

        SyncFileItemPtr item = SyncFileItemPtr::create();
        item->_instruction = CSYNC_INSTRUCTION_NEW;
        item->_originalFile = QString("TestFile");
        item->_status = SyncFileItem::NoStatus;
        item->_direction = SyncFileItem::Up;

        AccountStatePtr newAccountState(new AccountState(account));
        User user(newAccountState, true);

        user.processCompletedSyncItem(folder, item);

        QCOMPARE(user._activityModel->_syncFileItemLists.at(0)._message,
                 QString("You created TestFile"));
        QCOMPARE(user._activityModel->_syncFileItemLists.at(0)._fileAction,
                 QString("file_created"));
        QCOMPARE(user._activityModel->_syncFileItemLists.at(0)._status,
                 SyncFileItem::NoStatus);

        delete folder;
    }

    void testprocessCompletedSyncItem_FileChanged()
    {
        Folder *folder = new Folder();
        AccountPtr account = Account::create();

        SyncFileItemPtr item = SyncFileItemPtr::create();
        item->_instruction = CSYNC_INSTRUCTION_TYPE_CHANGE;
        item->_originalFile = QString("TestFile");
        item->_status = SyncFileItem::NoStatus;
        item->_direction = SyncFileItem::Up;

        AccountStatePtr newAccountState(new AccountState(account));
        User user(newAccountState, true);

        user.processCompletedSyncItem(folder, item);

        QCOMPARE(user._activityModel->_syncFileItemLists.at(0)._message,
                 QString("You changed TestFile"));
        QCOMPARE(user._activityModel->_syncFileItemLists.at(0)._fileAction,
                 QString("file_changed"));
        QCOMPARE(user._activityModel->_syncFileItemLists.at(0)._status,
                 SyncFileItem::NoStatus);

        delete folder;
    }
};

QTEST_MAIN(TestUserModel)
#include "testusermodel.moc"
