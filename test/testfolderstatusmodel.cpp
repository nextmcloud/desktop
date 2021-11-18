/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */

#include "localdiscoverytracker.h"
#include "folderstatusmodel.h"
#include "syncrunfilelog.h"
#include "syncengine.h"
#include "account.h"
#include <QtTest>

#define private public
#include "accountstate.h"
#include "syncresult.h"
#define Folder(a,b,c,d) Folder()
#include "folder.h"
#undef Folder
#include "theme.h"
#undef private

#define CALLOC_SIZE 100
#define syncResult() _syncResult
#include "folderstatusmodel.cpp"
#undef syncResult

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

class TestFolderStatusModel: public QObject
{
    Q_OBJECT

private slots:

    void testSetData_InvalidIndex()
    {
        FolderStatusModel folderStMod;
        QModelIndex index;
        QVariant ret = folderStMod.data(index, 1);

        QCOMPARE(ret,QVariant());
    }

    void testSetData_folderOk()
    {
        FolderStatusModel folderStMod;
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        accountSt->_state = AccountState::State::Connected;
        folderStMod._accountState = accountSt;

        FolderStatusModel::SubFolderInfo subFolder;
        subFolder._folder = new Folder();
        subFolder._folder->_definition.paused = false;
        folderStMod._folders.push_back(subFolder);
        folderStMod._folders.push_back(subFolder);

        QString pixmapName = QString::fromLatin1(":/client/theme/%1/%2-%3.png").
                             arg("colored").arg("folder-ok").arg(64);
        QIcon expectedRet = QPixmap(pixmapName);

        QObject *parent = new QObject;
        QAbstractItemModel *model = new FolderStatusModel(parent);
        QModelIndex index = model->index(1,1);
        QVERIFY(index.isValid());

        auto ret = folderStMod.data(index, FolderStatusDelegate::FolderStatusIconRole);
        QCOMPARE(ret, expectedRet);

        delete subFolder._folder;
        delete accountSt;
        delete model;
        delete parent;
    }

    void testSetData_StateOffline()
    {
        FolderStatusModel folderStMod;
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        folderStMod._accountState = accountSt;

        FolderStatusModel::SubFolderInfo subFolder;
        subFolder._folder = new Folder();
        folderStMod._folders.push_back(subFolder);
        folderStMod._folders.push_back(subFolder);

        QString key = "state-offline,colored";
        QIcon expectedRet = QIcon("open.xpm");
        Theme::instance()->_iconCache[key] = expectedRet;

        QObject *parent = new QObject;
        QAbstractItemModel *model = new FolderStatusModel(parent);
        QModelIndex index = model->index(1,1);
        QVERIFY(index.isValid());
        auto ret = folderStMod.data(index, FolderStatusDelegate::FolderStatusIconRole);
        QCOMPARE(ret, expectedRet);

        delete subFolder._folder;
        delete accountSt;
        delete model;
        delete parent;
    }

    void testSetData_OverlayIcon_NotConnected()
    {
        FolderStatusModel folderStMod;
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        folderStMod._accountState = accountSt;

        FolderStatusModel::SubFolderInfo subFolder;
        subFolder._folder = new Folder();
        folderStMod._folders.push_back(subFolder);
        folderStMod._folders.push_back(subFolder);

        QObject *parent = new QObject;
        QAbstractItemModel *model = new FolderStatusModel(parent);
        QModelIndex index = model->index(1,1);
        QVERIFY(index.isValid());

        auto ret = folderStMod.data(index, FolderStatusDelegate::FolderOverlayIconRole);
        QCOMPARE(ret, QVariant());

        delete subFolder._folder;
        delete accountSt;
        delete model;
        delete parent;
    }

