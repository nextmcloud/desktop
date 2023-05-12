/****************************************************************************
** Meta object code from reading C++ file 'vfs_suffix.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../src/libsync/vfs/suffix/vfs_suffix.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vfs_suffix.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__VfsSuffix_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__VfsSuffix_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__VfsSuffix_t qt_meta_stringdata_OCC__VfsSuffix = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OCC::VfsSuffix"
QT_MOC_LITERAL(1, 15, 17), // "fileStatusChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19) // "OCC::SyncFileStatus"

    },
    "OCC::VfsSuffix\0fileStatusChanged\0\0"
    "OCC::SyncFileStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__VfsSuffix[] = {

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
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,

       0        // eod
};

void OCC::VfsSuffix::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VfsSuffix *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileStatusChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SyncFileStatus(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileStatus >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::VfsSuffix::staticMetaObject = { {
    QMetaObject::SuperData::link<Vfs::staticMetaObject>(),
    qt_meta_stringdata_OCC__VfsSuffix.data,
    qt_meta_data_OCC__VfsSuffix,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::VfsSuffix::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::VfsSuffix::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__VfsSuffix.stringdata0))
        return static_cast<void*>(this);
    return Vfs::qt_metacast(_clname);
}

int OCC::VfsSuffix::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Vfs::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OCC__SuffixVfsPluginFactory_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SuffixVfsPluginFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SuffixVfsPluginFactory_t qt_meta_stringdata_OCC__SuffixVfsPluginFactory = {
    {
QT_MOC_LITERAL(0, 0, 27) // "OCC::SuffixVfsPluginFactory"

    },
    "OCC::SuffixVfsPluginFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SuffixVfsPluginFactory[] = {

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

void OCC::SuffixVfsPluginFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::SuffixVfsPluginFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__SuffixVfsPluginFactory.data,
    qt_meta_data_OCC__SuffixVfsPluginFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::SuffixVfsPluginFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SuffixVfsPluginFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SuffixVfsPluginFactory.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DefaultPluginFactory<VfsSuffix>"))
        return static_cast< DefaultPluginFactory<VfsSuffix>*>(this);
    if (!strcmp(_clname, "org.owncloud.PluginFactory"))
        return static_cast< OCC::PluginFactory*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::SuffixVfsPluginFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x03,  0x76,  'S',  'u',  'f',  'f',  'i',  'x', 
    'V',  'f',  's',  'P',  'l',  'u',  'g',  'i', 
    'n',  'F',  'a',  'c',  't',  'o',  'r',  'y', 
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
QT_MOC_EXPORT_PLUGIN(OCC::SuffixVfsPluginFactory, SuffixVfsPluginFactory)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
