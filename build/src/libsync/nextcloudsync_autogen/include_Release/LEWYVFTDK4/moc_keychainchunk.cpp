/****************************************************************************
** Meta object code from reading C++ file 'keychainchunk.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/creds/keychainchunk.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keychainchunk.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__KeychainChunk__Job_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__KeychainChunk__Job_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__KeychainChunk__Job_t qt_meta_stringdata_OCC__KeychainChunk__Job = {
    {
QT_MOC_LITERAL(0, 0, 23) // "OCC::KeychainChunk::Job"

    },
    "OCC::KeychainChunk::Job"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__KeychainChunk__Job[] = {

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

void OCC::KeychainChunk::Job::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::KeychainChunk::Job::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__KeychainChunk__Job.data,
    qt_meta_data_OCC__KeychainChunk__Job,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::KeychainChunk::Job::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::KeychainChunk::Job::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__KeychainChunk__Job.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::KeychainChunk::Job::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OCC__KeychainChunk__WriteJob_t {
    QByteArrayData data[7];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__KeychainChunk__WriteJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__KeychainChunk__WriteJob_t qt_meta_stringdata_OCC__KeychainChunk__WriteJob = {
    {
QT_MOC_LITERAL(0, 0, 28), // "OCC::KeychainChunk::WriteJob"
QT_MOC_LITERAL(1, 29, 8), // "finished"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 24), // "KeychainChunk::WriteJob*"
QT_MOC_LITERAL(4, 64, 11), // "incomingJob"
QT_MOC_LITERAL(5, 76, 16), // "slotWriteJobDone"
QT_MOC_LITERAL(6, 93, 15) // "QKeychain::Job*"

    },
    "OCC::KeychainChunk::WriteJob\0finished\0"
    "\0KeychainChunk::WriteJob*\0incomingJob\0"
    "slotWriteJobDone\0QKeychain::Job*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__KeychainChunk__WriteJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    4,

       0        // eod
};

void OCC::KeychainChunk::WriteJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WriteJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< KeychainChunk::WriteJob*(*)>(_a[1]))); break;
        case 1: _t->slotWriteJobDone((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QKeychain::Job* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WriteJob::*)(KeychainChunk::WriteJob * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WriteJob::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::KeychainChunk::WriteJob::staticMetaObject = { {
    QMetaObject::SuperData::link<KeychainChunk::Job::staticMetaObject>(),
    qt_meta_stringdata_OCC__KeychainChunk__WriteJob.data,
    qt_meta_data_OCC__KeychainChunk__WriteJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::KeychainChunk::WriteJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::KeychainChunk::WriteJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__KeychainChunk__WriteJob.stringdata0))
        return static_cast<void*>(this);
    return KeychainChunk::Job::qt_metacast(_clname);
}

int OCC::KeychainChunk::WriteJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KeychainChunk::Job::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::KeychainChunk::WriteJob::finished(KeychainChunk::WriteJob * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__KeychainChunk__ReadJob_t {
    QByteArrayData data[7];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__KeychainChunk__ReadJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__KeychainChunk__ReadJob_t qt_meta_stringdata_OCC__KeychainChunk__ReadJob = {
    {
QT_MOC_LITERAL(0, 0, 27), // "OCC::KeychainChunk::ReadJob"
QT_MOC_LITERAL(1, 28, 8), // "finished"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 23), // "KeychainChunk::ReadJob*"
QT_MOC_LITERAL(4, 62, 11), // "incomingJob"
QT_MOC_LITERAL(5, 74, 15), // "slotReadJobDone"
QT_MOC_LITERAL(6, 90, 15) // "QKeychain::Job*"

    },
    "OCC::KeychainChunk::ReadJob\0finished\0"
    "\0KeychainChunk::ReadJob*\0incomingJob\0"
    "slotReadJobDone\0QKeychain::Job*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__KeychainChunk__ReadJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    4,

       0        // eod
};

void OCC::KeychainChunk::ReadJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReadJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< KeychainChunk::ReadJob*(*)>(_a[1]))); break;
        case 1: _t->slotReadJobDone((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QKeychain::Job* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReadJob::*)(KeychainChunk::ReadJob * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReadJob::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::KeychainChunk::ReadJob::staticMetaObject = { {
    QMetaObject::SuperData::link<KeychainChunk::Job::staticMetaObject>(),
    qt_meta_stringdata_OCC__KeychainChunk__ReadJob.data,
    qt_meta_data_OCC__KeychainChunk__ReadJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::KeychainChunk::ReadJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::KeychainChunk::ReadJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__KeychainChunk__ReadJob.stringdata0))
        return static_cast<void*>(this);
    return KeychainChunk::Job::qt_metacast(_clname);
}

int OCC::KeychainChunk::ReadJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KeychainChunk::Job::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::KeychainChunk::ReadJob::finished(KeychainChunk::ReadJob * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__KeychainChunk__DeleteJob_t {
    QByteArrayData data[7];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__KeychainChunk__DeleteJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__KeychainChunk__DeleteJob_t qt_meta_stringdata_OCC__KeychainChunk__DeleteJob = {
    {
QT_MOC_LITERAL(0, 0, 29), // "OCC::KeychainChunk::DeleteJob"
QT_MOC_LITERAL(1, 30, 8), // "finished"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 25), // "KeychainChunk::DeleteJob*"
QT_MOC_LITERAL(4, 66, 11), // "incomingJob"
QT_MOC_LITERAL(5, 78, 17), // "slotDeleteJobDone"
QT_MOC_LITERAL(6, 96, 15) // "QKeychain::Job*"

    },
    "OCC::KeychainChunk::DeleteJob\0finished\0"
    "\0KeychainChunk::DeleteJob*\0incomingJob\0"
    "slotDeleteJobDone\0QKeychain::Job*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__KeychainChunk__DeleteJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    4,

       0        // eod
};

void OCC::KeychainChunk::DeleteJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeleteJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< KeychainChunk::DeleteJob*(*)>(_a[1]))); break;
        case 1: _t->slotDeleteJobDone((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QKeychain::Job* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeleteJob::*)(KeychainChunk::DeleteJob * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeleteJob::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::KeychainChunk::DeleteJob::staticMetaObject = { {
    QMetaObject::SuperData::link<KeychainChunk::Job::staticMetaObject>(),
    qt_meta_stringdata_OCC__KeychainChunk__DeleteJob.data,
    qt_meta_data_OCC__KeychainChunk__DeleteJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::KeychainChunk::DeleteJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::KeychainChunk::DeleteJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__KeychainChunk__DeleteJob.stringdata0))
        return static_cast<void*>(this);
    return KeychainChunk::Job::qt_metacast(_clname);
}

int OCC::KeychainChunk::DeleteJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KeychainChunk::Job::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::KeychainChunk::DeleteJob::finished(KeychainChunk::DeleteJob * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
