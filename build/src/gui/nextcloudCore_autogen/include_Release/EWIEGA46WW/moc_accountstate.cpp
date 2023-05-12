/****************************************************************************
** Meta object code from reading C++ file 'accountstate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/accountstate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountstate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__AccountState_t {
    QByteArrayData data[31];
    char stringdata0[548];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__AccountState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__AccountState_t qt_meta_stringdata_OCC__AccountState = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::AccountState"
QT_MOC_LITERAL(1, 18, 12), // "stateChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 24), // "OCC::AccountState::State"
QT_MOC_LITERAL(4, 57, 5), // "state"
QT_MOC_LITERAL(5, 63, 18), // "isConnectedChanged"
QT_MOC_LITERAL(6, 82, 24), // "hasFetchedNavigationApps"
QT_MOC_LITERAL(7, 107, 13), // "statusChanged"
QT_MOC_LITERAL(8, 121, 34), // "desktopNotificationsAllowedCh..."
QT_MOC_LITERAL(9, 156, 17), // "checkConnectivity"
QT_MOC_LITERAL(10, 174, 29), // "slotConnectionValidatorResult"
QT_MOC_LITERAL(11, 204, 32), // "OCC::ConnectionValidator::Status"
QT_MOC_LITERAL(12, 237, 6), // "status"
QT_MOC_LITERAL(13, 244, 6), // "errors"
QT_MOC_LITERAL(14, 251, 25), // "slotHandleRemoteWipeCheck"
QT_MOC_LITERAL(15, 277, 22), // "slotCredentialsFetched"
QT_MOC_LITERAL(16, 300, 25), // "OCC::AbstractCredentials*"
QT_MOC_LITERAL(17, 326, 5), // "creds"
QT_MOC_LITERAL(18, 332, 20), // "slotCredentialsAsked"
QT_MOC_LITERAL(19, 353, 25), // "slotNavigationAppsFetched"
QT_MOC_LITERAL(20, 379, 5), // "reply"
QT_MOC_LITERAL(21, 385, 10), // "statusCode"
QT_MOC_LITERAL(22, 396, 30), // "slotEtagResponseHeaderReceived"
QT_MOC_LITERAL(23, 427, 5), // "value"
QT_MOC_LITERAL(24, 433, 12), // "slotOcsError"
QT_MOC_LITERAL(25, 446, 7), // "message"
QT_MOC_LITERAL(26, 454, 19), // "slotCheckConnection"
QT_MOC_LITERAL(27, 474, 26), // "slotPushNotificationsReady"
QT_MOC_LITERAL(28, 501, 27), // "slotServerUserStatusChanged"
QT_MOC_LITERAL(29, 529, 7), // "account"
QT_MOC_LITERAL(30, 537, 10) // "AccountPtr"

    },
    "OCC::AccountState\0stateChanged\0\0"
    "OCC::AccountState::State\0state\0"
    "isConnectedChanged\0hasFetchedNavigationApps\0"
    "statusChanged\0desktopNotificationsAllowedChanged\0"
    "checkConnectivity\0slotConnectionValidatorResult\0"
    "OCC::ConnectionValidator::Status\0"
    "status\0errors\0slotHandleRemoteWipeCheck\0"
    "slotCredentialsFetched\0OCC::AbstractCredentials*\0"
    "creds\0slotCredentialsAsked\0"
    "slotNavigationAppsFetched\0reply\0"
    "statusCode\0slotEtagResponseHeaderReceived\0"
    "value\0slotOcsError\0message\0"
    "slotCheckConnection\0slotPushNotificationsReady\0"
    "slotServerUserStatusChanged\0account\0"
    "AccountPtr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__AccountState[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       1,  132, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,
       6,    0,   98,    2, 0x06 /* Public */,
       7,    0,   99,    2, 0x06 /* Public */,
       8,    0,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  101,    2, 0x0a /* Public */,
      10,    2,  102,    2, 0x09 /* Protected */,
      14,    0,  107,    2, 0x09 /* Protected */,
      15,    1,  108,    2, 0x09 /* Protected */,
      18,    1,  111,    2, 0x09 /* Protected */,
      19,    2,  114,    2, 0x09 /* Protected */,
      22,    2,  119,    2, 0x09 /* Protected */,
      24,    2,  124,    2, 0x09 /* Protected */,
      26,    0,  129,    2, 0x08 /* Private */,
      27,    0,  130,    2, 0x08 /* Private */,
      28,    0,  131,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QStringList,   12,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,   20,   21,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   23,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   21,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      29, 0x80000000 | 30, 0x0009500b,

       0        // eod
};

void OCC::AccountState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountState *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< OCC::AccountState::State(*)>(_a[1]))); break;
        case 1: _t->isConnectedChanged(); break;
        case 2: _t->hasFetchedNavigationApps(); break;
        case 3: _t->statusChanged(); break;
        case 4: _t->desktopNotificationsAllowedChanged(); break;
        case 5: _t->checkConnectivity(); break;
        case 6: _t->slotConnectionValidatorResult((*reinterpret_cast< OCC::ConnectionValidator::Status(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 7: _t->slotHandleRemoteWipeCheck(); break;
        case 8: _t->slotCredentialsFetched((*reinterpret_cast< OCC::AbstractCredentials*(*)>(_a[1]))); break;
        case 9: _t->slotCredentialsAsked((*reinterpret_cast< OCC::AbstractCredentials*(*)>(_a[1]))); break;
        case 10: _t->slotNavigationAppsFetched((*reinterpret_cast< const QJsonDocument(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->slotEtagResponseHeaderReceived((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->slotOcsError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->slotCheckConnection(); break;
        case 14: _t->slotPushNotificationsReady(); break;
        case 15: _t->slotServerUserStatusChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AbstractCredentials* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AbstractCredentials* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountState::*)(OCC::AccountState::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountState::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccountState::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountState::isConnectedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccountState::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountState::hasFetchedNavigationApps)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccountState::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountState::statusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AccountState::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountState::desktopNotificationsAllowedChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AccountState *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AccountPtr*>(_v) = _t->_account; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AccountState *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_account != *reinterpret_cast< AccountPtr*>(_v)) {
                _t->_account = *reinterpret_cast< AccountPtr*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OCC::AccountState::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__AccountState.data,
    qt_meta_data_OCC__AccountState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::AccountState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AccountState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__AccountState.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QSharedData"))
        return static_cast< QSharedData*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::AccountState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OCC::AccountState::stateChanged(OCC::AccountState::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::AccountState::isConnectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::AccountState::hasFetchedNavigationApps()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::AccountState::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::AccountState::desktopNotificationsAllowedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_OCC__AccountApp_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__AccountApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__AccountApp_t qt_meta_stringdata_OCC__AccountApp = {
    {
QT_MOC_LITERAL(0, 0, 15) // "OCC::AccountApp"

    },
    "OCC::AccountApp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__AccountApp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OCC::AccountApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::AccountApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__AccountApp.data,
    qt_meta_data_OCC__AccountApp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::AccountApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AccountApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__AccountApp.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::AccountApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
