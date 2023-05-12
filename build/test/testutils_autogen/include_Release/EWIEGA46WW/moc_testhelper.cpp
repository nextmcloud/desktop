/****************************************************************************
** Meta object code from reading C++ file 'testhelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../test/testhelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testhelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FakeAccountState_t {
    QByteArrayData data[6];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakeAccountState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakeAccountState_t qt_meta_stringdata_FakeAccountState = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FakeAccountState"
QT_MOC_LITERAL(1, 17, 17), // "checkConnectivity"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "setState"
QT_MOC_LITERAL(4, 45, 24), // "OCC::AccountState::State"
QT_MOC_LITERAL(5, 70, 5) // "state"

    },
    "FakeAccountState\0checkConnectivity\0\0"
    "setState\0OCC::AccountState::State\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakeAccountState[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void FakeAccountState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeAccountState *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->checkConnectivity(); break;
        case 1: _t->setState((*reinterpret_cast< OCC::AccountState::State(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FakeAccountState::staticMetaObject = { {
    QMetaObject::SuperData::link<OCC::AccountState::staticMetaObject>(),
    qt_meta_stringdata_FakeAccountState.data,
    qt_meta_data_FakeAccountState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakeAccountState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakeAccountState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakeAccountState.stringdata0))
        return static_cast<void*>(this);
    return OCC::AccountState::qt_metacast(_clname);
}

int FakeAccountState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OCC::AccountState::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
