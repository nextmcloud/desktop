/****************************************************************************
** Meta object code from reading C++ file 'folder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/folder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__Folder_t {
    QByteArrayData data[81];
    char stringdata0[1333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__Folder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__Folder_t qt_meta_stringdata_OCC__Folder = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OCC::Folder"
QT_MOC_LITERAL(1, 12, 15), // "syncStateChange"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "syncStarted"
QT_MOC_LITERAL(4, 41, 12), // "syncFinished"
QT_MOC_LITERAL(5, 54, 15), // "OCC::SyncResult"
QT_MOC_LITERAL(6, 70, 6), // "result"
QT_MOC_LITERAL(7, 77, 12), // "progressInfo"
QT_MOC_LITERAL(8, 90, 17), // "OCC::ProgressInfo"
QT_MOC_LITERAL(9, 108, 8), // "progress"
QT_MOC_LITERAL(10, 117, 22), // "newBigFolderDiscovered"
QT_MOC_LITERAL(11, 140, 17), // "syncPausedChanged"
QT_MOC_LITERAL(12, 158, 12), // "OCC::Folder*"
QT_MOC_LITERAL(13, 171, 6), // "paused"
QT_MOC_LITERAL(14, 178, 14), // "canSyncChanged"
QT_MOC_LITERAL(15, 193, 28), // "watchedFileChangedExternally"
QT_MOC_LITERAL(16, 222, 4), // "path"
QT_MOC_LITERAL(17, 227, 17), // "slotTerminateSync"
QT_MOC_LITERAL(18, 245, 25), // "slotAboutToRemoveAllFiles"
QT_MOC_LITERAL(19, 271, 28), // "OCC::SyncFileItem::Direction"
QT_MOC_LITERAL(20, 300, 25), // "std::function<void(bool)>"
QT_MOC_LITERAL(21, 326, 8), // "callback"
QT_MOC_LITERAL(22, 335, 9), // "startSync"
QT_MOC_LITERAL(23, 345, 8), // "pathList"
QT_MOC_LITERAL(24, 354, 27), // "slotDiscardDownloadProgress"
QT_MOC_LITERAL(25, 382, 17), // "downloadInfoCount"
QT_MOC_LITERAL(26, 400, 22), // "slotWipeErrorBlacklist"
QT_MOC_LITERAL(27, 423, 24), // "errorBlackListEntryCount"
QT_MOC_LITERAL(28, 448, 22), // "slotWatchedPathChanged"
QT_MOC_LITERAL(29, 471, 25), // "OCC::Folder::ChangeReason"
QT_MOC_LITERAL(30, 497, 6), // "reason"
QT_MOC_LITERAL(31, 504, 21), // "slotFilesLockReleased"
QT_MOC_LITERAL(32, 526, 13), // "QSet<QString>"
QT_MOC_LITERAL(33, 540, 5), // "files"
QT_MOC_LITERAL(34, 546, 21), // "implicitlyHydrateFile"
QT_MOC_LITERAL(35, 568, 12), // "relativepath"
QT_MOC_LITERAL(36, 581, 29), // "schedulePathForLocalDiscovery"
QT_MOC_LITERAL(37, 611, 12), // "relativePath"
QT_MOC_LITERAL(38, 624, 30), // "slotNextSyncFullLocalDiscovery"
QT_MOC_LITERAL(39, 655, 29), // "setSilenceErrorsUntilNextSync"
QT_MOC_LITERAL(40, 685, 13), // "silenceErrors"
QT_MOC_LITERAL(41, 699, 19), // "removeLocalE2eFiles"
QT_MOC_LITERAL(42, 719, 15), // "slotSyncStarted"
QT_MOC_LITERAL(43, 735, 16), // "slotSyncFinished"
QT_MOC_LITERAL(44, 752, 13), // "slotSyncError"
QT_MOC_LITERAL(45, 766, 7), // "message"
QT_MOC_LITERAL(46, 774, 18), // "OCC::ErrorCategory"
QT_MOC_LITERAL(47, 793, 8), // "category"
QT_MOC_LITERAL(48, 802, 17), // "slotAddErrorToGui"
QT_MOC_LITERAL(49, 820, 25), // "OCC::SyncFileItem::Status"
QT_MOC_LITERAL(50, 846, 6), // "status"
QT_MOC_LITERAL(51, 853, 12), // "errorMessage"
QT_MOC_LITERAL(52, 866, 7), // "subject"
QT_MOC_LITERAL(53, 874, 24), // "slotTransmissionProgress"
QT_MOC_LITERAL(54, 899, 2), // "pi"
QT_MOC_LITERAL(55, 902, 17), // "slotItemCompleted"
QT_MOC_LITERAL(56, 920, 20), // "OCC::SyncFileItemPtr"
QT_MOC_LITERAL(57, 941, 14), // "slotRunEtagJob"
QT_MOC_LITERAL(58, 956, 13), // "etagRetrieved"
QT_MOC_LITERAL(59, 970, 2), // "tp"
QT_MOC_LITERAL(60, 973, 27), // "etagRetrievedFromSyncEngine"
QT_MOC_LITERAL(61, 1001, 4), // "time"
QT_MOC_LITERAL(62, 1006, 23), // "slotEmitFinishedDelayed"
QT_MOC_LITERAL(63, 1030, 26), // "slotNewBigFolderDiscovered"
QT_MOC_LITERAL(64, 1057, 10), // "isExternal"
QT_MOC_LITERAL(65, 1068, 23), // "slotLogPropagationStart"
QT_MOC_LITERAL(66, 1092, 22), // "slotScheduleThisFolder"
QT_MOC_LITERAL(67, 1115, 19), // "slotFolderConflicts"
QT_MOC_LITERAL(68, 1135, 6), // "folder"
QT_MOC_LITERAL(69, 1142, 13), // "conflictPaths"
QT_MOC_LITERAL(70, 1156, 21), // "warnOnNewExcludedItem"
QT_MOC_LITERAL(71, 1178, 26), // "OCC::SyncJournalFileRecord"
QT_MOC_LITERAL(72, 1205, 6), // "record"
QT_MOC_LITERAL(73, 1212, 10), // "QStringRef"
QT_MOC_LITERAL(74, 1223, 21), // "slotWatcherUnreliable"
QT_MOC_LITERAL(75, 1245, 19), // "slotHydrationStarts"
QT_MOC_LITERAL(76, 1265, 17), // "slotHydrationDone"
QT_MOC_LITERAL(77, 1283, 23), // "slotCapabilitiesChanged"
QT_MOC_LITERAL(78, 1307, 12), // "ChangeReason"
QT_MOC_LITERAL(79, 1320, 5), // "Other"
QT_MOC_LITERAL(80, 1326, 6) // "UnLock"

    },
    "OCC::Folder\0syncStateChange\0\0syncStarted\0"
    "syncFinished\0OCC::SyncResult\0result\0"
    "progressInfo\0OCC::ProgressInfo\0progress\0"
    "newBigFolderDiscovered\0syncPausedChanged\0"
    "OCC::Folder*\0paused\0canSyncChanged\0"
    "watchedFileChangedExternally\0path\0"
    "slotTerminateSync\0slotAboutToRemoveAllFiles\0"
    "OCC::SyncFileItem::Direction\0"
    "std::function<void(bool)>\0callback\0"
    "startSync\0pathList\0slotDiscardDownloadProgress\0"
    "downloadInfoCount\0slotWipeErrorBlacklist\0"
    "errorBlackListEntryCount\0"
    "slotWatchedPathChanged\0OCC::Folder::ChangeReason\0"
    "reason\0slotFilesLockReleased\0QSet<QString>\0"
    "files\0implicitlyHydrateFile\0relativepath\0"
    "schedulePathForLocalDiscovery\0"
    "relativePath\0slotNextSyncFullLocalDiscovery\0"
    "setSilenceErrorsUntilNextSync\0"
    "silenceErrors\0removeLocalE2eFiles\0"
    "slotSyncStarted\0slotSyncFinished\0"
    "slotSyncError\0message\0OCC::ErrorCategory\0"
    "category\0slotAddErrorToGui\0"
    "OCC::SyncFileItem::Status\0status\0"
    "errorMessage\0subject\0slotTransmissionProgress\0"
    "pi\0slotItemCompleted\0OCC::SyncFileItemPtr\0"
    "slotRunEtagJob\0etagRetrieved\0tp\0"
    "etagRetrievedFromSyncEngine\0time\0"
    "slotEmitFinishedDelayed\0"
    "slotNewBigFolderDiscovered\0isExternal\0"
    "slotLogPropagationStart\0slotScheduleThisFolder\0"
    "slotFolderConflicts\0folder\0conflictPaths\0"
    "warnOnNewExcludedItem\0OCC::SyncJournalFileRecord\0"
    "record\0QStringRef\0slotWatcherUnreliable\0"
    "slotHydrationStarts\0slotHydrationDone\0"
    "slotCapabilitiesChanged\0ChangeReason\0"
    "Other\0UnLock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__Folder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       1,  352, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  234,    2, 0x06 /* Public */,
       3,    0,  235,    2, 0x06 /* Public */,
       4,    1,  236,    2, 0x06 /* Public */,
       7,    1,  239,    2, 0x06 /* Public */,
      10,    1,  242,    2, 0x06 /* Public */,
      11,    2,  245,    2, 0x06 /* Public */,
      14,    0,  250,    2, 0x06 /* Public */,
      15,    1,  251,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  254,    2, 0x0a /* Public */,
      18,    2,  255,    2, 0x0a /* Public */,
      22,    1,  260,    2, 0x0a /* Public */,
      22,    0,  263,    2, 0x2a /* Public | MethodCloned */,
      24,    0,  264,    2, 0x0a /* Public */,
      25,    0,  265,    2, 0x0a /* Public */,
      26,    0,  266,    2, 0x0a /* Public */,
      27,    0,  267,    2, 0x0a /* Public */,
      28,    2,  268,    2, 0x0a /* Public */,
      31,    1,  273,    2, 0x0a /* Public */,
      34,    1,  276,    2, 0x0a /* Public */,
      36,    1,  279,    2, 0x0a /* Public */,
      38,    0,  282,    2, 0x0a /* Public */,
      39,    1,  283,    2, 0x0a /* Public */,
      41,    0,  286,    2, 0x0a /* Public */,
      42,    0,  287,    2, 0x08 /* Private */,
      43,    1,  288,    2, 0x08 /* Private */,
      44,    2,  291,    2, 0x08 /* Private */,
      44,    1,  296,    2, 0x28 /* Private | MethodCloned */,
      48,    3,  299,    2, 0x08 /* Private */,
      48,    2,  306,    2, 0x28 /* Private | MethodCloned */,
      53,    1,  311,    2, 0x08 /* Private */,
      55,    1,  314,    2, 0x08 /* Private */,
      57,    0,  317,    2, 0x08 /* Private */,
      58,    2,  318,    2, 0x08 /* Private */,
      60,    2,  323,    2, 0x08 /* Private */,
      62,    0,  328,    2, 0x08 /* Private */,
      63,    2,  329,    2, 0x08 /* Private */,
      65,    0,  334,    2, 0x08 /* Private */,
      66,    0,  335,    2, 0x08 /* Private */,
      67,    2,  336,    2, 0x08 /* Private */,
      70,    2,  341,    2, 0x08 /* Private */,
      74,    1,  346,    2, 0x08 /* Private */,
      75,    0,  349,    2, 0x08 /* Private */,
      76,    0,  350,    2, 0x08 /* Private */,
      77,    0,  351,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Bool,    2,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 20,    2,   21,
    QMetaType::Void, QMetaType::QStringList,   23,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 29,   16,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 46,   45,   47,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void, 0x80000000 | 49, QMetaType::QString, QMetaType::QString,   50,   51,   52,
    QMetaType::Void, 0x80000000 | 49, QMetaType::QString,   50,   51,
    QMetaType::Void, 0x80000000 | 8,   54,
    QMetaType::Void, 0x80000000 | 56,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QDateTime,    2,   59,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QDateTime,    2,   61,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   68,   69,
    QMetaType::Void, 0x80000000 | 71, 0x80000000 | 73,   72,   16,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      78,   78, 0x2,    2,  357,

 // enum data: key, value
      79, uint(OCC::Folder::ChangeReason::Other),
      80, uint(OCC::Folder::ChangeReason::UnLock),

       0        // eod
};

