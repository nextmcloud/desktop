/****************************************************************************
** Meta object code from reading C++ file 'socketapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/socketapi/socketapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__SocketApi_t {
    QByteArrayData data[60];
    char stringdata0[1104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SocketApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SocketApi_t qt_meta_stringdata_OCC__SocketApi = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OCC::SocketApi"
QT_MOC_LITERAL(1, 15, 20), // "shareCommandReceived"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 9), // "localPath"
QT_MOC_LITERAL(4, 47, 27), // "fileActivityCommandReceived"
QT_MOC_LITERAL(5, 75, 20), // "slotUpdateFolderView"
QT_MOC_LITERAL(6, 96, 12), // "OCC::Folder*"
QT_MOC_LITERAL(7, 109, 1), // "f"
QT_MOC_LITERAL(8, 111, 18), // "slotUnregisterPath"
QT_MOC_LITERAL(9, 130, 5), // "alias"
QT_MOC_LITERAL(10, 136, 16), // "slotRegisterPath"
QT_MOC_LITERAL(11, 153, 26), // "broadcastStatusPushMessage"
QT_MOC_LITERAL(12, 180, 10), // "systemPath"
QT_MOC_LITERAL(13, 191, 19), // "OCC::SyncFileStatus"
QT_MOC_LITERAL(14, 211, 10), // "fileStatus"
QT_MOC_LITERAL(15, 222, 17), // "slotNewConnection"
QT_MOC_LITERAL(16, 240, 16), // "onLostConnection"
QT_MOC_LITERAL(17, 257, 19), // "slotSocketDestroyed"
QT_MOC_LITERAL(18, 277, 3), // "obj"
QT_MOC_LITERAL(19, 281, 14), // "slotReadSocket"
QT_MOC_LITERAL(20, 296, 18), // "copyUrlToClipboard"
QT_MOC_LITERAL(21, 315, 4), // "link"
QT_MOC_LITERAL(22, 320, 16), // "emailPrivateLink"
QT_MOC_LITERAL(23, 337, 15), // "openPrivateLink"
QT_MOC_LITERAL(24, 353, 30), // "command_RETRIEVE_FOLDER_STATUS"
QT_MOC_LITERAL(25, 384, 8), // "argument"
QT_MOC_LITERAL(26, 393, 20), // "OCC::SocketListener*"
QT_MOC_LITERAL(27, 414, 8), // "listener"
QT_MOC_LITERAL(28, 423, 28), // "command_RETRIEVE_FILE_STATUS"
QT_MOC_LITERAL(29, 452, 15), // "command_VERSION"
QT_MOC_LITERAL(30, 468, 24), // "command_SHARE_MENU_TITLE"
QT_MOC_LITERAL(31, 493, 16), // "command_ACTIVITY"
QT_MOC_LITERAL(32, 510, 9), // "localFile"
QT_MOC_LITERAL(33, 520, 15), // "command_ENCRYPT"
QT_MOC_LITERAL(34, 536, 13), // "command_SHARE"
QT_MOC_LITERAL(35, 550, 18), // "command_LEAVESHARE"
QT_MOC_LITERAL(36, 569, 27), // "command_MANAGE_PUBLIC_LINKS"
QT_MOC_LITERAL(37, 597, 32), // "command_COPY_SECUREFILEDROP_LINK"
QT_MOC_LITERAL(38, 630, 24), // "command_COPY_PUBLIC_LINK"
QT_MOC_LITERAL(39, 655, 25), // "command_COPY_PRIVATE_LINK"
QT_MOC_LITERAL(40, 681, 26), // "command_EMAIL_PRIVATE_LINK"
QT_MOC_LITERAL(41, 708, 25), // "command_OPEN_PRIVATE_LINK"
QT_MOC_LITERAL(42, 734, 30), // "command_MAKE_AVAILABLE_LOCALLY"
QT_MOC_LITERAL(43, 765, 8), // "filesArg"
QT_MOC_LITERAL(44, 774, 24), // "command_MAKE_ONLINE_ONLY"
QT_MOC_LITERAL(45, 799, 24), // "command_RESOLVE_CONFLICT"
QT_MOC_LITERAL(46, 824, 19), // "command_DELETE_ITEM"
QT_MOC_LITERAL(47, 844, 17), // "command_MOVE_ITEM"
QT_MOC_LITERAL(48, 862, 17), // "command_LOCK_FILE"
QT_MOC_LITERAL(49, 880, 19), // "command_UNLOCK_FILE"
QT_MOC_LITERAL(50, 900, 18), // "command_COPYASPATH"
QT_MOC_LITERAL(51, 919, 21), // "command_OPENNEWWINDOW"
QT_MOC_LITERAL(52, 941, 12), // "command_OPEN"
QT_MOC_LITERAL(53, 954, 24), // "command_V2_LIST_ACCOUNTS"
QT_MOC_LITERAL(54, 979, 35), // "QSharedPointer<OCC::SocketApi..."
QT_MOC_LITERAL(55, 1015, 3), // "job"
QT_MOC_LITERAL(56, 1019, 28), // "command_V2_UPLOAD_FILES_FROM"
QT_MOC_LITERAL(57, 1048, 19), // "command_GET_STRINGS"
QT_MOC_LITERAL(58, 1068, 22), // "command_GET_MENU_ITEMS"
QT_MOC_LITERAL(59, 1091, 12) // "command_EDIT"

    },
    "OCC::SocketApi\0shareCommandReceived\0"
    "\0localPath\0fileActivityCommandReceived\0"
    "slotUpdateFolderView\0OCC::Folder*\0f\0"
    "slotUnregisterPath\0alias\0slotRegisterPath\0"
    "broadcastStatusPushMessage\0systemPath\0"
    "OCC::SyncFileStatus\0fileStatus\0"
    "slotNewConnection\0onLostConnection\0"
    "slotSocketDestroyed\0obj\0slotReadSocket\0"
    "copyUrlToClipboard\0link\0emailPrivateLink\0"
    "openPrivateLink\0command_RETRIEVE_FOLDER_STATUS\0"
    "argument\0OCC::SocketListener*\0listener\0"
    "command_RETRIEVE_FILE_STATUS\0"
    "command_VERSION\0command_SHARE_MENU_TITLE\0"
    "command_ACTIVITY\0localFile\0command_ENCRYPT\0"
    "command_SHARE\0command_LEAVESHARE\0"
    "command_MANAGE_PUBLIC_LINKS\0"
    "command_COPY_SECUREFILEDROP_LINK\0"
    "command_COPY_PUBLIC_LINK\0"
    "command_COPY_PRIVATE_LINK\0"
    "command_EMAIL_PRIVATE_LINK\0"
    "command_OPEN_PRIVATE_LINK\0"
    "command_MAKE_AVAILABLE_LOCALLY\0filesArg\0"
    "command_MAKE_ONLINE_ONLY\0"
    "command_RESOLVE_CONFLICT\0command_DELETE_ITEM\0"
    "command_MOVE_ITEM\0command_LOCK_FILE\0"
    "command_UNLOCK_FILE\0command_COPYASPATH\0"
    "command_OPENNEWWINDOW\0command_OPEN\0"
    "command_V2_LIST_ACCOUNTS\0"
    "QSharedPointer<OCC::SocketApiJobV2>\0"
    "job\0command_V2_UPLOAD_FILES_FROM\0"
    "command_GET_STRINGS\0command_GET_MENU_ITEMS\0"
    "command_EDIT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SocketApi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  224,    2, 0x06 /* Public */,
       4,    1,  227,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  230,    2, 0x0a /* Public */,
       8,    1,  233,    2, 0x0a /* Public */,
      10,    1,  236,    2, 0x0a /* Public */,
      11,    2,  239,    2, 0x0a /* Public */,
      15,    0,  244,    2, 0x08 /* Private */,
      16,    0,  245,    2, 0x08 /* Private */,
      17,    1,  246,    2, 0x08 /* Private */,
      19,    0,  249,    2, 0x08 /* Private */,
      20,    1,  250,    2, 0x08 /* Private */,
      22,    1,  253,    2, 0x08 /* Private */,
      23,    1,  256,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      24,    2,  259,    2, 0x00 /* Private */,
      28,    2,  264,    2, 0x00 /* Private */,
      29,    2,  269,    2, 0x00 /* Private */,
      30,    2,  274,    2, 0x00 /* Private */,
      31,    2,  279,    2, 0x00 /* Private */,
      33,    2,  284,    2, 0x00 /* Private */,
      34,    2,  289,    2, 0x00 /* Private */,
      35,    2,  294,    2, 0x00 /* Private */,
      36,    2,  299,    2, 0x00 /* Private */,
      37,    2,  304,    2, 0x00 /* Private */,
      38,    2,  309,    2, 0x00 /* Private */,
      39,    2,  314,    2, 0x00 /* Private */,
      40,    2,  319,    2, 0x00 /* Private */,
      41,    2,  324,    2, 0x00 /* Private */,
      42,    2,  329,    2, 0x00 /* Private */,
      44,    2,  334,    2, 0x00 /* Private */,
      45,    2,  339,    2, 0x00 /* Private */,
      46,    2,  344,    2, 0x00 /* Private */,
      47,    2,  349,    2, 0x00 /* Private */,
      48,    2,  354,    2, 0x00 /* Private */,
      49,    2,  359,    2, 0x00 /* Private */,
      50,    2,  364,    2, 0x00 /* Private */,
      51,    2,  369,    2, 0x00 /* Private */,
      52,    2,  374,    2, 0x00 /* Private */,
      53,    1,  379,    2, 0x00 /* Private */,
      56,    1,  382,    2, 0x00 /* Private */,
      57,    2,  385,    2, 0x00 /* Private */,
      58,    2,  390,    2, 0x00 /* Private */,
      59,    2,  395,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13,   12,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   43,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   43,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,

       0        // eod
};

