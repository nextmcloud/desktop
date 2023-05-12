/****************************************************************************
** Meta object code from reading C++ file 'callstatechecker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/callstatechecker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'callstatechecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__CallStateChecker_t {
    QByteArrayData data[20];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__CallStateChecker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__CallStateChecker_t qt_meta_stringdata_OCC__CallStateChecker = {
    {
QT_MOC_LITERAL(0, 0, 21), // "OCC::CallStateChecker"
QT_MOC_LITERAL(1, 22, 12), // "tokenChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 19), // "accountStateChanged"
QT_MOC_LITERAL(4, 56, 15), // "checkingChanged"
QT_MOC_LITERAL(5, 72, 13), // "stopNotifying"
QT_MOC_LITERAL(6, 86, 8), // "setToken"
QT_MOC_LITERAL(7, 95, 5), // "token"
QT_MOC_LITERAL(8, 101, 15), // "setAccountState"
QT_MOC_LITERAL(9, 117, 18), // "OCC::AccountState*"
QT_MOC_LITERAL(10, 136, 12), // "accountState"
QT_MOC_LITERAL(11, 149, 11), // "setChecking"
QT_MOC_LITERAL(12, 161, 8), // "checking"
QT_MOC_LITERAL(13, 170, 27), // "slotStatusCheckTimerElapsed"
QT_MOC_LITERAL(14, 198, 28), // "slotNotificationTimerElapsed"
QT_MOC_LITERAL(15, 227, 21), // "slotCallStateReceived"
QT_MOC_LITERAL(16, 249, 4), // "json"
QT_MOC_LITERAL(17, 254, 10), // "statusCode"
QT_MOC_LITERAL(18, 265, 5), // "reset"
QT_MOC_LITERAL(19, 271, 13) // "AccountState*"

    },
    "OCC::CallStateChecker\0tokenChanged\0\0"
    "accountStateChanged\0checkingChanged\0"
    "stopNotifying\0setToken\0token\0"
    "setAccountState\0OCC::AccountState*\0"
    "accountState\0setChecking\0checking\0"
    "slotStatusCheckTimerElapsed\0"
    "slotNotificationTimerElapsed\0"
    "slotCallStateReceived\0json\0statusCode\0"
    "reset\0AccountState*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__CallStateChecker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       3,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   73,    2, 0x0a /* Public */,
       8,    1,   76,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x0a /* Public */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    0,   83,    2, 0x08 /* Private */,
      15,    2,   84,    2, 0x08 /* Private */,
      18,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,   16,   17,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495103,
      10, 0x80000000 | 19, 0x0049510b,
      12, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void OCC::CallStateChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CallStateChecker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tokenChanged(); break;
        case 1: _t->accountStateChanged(); break;
        case 2: _t->checkingChanged(); break;
        case 3: _t->stopNotifying(); break;
        case 4: _t->setToken((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setAccountState((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 6: _t->setChecking((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->slotStatusCheckTimerElapsed(); break;
        case 8: _t->slotNotificationTimerElapsed(); break;
        case 9: _t->slotCallStateReceived((*reinterpret_cast< const QJsonDocument(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 10: _t->reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountState* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CallStateChecker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallStateChecker::tokenChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CallStateChecker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallStateChecker::accountStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CallStateChecker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallStateChecker::checkingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CallStateChecker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallStateChecker::stopNotifying)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountState* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CallStateChecker *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->token(); break;
        case 1: *reinterpret_cast< AccountState**>(_v) = _t->accountState(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->checking(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CallStateChecker *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setToken(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAccountState(*reinterpret_cast< AccountState**>(_v)); break;
        case 2: _t->setChecking(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OCC::CallStateChecker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__CallStateChecker.data,
    qt_meta_data_OCC__CallStateChecker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::CallStateChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::CallStateChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__CallStateChecker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::CallStateChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OCC::CallStateChecker::tokenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::CallStateChecker::accountStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::CallStateChecker::checkingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::CallStateChecker::stopNotifying()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
