/****************************************************************************
** Meta object code from reading C++ file 'remotewipe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/remotewipe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remotewipe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__RemoteWipe_t {
    QByteArrayData data[10];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__RemoteWipe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__RemoteWipe_t qt_meta_stringdata_OCC__RemoteWipe = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OCC::RemoteWipe"
QT_MOC_LITERAL(1, 16, 10), // "authorized"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "OCC::AccountState*"
QT_MOC_LITERAL(4, 47, 18), // "askUserCredentials"
QT_MOC_LITERAL(5, 66, 28), // "startCheckJobWithAppPassword"
QT_MOC_LITERAL(6, 95, 12), // "checkJobSlot"
QT_MOC_LITERAL(7, 108, 22), // "notifyServerSuccessJob"
QT_MOC_LITERAL(8, 131, 12), // "accountState"
QT_MOC_LITERAL(9, 144, 26) // "notifyServerSuccessJobSlot"

    },
    "OCC::RemoteWipe\0authorized\0\0"
    "OCC::AccountState*\0askUserCredentials\0"
    "startCheckJobWithAppPassword\0checkJobSlot\0"
    "notifyServerSuccessJob\0accountState\0"
    "notifyServerSuccessJobSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__RemoteWipe[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   48,    2, 0x0a /* Public */,
       6,    0,   51,    2, 0x08 /* Private */,
       7,    2,   52,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    8,    2,
    QMetaType::Void,

       0        // eod
};

void OCC::RemoteWipe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemoteWipe *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authorized((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 1: _t->askUserCredentials(); break;
        case 2: _t->startCheckJobWithAppPassword((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->checkJobSlot(); break;
        case 4: _t->notifyServerSuccessJob((*reinterpret_cast< OCC::AccountState*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->notifyServerSuccessJobSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountState* >(); break;
            }
            break;
        case 4:
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
            using _t = void (RemoteWipe::*)(OCC::AccountState * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWipe::authorized)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RemoteWipe::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWipe::askUserCredentials)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::RemoteWipe::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__RemoteWipe.data,
    qt_meta_data_OCC__RemoteWipe,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::RemoteWipe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::RemoteWipe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__RemoteWipe.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::RemoteWipe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::RemoteWipe::authorized(OCC::AccountState * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::RemoteWipe::askUserCredentials()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
