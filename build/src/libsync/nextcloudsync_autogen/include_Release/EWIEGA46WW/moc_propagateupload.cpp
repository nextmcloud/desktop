/****************************************************************************
** Meta object code from reading C++ file 'propagateupload.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/propagateupload.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propagateupload.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__UploadDevice_t {
    QByteArrayData data[5];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__UploadDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__UploadDevice_t qt_meta_stringdata_OCC__UploadDevice = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::UploadDevice"
QT_MOC_LITERAL(1, 18, 21), // "slotJobUploadProgress"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "sent"
QT_MOC_LITERAL(4, 46, 1) // "t"

    },
    "OCC::UploadDevice\0slotJobUploadProgress\0"
    "\0sent\0t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__UploadDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,

       0        // eod
};

void OCC::UploadDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UploadDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotJobUploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::UploadDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QIODevice::staticMetaObject>(),
    qt_meta_stringdata_OCC__UploadDevice.data,
    qt_meta_data_OCC__UploadDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::UploadDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UploadDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__UploadDevice.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int OCC::UploadDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OCC__PUTFileJob_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PUTFileJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PUTFileJob_t qt_meta_stringdata_OCC__PUTFileJob = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OCC::PUTFileJob"
QT_MOC_LITERAL(1, 16, 14), // "finishedSignal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14) // "uploadProgress"

    },
    "OCC::PUTFileJob\0finishedSignal\0\0"
    "uploadProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PUTFileJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    2,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

       0        // eod
};

void OCC::PUTFileJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PUTFileJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finishedSignal(); break;
        case 1: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PUTFileJob::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PUTFileJob::finishedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PUTFileJob::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PUTFileJob::uploadProgress)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::PUTFileJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__PUTFileJob.data,
    qt_meta_data_OCC__PUTFileJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PUTFileJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PUTFileJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PUTFileJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::PUTFileJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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
void OCC::PUTFileJob::finishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::PUTFileJob::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__PollJob_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PollJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PollJob_t qt_meta_stringdata_OCC__PollJob = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OCC::PollJob"
QT_MOC_LITERAL(1, 13, 14), // "finishedSignal"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "OCC::PollJob\0finishedSignal\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PollJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::PollJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PollJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finishedSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PollJob::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PollJob::finishedSignal)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::PollJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__PollJob.data,
    qt_meta_data_OCC__PollJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PollJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PollJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PollJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::PollJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void OCC::PollJob::finishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_OCC__PropagateUploadFileCommon_t {
    QByteArrayData data[19];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateUploadFileCommon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateUploadFileCommon_t qt_meta_stringdata_OCC__PropagateUploadFileCommon = {
    {
QT_MOC_LITERAL(0, 0, 30), // "OCC::PropagateUploadFileCommon"
QT_MOC_LITERAL(1, 31, 26), // "slotComputeContentChecksum"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 31), // "slotComputeTransmissionChecksum"
QT_MOC_LITERAL(4, 91, 19), // "contentChecksumType"
QT_MOC_LITERAL(5, 111, 15), // "contentChecksum"
QT_MOC_LITERAL(6, 127, 15), // "slotStartUpload"
QT_MOC_LITERAL(7, 143, 24), // "transmissionChecksumType"
QT_MOC_LITERAL(8, 168, 20), // "transmissionChecksum"
QT_MOC_LITERAL(9, 189, 18), // "slotFolderUnlocked"
QT_MOC_LITERAL(10, 208, 8), // "folderId"
QT_MOC_LITERAL(11, 217, 14), // "httpReturnCode"
QT_MOC_LITERAL(12, 232, 28), // "slotOnErrorStartFolderUnlock"
QT_MOC_LITERAL(13, 261, 20), // "SyncFileItem::Status"
QT_MOC_LITERAL(14, 282, 6), // "status"
QT_MOC_LITERAL(15, 289, 11), // "errorString"
QT_MOC_LITERAL(16, 301, 16), // "slotJobDestroyed"
QT_MOC_LITERAL(17, 318, 3), // "job"
QT_MOC_LITERAL(18, 322, 16) // "slotPollFinished"

    },
    "OCC::PropagateUploadFileCommon\0"
    "slotComputeContentChecksum\0\0"
    "slotComputeTransmissionChecksum\0"
    "contentChecksumType\0contentChecksum\0"
    "slotStartUpload\0transmissionChecksumType\0"
    "transmissionChecksum\0slotFolderUnlocked\0"
    "folderId\0httpReturnCode\0"
    "slotOnErrorStartFolderUnlock\0"
    "SyncFileItem::Status\0status\0errorString\0"
    "slotJobDestroyed\0job\0slotPollFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateUploadFileCommon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    2,   50,    2, 0x08 /* Private */,
       6,    2,   55,    2, 0x08 /* Private */,
       9,    2,   60,    2, 0x08 /* Private */,
      12,    2,   65,    2, 0x08 /* Private */,
      16,    1,   70,    2, 0x0a /* Public */,
      18,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    4,    5,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    7,    8,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   10,   11,
    QMetaType::Void, 0x80000000 | 13, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QObjectStar,   17,
    QMetaType::Void,

       0        // eod
};

