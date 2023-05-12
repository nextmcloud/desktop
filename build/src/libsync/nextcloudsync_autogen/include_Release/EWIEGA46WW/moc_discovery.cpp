/****************************************************************************
** Meta object code from reading C++ file 'discovery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/discovery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'discovery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__ProcessDirectoryJob_t {
    QByteArrayData data[10];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ProcessDirectoryJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ProcessDirectoryJob_t qt_meta_stringdata_OCC__ProcessDirectoryJob = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OCC::ProcessDirectoryJob"
QT_MOC_LITERAL(1, 25, 8), // "finished"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "etag"
QT_MOC_LITERAL(4, 40, 4), // "time"
QT_MOC_LITERAL(5, 45, 9), // "QueryMode"
QT_MOC_LITERAL(6, 55, 11), // "NormalQuery"
QT_MOC_LITERAL(7, 67, 15), // "ParentDontExist"
QT_MOC_LITERAL(8, 83, 16), // "ParentNotChanged"
QT_MOC_LITERAL(9, 100, 11) // "InBlackList"

    },
    "OCC::ProcessDirectoryJob\0finished\0\0"
    "etag\0time\0QueryMode\0NormalQuery\0"
    "ParentDontExist\0ParentNotChanged\0"
    "InBlackList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ProcessDirectoryJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   30, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    2,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QDateTime,    2,    4,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,    4,   35,

 // enum data: key, value
       6, uint(OCC::ProcessDirectoryJob::NormalQuery),
       7, uint(OCC::ProcessDirectoryJob::ParentDontExist),
       8, uint(OCC::ProcessDirectoryJob::ParentNotChanged),
       9, uint(OCC::ProcessDirectoryJob::InBlackList),

       0        // eod
};

void OCC::ProcessDirectoryJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProcessDirectoryJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->etag((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProcessDirectoryJob::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessDirectoryJob::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProcessDirectoryJob::*)(const QByteArray & , const QDateTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessDirectoryJob::etag)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::ProcessDirectoryJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__ProcessDirectoryJob.data,
    qt_meta_data_OCC__ProcessDirectoryJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::ProcessDirectoryJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ProcessDirectoryJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ProcessDirectoryJob.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::ProcessDirectoryJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OCC::ProcessDirectoryJob::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::ProcessDirectoryJob::etag(const QByteArray & _t1, const QDateTime & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
