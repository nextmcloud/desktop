/****************************************************************************
** Meta object code from reading C++ file 'flow2auth.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/creds/flow2auth.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flow2auth.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__Flow2Auth_t {
    QByteArrayData data[17];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__Flow2Auth_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__Flow2Auth_t qt_meta_stringdata_OCC__Flow2Auth = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OCC::Flow2Auth"
QT_MOC_LITERAL(1, 15, 6), // "result"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 22), // "OCC::Flow2Auth::Result"
QT_MOC_LITERAL(4, 46, 11), // "errorString"
QT_MOC_LITERAL(5, 58, 4), // "user"
QT_MOC_LITERAL(6, 63, 11), // "appPassword"
QT_MOC_LITERAL(7, 75, 13), // "statusChanged"
QT_MOC_LITERAL(8, 89, 26), // "OCC::Flow2Auth::PollStatus"
QT_MOC_LITERAL(9, 116, 6), // "status"
QT_MOC_LITERAL(10, 123, 11), // "secondsLeft"
QT_MOC_LITERAL(11, 135, 11), // "slotPollNow"
QT_MOC_LITERAL(12, 147, 20), // "slotPollTimerTimeout"
QT_MOC_LITERAL(13, 168, 6), // "Result"
QT_MOC_LITERAL(14, 175, 12), // "NotSupported"
QT_MOC_LITERAL(15, 188, 8), // "LoggedIn"
QT_MOC_LITERAL(16, 197, 5) // "Error"

    },
    "OCC::Flow2Auth\0result\0\0OCC::Flow2Auth::Result\0"
    "errorString\0user\0appPassword\0statusChanged\0"
    "OCC::Flow2Auth::PollStatus\0status\0"
    "secondsLeft\0slotPollNow\0slotPollTimerTimeout\0"
    "Result\0NotSupported\0LoggedIn\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__Flow2Auth[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       1,   80, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   49,    2, 0x06 /* Public */,
       1,    3,   58,    2, 0x26 /* Public | MethodCloned */,
       1,    2,   65,    2, 0x26 /* Public | MethodCloned */,
       1,    1,   70,    2, 0x26 /* Public | MethodCloned */,
       7,    2,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,    1,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    1,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    1,    4,
    QMetaType::Void, 0x80000000 | 3,    1,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      13,   13, 0x0,    3,   85,

 // enum data: key, value
      14, uint(OCC::Flow2Auth::NotSupported),
      15, uint(OCC::Flow2Auth::LoggedIn),
      16, uint(OCC::Flow2Auth::Error),

       0        // eod
};

void OCC::Flow2Auth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Flow2Auth *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->result((*reinterpret_cast< OCC::Flow2Auth::Result(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->result((*reinterpret_cast< OCC::Flow2Auth::Result(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->result((*reinterpret_cast< OCC::Flow2Auth::Result(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->result((*reinterpret_cast< OCC::Flow2Auth::Result(*)>(_a[1]))); break;
        case 4: _t->statusChanged((*reinterpret_cast< const OCC::Flow2Auth::PollStatus(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->slotPollNow(); break;
        case 6: _t->slotPollTimerTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Flow2Auth::*)(OCC::Flow2Auth::Result , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Flow2Auth::result)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Flow2Auth::*)(const OCC::Flow2Auth::PollStatus , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Flow2Auth::statusChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::Flow2Auth::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__Flow2Auth.data,
    qt_meta_data_OCC__Flow2Auth,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::Flow2Auth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Flow2Auth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__Flow2Auth.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::Flow2Auth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OCC::Flow2Auth::result(OCC::Flow2Auth::Result _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 4
void OCC::Flow2Auth::statusChanged(const OCC::Flow2Auth::PollStatus _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
