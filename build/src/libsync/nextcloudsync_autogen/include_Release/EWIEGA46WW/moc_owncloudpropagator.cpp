/****************************************************************************
** Meta object code from reading C++ file 'owncloudpropagator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/owncloudpropagator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudpropagator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__PropagatorJob_t {
    QByteArrayData data[20];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagatorJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagatorJob_t qt_meta_stringdata_OCC__PropagatorJob = {
    {
QT_MOC_LITERAL(0, 0, 18), // "OCC::PropagatorJob"
QT_MOC_LITERAL(1, 19, 8), // "finished"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "SyncFileItem::Status"
QT_MOC_LITERAL(4, 50, 13), // "abortFinished"
QT_MOC_LITERAL(5, 64, 6), // "status"
QT_MOC_LITERAL(6, 71, 5), // "abort"
QT_MOC_LITERAL(7, 77, 24), // "PropagatorJob::AbortType"
QT_MOC_LITERAL(8, 102, 9), // "abortType"
QT_MOC_LITERAL(9, 112, 19), // "scheduleSelfOrChild"
QT_MOC_LITERAL(10, 132, 9), // "AbortType"
QT_MOC_LITERAL(11, 142, 11), // "Synchronous"
QT_MOC_LITERAL(12, 154, 12), // "Asynchronous"
QT_MOC_LITERAL(13, 167, 8), // "JobState"
QT_MOC_LITERAL(14, 176, 13), // "NotYetStarted"
QT_MOC_LITERAL(15, 190, 7), // "Running"
QT_MOC_LITERAL(16, 198, 8), // "Finished"
QT_MOC_LITERAL(17, 207, 14), // "JobParallelism"
QT_MOC_LITERAL(18, 222, 15), // "FullParallelism"
QT_MOC_LITERAL(19, 238, 15) // "WaitForFinished"

    },
    "OCC::PropagatorJob\0finished\0\0"
    "SyncFileItem::Status\0abortFinished\0"
    "status\0abort\0PropagatorJob::AbortType\0"
    "abortType\0scheduleSelfOrChild\0AbortType\0"
    "Synchronous\0Asynchronous\0JobState\0"
    "NotYetStarted\0Running\0Finished\0"
    "JobParallelism\0FullParallelism\0"
    "WaitForFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagatorJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       3,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       4,    0,   45,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   46,    2, 0x0a /* Public */,
       9,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Bool,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    2,   65,
      13,   13, 0x0,    3,   69,
      17,   17, 0x0,    2,   75,

 // enum data: key, value
      11, uint(OCC::PropagatorJob::Synchronous),
      12, uint(OCC::PropagatorJob::Asynchronous),
      14, uint(OCC::PropagatorJob::NotYetStarted),
      15, uint(OCC::PropagatorJob::Running),
      16, uint(OCC::PropagatorJob::Finished),
      18, uint(OCC::PropagatorJob::FullParallelism),
      19, uint(OCC::PropagatorJob::WaitForFinished),

       0        // eod
};

