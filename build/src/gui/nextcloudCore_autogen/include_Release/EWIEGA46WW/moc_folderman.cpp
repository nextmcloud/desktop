/****************************************************************************
** Meta object code from reading C++ file 'folderman.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/folderman.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderman.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__FolderMan_t {
    QByteArrayData data[45];
    char stringdata0[839];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__FolderMan_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__FolderMan_t qt_meta_stringdata_OCC__FolderMan = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OCC::FolderMan"
QT_MOC_LITERAL(1, 15, 21), // "folderSyncStateChange"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "OCC::Folder*"
QT_MOC_LITERAL(4, 51, 20), // "scheduleQueueChanged"
QT_MOC_LITERAL(5, 72, 17), // "folderListChanged"
QT_MOC_LITERAL(6, 90, 16), // "OCC::Folder::Map"
QT_MOC_LITERAL(7, 107, 8), // "wipeDone"
QT_MOC_LITERAL(8, 116, 18), // "OCC::AccountState*"
QT_MOC_LITERAL(9, 135, 7), // "account"
QT_MOC_LITERAL(10, 143, 7), // "success"
QT_MOC_LITERAL(11, 151, 23), // "slotAccountStateChanged"
QT_MOC_LITERAL(12, 175, 22), // "slotScheduleAppRestart"
QT_MOC_LITERAL(13, 198, 23), // "slotSyncOnceFileUnlocks"
QT_MOC_LITERAL(14, 222, 4), // "path"
QT_MOC_LITERAL(15, 227, 19), // "slotScheduleETagJob"
QT_MOC_LITERAL(16, 247, 5), // "alias"
QT_MOC_LITERAL(17, 253, 20), // "OCC::RequestEtagJob*"
QT_MOC_LITERAL(18, 274, 3), // "job"
QT_MOC_LITERAL(19, 278, 24), // "slotWipeFolderForAccount"
QT_MOC_LITERAL(20, 303, 12), // "accountState"
QT_MOC_LITERAL(21, 316, 18), // "forceSyncForFolder"
QT_MOC_LITERAL(22, 335, 6), // "folder"
QT_MOC_LITERAL(23, 342, 14), // "removeE2eFiles"
QT_MOC_LITERAL(24, 357, 15), // "OCC::AccountPtr"
QT_MOC_LITERAL(25, 373, 20), // "slotFolderSyncPaused"
QT_MOC_LITERAL(26, 394, 6), // "paused"
QT_MOC_LITERAL(27, 401, 24), // "slotFolderCanSyncChanged"
QT_MOC_LITERAL(28, 426, 21), // "slotFolderSyncStarted"
QT_MOC_LITERAL(29, 448, 22), // "slotFolderSyncFinished"
QT_MOC_LITERAL(30, 471, 15), // "OCC::SyncResult"
QT_MOC_LITERAL(31, 487, 17), // "slotRunOneEtagJob"
QT_MOC_LITERAL(32, 505, 20), // "slotEtagJobDestroyed"
QT_MOC_LITERAL(33, 526, 28), // "slotStartScheduledFolderSync"
QT_MOC_LITERAL(34, 555, 24), // "slotEtagPollTimerTimeout"
QT_MOC_LITERAL(35, 580, 18), // "slotAccountRemoved"
QT_MOC_LITERAL(36, 599, 27), // "slotRemoveFoldersForAccount"
QT_MOC_LITERAL(37, 627, 32), // "slotForwardFolderSyncStateChange"
QT_MOC_LITERAL(38, 660, 24), // "slotServerVersionChanged"
QT_MOC_LITERAL(39, 685, 13), // "OCC::Account*"
QT_MOC_LITERAL(40, 699, 23), // "slotWatchedFileUnlocked"
QT_MOC_LITERAL(41, 723, 24), // "slotScheduleFolderByTime"
QT_MOC_LITERAL(42, 748, 26), // "slotSetupPushNotifications"
QT_MOC_LITERAL(43, 775, 32), // "slotProcessFilesPushNotification"
QT_MOC_LITERAL(44, 808, 30) // "slotConnectToPushNotifications"

    },
    "OCC::FolderMan\0folderSyncStateChange\0"
    "\0OCC::Folder*\0scheduleQueueChanged\0"
    "folderListChanged\0OCC::Folder::Map\0"
    "wipeDone\0OCC::AccountState*\0account\0"
    "success\0slotAccountStateChanged\0"
    "slotScheduleAppRestart\0slotSyncOnceFileUnlocks\0"
    "path\0slotScheduleETagJob\0alias\0"
    "OCC::RequestEtagJob*\0job\0"
    "slotWipeFolderForAccount\0accountState\0"
    "forceSyncForFolder\0folder\0removeE2eFiles\0"
    "OCC::AccountPtr\0slotFolderSyncPaused\0"
    "paused\0slotFolderCanSyncChanged\0"
    "slotFolderSyncStarted\0slotFolderSyncFinished\0"
    "OCC::SyncResult\0slotRunOneEtagJob\0"
    "slotEtagJobDestroyed\0slotStartScheduledFolderSync\0"
    "slotEtagPollTimerTimeout\0slotAccountRemoved\0"
    "slotRemoveFoldersForAccount\0"
    "slotForwardFolderSyncStateChange\0"
    "slotServerVersionChanged\0OCC::Account*\0"
    "slotWatchedFileUnlocked\0"
    "slotScheduleFolderByTime\0"
    "slotSetupPushNotifications\0"
    "slotProcessFilesPushNotification\0"
    "slotConnectToPushNotifications"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__FolderMan[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  154,    2, 0x06 /* Public */,
       4,    0,  157,    2, 0x06 /* Public */,
       5,    1,  158,    2, 0x06 /* Public */,
       7,    2,  161,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  166,    2, 0x0a /* Public */,
      12,    0,  167,    2, 0x0a /* Public */,
      13,    1,  168,    2, 0x0a /* Public */,
      15,    2,  171,    2, 0x0a /* Public */,
      19,    1,  176,    2, 0x0a /* Public */,
      21,    1,  179,    2, 0x0a /* Public */,
      23,    1,  182,    2, 0x0a /* Public */,
      25,    2,  185,    2, 0x08 /* Private */,
      27,    0,  190,    2, 0x08 /* Private */,
      28,    0,  191,    2, 0x08 /* Private */,
      29,    1,  192,    2, 0x08 /* Private */,
      31,    0,  195,    2, 0x08 /* Private */,
      32,    1,  196,    2, 0x08 /* Private */,
      33,    0,  199,    2, 0x08 /* Private */,
      34,    0,  200,    2, 0x08 /* Private */,
      35,    1,  201,    2, 0x08 /* Private */,
      36,    1,  204,    2, 0x08 /* Private */,
      37,    0,  207,    2, 0x08 /* Private */,
      38,    1,  208,    2, 0x08 /* Private */,
      40,    1,  211,    2, 0x08 /* Private */,
      41,    0,  214,    2, 0x08 /* Private */,
      42,    1,  215,    2, 0x08 /* Private */,
      43,    1,  218,    2, 0x08 /* Private */,
      44,    1,  221,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17,   16,   18,
    QMetaType::Void, 0x80000000 | 8,   20,
    QMetaType::Void, 0x80000000 | 3,   22,
    QMetaType::Void, 0x80000000 | 24,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,   20,
    QMetaType::Void, 0x80000000 | 8,   20,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 39,    9,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 39,    9,
    QMetaType::Void, 0x80000000 | 39,    9,

       0        // eod
};