void OCC::Folder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Folder *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->syncStateChange(); break;
        case 1: _t->syncStarted(); break;
        case 2: _t->syncFinished((*reinterpret_cast< const OCC::SyncResult(*)>(_a[1]))); break;
        case 3: _t->progressInfo((*reinterpret_cast< const OCC::ProgressInfo(*)>(_a[1]))); break;
        case 4: _t->newBigFolderDiscovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->syncPausedChanged((*reinterpret_cast< OCC::Folder*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->canSyncChanged(); break;
        case 7: _t->watchedFileChangedExternally((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->slotTerminateSync(); break;
        case 9: _t->slotAboutToRemoveAllFiles((*reinterpret_cast< OCC::SyncFileItem::Direction(*)>(_a[1])),(*reinterpret_cast< std::function<void(bool)>(*)>(_a[2]))); break;
        case 10: _t->startSync((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 11: _t->startSync(); break;
        case 12: { int _r = _t->slotDiscardDownloadProgress();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->downloadInfoCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->slotWipeErrorBlacklist();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->errorBlackListEntryCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->slotWatchedPathChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::Folder::ChangeReason(*)>(_a[2]))); break;
        case 17: _t->slotFilesLockReleased((*reinterpret_cast< const QSet<QString>(*)>(_a[1]))); break;
        case 18: _t->implicitlyHydrateFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->schedulePathForLocalDiscovery((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->slotNextSyncFullLocalDiscovery(); break;
        case 21: _t->setSilenceErrorsUntilNextSync((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->removeLocalE2eFiles(); break;
        case 23: _t->slotSyncStarted(); break;
        case 24: _t->slotSyncFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->slotSyncError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::ErrorCategory(*)>(_a[2]))); break;
        case 26: _t->slotSyncError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->slotAddErrorToGui((*reinterpret_cast< OCC::SyncFileItem::Status(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 28: _t->slotAddErrorToGui((*reinterpret_cast< OCC::SyncFileItem::Status(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: _t->slotTransmissionProgress((*reinterpret_cast< const OCC::ProgressInfo(*)>(_a[1]))); break;
        case 30: _t->slotItemCompleted((*reinterpret_cast< const OCC::SyncFileItemPtr(*)>(_a[1]))); break;
        case 31: _t->slotRunEtagJob(); break;
        case 32: _t->etagRetrieved((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 33: _t->etagRetrievedFromSyncEngine((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 34: _t->slotEmitFinishedDelayed(); break;
        case 35: _t->slotNewBigFolderDiscovered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 36: _t->slotLogPropagationStart(); break;
        case 37: _t->slotScheduleThisFolder(); break;
        case 38: _t->slotFolderConflicts((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 39: _t->warnOnNewExcludedItem((*reinterpret_cast< const OCC::SyncJournalFileRecord(*)>(_a[1])),(*reinterpret_cast< const QStringRef(*)>(_a[2]))); break;
        case 40: _t->slotWatcherUnreliable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: _t->slotHydrationStarts(); break;
        case 42: _t->slotHydrationDone(); break;
        case 43: _t->slotCapabilitiesChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Folder* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QString> >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Folder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Folder::syncStateChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Folder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Folder::syncStarted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Folder::*)(const OCC::SyncResult & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Folder::syncFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Folder::*)(const OCC::ProgressInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Folder::progressInfo)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Folder::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Folder::newBigFolderDiscovered)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Folder::*)(OCC::Folder * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Folder::syncPausedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Folder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Folder::canSyncChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Folder::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Folder::watchedFileChangedExternally)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::Folder::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__Folder.data,
    qt_meta_data_OCC__Folder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::Folder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Folder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__Folder.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::Folder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void OCC::Folder::syncStateChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::Folder::syncStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::Folder::syncFinished(const OCC::SyncResult & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::Folder::progressInfo(const OCC::ProgressInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::Folder::newBigFolderDiscovered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::Folder::syncPausedChanged(OCC::Folder * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OCC::Folder::canSyncChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OCC::Folder::watchedFileChangedExternally(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
