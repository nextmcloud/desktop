/****************************************************************************
** Meta object code from reading C++ file 'networkjobs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/networkjobs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkjobs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__EntityExistsJob_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__EntityExistsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__EntityExistsJob_t qt_meta_stringdata_OCC__EntityExistsJob = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OCC::EntityExistsJob"
QT_MOC_LITERAL(1, 21, 6), // "exists"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 44, 8) // "finished"

    },
    "OCC::EntityExistsJob\0exists\0\0"
    "QNetworkReply*\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__EntityExistsJob[] = {

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
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::EntityExistsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EntityExistsJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->exists((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EntityExistsJob::*)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityExistsJob::exists)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::EntityExistsJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__EntityExistsJob.data,
    qt_meta_data_OCC__EntityExistsJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::EntityExistsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::EntityExistsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__EntityExistsJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::EntityExistsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::EntityExistsJob::exists(QNetworkReply * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__SimpleFileJob_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SimpleFileJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SimpleFileJob_t qt_meta_stringdata_OCC__SimpleFileJob = {
    {
QT_MOC_LITERAL(0, 0, 18), // "OCC::SimpleFileJob"
QT_MOC_LITERAL(1, 19, 14), // "finishedSignal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 50, 5), // "reply"
QT_MOC_LITERAL(5, 56, 8) // "finished"

    },
    "OCC::SimpleFileJob\0finishedSignal\0\0"
    "QNetworkReply*\0reply\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SimpleFileJob[] = {

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
       5,    0,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::SimpleFileJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimpleFileJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finishedSignal((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SimpleFileJob::*)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleFileJob::finishedSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::SimpleFileJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__SimpleFileJob.data,
    qt_meta_data_OCC__SimpleFileJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::SimpleFileJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SimpleFileJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SimpleFileJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::SimpleFileJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::SimpleFileJob::finishedSignal(QNetworkReply * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__DeleteApiJob_t {
    QByteArrayData data[5];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__DeleteApiJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__DeleteApiJob_t qt_meta_stringdata_OCC__DeleteApiJob = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::DeleteApiJob"
QT_MOC_LITERAL(1, 18, 6), // "result"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "httpCode"
QT_MOC_LITERAL(4, 35, 8) // "finished"

    },
    "OCC::DeleteApiJob\0result\0\0httpCode\0"
    "finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__DeleteApiJob[] = {

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
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::DeleteApiJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeleteApiJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->result((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeleteApiJob::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeleteApiJob::result)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::DeleteApiJob::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleFileJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__DeleteApiJob.data,
    qt_meta_data_OCC__DeleteApiJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::DeleteApiJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::DeleteApiJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__DeleteApiJob.stringdata0))
        return static_cast<void*>(this);
    return SimpleFileJob::qt_metacast(_clname);
}

int OCC::DeleteApiJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleFileJob::qt_metacall(_c, _id, _a);
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
void OCC::DeleteApiJob::result(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__LsColXMLParser_t {
    QByteArrayData data[12];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__LsColXMLParser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__LsColXMLParser_t qt_meta_stringdata_OCC__LsColXMLParser = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OCC::LsColXMLParser"
QT_MOC_LITERAL(1, 20, 26), // "directoryListingSubfolders"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "items"
QT_MOC_LITERAL(4, 54, 24), // "directoryListingIterated"
QT_MOC_LITERAL(5, 79, 4), // "name"
QT_MOC_LITERAL(6, 84, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(7, 106, 10), // "properties"
QT_MOC_LITERAL(8, 117, 17), // "finishedWithError"
QT_MOC_LITERAL(9, 135, 14), // "QNetworkReply*"
QT_MOC_LITERAL(10, 150, 5), // "reply"
QT_MOC_LITERAL(11, 156, 20) // "finishedWithoutError"

    },
    "OCC::LsColXMLParser\0directoryListingSubfolders\0"
    "\0items\0directoryListingIterated\0name\0"
    "QMap<QString,QString>\0properties\0"
    "finishedWithError\0QNetworkReply*\0reply\0"
    "finishedWithoutError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__LsColXMLParser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,
       8,    1,   42,    2, 0x06 /* Public */,
      11,    0,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void OCC::LsColXMLParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LsColXMLParser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->directoryListingSubfolders((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->directoryListingIterated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[2]))); break;
        case 2: _t->finishedWithError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->finishedWithoutError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LsColXMLParser::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LsColXMLParser::directoryListingSubfolders)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LsColXMLParser::*)(const QString & , const QMap<QString,QString> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LsColXMLParser::directoryListingIterated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LsColXMLParser::*)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LsColXMLParser::finishedWithError)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LsColXMLParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LsColXMLParser::finishedWithoutError)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::LsColXMLParser::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__LsColXMLParser.data,
    qt_meta_data_OCC__LsColXMLParser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::LsColXMLParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::LsColXMLParser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__LsColXMLParser.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::LsColXMLParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OCC::LsColXMLParser::directoryListingSubfolders(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::LsColXMLParser::directoryListingIterated(const QString & _t1, const QMap<QString,QString> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::LsColXMLParser::finishedWithError(QNetworkReply * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::LsColXMLParser::finishedWithoutError()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_OCC__LsColJob_t {
    QByteArrayData data[13];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__LsColJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__LsColJob_t qt_meta_stringdata_OCC__LsColJob = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OCC::LsColJob"
QT_MOC_LITERAL(1, 14, 26), // "directoryListingSubfolders"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "items"
QT_MOC_LITERAL(4, 48, 24), // "directoryListingIterated"
QT_MOC_LITERAL(5, 73, 4), // "name"
QT_MOC_LITERAL(6, 78, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(7, 100, 10), // "properties"
QT_MOC_LITERAL(8, 111, 17), // "finishedWithError"
QT_MOC_LITERAL(9, 129, 14), // "QNetworkReply*"
QT_MOC_LITERAL(10, 144, 5), // "reply"
QT_MOC_LITERAL(11, 150, 20), // "finishedWithoutError"
QT_MOC_LITERAL(12, 171, 8) // "finished"

    },
    "OCC::LsColJob\0directoryListingSubfolders\0"
    "\0items\0directoryListingIterated\0name\0"
    "QMap<QString,QString>\0properties\0"
    "finishedWithError\0QNetworkReply*\0reply\0"
    "finishedWithoutError\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__LsColJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,
       8,    1,   47,    2, 0x06 /* Public */,
      11,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::LsColJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LsColJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->directoryListingSubfolders((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->directoryListingIterated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[2]))); break;
        case 2: _t->finishedWithError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->finishedWithoutError(); break;
        case 4: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LsColJob::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LsColJob::directoryListingSubfolders)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LsColJob::*)(const QString & , const QMap<QString,QString> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LsColJob::directoryListingIterated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LsColJob::*)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LsColJob::finishedWithError)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LsColJob::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LsColJob::finishedWithoutError)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::LsColJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__LsColJob.data,
    qt_meta_data_OCC__LsColJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::LsColJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::LsColJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__LsColJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::LsColJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OCC::LsColJob::directoryListingSubfolders(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::LsColJob::directoryListingIterated(const QString & _t1, const QMap<QString,QString> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::LsColJob::finishedWithError(QNetworkReply * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::LsColJob::finishedWithoutError()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_OCC__PropfindJob_t {
    QByteArrayData data[8];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropfindJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropfindJob_t qt_meta_stringdata_OCC__PropfindJob = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OCC::PropfindJob"
QT_MOC_LITERAL(1, 17, 6), // "result"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "values"
QT_MOC_LITERAL(4, 32, 17), // "finishedWithError"
QT_MOC_LITERAL(5, 50, 14), // "QNetworkReply*"
QT_MOC_LITERAL(6, 65, 5), // "reply"
QT_MOC_LITERAL(7, 71, 8) // "finished"

    },
    "OCC::PropfindJob\0result\0\0values\0"
    "finishedWithError\0QNetworkReply*\0reply\0"
    "finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropfindJob[] = {

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
       4,    1,   37,    2, 0x06 /* Public */,
       4,    0,   40,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::PropfindJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropfindJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->result((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 1: _t->finishedWithError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->finishedWithError(); break;
        case 3: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropfindJob::*)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropfindJob::result)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PropfindJob::*)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropfindJob::finishedWithError)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::PropfindJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__PropfindJob.data,
    qt_meta_data_OCC__PropfindJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PropfindJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropfindJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropfindJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::PropfindJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OCC::PropfindJob::result(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::PropfindJob::finishedWithError(QNetworkReply * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__AvatarJob_t {
    QByteArrayData data[4];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__AvatarJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__AvatarJob_t qt_meta_stringdata_OCC__AvatarJob = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OCC::AvatarJob"
QT_MOC_LITERAL(1, 15, 12), // "avatarPixmap"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8) // "finished"

    },
    "OCC::AvatarJob\0avatarPixmap\0\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__AvatarJob[] = {

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
       3,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    2,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::AvatarJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AvatarJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->avatarPixmap((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AvatarJob::*)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarJob::avatarPixmap)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::AvatarJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__AvatarJob.data,
    qt_meta_data_OCC__AvatarJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::AvatarJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AvatarJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__AvatarJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::AvatarJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::AvatarJob::avatarPixmap(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__ProppatchJob_t {
    QByteArrayData data[5];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ProppatchJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ProppatchJob_t qt_meta_stringdata_OCC__ProppatchJob = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::ProppatchJob"
QT_MOC_LITERAL(1, 18, 7), // "success"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 17), // "finishedWithError"
QT_MOC_LITERAL(4, 45, 8) // "finished"

    },
    "OCC::ProppatchJob\0success\0\0finishedWithError\0"
    "finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ProppatchJob[] = {

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
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::ProppatchJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProppatchJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->finishedWithError(); break;
        case 2: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProppatchJob::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProppatchJob::success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProppatchJob::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProppatchJob::finishedWithError)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::ProppatchJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__ProppatchJob.data,
    qt_meta_data_OCC__ProppatchJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::ProppatchJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ProppatchJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ProppatchJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::ProppatchJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::ProppatchJob::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::ProppatchJob::finishedWithError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_OCC__MkColJob_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__MkColJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__MkColJob_t qt_meta_stringdata_OCC__MkColJob = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OCC::MkColJob"
QT_MOC_LITERAL(1, 14, 17), // "finishedWithError"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 48, 5), // "reply"
QT_MOC_LITERAL(5, 54, 20) // "finishedWithoutError"

    },
    "OCC::MkColJob\0finishedWithError\0\0"
    "QNetworkReply*\0reply\0finishedWithoutError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__MkColJob[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,
       5,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void OCC::MkColJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MkColJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finishedWithError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: _t->finishedWithoutError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MkColJob::*)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MkColJob::finishedWithError)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MkColJob::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MkColJob::finishedWithoutError)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::MkColJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__MkColJob.data,
    qt_meta_data_OCC__MkColJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::MkColJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::MkColJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__MkColJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::MkColJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::MkColJob::finishedWithError(QNetworkReply * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::MkColJob::finishedWithoutError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_OCC__CheckServerJob_t {
    QByteArrayData data[14];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__CheckServerJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__CheckServerJob_t qt_meta_stringdata_OCC__CheckServerJob = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OCC::CheckServerJob"
QT_MOC_LITERAL(1, 20, 13), // "instanceFound"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 3), // "url"
QT_MOC_LITERAL(4, 39, 4), // "info"
QT_MOC_LITERAL(5, 44, 16), // "instanceNotFound"
QT_MOC_LITERAL(6, 61, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 76, 5), // "reply"
QT_MOC_LITERAL(8, 82, 7), // "timeout"
QT_MOC_LITERAL(9, 90, 19), // "metaDataChangedSlot"
QT_MOC_LITERAL(10, 110, 13), // "encryptedSlot"
QT_MOC_LITERAL(11, 124, 14), // "slotRedirected"
QT_MOC_LITERAL(12, 139, 9), // "targetUrl"
QT_MOC_LITERAL(13, 149, 13) // "redirectCount"

    },
    "OCC::CheckServerJob\0instanceFound\0\0"
    "url\0info\0instanceNotFound\0QNetworkReply*\0"
    "reply\0timeout\0metaDataChangedSlot\0"
    "encryptedSlot\0slotRedirected\0targetUrl\0"
    "redirectCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__CheckServerJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    1,   49,    2, 0x06 /* Public */,
       8,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   55,    2, 0x08 /* Private */,
      10,    0,   56,    2, 0x08 /* Private */,
      11,    3,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QJsonObject,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QUrl, QMetaType::Int,    7,   12,   13,

       0        // eod
};

