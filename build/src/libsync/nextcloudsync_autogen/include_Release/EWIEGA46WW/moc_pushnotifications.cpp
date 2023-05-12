/****************************************************************************
** Meta object code from reading C++ file 'pushnotifications.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/pushnotifications.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pushnotifications.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__PushNotifications_t {
    QByteArrayData data[24];
    char stringdata0[380];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PushNotifications_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PushNotifications_t qt_meta_stringdata_OCC__PushNotifications = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OCC::PushNotifications"
QT_MOC_LITERAL(1, 23, 5), // "ready"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "filesChanged"
QT_MOC_LITERAL(4, 43, 13), // "OCC::Account*"
QT_MOC_LITERAL(5, 57, 7), // "account"
QT_MOC_LITERAL(6, 65, 17), // "activitiesChanged"
QT_MOC_LITERAL(7, 83, 20), // "notificationsChanged"
QT_MOC_LITERAL(8, 104, 20), // "authenticationFailed"
QT_MOC_LITERAL(9, 125, 14), // "connectionLost"
QT_MOC_LITERAL(10, 140, 20), // "onWebSocketConnected"
QT_MOC_LITERAL(11, 161, 23), // "onWebSocketDisconnected"
QT_MOC_LITERAL(12, 185, 30), // "onWebSocketTextMessageReceived"
QT_MOC_LITERAL(13, 216, 7), // "message"
QT_MOC_LITERAL(14, 224, 16), // "onWebSocketError"
QT_MOC_LITERAL(15, 241, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(16, 270, 5), // "error"
QT_MOC_LITERAL(17, 276, 20), // "onWebSocketSslErrors"
QT_MOC_LITERAL(18, 297, 16), // "QList<QSslError>"
QT_MOC_LITERAL(19, 314, 6), // "errors"
QT_MOC_LITERAL(20, 321, 23), // "onWebSocketPongReceived"
QT_MOC_LITERAL(21, 345, 11), // "elapsedTime"
QT_MOC_LITERAL(22, 357, 7), // "payload"
QT_MOC_LITERAL(23, 365, 14) // "onPingTimedOut"

    },
    "OCC::PushNotifications\0ready\0\0"
    "filesChanged\0OCC::Account*\0account\0"
    "activitiesChanged\0notificationsChanged\0"
    "authenticationFailed\0connectionLost\0"
    "onWebSocketConnected\0onWebSocketDisconnected\0"
    "onWebSocketTextMessageReceived\0message\0"
    "onWebSocketError\0QAbstractSocket::SocketError\0"
    "error\0onWebSocketSslErrors\0QList<QSslError>\0"
    "errors\0onWebSocketPongReceived\0"
    "elapsedTime\0payload\0onPingTimedOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PushNotifications[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       6,    1,   83,    2, 0x06 /* Public */,
       7,    1,   86,    2, 0x06 /* Public */,
       8,    0,   89,    2, 0x06 /* Public */,
       9,    0,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   91,    2, 0x08 /* Private */,
      11,    0,   92,    2, 0x08 /* Private */,
      12,    1,   93,    2, 0x08 /* Private */,
      14,    1,   96,    2, 0x08 /* Private */,
      17,    1,   99,    2, 0x08 /* Private */,
      20,    2,  102,    2, 0x08 /* Private */,
      23,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QByteArray,   21,   22,
    QMetaType::Void,

       0        // eod
};

void OCC::PushNotifications::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PushNotifications *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ready(); break;
        case 1: _t->filesChanged((*reinterpret_cast< OCC::Account*(*)>(_a[1]))); break;
        case 2: _t->activitiesChanged((*reinterpret_cast< OCC::Account*(*)>(_a[1]))); break;
        case 3: _t->notificationsChanged((*reinterpret_cast< OCC::Account*(*)>(_a[1]))); break;
        case 4: _t->authenticationFailed(); break;
        case 5: _t->connectionLost(); break;
        case 6: _t->onWebSocketConnected(); break;
        case 7: _t->onWebSocketDisconnected(); break;
        case 8: _t->onWebSocketTextMessageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->onWebSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 10: _t->onWebSocketSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 11: _t->onWebSocketPongReceived((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 12: _t->onPingTimedOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PushNotifications::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PushNotifications::ready)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PushNotifications::*)(OCC::Account * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PushNotifications::filesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PushNotifications::*)(OCC::Account * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PushNotifications::activitiesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PushNotifications::*)(OCC::Account * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PushNotifications::notificationsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PushNotifications::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PushNotifications::authenticationFailed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PushNotifications::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PushNotifications::connectionLost)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::PushNotifications::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__PushNotifications.data,
    qt_meta_data_OCC__PushNotifications,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PushNotifications::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PushNotifications::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PushNotifications.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::PushNotifications::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void OCC::PushNotifications::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::PushNotifications::filesChanged(OCC::Account * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::PushNotifications::activitiesChanged(OCC::Account * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::PushNotifications::notificationsChanged(OCC::Account * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::PushNotifications::authenticationFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::PushNotifications::connectionLost()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