void OCC::PropagatorJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagatorJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< SyncFileItem::Status(*)>(_a[1]))); break;
        case 1: _t->abortFinished((*reinterpret_cast< SyncFileItem::Status(*)>(_a[1]))); break;
        case 2: _t->abortFinished(); break;
        case 3: _t->abort((*reinterpret_cast< PropagatorJob::AbortType(*)>(_a[1]))); break;
        case 4: { bool _r = _t->scheduleSelfOrChild();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropagatorJob::*)(SyncFileItem::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropagatorJob::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PropagatorJob::*)(SyncFileItem::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropagatorJob::abortFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::PropagatorJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__PropagatorJob.data,
    qt_meta_data_OCC__PropagatorJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PropagatorJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagatorJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagatorJob.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::PropagatorJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OCC::PropagatorJob::finished(SyncFileItem::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::PropagatorJob::abortFinished(SyncFileItem::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__PropagateItemJob_t {
    QByteArrayData data[6];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateItemJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateItemJob_t qt_meta_stringdata_OCC__PropagateItemJob = {
    {
QT_MOC_LITERAL(0, 0, 21), // "OCC::PropagateItemJob"
QT_MOC_LITERAL(1, 22, 22), // "slotRestoreJobFinished"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 20), // "SyncFileItem::Status"
QT_MOC_LITERAL(4, 67, 6), // "status"
QT_MOC_LITERAL(5, 74, 5) // "start"

    },
    "OCC::PropagateItemJob\0slotRestoreJobFinished\0"
    "\0SyncFileItem::Status\0status\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateItemJob[] = {

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
       1,    1,   24,    2, 0x09 /* Protected */,
       5,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void OCC::PropagateItemJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateItemJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotRestoreJobFinished((*reinterpret_cast< SyncFileItem::Status(*)>(_a[1]))); break;
        case 1: _t->start(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::PropagateItemJob::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagatorJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__PropagateItemJob.data,
    qt_meta_data_OCC__PropagateItemJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PropagateItemJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateItemJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateItemJob.stringdata0))
        return static_cast<void*>(this);
    return PropagatorJob::qt_metacast(_clname);
}

int OCC::PropagateItemJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagatorJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_OCC__PropagatorCompositeJob_t {
    QByteArrayData data[10];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagatorCompositeJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagatorCompositeJob_t qt_meta_stringdata_OCC__PropagatorCompositeJob = {
    {
QT_MOC_LITERAL(0, 0, 27), // "OCC::PropagatorCompositeJob"
QT_MOC_LITERAL(1, 28, 23), // "slotSubJobAbortFinished"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 18), // "possiblyRunNextJob"
QT_MOC_LITERAL(4, 72, 19), // "OCC::PropagatorJob*"
QT_MOC_LITERAL(5, 92, 4), // "next"
QT_MOC_LITERAL(6, 97, 18), // "slotSubJobFinished"
QT_MOC_LITERAL(7, 116, 25), // "OCC::SyncFileItem::Status"
QT_MOC_LITERAL(8, 142, 6), // "status"
QT_MOC_LITERAL(9, 149, 8) // "finalize"

    },
    "OCC::PropagatorCompositeJob\0"
    "slotSubJobAbortFinished\0\0possiblyRunNextJob\0"
    "OCC::PropagatorJob*\0next\0slotSubJobFinished\0"
    "OCC::SyncFileItem::Status\0status\0"
    "finalize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagatorCompositeJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       6,    1,   38,    2, 0x08 /* Private */,
       9,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void OCC::PropagatorCompositeJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagatorCompositeJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotSubJobAbortFinished(); break;
        case 1: { bool _r = _t->possiblyRunNextJob((*reinterpret_cast< OCC::PropagatorJob*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->slotSubJobFinished((*reinterpret_cast< OCC::SyncFileItem::Status(*)>(_a[1]))); break;
        case 3: _t->finalize(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::PropagatorJob* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::PropagatorCompositeJob::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagatorJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__PropagatorCompositeJob.data,
    qt_meta_data_OCC__PropagatorCompositeJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PropagatorCompositeJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagatorCompositeJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagatorCompositeJob.stringdata0))
        return static_cast<void*>(this);
    return PropagatorJob::qt_metacast(_clname);
}

int OCC::PropagatorCompositeJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagatorJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_OCC__PropagateDirectory_t {
    QByteArrayData data[6];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateDirectory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateDirectory_t qt_meta_stringdata_OCC__PropagateDirectory = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OCC::PropagateDirectory"
QT_MOC_LITERAL(1, 24, 20), // "slotFirstJobFinished"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 25), // "OCC::SyncFileItem::Status"
QT_MOC_LITERAL(4, 72, 6), // "status"
QT_MOC_LITERAL(5, 79, 19) // "slotSubJobsFinished"

    },
    "OCC::PropagateDirectory\0slotFirstJobFinished\0"
    "\0OCC::SyncFileItem::Status\0status\0"
    "slotSubJobsFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateDirectory[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       5,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void OCC::PropagateDirectory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateDirectory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotFirstJobFinished((*reinterpret_cast< OCC::SyncFileItem::Status(*)>(_a[1]))); break;
        case 1: _t->slotSubJobsFinished((*reinterpret_cast< OCC::SyncFileItem::Status(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::PropagateDirectory::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagatorJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__PropagateDirectory.data,
    qt_meta_data_OCC__PropagateDirectory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PropagateDirectory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateDirectory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateDirectory.stringdata0))
        return static_cast<void*>(this);
    return PropagatorJob::qt_metacast(_clname);
}

int OCC::PropagateDirectory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagatorJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_OCC__PropagateRootDirectory_t {
    QByteArrayData data[9];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateRootDirectory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateRootDirectory_t qt_meta_stringdata_OCC__PropagateRootDirectory = {
    {
QT_MOC_LITERAL(0, 0, 27), // "OCC::PropagateRootDirectory"
QT_MOC_LITERAL(1, 28, 20), // "appendDirDeletionJob"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 19), // "OCC::PropagatorJob*"
QT_MOC_LITERAL(4, 70, 3), // "job"
QT_MOC_LITERAL(5, 74, 19), // "slotSubJobsFinished"
QT_MOC_LITERAL(6, 94, 25), // "OCC::SyncFileItem::Status"
QT_MOC_LITERAL(7, 120, 6), // "status"
QT_MOC_LITERAL(8, 127, 27) // "slotDirDeletionJobsFinished"

    },
    "OCC::PropagateRootDirectory\0"
    "appendDirDeletionJob\0\0OCC::PropagatorJob*\0"
    "job\0slotSubJobsFinished\0"
    "OCC::SyncFileItem::Status\0status\0"
    "slotDirDeletionJobsFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateRootDirectory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    1,   32,    2, 0x08 /* Private */,
       8,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void OCC::PropagateRootDirectory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateRootDirectory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->appendDirDeletionJob((*reinterpret_cast< OCC::PropagatorJob*(*)>(_a[1]))); break;
        case 1: _t->slotSubJobsFinished((*reinterpret_cast< OCC::SyncFileItem::Status(*)>(_a[1]))); break;
        case 2: _t->slotDirDeletionJobsFinished((*reinterpret_cast< OCC::SyncFileItem::Status(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::PropagatorJob* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::PropagateRootDirectory::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagateDirectory::staticMetaObject>(),
    qt_meta_stringdata_OCC__PropagateRootDirectory.data,
    qt_meta_data_OCC__PropagateRootDirectory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PropagateRootDirectory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateRootDirectory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateRootDirectory.stringdata0))
        return static_cast<void*>(this);
    return PropagateDirectory::qt_metacast(_clname);
}

int OCC::PropagateRootDirectory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateDirectory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_OCC__PropagateIgnoreJob_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateIgnoreJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateIgnoreJob_t qt_meta_stringdata_OCC__PropagateIgnoreJob = {
    {
QT_MOC_LITERAL(0, 0, 23) // "OCC::PropagateIgnoreJob"

    },
    "OCC::PropagateIgnoreJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateIgnoreJob[] = {

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

void OCC::PropagateIgnoreJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::PropagateIgnoreJob::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagateItemJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__PropagateIgnoreJob.data,
    qt_meta_data_OCC__PropagateIgnoreJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PropagateIgnoreJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateIgnoreJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateIgnoreJob.stringdata0))
        return static_cast<void*>(this);
    return PropagateItemJob::qt_metacast(_clname);
}

int OCC::PropagateIgnoreJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateItemJob::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OCC__OwncloudPropagator_t {
    QByteArrayData data[20];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OwncloudPropagator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OwncloudPropagator_t qt_meta_stringdata_OCC__OwncloudPropagator = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OCC::OwncloudPropagator"
QT_MOC_LITERAL(1, 24, 7), // "newItem"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "OCC::SyncFileItemPtr"
QT_MOC_LITERAL(4, 54, 13), // "itemCompleted"
QT_MOC_LITERAL(5, 68, 8), // "progress"
QT_MOC_LITERAL(6, 77, 17), // "OCC::SyncFileItem"
QT_MOC_LITERAL(7, 95, 5), // "bytes"
QT_MOC_LITERAL(8, 101, 8), // "finished"
QT_MOC_LITERAL(9, 110, 7), // "success"
QT_MOC_LITERAL(10, 118, 14), // "seenLockedFile"
QT_MOC_LITERAL(11, 133, 8), // "fileName"
QT_MOC_LITERAL(12, 142, 11), // "touchedFile"
QT_MOC_LITERAL(13, 154, 24), // "insufficientLocalStorage"
QT_MOC_LITERAL(14, 179, 25), // "insufficientRemoteStorage"
QT_MOC_LITERAL(15, 205, 12), // "abortTimeout"
QT_MOC_LITERAL(16, 218, 12), // "emitFinished"
QT_MOC_LITERAL(17, 231, 25), // "OCC::SyncFileItem::Status"
QT_MOC_LITERAL(18, 257, 6), // "status"
QT_MOC_LITERAL(19, 264, 19) // "scheduleNextJobImpl"

    },
    "OCC::OwncloudPropagator\0newItem\0\0"
    "OCC::SyncFileItemPtr\0itemCompleted\0"
    "progress\0OCC::SyncFileItem\0bytes\0"
    "finished\0success\0seenLockedFile\0"
    "fileName\0touchedFile\0insufficientLocalStorage\0"
    "insufficientRemoteStorage\0abortTimeout\0"
    "emitFinished\0OCC::SyncFileItem::Status\0"
    "status\0scheduleNextJobImpl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OwncloudPropagator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       5,    2,   75,    2, 0x06 /* Public */,
       8,    1,   80,    2, 0x06 /* Public */,
      10,    1,   83,    2, 0x06 /* Public */,
      12,    1,   86,    2, 0x06 /* Public */,
      13,    0,   89,    2, 0x06 /* Public */,
      14,    0,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   91,    2, 0x08 /* Private */,
      16,    1,   92,    2, 0x08 /* Private */,
      19,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::LongLong,    2,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,

       0        // eod
};

void OCC::OwncloudPropagator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OwncloudPropagator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newItem((*reinterpret_cast< const OCC::SyncFileItemPtr(*)>(_a[1]))); break;
        case 1: _t->itemCompleted((*reinterpret_cast< const OCC::SyncFileItemPtr(*)>(_a[1]))); break;
        case 2: _t->progress((*reinterpret_cast< const OCC::SyncFileItem(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->seenLockedFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->touchedFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->insufficientLocalStorage(); break;
        case 7: _t->insufficientRemoteStorage(); break;
        case 8: _t->abortTimeout(); break;
        case 9: _t->emitFinished((*reinterpret_cast< OCC::SyncFileItem::Status(*)>(_a[1]))); break;
        case 10: _t->scheduleNextJobImpl(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItem >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OwncloudPropagator::*)(const OCC::SyncFileItemPtr & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OwncloudPropagator::newItem)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OwncloudPropagator::*)(const OCC::SyncFileItemPtr & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OwncloudPropagator::itemCompleted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OwncloudPropagator::*)(const OCC::SyncFileItem & , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OwncloudPropagator::progress)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OwncloudPropagator::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OwncloudPropagator::finished)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OwncloudPropagator::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OwncloudPropagator::seenLockedFile)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OwncloudPropagator::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OwncloudPropagator::touchedFile)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (OwncloudPropagator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OwncloudPropagator::insufficientLocalStorage)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (OwncloudPropagator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OwncloudPropagator::insufficientRemoteStorage)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::OwncloudPropagator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__OwncloudPropagator.data,
    qt_meta_data_OCC__OwncloudPropagator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::OwncloudPropagator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudPropagator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OwncloudPropagator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::OwncloudPropagator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void OCC::OwncloudPropagator::newItem(const OCC::SyncFileItemPtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::OwncloudPropagator::itemCompleted(const OCC::SyncFileItemPtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::OwncloudPropagator::progress(const OCC::SyncFileItem & _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::OwncloudPropagator::finished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::OwncloudPropagator::seenLockedFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::OwncloudPropagator::touchedFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OCC::OwncloudPropagator::insufficientLocalStorage()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OCC::OwncloudPropagator::insufficientRemoteStorage()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
struct qt_meta_stringdata_OCC__CleanupPollsJob_t {
    QByteArrayData data[6];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__CleanupPollsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__CleanupPollsJob_t qt_meta_stringdata_OCC__CleanupPollsJob = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OCC::CleanupPollsJob"
QT_MOC_LITERAL(1, 21, 8), // "finished"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "aborted"
QT_MOC_LITERAL(4, 39, 5), // "error"
QT_MOC_LITERAL(5, 45, 16) // "slotPollFinished"

    },
    "OCC::CleanupPollsJob\0finished\0\0aborted\0"
    "error\0slotPollFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__CleanupPollsJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::CleanupPollsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CleanupPollsJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->aborted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotPollFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CleanupPollsJob::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CleanupPollsJob::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CleanupPollsJob::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CleanupPollsJob::aborted)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::CleanupPollsJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__CleanupPollsJob.data,
    qt_meta_data_OCC__CleanupPollsJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::CleanupPollsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::CleanupPollsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__CleanupPollsJob.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::CleanupPollsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OCC::CleanupPollsJob::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::CleanupPollsJob::aborted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
