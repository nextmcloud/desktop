/****************************************************************************
** Meta object code from reading C++ file 'syncenginetestutils.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../test/syncenginetestutils.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncenginetestutils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FakeReply_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakeReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakeReply_t qt_meta_stringdata_FakeReply = {
    {
QT_MOC_LITERAL(0, 0, 9) // "FakeReply"

    },
    "FakeReply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakeReply[] = {

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

void FakeReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakeReply::staticMetaObject = { {
    QMetaObject::SuperData::link<QNetworkReply::staticMetaObject>(),
    qt_meta_stringdata_FakeReply.data,
    qt_meta_data_FakeReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakeReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakeReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakeReply.stringdata0))
        return static_cast<void*>(this);
    return QNetworkReply::qt_metacast(_clname);
}

int FakeReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkReply::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FakePropfindReply_t {
    QByteArrayData data[4];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakePropfindReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakePropfindReply_t qt_meta_stringdata_FakePropfindReply = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FakePropfindReply"
QT_MOC_LITERAL(1, 18, 7), // "respond"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10) // "respond404"

    },
    "FakePropfindReply\0respond\0\0respond404"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakePropfindReply[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x02 /* Public */,
       3,    0,   25,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FakePropfindReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakePropfindReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->respond(); break;
        case 1: _t->respond404(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakePropfindReply::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeReply::staticMetaObject>(),
    qt_meta_stringdata_FakePropfindReply.data,
    qt_meta_data_FakePropfindReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakePropfindReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakePropfindReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakePropfindReply.stringdata0))
        return static_cast<void*>(this);
    return FakeReply::qt_metacast(_clname);
}

int FakePropfindReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeReply::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FakePutReply_t {
    QByteArrayData data[3];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakePutReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakePutReply_t qt_meta_stringdata_FakePutReply = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FakePutReply"
QT_MOC_LITERAL(1, 13, 7), // "respond"
QT_MOC_LITERAL(2, 21, 0) // ""

    },
    "FakePutReply\0respond\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakePutReply[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void FakePutReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakePutReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->respond(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakePutReply::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeReply::staticMetaObject>(),
    qt_meta_stringdata_FakePutReply.data,
    qt_meta_data_FakePutReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakePutReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakePutReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakePutReply.stringdata0))
        return static_cast<void*>(this);
    return FakeReply::qt_metacast(_clname);
}

int FakePutReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeReply::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FakePutMultiFileReply_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakePutMultiFileReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakePutMultiFileReply_t qt_meta_stringdata_FakePutMultiFileReply = {
    {
QT_MOC_LITERAL(0, 0, 21), // "FakePutMultiFileReply"
QT_MOC_LITERAL(1, 22, 7), // "respond"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "FakePutMultiFileReply\0respond\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakePutMultiFileReply[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void FakePutMultiFileReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakePutMultiFileReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->respond(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakePutMultiFileReply::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeReply::staticMetaObject>(),
    qt_meta_stringdata_FakePutMultiFileReply.data,
    qt_meta_data_FakePutMultiFileReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakePutMultiFileReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakePutMultiFileReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakePutMultiFileReply.stringdata0))
        return static_cast<void*>(this);
    return FakeReply::qt_metacast(_clname);
}

int FakePutMultiFileReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeReply::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FakeMkcolReply_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakeMkcolReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakeMkcolReply_t qt_meta_stringdata_FakeMkcolReply = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FakeMkcolReply"
QT_MOC_LITERAL(1, 15, 7), // "respond"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "FakeMkcolReply\0respond\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakeMkcolReply[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void FakeMkcolReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeMkcolReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->respond(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakeMkcolReply::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeReply::staticMetaObject>(),
    qt_meta_stringdata_FakeMkcolReply.data,
    qt_meta_data_FakeMkcolReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakeMkcolReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakeMkcolReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakeMkcolReply.stringdata0))
        return static_cast<void*>(this);
    return FakeReply::qt_metacast(_clname);
}

int FakeMkcolReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeReply::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FakeDeleteReply_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakeDeleteReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakeDeleteReply_t qt_meta_stringdata_FakeDeleteReply = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FakeDeleteReply"
QT_MOC_LITERAL(1, 16, 7), // "respond"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "FakeDeleteReply\0respond\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakeDeleteReply[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void FakeDeleteReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeDeleteReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->respond(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakeDeleteReply::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeReply::staticMetaObject>(),
    qt_meta_stringdata_FakeDeleteReply.data,
    qt_meta_data_FakeDeleteReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakeDeleteReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakeDeleteReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakeDeleteReply.stringdata0))
        return static_cast<void*>(this);
    return FakeReply::qt_metacast(_clname);
}

int FakeDeleteReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeReply::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FakeMoveReply_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakeMoveReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakeMoveReply_t qt_meta_stringdata_FakeMoveReply = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FakeMoveReply"
QT_MOC_LITERAL(1, 14, 7), // "respond"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "FakeMoveReply\0respond\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakeMoveReply[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void FakeMoveReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeMoveReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->respond(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakeMoveReply::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeReply::staticMetaObject>(),
    qt_meta_stringdata_FakeMoveReply.data,
    qt_meta_data_FakeMoveReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakeMoveReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakeMoveReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakeMoveReply.stringdata0))
        return static_cast<void*>(this);
    return FakeReply::qt_metacast(_clname);
}

int FakeMoveReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeReply::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FakeGetReply_t {
    QByteArrayData data[3];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakeGetReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakeGetReply_t qt_meta_stringdata_FakeGetReply = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FakeGetReply"
QT_MOC_LITERAL(1, 13, 7), // "respond"
QT_MOC_LITERAL(2, 21, 0) // ""

    },
    "FakeGetReply\0respond\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakeGetReply[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void FakeGetReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeGetReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->respond(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakeGetReply::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeReply::staticMetaObject>(),
    qt_meta_stringdata_FakeGetReply.data,
    qt_meta_data_FakeGetReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakeGetReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakeGetReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakeGetReply.stringdata0))
        return static_cast<void*>(this);
    return FakeReply::qt_metacast(_clname);
}

int FakeGetReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeReply::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FakeGetWithDataReply_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakeGetWithDataReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakeGetWithDataReply_t qt_meta_stringdata_FakeGetWithDataReply = {
    {
QT_MOC_LITERAL(0, 0, 20), // "FakeGetWithDataReply"
QT_MOC_LITERAL(1, 21, 7), // "respond"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "FakeGetWithDataReply\0respond\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakeGetWithDataReply[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void FakeGetWithDataReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeGetWithDataReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->respond(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakeGetWithDataReply::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeReply::staticMetaObject>(),
    qt_meta_stringdata_FakeGetWithDataReply.data,
    qt_meta_data_FakeGetWithDataReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakeGetWithDataReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakeGetWithDataReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakeGetWithDataReply.stringdata0))
        return static_cast<void*>(this);
    return FakeReply::qt_metacast(_clname);
}

int FakeGetWithDataReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeReply::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FakeChunkMoveReply_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakeChunkMoveReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakeChunkMoveReply_t qt_meta_stringdata_FakeChunkMoveReply = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FakeChunkMoveReply"
QT_MOC_LITERAL(1, 19, 7), // "respond"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 25) // "respondPreconditionFailed"

    },
    "FakeChunkMoveReply\0respond\0\0"
    "respondPreconditionFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakeChunkMoveReply[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x02 /* Public */,
       3,    0,   25,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FakeChunkMoveReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeChunkMoveReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->respond(); break;
        case 1: _t->respondPreconditionFailed(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakeChunkMoveReply::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeReply::staticMetaObject>(),
    qt_meta_stringdata_FakeChunkMoveReply.data,
    qt_meta_data_FakeChunkMoveReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakeChunkMoveReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakeChunkMoveReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakeChunkMoveReply.stringdata0))
        return static_cast<void*>(this);
    return FakeReply::qt_metacast(_clname);
}

int FakeChunkMoveReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeReply::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FakePayloadReply_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakePayloadReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakePayloadReply_t qt_meta_stringdata_FakePayloadReply = {
    {
QT_MOC_LITERAL(0, 0, 16) // "FakePayloadReply"

    },
    "FakePayloadReply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakePayloadReply[] = {

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

void FakePayloadReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakePayloadReply::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeReply::staticMetaObject>(),
    qt_meta_stringdata_FakePayloadReply.data,
    qt_meta_data_FakePayloadReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakePayloadReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakePayloadReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakePayloadReply.stringdata0))
        return static_cast<void*>(this);
    return FakeReply::qt_metacast(_clname);
}

int FakePayloadReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeReply::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FakeErrorReply_t {
    QByteArrayData data[4];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakeErrorReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakeErrorReply_t qt_meta_stringdata_FakeErrorReply = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FakeErrorReply"
QT_MOC_LITERAL(1, 15, 15), // "slotSetFinished"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7) // "respond"

    },
    "FakeErrorReply\0slotSetFinished\0\0respond"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakeErrorReply[] = {

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

 // methods: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void FakeErrorReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FakeErrorReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotSetFinished(); break;
        case 1: _t->respond(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakeErrorReply::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeReply::staticMetaObject>(),
    qt_meta_stringdata_FakeErrorReply.data,
    qt_meta_data_FakeErrorReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakeErrorReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakeErrorReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakeErrorReply.stringdata0))
        return static_cast<void*>(this);
    return FakeReply::qt_metacast(_clname);
}

int FakeErrorReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeReply::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FakeJsonErrorReply_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakeJsonErrorReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakeJsonErrorReply_t qt_meta_stringdata_FakeJsonErrorReply = {
    {
QT_MOC_LITERAL(0, 0, 18) // "FakeJsonErrorReply"

    },
    "FakeJsonErrorReply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakeJsonErrorReply[] = {

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

void FakeJsonErrorReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakeJsonErrorReply::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeErrorReply::staticMetaObject>(),
    qt_meta_stringdata_FakeJsonErrorReply.data,
    qt_meta_data_FakeJsonErrorReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakeJsonErrorReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakeJsonErrorReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakeJsonErrorReply.stringdata0))
        return static_cast<void*>(this);
    return FakeErrorReply::qt_metacast(_clname);
}

int FakeJsonErrorReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeErrorReply::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FakeHangingReply_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakeHangingReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakeHangingReply_t qt_meta_stringdata_FakeHangingReply = {
    {
QT_MOC_LITERAL(0, 0, 16) // "FakeHangingReply"

    },
    "FakeHangingReply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakeHangingReply[] = {

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

void FakeHangingReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakeHangingReply::staticMetaObject = { {
    QMetaObject::SuperData::link<FakeReply::staticMetaObject>(),
    qt_meta_stringdata_FakeHangingReply.data,
    qt_meta_data_FakeHangingReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakeHangingReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakeHangingReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakeHangingReply.stringdata0))
        return static_cast<void*>(this);
    return FakeReply::qt_metacast(_clname);
}

int FakeHangingReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakeReply::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FakeFileLockReply_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FakeFileLockReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FakeFileLockReply_t qt_meta_stringdata_FakeFileLockReply = {
    {
QT_MOC_LITERAL(0, 0, 17) // "FakeFileLockReply"

    },
    "FakeFileLockReply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FakeFileLockReply[] = {

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

void FakeFileLockReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FakeFileLockReply::staticMetaObject = { {
    QMetaObject::SuperData::link<FakePropfindReply::staticMetaObject>(),
    qt_meta_stringdata_FakeFileLockReply.data,
    qt_meta_data_FakeFileLockReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FakeFileLockReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakeFileLockReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FakeFileLockReply.stringdata0))
        return static_cast<void*>(this);
    return FakePropfindReply::qt_metacast(_clname);
}

int FakeFileLockReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FakePropfindReply::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