void OCC::CheckServerJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CheckServerJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->instanceFound((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2]))); break;
        case 1: _t->instanceNotFound((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->timeout((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->metaDataChangedSlot(); break;
        case 4: _t->encryptedSlot(); break;
        case 5: _t->slotRedirected((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CheckServerJob::*)(const QUrl & , const QJsonObject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CheckServerJob::instanceFound)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CheckServerJob::*)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CheckServerJob::instanceNotFound)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CheckServerJob::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CheckServerJob::timeout)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::CheckServerJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__CheckServerJob.data,
    qt_meta_data_OCC__CheckServerJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::CheckServerJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::CheckServerJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__CheckServerJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::CheckServerJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OCC::CheckServerJob::instanceFound(const QUrl & _t1, const QJsonObject & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::CheckServerJob::instanceNotFound(QNetworkReply * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::CheckServerJob::timeout(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_OCC__RequestEtagJob_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__RequestEtagJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__RequestEtagJob_t qt_meta_stringdata_OCC__RequestEtagJob = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OCC::RequestEtagJob"
QT_MOC_LITERAL(1, 20, 13), // "etagRetrieved"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "etag"
QT_MOC_LITERAL(4, 40, 4), // "time"
QT_MOC_LITERAL(5, 45, 18), // "finishedWithResult"
QT_MOC_LITERAL(6, 64, 22), // "HttpResult<QByteArray>"
QT_MOC_LITERAL(7, 87, 8) // "finished"

    },
    "OCC::RequestEtagJob\0etagRetrieved\0\0"
    "etag\0time\0finishedWithResult\0"
    "HttpResult<QByteArray>\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__RequestEtagJob[] = {

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
       5,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QDateTime,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    3,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::RequestEtagJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RequestEtagJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->etagRetrieved((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 1: _t->finishedWithResult((*reinterpret_cast< const HttpResult<QByteArray>(*)>(_a[1]))); break;
        case 2: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RequestEtagJob::*)(const QByteArray & , const QDateTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RequestEtagJob::etagRetrieved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RequestEtagJob::*)(const HttpResult<QByteArray> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RequestEtagJob::finishedWithResult)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::RequestEtagJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__RequestEtagJob.data,
    qt_meta_data_OCC__RequestEtagJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::RequestEtagJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::RequestEtagJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__RequestEtagJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::RequestEtagJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::RequestEtagJob::etagRetrieved(const QByteArray & _t1, const QDateTime & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::RequestEtagJob::finishedWithResult(const HttpResult<QByteArray> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__SimpleApiJob_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SimpleApiJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SimpleApiJob_t qt_meta_stringdata_OCC__SimpleApiJob = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::SimpleApiJob"
QT_MOC_LITERAL(1, 18, 14), // "resultReceived"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "statusCode"
QT_MOC_LITERAL(4, 45, 5) // "start"

    },
    "OCC::SimpleApiJob\0resultReceived\0\0"
    "statusCode\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SimpleApiJob[] = {

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
       4,    0,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::SimpleApiJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimpleApiJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resultReceived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SimpleApiJob::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleApiJob::resultReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::SimpleApiJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__SimpleApiJob.data,
    qt_meta_data_OCC__SimpleApiJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::SimpleApiJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SimpleApiJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SimpleApiJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::SimpleApiJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::SimpleApiJob::resultReceived(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__JsonApiJob_t {
    QByteArrayData data[8];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__JsonApiJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__JsonApiJob_t qt_meta_stringdata_OCC__JsonApiJob = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OCC::JsonApiJob"
QT_MOC_LITERAL(1, 16, 12), // "jsonReceived"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "json"
QT_MOC_LITERAL(4, 35, 10), // "statusCode"
QT_MOC_LITERAL(5, 46, 26), // "etagResponseHeaderReceived"
QT_MOC_LITERAL(6, 73, 5), // "value"
QT_MOC_LITERAL(7, 79, 5) // "start"

    },
    "OCC::JsonApiJob\0jsonReceived\0\0json\0"
    "statusCode\0etagResponseHeaderReceived\0"
    "value\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__JsonApiJob[] = {

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
       7,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,    6,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::JsonApiJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JsonApiJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->jsonReceived((*reinterpret_cast< const QJsonDocument(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->etagResponseHeaderReceived((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JsonApiJob::*)(const QJsonDocument & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JsonApiJob::jsonReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JsonApiJob::*)(const QByteArray & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JsonApiJob::etagResponseHeaderReceived)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::JsonApiJob::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleApiJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__JsonApiJob.data,
    qt_meta_data_OCC__JsonApiJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::JsonApiJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::JsonApiJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__JsonApiJob.stringdata0))
        return static_cast<void*>(this);
    return SimpleApiJob::qt_metacast(_clname);
}

int OCC::JsonApiJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleApiJob::qt_metacall(_c, _id, _a);
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
void OCC::JsonApiJob::jsonReceived(const QJsonDocument & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::JsonApiJob::etagResponseHeaderReceived(const QByteArray & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__DetermineAuthTypeJob_t {
    QByteArrayData data[10];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__DetermineAuthTypeJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__DetermineAuthTypeJob_t qt_meta_stringdata_OCC__DetermineAuthTypeJob = {
    {
QT_MOC_LITERAL(0, 0, 25), // "OCC::DetermineAuthTypeJob"
QT_MOC_LITERAL(1, 26, 8), // "authType"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 35), // "OCC::DetermineAuthTypeJob::Au..."
QT_MOC_LITERAL(4, 72, 8), // "AuthType"
QT_MOC_LITERAL(5, 81, 10), // "NoAuthType"
QT_MOC_LITERAL(6, 92, 11), // "WebViewFlow"
QT_MOC_LITERAL(7, 104, 5), // "Basic"
QT_MOC_LITERAL(8, 110, 5), // "OAuth"
QT_MOC_LITERAL(9, 116, 11) // "LoginFlowV2"

    },
    "OCC::DetermineAuthTypeJob\0authType\0\0"
    "OCC::DetermineAuthTypeJob::AuthType\0"
    "AuthType\0NoAuthType\0WebViewFlow\0Basic\0"
    "OAuth\0LoginFlowV2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__DetermineAuthTypeJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   22, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // enums: name, alias, flags, count, data
       4,    4, 0x0,    5,   27,

 // enum data: key, value
       5, uint(OCC::DetermineAuthTypeJob::NoAuthType),
       6, uint(OCC::DetermineAuthTypeJob::WebViewFlow),
       7, uint(OCC::DetermineAuthTypeJob::Basic),
       8, uint(OCC::DetermineAuthTypeJob::OAuth),
       9, uint(OCC::DetermineAuthTypeJob::LoginFlowV2),

       0        // eod
};

void OCC::DetermineAuthTypeJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DetermineAuthTypeJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authType((*reinterpret_cast< OCC::DetermineAuthTypeJob::AuthType(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DetermineAuthTypeJob::*)(OCC::DetermineAuthTypeJob::AuthType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DetermineAuthTypeJob::authType)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::DetermineAuthTypeJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__DetermineAuthTypeJob.data,
    qt_meta_data_OCC__DetermineAuthTypeJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::DetermineAuthTypeJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::DetermineAuthTypeJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__DetermineAuthTypeJob.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::DetermineAuthTypeJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void OCC::DetermineAuthTypeJob::authType(OCC::DetermineAuthTypeJob::AuthType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__SimpleNetworkJob_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SimpleNetworkJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SimpleNetworkJob_t qt_meta_stringdata_OCC__SimpleNetworkJob = {
    {
QT_MOC_LITERAL(0, 0, 21), // "OCC::SimpleNetworkJob"
QT_MOC_LITERAL(1, 22, 14), // "finishedSignal"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 53, 5), // "reply"
QT_MOC_LITERAL(5, 59, 8) // "finished"

    },
    "OCC::SimpleNetworkJob\0finishedSignal\0"
    "\0QNetworkReply*\0reply\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SimpleNetworkJob[] = {

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
       5,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::SimpleNetworkJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimpleNetworkJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finishedSignal((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SimpleNetworkJob::*)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleNetworkJob::finishedSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::SimpleNetworkJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__SimpleNetworkJob.data,
    qt_meta_data_OCC__SimpleNetworkJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::SimpleNetworkJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SimpleNetworkJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SimpleNetworkJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::SimpleNetworkJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::SimpleNetworkJob::finishedSignal(QNetworkReply * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
