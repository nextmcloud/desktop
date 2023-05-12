/****************************************************************************
** Meta object code from reading C++ file 'clientsideencryptionjobs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/clientsideencryptionjobs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientsideencryptionjobs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__SignPublicKeyApiJob_t {
    QByteArrayData data[6];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SignPublicKeyApiJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SignPublicKeyApiJob_t qt_meta_stringdata_OCC__SignPublicKeyApiJob = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OCC::SignPublicKeyApiJob"
QT_MOC_LITERAL(1, 25, 12), // "jsonReceived"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "json"
QT_MOC_LITERAL(4, 44, 10), // "statusCode"
QT_MOC_LITERAL(5, 55, 5) // "start"

    },
    "OCC::SignPublicKeyApiJob\0jsonReceived\0"
    "\0json\0statusCode\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SignPublicKeyApiJob[] = {

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
       5,    0,   29,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::SignPublicKeyApiJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SignPublicKeyApiJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->jsonReceived((*reinterpret_cast< const QJsonDocument(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SignPublicKeyApiJob::*)(const QJsonDocument & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignPublicKeyApiJob::jsonReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::SignPublicKeyApiJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__SignPublicKeyApiJob.data,
    qt_meta_data_OCC__SignPublicKeyApiJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::SignPublicKeyApiJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SignPublicKeyApiJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SignPublicKeyApiJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::SignPublicKeyApiJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::SignPublicKeyApiJob::jsonReceived(const QJsonDocument & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__StorePrivateKeyApiJob_t {
    QByteArrayData data[6];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__StorePrivateKeyApiJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__StorePrivateKeyApiJob_t qt_meta_stringdata_OCC__StorePrivateKeyApiJob = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OCC::StorePrivateKeyApiJob"
QT_MOC_LITERAL(1, 27, 12), // "jsonReceived"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "json"
QT_MOC_LITERAL(4, 46, 10), // "statusCode"
QT_MOC_LITERAL(5, 57, 5) // "start"

    },
    "OCC::StorePrivateKeyApiJob\0jsonReceived\0"
    "\0json\0statusCode\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__StorePrivateKeyApiJob[] = {

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
       5,    0,   29,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::StorePrivateKeyApiJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StorePrivateKeyApiJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->jsonReceived((*reinterpret_cast< const QJsonDocument(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StorePrivateKeyApiJob::*)(const QJsonDocument & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StorePrivateKeyApiJob::jsonReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::StorePrivateKeyApiJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__StorePrivateKeyApiJob.data,
    qt_meta_data_OCC__StorePrivateKeyApiJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::StorePrivateKeyApiJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::StorePrivateKeyApiJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__StorePrivateKeyApiJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::StorePrivateKeyApiJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::StorePrivateKeyApiJob::jsonReceived(const QJsonDocument & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__SetEncryptionFlagApiJob_t {
    QByteArrayData data[8];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SetEncryptionFlagApiJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SetEncryptionFlagApiJob_t qt_meta_stringdata_OCC__SetEncryptionFlagApiJob = {
    {
QT_MOC_LITERAL(0, 0, 28), // "OCC::SetEncryptionFlagApiJob"
QT_MOC_LITERAL(1, 29, 7), // "success"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 6), // "fileId"
QT_MOC_LITERAL(4, 45, 5), // "error"
QT_MOC_LITERAL(5, 51, 14), // "httpReturnCode"
QT_MOC_LITERAL(6, 66, 12), // "errorMessage"
QT_MOC_LITERAL(7, 79, 5) // "start"

    },
    "OCC::SetEncryptionFlagApiJob\0success\0"
    "\0fileId\0error\0httpReturnCode\0errorMessage\0"
    "start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SetEncryptionFlagApiJob[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,
       4,    3,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int, QMetaType::QString,    3,    5,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::SetEncryptionFlagApiJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SetEncryptionFlagApiJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SetEncryptionFlagApiJob::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetEncryptionFlagApiJob::success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SetEncryptionFlagApiJob::*)(const QByteArray & , const int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetEncryptionFlagApiJob::error)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::SetEncryptionFlagApiJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__SetEncryptionFlagApiJob.data,
    qt_meta_data_OCC__SetEncryptionFlagApiJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::SetEncryptionFlagApiJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SetEncryptionFlagApiJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SetEncryptionFlagApiJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::SetEncryptionFlagApiJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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
void OCC::SetEncryptionFlagApiJob::success(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::SetEncryptionFlagApiJob::error(const QByteArray & _t1, const int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__LockEncryptFolderApiJob_t {
    QByteArrayData data[9];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__LockEncryptFolderApiJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__LockEncryptFolderApiJob_t qt_meta_stringdata_OCC__LockEncryptFolderApiJob = {
    {
QT_MOC_LITERAL(0, 0, 28), // "OCC::LockEncryptFolderApiJob"
QT_MOC_LITERAL(1, 29, 7), // "success"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 6), // "fileId"
QT_MOC_LITERAL(4, 45, 5), // "token"
QT_MOC_LITERAL(5, 51, 5), // "error"
QT_MOC_LITERAL(6, 57, 13), // "httpErrorCode"
QT_MOC_LITERAL(7, 71, 12), // "errorMessage"
QT_MOC_LITERAL(8, 84, 5) // "start"

    },
    "OCC::LockEncryptFolderApiJob\0success\0"
    "\0fileId\0token\0error\0httpErrorCode\0"
    "errorMessage\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__LockEncryptFolderApiJob[] = {

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
       1,    2,   29,    2, 0x06 /* Public */,
       5,    3,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int, QMetaType::QString,    3,    6,    7,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::LockEncryptFolderApiJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LockEncryptFolderApiJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->error((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LockEncryptFolderApiJob::*)(const QByteArray & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LockEncryptFolderApiJob::success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LockEncryptFolderApiJob::*)(const QByteArray & , const int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LockEncryptFolderApiJob::error)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::LockEncryptFolderApiJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__LockEncryptFolderApiJob.data,
    qt_meta_data_OCC__LockEncryptFolderApiJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::LockEncryptFolderApiJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::LockEncryptFolderApiJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__LockEncryptFolderApiJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::LockEncryptFolderApiJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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
void OCC::LockEncryptFolderApiJob::success(const QByteArray & _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::LockEncryptFolderApiJob::error(const QByteArray & _t1, const int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__UnlockEncryptFolderApiJob_t {
    QByteArrayData data[9];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__UnlockEncryptFolderApiJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__UnlockEncryptFolderApiJob_t qt_meta_stringdata_OCC__UnlockEncryptFolderApiJob = {
    {
QT_MOC_LITERAL(0, 0, 30), // "OCC::UnlockEncryptFolderApiJob"
QT_MOC_LITERAL(1, 31, 7), // "success"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 6), // "fileId"
QT_MOC_LITERAL(4, 47, 5), // "error"
QT_MOC_LITERAL(5, 53, 14), // "httpReturnCode"
QT_MOC_LITERAL(6, 68, 12), // "errorMessage"
QT_MOC_LITERAL(7, 81, 4), // "done"
QT_MOC_LITERAL(8, 86, 5) // "start"

    },
    "OCC::UnlockEncryptFolderApiJob\0success\0"
    "\0fileId\0error\0httpReturnCode\0errorMessage\0"
    "done\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__UnlockEncryptFolderApiJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    3,   37,    2, 0x06 /* Public */,
       7,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int, QMetaType::QString,    3,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::UnlockEncryptFolderApiJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UnlockEncryptFolderApiJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->done(); break;
        case 3: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UnlockEncryptFolderApiJob::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UnlockEncryptFolderApiJob::success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UnlockEncryptFolderApiJob::*)(const QByteArray & , const int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UnlockEncryptFolderApiJob::error)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UnlockEncryptFolderApiJob::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UnlockEncryptFolderApiJob::done)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::UnlockEncryptFolderApiJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__UnlockEncryptFolderApiJob.data,
    qt_meta_data_OCC__UnlockEncryptFolderApiJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::UnlockEncryptFolderApiJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UnlockEncryptFolderApiJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__UnlockEncryptFolderApiJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::UnlockEncryptFolderApiJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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
void OCC::UnlockEncryptFolderApiJob::success(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::UnlockEncryptFolderApiJob::error(const QByteArray & _t1, const int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::UnlockEncryptFolderApiJob::done()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_OCC__StoreMetaDataApiJob_t {
    QByteArrayData data[7];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__StoreMetaDataApiJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__StoreMetaDataApiJob_t qt_meta_stringdata_OCC__StoreMetaDataApiJob = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OCC::StoreMetaDataApiJob"
QT_MOC_LITERAL(1, 25, 7), // "success"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 6), // "fileId"
QT_MOC_LITERAL(4, 41, 5), // "error"
QT_MOC_LITERAL(5, 47, 14), // "httpReturnCode"
QT_MOC_LITERAL(6, 62, 5) // "start"

    },
    "OCC::StoreMetaDataApiJob\0success\0\0"
    "fileId\0error\0httpReturnCode\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__StoreMetaDataApiJob[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,    3,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::StoreMetaDataApiJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StoreMetaDataApiJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StoreMetaDataApiJob::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StoreMetaDataApiJob::success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StoreMetaDataApiJob::*)(const QByteArray & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StoreMetaDataApiJob::error)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::StoreMetaDataApiJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__StoreMetaDataApiJob.data,
    qt_meta_data_OCC__StoreMetaDataApiJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::StoreMetaDataApiJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::StoreMetaDataApiJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__StoreMetaDataApiJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::StoreMetaDataApiJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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
void OCC::StoreMetaDataApiJob::success(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::StoreMetaDataApiJob::error(const QByteArray & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__UpdateMetadataApiJob_t {
    QByteArrayData data[7];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__UpdateMetadataApiJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__UpdateMetadataApiJob_t qt_meta_stringdata_OCC__UpdateMetadataApiJob = {
    {
QT_MOC_LITERAL(0, 0, 25), // "OCC::UpdateMetadataApiJob"
QT_MOC_LITERAL(1, 26, 7), // "success"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "fileId"
QT_MOC_LITERAL(4, 42, 5), // "error"
QT_MOC_LITERAL(5, 48, 14), // "httpReturnCode"
QT_MOC_LITERAL(6, 63, 5) // "start"

    },
    "OCC::UpdateMetadataApiJob\0success\0\0"
    "fileId\0error\0httpReturnCode\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__UpdateMetadataApiJob[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,    3,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::UpdateMetadataApiJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateMetadataApiJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UpdateMetadataApiJob::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateMetadataApiJob::success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UpdateMetadataApiJob::*)(const QByteArray & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateMetadataApiJob::error)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::UpdateMetadataApiJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__UpdateMetadataApiJob.data,
    qt_meta_data_OCC__UpdateMetadataApiJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::UpdateMetadataApiJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UpdateMetadataApiJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__UpdateMetadataApiJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::UpdateMetadataApiJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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
void OCC::UpdateMetadataApiJob::success(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::UpdateMetadataApiJob::error(const QByteArray & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__GetMetadataApiJob_t {
    QByteArrayData data[9];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__GetMetadataApiJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__GetMetadataApiJob_t qt_meta_stringdata_OCC__GetMetadataApiJob = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OCC::GetMetadataApiJob"
QT_MOC_LITERAL(1, 23, 12), // "jsonReceived"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "json"
QT_MOC_LITERAL(4, 42, 10), // "statusCode"
QT_MOC_LITERAL(5, 53, 5), // "error"
QT_MOC_LITERAL(6, 59, 6), // "fileId"
QT_MOC_LITERAL(7, 66, 14), // "httpReturnCode"
QT_MOC_LITERAL(8, 81, 5) // "start"

    },
    "OCC::GetMetadataApiJob\0jsonReceived\0"
    "\0json\0statusCode\0error\0fileId\0"
    "httpReturnCode\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__GetMetadataApiJob[] = {

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
       1,    2,   29,    2, 0x06 /* Public */,
       5,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,    6,    7,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::GetMetadataApiJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetMetadataApiJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->jsonReceived((*reinterpret_cast< const QJsonDocument(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->error((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetMetadataApiJob::*)(const QJsonDocument & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetMetadataApiJob::jsonReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GetMetadataApiJob::*)(const QByteArray & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetMetadataApiJob::error)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::GetMetadataApiJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__GetMetadataApiJob.data,
    qt_meta_data_OCC__GetMetadataApiJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::GetMetadataApiJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::GetMetadataApiJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__GetMetadataApiJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::GetMetadataApiJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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
void OCC::GetMetadataApiJob::jsonReceived(const QJsonDocument & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::GetMetadataApiJob::error(const QByteArray & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__DeleteMetadataApiJob_t {
    QByteArrayData data[7];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__DeleteMetadataApiJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__DeleteMetadataApiJob_t qt_meta_stringdata_OCC__DeleteMetadataApiJob = {
    {
QT_MOC_LITERAL(0, 0, 25), // "OCC::DeleteMetadataApiJob"
QT_MOC_LITERAL(1, 26, 7), // "success"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "fileId"
QT_MOC_LITERAL(4, 42, 5), // "error"
QT_MOC_LITERAL(5, 48, 13), // "httpErrorCode"
QT_MOC_LITERAL(6, 62, 5) // "start"

    },
    "OCC::DeleteMetadataApiJob\0success\0\0"
    "fileId\0error\0httpErrorCode\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__DeleteMetadataApiJob[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,    3,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::DeleteMetadataApiJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeleteMetadataApiJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeleteMetadataApiJob::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeleteMetadataApiJob::success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeleteMetadataApiJob::*)(const QByteArray & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeleteMetadataApiJob::error)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::DeleteMetadataApiJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__DeleteMetadataApiJob.data,
    qt_meta_data_OCC__DeleteMetadataApiJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::DeleteMetadataApiJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::DeleteMetadataApiJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__DeleteMetadataApiJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::DeleteMetadataApiJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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
void OCC::DeleteMetadataApiJob::success(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::DeleteMetadataApiJob::error(const QByteArray & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
