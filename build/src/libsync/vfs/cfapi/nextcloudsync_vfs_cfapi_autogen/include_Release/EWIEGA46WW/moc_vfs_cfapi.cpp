/****************************************************************************
** Meta object code from reading C++ file 'vfs_cfapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../src/libsync/vfs/cfapi/vfs_cfapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vfs_cfapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__VfsCfApi_t {
    QByteArrayData data[12];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__VfsCfApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__VfsCfApi_t qt_meta_stringdata_OCC__VfsCfApi = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OCC::VfsCfApi"
QT_MOC_LITERAL(1, 14, 21), // "hydrationRequestReady"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 9), // "requestId"
QT_MOC_LITERAL(4, 47, 22), // "hydrationRequestFailed"
QT_MOC_LITERAL(5, 70, 24), // "hydrationRequestFinished"
QT_MOC_LITERAL(6, 95, 16), // "requestHydration"
QT_MOC_LITERAL(7, 112, 4), // "path"
QT_MOC_LITERAL(8, 117, 17), // "fileStatusChanged"
QT_MOC_LITERAL(9, 135, 14), // "systemFileName"
QT_MOC_LITERAL(10, 150, 19), // "OCC::SyncFileStatus"
QT_MOC_LITERAL(11, 170, 10) // "fileStatus"

    },
    "OCC::VfsCfApi\0hydrationRequestReady\0"
    "\0requestId\0hydrationRequestFailed\0"
    "hydrationRequestFinished\0requestHydration\0"
    "path\0fileStatusChanged\0systemFileName\0"
    "OCC::SyncFileStatus\0fileStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__VfsCfApi[] = {

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
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   48,    2, 0x0a /* Public */,
       8,    2,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10,    9,   11,

       0        // eod
};

void OCC::VfsCfApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VfsCfApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hydrationRequestReady((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->hydrationRequestFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->hydrationRequestFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->requestHydration((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->fileStatusChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SyncFileStatus(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileStatus >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VfsCfApi::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VfsCfApi::hydrationRequestReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VfsCfApi::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VfsCfApi::hydrationRequestFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VfsCfApi::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VfsCfApi::hydrationRequestFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::VfsCfApi::staticMetaObject = { {
    QMetaObject::SuperData::link<Vfs::staticMetaObject>(),
    qt_meta_stringdata_OCC__VfsCfApi.data,
    qt_meta_data_OCC__VfsCfApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::VfsCfApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::VfsCfApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__VfsCfApi.stringdata0))
        return static_cast<void*>(this);
    return Vfs::qt_metacast(_clname);
}

int OCC::VfsCfApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Vfs::qt_metacall(_c, _id, _a);
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
void OCC::VfsCfApi::hydrationRequestReady(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::VfsCfApi::hydrationRequestFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::VfsCfApi::hydrationRequestFinished(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_OCC__CfApiVfsPluginFactory_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__CfApiVfsPluginFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__CfApiVfsPluginFactory_t qt_meta_stringdata_OCC__CfApiVfsPluginFactory = {
    {
QT_MOC_LITERAL(0, 0, 26) // "OCC::CfApiVfsPluginFactory"

    },
    "OCC::CfApiVfsPluginFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__CfApiVfsPluginFactory[] = {

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

void OCC::CfApiVfsPluginFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::CfApiVfsPluginFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__CfApiVfsPluginFactory.data,
    qt_meta_data_OCC__CfApiVfsPluginFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::CfApiVfsPluginFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::CfApiVfsPluginFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__CfApiVfsPluginFactory.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DefaultPluginFactory<VfsCfApi>"))
        return static_cast< DefaultPluginFactory<VfsCfApi>*>(this);
    if (!strcmp(_clname, "org.owncloud.PluginFactory"))
        return static_cast< OCC::PluginFactory*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::CfApiVfsPluginFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x1a,  'o',  'r',  'g',  '.',  'o', 
    'w',  'n',  'c',  'l',  'o',  'u',  'd',  '.', 
    'P',  'l',  'u',  'g',  'i',  'n',  'F',  'a', 
    'c',  't',  'o',  'r',  'y', 
    // "className"
    0x03,  0x75,  'C',  'f',  'A',  'p',  'i',  'V', 
    'f',  's',  'P',  'l',  'u',  'g',  'i',  'n', 
    'F',  'a',  'c',  't',  'o',  'r',  'y', 
    // "MetaData"
    0x04,  0xa2,  0x64,  't',  'y',  'p',  'e',  0x63, 
    'v',  'f',  's',  0x67,  'v',  'e',  'r',  's', 
    'i',  'o',  'n',  0x78,  0x22,  '3',  '.',  '8', 
    '.',  '5',  '0',  'd',  'a',  'i',  'l',  'y', 
    '-',  'W',  'i',  'n',  '6',  '4',  ' ',  '(', 
    'b',  'u',  'i',  'l',  'd',  ' ',  '2',  '0', 
    '2',  '3',  '0',  '5',  '1',  '2',  ')', 
    0xff, 
};
using namespace OCC;
QT_MOC_EXPORT_PLUGIN(OCC::CfApiVfsPluginFactory, CfApiVfsPluginFactory)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
