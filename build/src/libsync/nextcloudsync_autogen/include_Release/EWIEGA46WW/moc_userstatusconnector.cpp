/****************************************************************************
** Meta object code from reading C++ file 'userstatusconnector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/userstatusconnector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userstatusconnector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__UserStatus_t {
    QByteArrayData data[11];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__UserStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__UserStatus_t qt_meta_stringdata_OCC__UserStatus = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OCC::UserStatus"
QT_MOC_LITERAL(1, 16, 2), // "id"
QT_MOC_LITERAL(2, 19, 7), // "message"
QT_MOC_LITERAL(3, 27, 4), // "icon"
QT_MOC_LITERAL(4, 32, 5), // "state"
QT_MOC_LITERAL(5, 38, 12), // "OnlineStatus"
QT_MOC_LITERAL(6, 51, 6), // "Online"
QT_MOC_LITERAL(7, 58, 12), // "DoNotDisturb"
QT_MOC_LITERAL(8, 71, 4), // "Away"
QT_MOC_LITERAL(9, 76, 7), // "Offline"
QT_MOC_LITERAL(10, 84, 9) // "Invisible"

    },
    "OCC::UserStatus\0id\0message\0icon\0state\0"
    "OnlineStatus\0Online\0DoNotDisturb\0Away\0"
    "Offline\0Invisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__UserStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QString, 0x00095003,
       3, QMetaType::QString, 0x00095003,
       4, 0x80000000 | 5, 0x0009500b,

 // enums: name, alias, flags, count, data
       5,    5, 0x2,    5,   31,

 // enum data: key, value
       6, uint(OCC::UserStatus::OnlineStatus::Online),
       7, uint(OCC::UserStatus::OnlineStatus::DoNotDisturb),
       8, uint(OCC::UserStatus::OnlineStatus::Away),
       9, uint(OCC::UserStatus::OnlineStatus::Offline),
      10, uint(OCC::UserStatus::OnlineStatus::Invisible),

       0        // eod
};

void OCC::UserStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<UserStatus *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_id; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_message; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_icon; break;
        case 3: *reinterpret_cast< OnlineStatus*>(_v) = _t->_state; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<UserStatus *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_id != *reinterpret_cast< QString*>(_v)) {
                _t->_id = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->_message != *reinterpret_cast< QString*>(_v)) {
                _t->_message = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->_icon != *reinterpret_cast< QString*>(_v)) {
                _t->_icon = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->_state != *reinterpret_cast< OnlineStatus*>(_v)) {
                _t->_state = *reinterpret_cast< OnlineStatus*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::UserStatus::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_OCC__UserStatus.data,
    qt_meta_data_OCC__UserStatus,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_OCC__UserStatusConnector_t {
    QByteArrayData data[20];
    char stringdata0[373];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__UserStatusConnector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__UserStatusConnector_t qt_meta_stringdata_OCC__UserStatusConnector = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OCC::UserStatusConnector"
QT_MOC_LITERAL(1, 25, 17), // "userStatusFetched"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 15), // "OCC::UserStatus"
QT_MOC_LITERAL(4, 60, 10), // "userStatus"
QT_MOC_LITERAL(5, 71, 25), // "predefinedStatusesFetched"
QT_MOC_LITERAL(6, 97, 24), // "QVector<OCC::UserStatus>"
QT_MOC_LITERAL(7, 122, 8), // "statuses"
QT_MOC_LITERAL(8, 131, 13), // "userStatusSet"
QT_MOC_LITERAL(9, 145, 23), // "serverUserStatusChanged"
QT_MOC_LITERAL(10, 169, 14), // "messageCleared"
QT_MOC_LITERAL(11, 184, 5), // "error"
QT_MOC_LITERAL(12, 190, 31), // "OCC::UserStatusConnector::Error"
QT_MOC_LITERAL(13, 222, 5), // "Error"
QT_MOC_LITERAL(14, 228, 23), // "CouldNotFetchUserStatus"
QT_MOC_LITERAL(15, 252, 35), // "CouldNotFetchPredefinedUserSt..."
QT_MOC_LITERAL(16, 288, 22), // "UserStatusNotSupported"
QT_MOC_LITERAL(17, 311, 18), // "EmojisNotSupported"
QT_MOC_LITERAL(18, 330, 21), // "CouldNotSetUserStatus"
QT_MOC_LITERAL(19, 352, 20) // "CouldNotClearMessage"

    },
    "OCC::UserStatusConnector\0userStatusFetched\0"
    "\0OCC::UserStatus\0userStatus\0"
    "predefinedStatusesFetched\0"
    "QVector<OCC::UserStatus>\0statuses\0"
    "userStatusSet\0serverUserStatusChanged\0"
    "messageCleared\0error\0"
    "OCC::UserStatusConnector::Error\0Error\0"
    "CouldNotFetchUserStatus\0"
    "CouldNotFetchPredefinedUserStatuses\0"
    "UserStatusNotSupported\0EmojisNotSupported\0"
    "CouldNotSetUserStatus\0CouldNotClearMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__UserStatusConnector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       8,    0,   50,    2, 0x06 /* Public */,
       9,    0,   51,    2, 0x06 /* Public */,
      10,    0,   52,    2, 0x06 /* Public */,
      11,    1,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   11,

 // enums: name, alias, flags, count, data
      13,   13, 0x2,    6,   61,

 // enum data: key, value
      14, uint(OCC::UserStatusConnector::Error::CouldNotFetchUserStatus),
      15, uint(OCC::UserStatusConnector::Error::CouldNotFetchPredefinedUserStatuses),
      16, uint(OCC::UserStatusConnector::Error::UserStatusNotSupported),
      17, uint(OCC::UserStatusConnector::Error::EmojisNotSupported),
      18, uint(OCC::UserStatusConnector::Error::CouldNotSetUserStatus),
      19, uint(OCC::UserStatusConnector::Error::CouldNotClearMessage),

       0        // eod
};

void OCC::UserStatusConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserStatusConnector *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->userStatusFetched((*reinterpret_cast< const OCC::UserStatus(*)>(_a[1]))); break;
        case 1: _t->predefinedStatusesFetched((*reinterpret_cast< const QVector<OCC::UserStatus>(*)>(_a[1]))); break;
        case 2: _t->userStatusSet(); break;
        case 3: _t->serverUserStatusChanged(); break;
        case 4: _t->messageCleared(); break;
        case 5: _t->error((*reinterpret_cast< OCC::UserStatusConnector::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::UserStatus >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<OCC::UserStatus> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserStatusConnector::*)(const OCC::UserStatus & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserStatusConnector::userStatusFetched)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserStatusConnector::*)(const QVector<OCC::UserStatus> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserStatusConnector::predefinedStatusesFetched)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UserStatusConnector::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserStatusConnector::userStatusSet)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UserStatusConnector::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserStatusConnector::serverUserStatusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UserStatusConnector::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserStatusConnector::messageCleared)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (UserStatusConnector::*)(OCC::UserStatusConnector::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserStatusConnector::error)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::UserStatusConnector::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__UserStatusConnector.data,
    qt_meta_data_OCC__UserStatusConnector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::UserStatusConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UserStatusConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__UserStatusConnector.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::UserStatusConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OCC::UserStatusConnector::userStatusFetched(const OCC::UserStatus & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::UserStatusConnector::predefinedStatusesFetched(const QVector<OCC::UserStatus> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::UserStatusConnector::userStatusSet()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::UserStatusConnector::serverUserStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::UserStatusConnector::messageCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::UserStatusConnector::error(OCC::UserStatusConnector::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