void OCC::FolderMan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderMan *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->folderSyncStateChange((*reinterpret_cast< OCC::Folder*(*)>(_a[1]))); break;
        case 1: _t->scheduleQueueChanged(); break;
        case 2: _t->folderListChanged((*reinterpret_cast< const OCC::Folder::Map(*)>(_a[1]))); break;
        case 3: _t->wipeDone((*reinterpret_cast< OCC::AccountState*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->slotAccountStateChanged(); break;
        case 5: _t->slotScheduleAppRestart(); break;
        case 6: _t->slotSyncOnceFileUnlocks((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->slotScheduleETagJob((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::RequestEtagJob*(*)>(_a[2]))); break;
        case 8: _t->slotWipeFolderForAccount((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 9: _t->forceSyncForFolder((*reinterpret_cast< OCC::Folder*(*)>(_a[1]))); break;
        case 10: _t->removeE2eFiles((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1]))); break;
        case 11: _t->slotFolderSyncPaused((*reinterpret_cast< OCC::Folder*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->slotFolderCanSyncChanged(); break;
        case 13: _t->slotFolderSyncStarted(); break;
        case 14: _t->slotFolderSyncFinished((*reinterpret_cast< const OCC::SyncResult(*)>(_a[1]))); break;
        case 15: _t->slotRunOneEtagJob(); break;
        case 16: _t->slotEtagJobDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 17: _t->slotStartScheduledFolderSync(); break;
        case 18: _t->slotEtagPollTimerTimeout(); break;
        case 19: _t->slotAccountRemoved((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 20: _t->slotRemoveFoldersForAccount((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 21: _t->slotForwardFolderSyncStateChange(); break;
        case 22: _t->slotServerVersionChanged((*reinterpret_cast< OCC::Account*(*)>(_a[1]))); break;
        case 23: _t->slotWatchedFileUnlocked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->slotScheduleFolderByTime(); break;
        case 25: _t->slotSetupPushNotifications((*reinterpret_cast< const OCC::Folder::Map(*)>(_a[1]))); break;
        case 26: _t->slotProcessFilesPushNotification((*reinterpret_cast< OCC::Account*(*)>(_a[1]))); break;
        case 27: _t->slotConnectToPushNotifications((*reinterpret_cast< OCC::Account*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Folder* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::RequestEtagJob* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Folder* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Folder* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FolderMan::*)(OCC::Folder * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderMan::folderSyncStateChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FolderMan::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderMan::scheduleQueueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FolderMan::*)(const OCC::Folder::Map & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderMan::folderListChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FolderMan::*)(OCC::AccountState * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderMan::wipeDone)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::FolderMan::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__FolderMan.data,
    qt_meta_data_OCC__FolderMan,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::FolderMan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderMan::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__FolderMan.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::FolderMan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void OCC::FolderMan::folderSyncStateChange(OCC::Folder * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::FolderMan::scheduleQueueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::FolderMan::folderListChanged(const OCC::Folder::Map & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::FolderMan::wipeDone(OCC::AccountState * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
