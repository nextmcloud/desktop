/****************************************************************************
** Meta object code from reading C++ file 'checksums.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/common/checksums.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checksums.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__ComputeChecksum_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ComputeChecksum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ComputeChecksum_t qt_meta_stringdata_OCC__ComputeChecksum = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OCC::ComputeChecksum"
QT_MOC_LITERAL(1, 21, 4), // "done"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "checksumType"
QT_MOC_LITERAL(4, 40, 8), // "checksum"
QT_MOC_LITERAL(5, 49, 19) // "slotCalculationDone"

    },
    "OCC::ComputeChecksum\0done\0\0checksumType\0"
    "checksum\0slotCalculationDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ComputeChecksum[] = {

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
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::ComputeChecksum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComputeChecksum *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->slotCalculationDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComputeChecksum::*)(const QByteArray & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputeChecksum::done)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::ComputeChecksum::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__ComputeChecksum.data,
    qt_meta_data_OCC__ComputeChecksum,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::ComputeChecksum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ComputeChecksum::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ComputeChecksum.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::ComputeChecksum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::ComputeChecksum::done(const QByteArray & _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__ValidateChecksumHeader_t {
    QByteArrayData data[17];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ValidateChecksumHeader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ValidateChecksumHeader_t qt_meta_stringdata_OCC__ValidateChecksumHeader = {
    {
QT_MOC_LITERAL(0, 0, 27), // "OCC::ValidateChecksumHeader"
QT_MOC_LITERAL(1, 28, 9), // "validated"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "checksumType"
QT_MOC_LITERAL(4, 52, 8), // "checksum"
QT_MOC_LITERAL(5, 61, 16), // "validationFailed"
QT_MOC_LITERAL(6, 78, 6), // "errMsg"
QT_MOC_LITERAL(7, 85, 22), // "calculatedChecksumType"
QT_MOC_LITERAL(8, 108, 18), // "calculatedChecksum"
QT_MOC_LITERAL(9, 127, 37), // "ValidateChecksumHeader::Failu..."
QT_MOC_LITERAL(10, 165, 6), // "reason"
QT_MOC_LITERAL(11, 172, 22), // "slotChecksumCalculated"
QT_MOC_LITERAL(12, 195, 13), // "FailureReason"
QT_MOC_LITERAL(13, 209, 7), // "Success"
QT_MOC_LITERAL(14, 217, 23), // "ChecksumHeaderMalformed"
QT_MOC_LITERAL(15, 241, 19), // "ChecksumTypeUnknown"
QT_MOC_LITERAL(16, 261, 16) // "ChecksumMismatch"

    },
    "OCC::ValidateChecksumHeader\0validated\0"
    "\0checksumType\0checksum\0validationFailed\0"
    "errMsg\0calculatedChecksumType\0"
    "calculatedChecksum\0"
    "ValidateChecksumHeader::FailureReason\0"
    "reason\0slotChecksumCalculated\0"
    "FailureReason\0Success\0ChecksumHeaderMalformed\0"
    "ChecksumTypeUnknown\0ChecksumMismatch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ValidateChecksumHeader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   48, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    4,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, QMetaType::QByteArray, 0x80000000 | 9,    6,    7,    8,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,

 // enums: name, alias, flags, count, data
      12,   12, 0x0,    4,   53,

 // enum data: key, value
      13, uint(OCC::ValidateChecksumHeader::Success),
      14, uint(OCC::ValidateChecksumHeader::ChecksumHeaderMalformed),
      15, uint(OCC::ValidateChecksumHeader::ChecksumTypeUnknown),
      16, uint(OCC::ValidateChecksumHeader::ChecksumMismatch),

       0        // eod
};

void OCC::ValidateChecksumHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ValidateChecksumHeader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->validated((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->validationFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< const ValidateChecksumHeader::FailureReason(*)>(_a[4]))); break;
        case 2: _t->slotChecksumCalculated((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ValidateChecksumHeader::*)(const QByteArray & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ValidateChecksumHeader::validated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ValidateChecksumHeader::*)(const QString & , const QByteArray & , const QByteArray & , const ValidateChecksumHeader::FailureReason );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ValidateChecksumHeader::validationFailed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::ValidateChecksumHeader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__ValidateChecksumHeader.data,
    qt_meta_data_OCC__ValidateChecksumHeader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::ValidateChecksumHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ValidateChecksumHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ValidateChecksumHeader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::ValidateChecksumHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::ValidateChecksumHeader::validated(const QByteArray & _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::ValidateChecksumHeader::validationFailed(const QString & _t1, const QByteArray & _t2, const QByteArray & _t3, const ValidateChecksumHeader::FailureReason _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__CSyncChecksumHook_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__CSyncChecksumHook_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__CSyncChecksumHook_t qt_meta_stringdata_OCC__CSyncChecksumHook = {
    {
QT_MOC_LITERAL(0, 0, 22) // "OCC::CSyncChecksumHook"

    },
    "OCC::CSyncChecksumHook"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__CSyncChecksumHook[] = {

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

void OCC::CSyncChecksumHook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::CSyncChecksumHook::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__CSyncChecksumHook.data,
    qt_meta_data_OCC__CSyncChecksumHook,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::CSyncChecksumHook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::CSyncChecksumHook::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__CSyncChecksumHook.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::CSyncChecksumHook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