    void testSetData_FolderOverlayIcon_SyncPaused()
    {
        FolderStatusModel folderStMod;
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        accountSt->_state = AccountState::State::Connected;
        folderStMod._accountState = accountSt;

        FolderStatusModel::SubFolderInfo subFolder;
        subFolder._folder = new Folder();
        subFolder._folder->_definition.paused = true;
        folderStMod._folders.push_back(subFolder);
        folderStMod._folders.push_back(subFolder);

        QObject *parent = new QObject;
        QAbstractItemModel *model = new FolderStatusModel(parent);
        QModelIndex index = model->index(1,1);
        QVERIFY(index.isValid());

        auto ret = folderStMod.data(index, FolderStatusDelegate::FolderOverlayIconRole);
        QCOMPARE(ret, QVariant());

        delete subFolder._folder;
        delete accountSt;
        delete model;
        delete parent;
    }
    void testSetData_FolderOverlayIcon_SyncPrepare()
    {
        FolderStatusModel folderStMod;
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        accountSt->_state = AccountState::State::Connected;
        folderStMod._accountState = accountSt;

        FolderStatusModel::SubFolderInfo subFolder;
        subFolder._folder = new Folder();
        subFolder._folder->setSyncState(SyncResult::SyncPrepare);
        folderStMod._folders.push_back(subFolder);
        folderStMod._folders.push_back(subFolder);

        QString key = "state-sync,colored";
        QIcon expectedRet = QIcon("open.xpm");
        Theme::instance()->_iconCache[key] = expectedRet;

        QObject *parent = new QObject;
        QAbstractItemModel *model = new FolderStatusModel(parent);
        QModelIndex index = model->index(1,1);
        QVERIFY(index.isValid());

        auto ret = folderStMod.data(index, FolderStatusDelegate::FolderOverlayIconRole);
        QCOMPARE(ret, expectedRet);

        delete subFolder._folder;
        delete accountSt;
        delete model;
        delete parent;
    }
    void testSetData_FolderOverlayIcon_Undefined()
    {
        FolderStatusModel folderStMod;
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        accountSt->_state = AccountState::State::Connected;
        folderStMod._accountState = accountSt;

        FolderStatusModel::SubFolderInfo subFolder;
        subFolder._folder = new Folder();
        subFolder._folder->setSyncState(SyncResult::SyncPrepare);
        folderStMod._folders.push_back(subFolder);
        folderStMod._folders.push_back(subFolder);

        QString key = "state-sync,colored";
        QIcon expectedRet = QIcon("open.xpm");
        Theme::instance()->_iconCache[key] = expectedRet;

        QObject *parent = new QObject;
        QAbstractItemModel *model = new FolderStatusModel(parent);
        QModelIndex index = model->index(1,1);
        QVERIFY(index.isValid());

        auto ret = folderStMod.data(index, FolderStatusDelegate::FolderOverlayIconRole);
        QCOMPARE(ret, expectedRet);

        delete subFolder._folder;
        delete accountSt;
        delete model;
        delete parent;
    }
    void testSetData_FolderOverlayIcon_Problem()
    {
        FolderStatusModel folderStMod;
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        accountSt->_state = AccountState::State::Connected;
        folderStMod._accountState = accountSt;

        FolderStatusModel::SubFolderInfo subFolder;
        subFolder._folder = new Folder();
        subFolder._folder->setSyncState(SyncResult::Problem);
        subFolder._folder->_syncResult._numNewConflictItems = 1;
        subFolder._folder->_syncResult._numOldConflictItems = 1;
        folderStMod._folders.push_back(subFolder);
        folderStMod._folders.push_back(subFolder);

        QString key = "state-warning,colored";
        QIcon expectedRet = QIcon("open.xpm");
        Theme::instance()->_iconCache[key] = expectedRet;

        QObject *parent = new QObject;
        QAbstractItemModel *model = new FolderStatusModel(parent);
        QModelIndex index = model->index(1,1);
        QVERIFY(index.isValid());

        auto ret = folderStMod.data(index, FolderStatusDelegate::FolderOverlayIconRole);
        QCOMPARE(ret, expectedRet);

        delete subFolder._folder;
        delete accountSt;
        delete model;
        delete parent;
    }

    void testSetData_FolderOverlayIcon_Success()
    {
        FolderStatusModel folderStMod;
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        accountSt->_state = AccountState::State::Connected;
        folderStMod._accountState = accountSt;

        FolderStatusModel::SubFolderInfo subFolder;
        subFolder._folder = new Folder();
        subFolder._folder->_syncResult._numNewConflictItems = 0;
        subFolder._folder->_syncResult._numOldConflictItems = 0;

        subFolder._folder->setSyncState(SyncResult::Success);
        folderStMod._folders.push_back(subFolder);
        folderStMod._folders.push_back(subFolder);

        QString key = "state-ok,colored";
        QIcon expectedRet = QIcon("open.xpm");
        Theme::instance()->_iconCache[key] = expectedRet;

        QObject *parent = new QObject;
        QAbstractItemModel *model = new FolderStatusModel(parent);
        QModelIndex index = model->index(1,1);
        QVERIFY(index.isValid());

        auto ret = folderStMod.data(index, FolderStatusDelegate::FolderOverlayIconRole);
        QCOMPARE(ret, expectedRet);

        delete subFolder._folder;
        delete accountSt;
        delete model;
        delete parent;
    }

    void testSetData_FolderOverlayIcon_Error()
    {
        FolderStatusModel folderStMod;
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        accountSt->_state = AccountState::State::Connected;
        folderStMod._accountState = accountSt;

        FolderStatusModel::SubFolderInfo subFolder;
        subFolder._folder = new Folder();
        subFolder._folder->setSyncState(SyncResult::Error);
        folderStMod._folders.push_back(subFolder);
        folderStMod._folders.push_back(subFolder);

        QString key = "state-error,colored";
        QIcon expectedRet = QIcon("open.xpm");
        Theme::instance()->_iconCache[key] = expectedRet;

        QObject *parent = new QObject;
        QAbstractItemModel *model = new FolderStatusModel(parent);
        QModelIndex index = model->index(1,1);
        QVERIFY(index.isValid());

        auto ret = folderStMod.data(index, FolderStatusDelegate::FolderOverlayIconRole);
        QCOMPARE(ret, expectedRet);

        delete subFolder._folder;
        delete accountSt;
        delete model;
        delete parent;
    }
};

QTEST_GUILESS_MAIN(TestFolderStatusModel)
#include "testfolderstatusmodel.moc"
