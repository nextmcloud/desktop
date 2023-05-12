/****************************************************************************
** Meta object code from reading C++ file 'filedetails.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/filedetails/filedetails.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filedetails.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__FileDetails_t {
    QByteArrayData data[16];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__FileDetails_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__FileDetails_t qt_meta_stringdata_OCC__FileDetails = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OCC::FileDetails"
QT_MOC_LITERAL(1, 17, 16), // "localPathChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "fileChanged"
QT_MOC_LITERAL(4, 47, 23), // "lockExpireStringChanged"
QT_MOC_LITERAL(5, 71, 15), // "isFolderChanged"
QT_MOC_LITERAL(6, 87, 12), // "setLocalPath"
QT_MOC_LITERAL(7, 100, 9), // "localPath"
QT_MOC_LITERAL(8, 110, 18), // "refreshFileDetails"
QT_MOC_LITERAL(9, 129, 22), // "updateLockExpireString"
QT_MOC_LITERAL(10, 152, 4), // "name"
QT_MOC_LITERAL(11, 157, 10), // "sizeString"
QT_MOC_LITERAL(12, 168, 17), // "lastChangedString"
QT_MOC_LITERAL(13, 186, 7), // "iconUrl"
QT_MOC_LITERAL(14, 194, 16), // "lockExpireString"
QT_MOC_LITERAL(15, 211, 8) // "isFolder"

    },
    "OCC::FileDetails\0localPathChanged\0\0"
    "fileChanged\0lockExpireStringChanged\0"
    "isFolderChanged\0setLocalPath\0localPath\0"
    "refreshFileDetails\0updateLockExpireString\0"
    "name\0sizeString\0lastChangedString\0"
    "iconUrl\0lockExpireString\0isFolder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__FileDetails[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   53,    2, 0x0a /* Public */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495103,
      10, QMetaType::QString, 0x00495001,
      11, QMetaType::QString, 0x00495001,
      12, QMetaType::QString, 0x00495001,
      13, QMetaType::QString, 0x00495001,
      14, QMetaType::QString, 0x00495001,
      15, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       1,
       1,
       1,
       2,
       3,

       0        // eod
};

void OCC::FileDetails::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileDetails *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->localPathChanged(); break;
        case 1: _t->fileChanged(); break;
        case 2: _t->lockExpireStringChanged(); break;
        case 3: _t->isFolderChanged(); break;
        case 4: _t->setLocalPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->refreshFileDetails(); break;
        case 6: _t->updateLockExpireString(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileDetails::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDetails::localPathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileDetails::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDetails::fileChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileDetails::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDetails::lockExpireStringChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileDetails::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDetails::isFolderChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FileDetails *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->localPath(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->sizeString(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->lastChangedString(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->iconUrl(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->lockExpireString(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isFolder(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FileDetails *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocalPath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OCC::FileDetails::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__FileDetails.data,
    qt_meta_data_OCC__FileDetails,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::FileDetails::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FileDetails::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__FileDetails.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::FileDetails::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OCC::FileDetails::localPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::FileDetails::fileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::FileDetails::lockExpireStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::FileDetails::isFolderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