void OCC::PropagateUploadFileCommon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateUploadFileCommon *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotComputeContentChecksum(); break;
        case 1: _t->slotComputeTransmissionChecksum((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 2: _t->slotStartUpload((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: _t->slotFolderUnlocked((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->slotOnErrorStartFolderUnlock((*reinterpret_cast< SyncFileItem::Status(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->slotJobDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->slotPollFinished(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::PropagateUploadFileCommon::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagateItemJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__PropagateUploadFileCommon.data,
    qt_meta_data_OCC__PropagateUploadFileCommon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PropagateUploadFileCommon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateUploadFileCommon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateUploadFileCommon.stringdata0))
        return static_cast<void*>(this);
    return PropagateItemJob::qt_metacast(_clname);
}

int OCC::PropagateUploadFileCommon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateItemJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_OCC__PropagateUploadFileV1_t {
    QByteArrayData data[8];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateUploadFileV1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateUploadFileV1_t qt_meta_stringdata_OCC__PropagateUploadFileV1 = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OCC::PropagateUploadFileV1"
QT_MOC_LITERAL(1, 27, 5), // "abort"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 29), // "OCC::PropagatorJob::AbortType"
QT_MOC_LITERAL(4, 64, 9), // "abortType"
QT_MOC_LITERAL(5, 74, 14), // "startNextChunk"
QT_MOC_LITERAL(6, 89, 15), // "slotPutFinished"
QT_MOC_LITERAL(7, 105, 18) // "slotUploadProgress"

    },
    "OCC::PropagateUploadFileV1\0abort\0\0"
    "OCC::PropagatorJob::AbortType\0abortType\0"
    "startNextChunk\0slotPutFinished\0"
    "slotUploadProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateUploadFileV1[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x08 /* Private */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    2,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

       0        // eod
};

void OCC::PropagateUploadFileV1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateUploadFileV1 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->abort((*reinterpret_cast< OCC::PropagatorJob::AbortType(*)>(_a[1]))); break;
        case 1: _t->startNextChunk(); break;
        case 2: _t->slotPutFinished(); break;
        case 3: _t->slotUploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::PropagateUploadFileV1::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagateUploadFileCommon::staticMetaObject>(),
    qt_meta_stringdata_OCC__PropagateUploadFileV1.data,
    qt_meta_data_OCC__PropagateUploadFileV1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PropagateUploadFileV1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateUploadFileV1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateUploadFileV1.stringdata0))
        return static_cast<void*>(this);
    return PropagateUploadFileCommon::qt_metacast(_clname);
}

int OCC::PropagateUploadFileV1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateUploadFileCommon::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_OCC__PropagateUploadFileNG_t {
    QByteArrayData data[16];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateUploadFileNG_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateUploadFileNG_t qt_meta_stringdata_OCC__PropagateUploadFileNG = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OCC::PropagateUploadFileNG"
QT_MOC_LITERAL(1, 27, 5), // "abort"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 37), // "OCC::PropagateUploadFileNG::A..."
QT_MOC_LITERAL(4, 72, 9), // "abortType"
QT_MOC_LITERAL(5, 82, 20), // "slotPropfindFinished"
QT_MOC_LITERAL(6, 103, 29), // "slotPropfindFinishedWithError"
QT_MOC_LITERAL(7, 133, 19), // "slotPropfindIterate"
QT_MOC_LITERAL(8, 153, 4), // "name"
QT_MOC_LITERAL(9, 158, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(10, 180, 10), // "properties"
QT_MOC_LITERAL(11, 191, 21), // "slotDeleteJobFinished"
QT_MOC_LITERAL(12, 213, 17), // "slotMkColFinished"
QT_MOC_LITERAL(13, 231, 15), // "slotPutFinished"
QT_MOC_LITERAL(14, 247, 19), // "slotMoveJobFinished"
QT_MOC_LITERAL(15, 267, 18) // "slotUploadProgress"

    },
    "OCC::PropagateUploadFileNG\0abort\0\0"
    "OCC::PropagateUploadFileNG::AbortType\0"
    "abortType\0slotPropfindFinished\0"
    "slotPropfindFinishedWithError\0"
    "slotPropfindIterate\0name\0QMap<QString,QString>\0"
    "properties\0slotDeleteJobFinished\0"
    "slotMkColFinished\0slotPutFinished\0"
    "slotMoveJobFinished\0slotUploadProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateUploadFileNG[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    2,   64,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,
      12,    0,   70,    2, 0x08 /* Private */,
      13,    0,   71,    2, 0x08 /* Private */,
      14,    0,   72,    2, 0x08 /* Private */,
      15,    2,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,    8,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

       0        // eod
};

void OCC::PropagateUploadFileNG::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateUploadFileNG *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->abort((*reinterpret_cast< OCC::PropagateUploadFileNG::AbortType(*)>(_a[1]))); break;
        case 1: _t->slotPropfindFinished(); break;
        case 2: _t->slotPropfindFinishedWithError(); break;
        case 3: _t->slotPropfindIterate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[2]))); break;
        case 4: _t->slotDeleteJobFinished(); break;
        case 5: _t->slotMkColFinished(); break;
        case 6: _t->slotPutFinished(); break;
        case 7: _t->slotMoveJobFinished(); break;
        case 8: _t->slotUploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::PropagateUploadFileNG::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagateUploadFileCommon::staticMetaObject>(),
    qt_meta_stringdata_OCC__PropagateUploadFileNG.data,
    qt_meta_data_OCC__PropagateUploadFileNG,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PropagateUploadFileNG::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateUploadFileNG::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateUploadFileNG.stringdata0))
        return static_cast<void*>(this);
    return PropagateUploadFileCommon::qt_metacast(_clname);
}

int OCC::PropagateUploadFileNG::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateUploadFileCommon::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
