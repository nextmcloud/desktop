/****************************************************************************
** Meta object code from reading C++ file 'ocsjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/ocsjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ocsjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__OcsJob_t {
    QByteArrayData data[11];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OcsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OcsJob_t qt_meta_stringdata_OCC__OcsJob = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OCC::OcsJob"
QT_MOC_LITERAL(1, 12, 11), // "jobFinished"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "reply"
QT_MOC_LITERAL(4, 31, 10), // "statusCode"
QT_MOC_LITERAL(5, 42, 8), // "ocsError"
QT_MOC_LITERAL(6, 51, 7), // "message"
QT_MOC_LITERAL(7, 59, 26), // "etagResponseHeaderReceived"
QT_MOC_LITERAL(8, 86, 5), // "value"
QT_MOC_LITERAL(9, 92, 5), // "start"
QT_MOC_LITERAL(10, 98, 8) // "finished"

    },
    "OCC::OcsJob\0jobFinished\0\0reply\0"
    "statusCode\0ocsError\0message\0"
    "etagResponseHeaderReceived\0value\0start\0"
    "finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OcsJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,
       7,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   54,    2, 0x09 /* Protected */,
      10,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    6,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,    8,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void OCC::OcsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OcsJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->jobFinished((*reinterpret_cast< QJsonDocument(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->ocsError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->etagResponseHeaderReceived((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->start(); break;
        case 4: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OcsJob::*)(QJsonDocument , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OcsJob::jobFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OcsJob::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OcsJob::ocsError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OcsJob::*)(const QByteArray & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OcsJob::etagResponseHeaderReceived)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::OcsJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__OcsJob.data,
    qt_meta_data_OCC__OcsJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::OcsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OcsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OcsJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::OcsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OCC::OcsJob::jobFinished(QJsonDocument _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::OcsJob::ocsError(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::OcsJob::etagResponseHeaderReceived(const QByteArray & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
