/****************************************************************************
** Meta object code from reading C++ file 'syncengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/syncengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__SyncEngine_t {
    QByteArrayData data[77];
    char stringdata0[1216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SyncEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SyncEngine_t qt_meta_stringdata_OCC__SyncEngine = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OCC::SyncEngine"
QT_MOC_LITERAL(1, 16, 8), // "rootEtag"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "aboutToPropagate"
QT_MOC_LITERAL(4, 43, 24), // "OCC::SyncFileItemVector&"
QT_MOC_LITERAL(5, 68, 13), // "itemCompleted"
QT_MOC_LITERAL(6, 82, 20), // "OCC::SyncFileItemPtr"
QT_MOC_LITERAL(7, 103, 20), // "transmissionProgress"
QT_MOC_LITERAL(8, 124, 17), // "OCC::ProgressInfo"
QT_MOC_LITERAL(9, 142, 8), // "progress"
QT_MOC_LITERAL(10, 151, 14), // "itemDiscovered"
QT_MOC_LITERAL(11, 166, 9), // "syncError"
QT_MOC_LITERAL(12, 176, 7), // "message"
QT_MOC_LITERAL(13, 184, 18), // "OCC::ErrorCategory"
QT_MOC_LITERAL(14, 203, 8), // "category"
QT_MOC_LITERAL(15, 212, 13), // "addErrorToGui"
QT_MOC_LITERAL(16, 226, 25), // "OCC::SyncFileItem::Status"
QT_MOC_LITERAL(17, 252, 6), // "status"
QT_MOC_LITERAL(18, 259, 12), // "errorMessage"
QT_MOC_LITERAL(19, 272, 7), // "subject"
QT_MOC_LITERAL(20, 280, 8), // "finished"
QT_MOC_LITERAL(21, 289, 7), // "success"
QT_MOC_LITERAL(22, 297, 7), // "started"
QT_MOC_LITERAL(23, 305, 21), // "aboutToRemoveAllFiles"
QT_MOC_LITERAL(24, 327, 28), // "OCC::SyncFileItem::Direction"
QT_MOC_LITERAL(25, 356, 9), // "direction"
QT_MOC_LITERAL(26, 366, 25), // "std::function<void(bool)>"
QT_MOC_LITERAL(27, 392, 1), // "f"
QT_MOC_LITERAL(28, 394, 12), // "newBigFolder"
QT_MOC_LITERAL(29, 407, 6), // "folder"
QT_MOC_LITERAL(30, 414, 10), // "isExternal"
QT_MOC_LITERAL(31, 425, 14), // "seenLockedFile"
QT_MOC_LITERAL(32, 440, 8), // "fileName"
QT_MOC_LITERAL(33, 449, 29), // "setSingleItemDiscoveryOptions"
QT_MOC_LITERAL(34, 479, 43), // "OCC::SyncEngine::SingleItemDi..."
QT_MOC_LITERAL(35, 523, 26), // "singleItemDiscoveryOptions"
QT_MOC_LITERAL(36, 550, 9), // "startSync"
QT_MOC_LITERAL(37, 560, 5), // "abort"
QT_MOC_LITERAL(38, 566, 16), // "setNetworkLimits"
QT_MOC_LITERAL(39, 583, 6), // "upload"
QT_MOC_LITERAL(40, 590, 8), // "download"
QT_MOC_LITERAL(41, 599, 14), // "setSyncOptions"
QT_MOC_LITERAL(42, 614, 16), // "OCC::SyncOptions"
QT_MOC_LITERAL(43, 631, 7), // "options"
QT_MOC_LITERAL(44, 639, 20), // "setIgnoreHiddenFiles"
QT_MOC_LITERAL(45, 660, 6), // "ignore"
QT_MOC_LITERAL(46, 667, 24), // "setLocalDiscoveryOptions"
QT_MOC_LITERAL(47, 692, 24), // "OCC::LocalDiscoveryStyle"
QT_MOC_LITERAL(48, 717, 5), // "style"
QT_MOC_LITERAL(49, 723, 17), // "std::set<QString>"
QT_MOC_LITERAL(50, 741, 5), // "paths"
QT_MOC_LITERAL(51, 747, 26), // "addAcceptedInvalidFileName"
QT_MOC_LITERAL(52, 774, 8), // "filePath"
QT_MOC_LITERAL(53, 783, 20), // "slotFolderDiscovered"
QT_MOC_LITERAL(54, 804, 5), // "local"
QT_MOC_LITERAL(55, 810, 20), // "slotRootEtagReceived"
QT_MOC_LITERAL(56, 831, 4), // "time"
QT_MOC_LITERAL(57, 836, 18), // "slotItemDiscovered"
QT_MOC_LITERAL(58, 855, 4), // "item"
QT_MOC_LITERAL(59, 860, 11), // "slotNewItem"
QT_MOC_LITERAL(60, 872, 17), // "slotItemCompleted"
QT_MOC_LITERAL(61, 890, 21), // "slotDiscoveryFinished"
QT_MOC_LITERAL(62, 912, 23), // "slotPropagationFinished"
QT_MOC_LITERAL(63, 936, 12), // "slotProgress"
QT_MOC_LITERAL(64, 949, 17), // "OCC::SyncFileItem"
QT_MOC_LITERAL(65, 967, 6), // "curent"
QT_MOC_LITERAL(66, 974, 24), // "slotCleanPollsJobAborted"
QT_MOC_LITERAL(67, 999, 5), // "error"
QT_MOC_LITERAL(68, 1005, 18), // "slotAddTouchedFile"
QT_MOC_LITERAL(69, 1024, 2), // "fn"
QT_MOC_LITERAL(70, 1027, 21), // "slotClearTouchedFiles"
QT_MOC_LITERAL(71, 1049, 16), // "slotSummaryError"
QT_MOC_LITERAL(72, 1066, 28), // "slotInsufficientLocalStorage"
QT_MOC_LITERAL(73, 1095, 29), // "slotInsufficientRemoteStorage"
QT_MOC_LITERAL(74, 1125, 28), // "slotScheduleFilesDelayedSync"
QT_MOC_LITERAL(75, 1154, 30), // "slotUnscheduleFilesDelayedSync"
QT_MOC_LITERAL(76, 1185, 30) // "slotCleanupScheduledSyncTimers"

    },
    "OCC::SyncEngine\0rootEtag\0\0aboutToPropagate\0"
    "OCC::SyncFileItemVector&\0itemCompleted\0"
    "OCC::SyncFileItemPtr\0transmissionProgress\0"
    "OCC::ProgressInfo\0progress\0itemDiscovered\0"
    "syncError\0message\0OCC::ErrorCategory\0"
    "category\0addErrorToGui\0OCC::SyncFileItem::Status\0"
    "status\0errorMessage\0subject\0finished\0"
    "success\0started\0aboutToRemoveAllFiles\0"
    "OCC::SyncFileItem::Direction\0direction\0"
    "std::function<void(bool)>\0f\0newBigFolder\0"
    "folder\0isExternal\0seenLockedFile\0"
    "fileName\0setSingleItemDiscoveryOptions\0"
    "OCC::SyncEngine::SingleItemDiscoveryOptions\0"
    "singleItemDiscoveryOptions\0startSync\0"
    "abort\0setNetworkLimits\0upload\0download\0"
    "setSyncOptions\0OCC::SyncOptions\0options\0"
    "setIgnoreHiddenFiles\0ignore\0"
    "setLocalDiscoveryOptions\0"
    "OCC::LocalDiscoveryStyle\0style\0"
    "std::set<QString>\0paths\0"
    "addAcceptedInvalidFileName\0filePath\0"
    "slotFolderDiscovered\0local\0"
    "slotRootEtagReceived\0time\0slotItemDiscovered\0"
    "item\0slotNewItem\0slotItemCompleted\0"
    "slotDiscoveryFinished\0slotPropagationFinished\0"
    "slotProgress\0OCC::SyncFileItem\0curent\0"
    "slotCleanPollsJobAborted\0error\0"
    "slotAddTouchedFile\0fn\0slotClearTouchedFiles\0"
    "slotSummaryError\0slotInsufficientLocalStorage\0"
    "slotInsufficientRemoteStorage\0"
    "slotScheduleFilesDelayedSync\0"
    "slotUnscheduleFilesDelayedSync\0"
    "slotCleanupScheduledSyncTimers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SyncEngine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  209,    2, 0x06 /* Public */,
       3,    1,  214,    2, 0x06 /* Public */,
       5,    1,  217,    2, 0x06 /* Public */,
       7,    1,  220,    2, 0x06 /* Public */,
      10,    1,  223,    2, 0x06 /* Public */,
      11,    2,  226,    2, 0x06 /* Public */,
      11,    1,  231,    2, 0x26 /* Public | MethodCloned */,
      15,    3,  234,    2, 0x06 /* Public */,
      20,    1,  241,    2, 0x06 /* Public */,
      22,    0,  244,    2, 0x06 /* Public */,
      23,    2,  245,    2, 0x06 /* Public */,
      28,    2,  250,    2, 0x06 /* Public */,
      31,    1,  255,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      33,    1,  258,    2, 0x0a /* Public */,
      36,    0,  261,    2, 0x0a /* Public */,
      37,    0,  262,    2, 0x0a /* Public */,
      38,    2,  263,    2, 0x0a /* Public */,
      41,    1,  268,    2, 0x0a /* Public */,
      44,    1,  271,    2, 0x0a /* Public */,
      46,    2,  274,    2, 0x0a /* Public */,
      46,    1,  279,    2, 0x2a /* Public | MethodCloned */,
      51,    1,  282,    2, 0x0a /* Public */,
      53,    2,  285,    2, 0x08 /* Private */,
      55,    2,  290,    2, 0x08 /* Private */,
      57,    1,  295,    2, 0x08 /* Private */,
      59,    1,  298,    2, 0x08 /* Private */,
      60,    1,  301,    2, 0x08 /* Private */,
      61,    0,  304,    2, 0x08 /* Private */,
      62,    1,  305,    2, 0x08 /* Private */,
      63,    2,  308,    2, 0x08 /* Private */,
      66,    1,  313,    2, 0x08 /* Private */,
      68,    1,  316,    2, 0x08 /* Private */,
      70,    0,  319,    2, 0x08 /* Private */,
      71,    1,  320,    2, 0x08 /* Private */,
      72,    0,  323,    2, 0x08 /* Private */,
      73,    0,  324,    2, 0x08 /* Private */,
      74,    0,  325,    2, 0x08 /* Private */,
      75,    0,  326,    2, 0x08 /* Private */,
      76,    0,  327,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QDateTime,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13,   12,   14,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QString, QMetaType::QString,   17,   18,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   29,   30,
    QMetaType::Void, QMetaType::QString,   32,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   39,   40,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, 0x80000000 | 47, 0x80000000 | 49,   48,   50,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   54,   29,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QDateTime,    2,   56,
    QMetaType::Void, 0x80000000 | 6,   58,
    QMetaType::Void, 0x80000000 | 6,   58,
    QMetaType::Void, 0x80000000 | 6,   58,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, 0x80000000 | 64, QMetaType::LongLong,   58,   65,
    QMetaType::Void, QMetaType::QString,   67,
    QMetaType::Void, QMetaType::QString,   69,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::SyncEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SyncEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rootEtag((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 1: _t->aboutToPropagate((*reinterpret_cast< OCC::SyncFileItemVector(*)>(_a[1]))); break;
        case 2: _t->itemCompleted((*reinterpret_cast< const OCC::SyncFileItemPtr(*)>(_a[1]))); break;
        case 3: _t->transmissionProgress((*reinterpret_cast< const OCC::ProgressInfo(*)>(_a[1]))); break;
        case 4: _t->itemDiscovered((*reinterpret_cast< const OCC::SyncFileItemPtr(*)>(_a[1]))); break;
        case 5: _t->syncError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::ErrorCategory(*)>(_a[2]))); break;
        case 6: _t->syncError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->addErrorToGui((*reinterpret_cast< OCC::SyncFileItem::Status(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->started(); break;
        case 10: _t->aboutToRemoveAllFiles((*reinterpret_cast< OCC::SyncFileItem::Direction(*)>(_a[1])),(*reinterpret_cast< std::function<void(bool)>(*)>(_a[2]))); break;
        case 11: _t->newBigFolder((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->seenLockedFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setSingleItemDiscoveryOptions((*reinterpret_cast< const OCC::SyncEngine::SingleItemDiscoveryOptions(*)>(_a[1]))); break;
        case 14: _t->startSync(); break;
        case 15: _t->abort(); break;
        case 16: _t->setNetworkLimits((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->setSyncOptions((*reinterpret_cast< const OCC::SyncOptions(*)>(_a[1]))); break;
        case 18: _t->setIgnoreHiddenFiles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->setLocalDiscoveryOptions((*reinterpret_cast< OCC::LocalDiscoveryStyle(*)>(_a[1])),(*reinterpret_cast< std::set<QString>(*)>(_a[2]))); break;
        case 20: _t->setLocalDiscoveryOptions((*reinterpret_cast< OCC::LocalDiscoveryStyle(*)>(_a[1]))); break;
        case 21: _t->addAcceptedInvalidFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->slotFolderDiscovered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 23: _t->slotRootEtagReceived((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 24: _t->slotItemDiscovered((*reinterpret_cast< const OCC::SyncFileItemPtr(*)>(_a[1]))); break;
        case 25: _t->slotNewItem((*reinterpret_cast< const OCC::SyncFileItemPtr(*)>(_a[1]))); break;
        case 26: _t->slotItemCompleted((*reinterpret_cast< const OCC::SyncFileItemPtr(*)>(_a[1]))); break;
        case 27: _t->slotDiscoveryFinished(); break;
        case 28: _t->slotPropagationFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->slotProgress((*reinterpret_cast< const OCC::SyncFileItem(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 30: _t->slotCleanPollsJobAborted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->slotAddTouchedFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->slotClearTouchedFiles(); break;
        case 33: _t->slotSummaryError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->slotInsufficientLocalStorage(); break;
        case 35: _t->slotInsufficientRemoteStorage(); break;
        case 36: _t->slotScheduleFilesDelayedSync(); break;
        case 37: _t->slotUnscheduleFilesDelayedSync(); break;
        case 38: _t->slotCleanupScheduledSyncTimers(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItem >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SyncEngine::*)(const QByteArray & , const QDateTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncEngine::rootEtag)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(OCC::SyncFileItemVector & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncEngine::aboutToPropagate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const OCC::SyncFileItemPtr & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncEngine::itemCompleted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const OCC::ProgressInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncEngine::transmissionProgress)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const OCC::SyncFileItemPtr & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncEngine::itemDiscovered)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const QString & , OCC::ErrorCategory );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncEngine::syncError)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(OCC::SyncFileItem::Status , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncEngine::addErrorToGui)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncEngine::finished)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncEngine::started)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(OCC::SyncFileItem::Direction , std::function<void(bool)> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncEngine::aboutToRemoveAllFiles)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncEngine::newBigFolder)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncEngine::seenLockedFile)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::SyncEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__SyncEngine.data,
    qt_meta_data_OCC__SyncEngine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::SyncEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SyncEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SyncEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::SyncEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void OCC::SyncEngine::rootEtag(const QByteArray & _t1, const QDateTime & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::SyncEngine::aboutToPropagate(OCC::SyncFileItemVector & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::SyncEngine::itemCompleted(const OCC::SyncFileItemPtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::SyncEngine::transmissionProgress(const OCC::ProgressInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::SyncEngine::itemDiscovered(const OCC::SyncFileItemPtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::SyncEngine::syncError(const QString & _t1, OCC::ErrorCategory _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 7
void OCC::SyncEngine::addErrorToGui(OCC::SyncFileItem::Status _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OCC::SyncEngine::finished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void OCC::SyncEngine::started()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void OCC::SyncEngine::aboutToRemoveAllFiles(OCC::SyncFileItem::Direction _t1, std::function<void(bool)> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void OCC::SyncEngine::newBigFolder(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void OCC::SyncEngine::seenLockedFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
