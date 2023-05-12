/****************************************************************************
** Meta object code from reading C++ file 'oauth.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/creds/oauth.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oauth.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__OAuth_t {
    QByteArrayData data[11];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OAuth_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OAuth_t qt_meta_stringdata_OCC__OAuth = {
    {
QT_MOC_LITERAL(0, 0, 10), // "OCC::OAuth"
QT_MOC_LITERAL(1, 11, 6), // "result"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 13), // "OAuth::Result"
QT_MOC_LITERAL(4, 33, 4), // "user"
QT_MOC_LITERAL(5, 38, 5), // "token"
QT_MOC_LITERAL(6, 44, 12), // "refreshToken"
QT_MOC_LITERAL(7, 57, 6), // "Result"
QT_MOC_LITERAL(8, 64, 12), // "NotSupported"
QT_MOC_LITERAL(9, 77, 8), // "LoggedIn"
QT_MOC_LITERAL(10, 86, 5) // "Error"

    },
    "OCC::OAuth\0result\0\0OAuth::Result\0user\0"
    "token\0refreshToken\0Result\0NotSupported\0"
    "LoggedIn\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OAuth[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       1,   58, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   34,    2, 0x06 /* Public */,
       1,    3,   43,    2, 0x26 /* Public | MethodCloned */,
       1,    2,   50,    2, 0x26 /* Public | MethodCloned */,
       1,    1,   55,    2, 0x26 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,    1,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    1,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    1,    4,
    QMetaType::Void, 0x80000000 | 3,    1,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,    3,   63,

 // enum data: key, value
       8, uint(OCC::OAuth::NotSupported),
       9, uint(OCC::OAuth::LoggedIn),
      10, uint(OCC::OAuth::Error),

       0        // eod
};

void OCC::OAuth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAuth *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->result((*reinterpret_cast< OAuth::Result(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->result((*reinterpret_cast< OAuth::Result(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->result((*reinterpret_cast< OAuth::Result(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->result((*reinterpret_cast< OAuth::Result(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OAuth::*)(OAuth::Result , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAuth::result)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::OAuth::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__OAuth.data,
    qt_meta_data_OCC__OAuth,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::OAuth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OAuth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OAuth.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::OAuth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OCC::OAuth::result(OAuth::Result _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