void OCC::SocketApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SocketApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->shareCommandReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->fileActivityCommandReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotUpdateFolderView((*reinterpret_cast< OCC::Folder*(*)>(_a[1]))); break;
        case 3: _t->slotUnregisterPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotRegisterPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->broadcastStatusPushMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SyncFileStatus(*)>(_a[2]))); break;
        case 6: _t->slotNewConnection(); break;
        case 7: _t->onLostConnection(); break;
        case 8: _t->slotSocketDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 9: _t->slotReadSocket(); break;
        case 10: _t->copyUrlToClipboard((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->emailPrivateLink((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->openPrivateLink((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->command_RETRIEVE_FOLDER_STATUS((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 14: _t->command_RETRIEVE_FILE_STATUS((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 15: _t->command_VERSION((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 16: _t->command_SHARE_MENU_TITLE((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 17: _t->command_ACTIVITY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 18: _t->command_ENCRYPT((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 19: _t->command_SHARE((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 20: _t->command_LEAVESHARE((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 21: _t->command_MANAGE_PUBLIC_LINKS((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 22: _t->command_COPY_SECUREFILEDROP_LINK((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 23: _t->command_COPY_PUBLIC_LINK((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 24: _t->command_COPY_PRIVATE_LINK((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 25: _t->command_EMAIL_PRIVATE_LINK((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 26: _t->command_OPEN_PRIVATE_LINK((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 27: _t->command_MAKE_AVAILABLE_LOCALLY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 28: _t->command_MAKE_ONLINE_ONLY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 29: _t->command_RESOLVE_CONFLICT((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 30: _t->command_DELETE_ITEM((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 31: _t->command_MOVE_ITEM((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 32: _t->command_LOCK_FILE((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 33: _t->command_UNLOCK_FILE((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 34: _t->command_COPYASPATH((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 35: _t->command_OPENNEWWINDOW((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 36: _t->command_OPEN((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 37: _t->command_V2_LIST_ACCOUNTS((*reinterpret_cast< const QSharedPointer<OCC::SocketApiJobV2>(*)>(_a[1]))); break;
        case 38: _t->command_V2_UPLOAD_FILES_FROM((*reinterpret_cast< const QSharedPointer<OCC::SocketApiJobV2>(*)>(_a[1]))); break;
        case 39: _t->command_GET_STRINGS((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 40: _t->command_GET_MENU_ITEMS((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        case 41: _t->command_EDIT((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SocketListener*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileStatus >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SocketApi::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketApi::shareCommandReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SocketApi::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketApi::fileActivityCommandReceived)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::SocketApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__SocketApi.data,
    qt_meta_data_OCC__SocketApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::SocketApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SocketApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SocketApi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::SocketApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void OCC::SocketApi::shareCommandReceived(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::SocketApi::fileActivityCommandReceived(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
