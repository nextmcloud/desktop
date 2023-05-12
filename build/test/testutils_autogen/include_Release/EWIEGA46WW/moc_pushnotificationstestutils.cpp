/****************************************************************************
** Meta object code from reading C++ file 'pushnotificationstestutils.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../test/pushnotificationstestutils.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pushnotificationstestutils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FakeWebSocketServer_t {
    QByteArrayData data[10];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakeWebSocketServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakeWebSocketServer_t qt_meta_stringdata_FakeWebSocketServer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "FakeWebSocketServer"
QT_MOC_LITERAL(1, 20, 6), // "closed"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "processTextMessage"
QT_MOC_LITERAL(4, 47, 11), // "QWebSocket*"
QT_MOC_LITERAL(5, 59, 6), // "sender"
QT_MOC_LITERAL(6, 66, 7), // "message"
QT_MOC_LITERAL(7, 74, 26), // "processTextMessageInternal"
QT_MOC_LITERAL(8, 101, 15), // "onNewConnection"
QT_MOC_LITERAL(9, 117, 18) // "socketDisconnected"

    },
    "FakeWebSocketServer\0closed\0\0"
    "processTextMessage\0QWebSocket*\0sender\0"
    "message\0processTextMessageInternal\0"
    "onNewConnection\0socketDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakeWebSocketServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    2,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   45,    2, 0x08 /* Private */,
       8,    0,   48,    2, 0x08 /* Private */,
       9,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FakeWebSocketServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeWebSocketServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->processTextMessage((*reinterpret_cast< QWebSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->processTextMessageInternal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onNewConnection(); break;
        case 4: _t->socketDisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWebSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FakeWebSocketServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FakeWebSocketServer::closed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FakeWebSocketServer::*)(QWebSocket * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FakeWebSocketServer::processTextMessage)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FakeWebSocketServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FakeWebSocketServer.data,
    qt_meta_data_FakeWebSocketServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakeWebSocketServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakeWebSocketServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakeWebSocketServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FakeWebSocketServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FakeWebSocketServer::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FakeWebSocketServer::processTextMessage(QWebSocket * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_CredentialsStub_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CredentialsStub_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CredentialsStub_t qt_meta_stringdata_CredentialsStub = {
    {
QT_MOC_LITERAL(0, 0, 15) // "CredentialsStub"

    },
    "CredentialsStub"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CredentialsStub[] = {

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

void CredentialsStub::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CredentialsStub::staticMetaObject = { {
    QMetaObject::SuperData::link<OCC::AbstractCredentials::staticMetaObject>(),
    qt_meta_stringdata_CredentialsStub.data,
    qt_meta_data_CredentialsStub,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CredentialsStub::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CredentialsStub::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CredentialsStub.stringdata0))
        return static_cast<void*>(this);
    return OCC::AbstractCredentials::qt_metacast(_clname);
}

int CredentialsStub::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OCC::AbstractCredentials::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
