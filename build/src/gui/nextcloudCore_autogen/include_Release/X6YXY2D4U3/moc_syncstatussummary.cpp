/****************************************************************************
** Meta object code from reading C++ file 'syncstatussummary.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/tray/syncstatussummary.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncstatussummary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__SyncStatusSummary_t {
    QByteArrayData data[13];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SyncStatusSummary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SyncStatusSummary_t qt_meta_stringdata_OCC__SyncStatusSummary = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OCC::SyncStatusSummary"
QT_MOC_LITERAL(1, 23, 19), // "syncProgressChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 15), // "syncIconChanged"
QT_MOC_LITERAL(4, 60, 14), // "syncingChanged"
QT_MOC_LITERAL(5, 75, 23), // "syncStatusStringChanged"
QT_MOC_LITERAL(6, 99, 29), // "syncStatusDetailStringChanged"
QT_MOC_LITERAL(7, 129, 4), // "load"
QT_MOC_LITERAL(8, 134, 12), // "syncProgress"
QT_MOC_LITERAL(9, 147, 8), // "syncIcon"
QT_MOC_LITERAL(10, 156, 7), // "syncing"
QT_MOC_LITERAL(11, 164, 16), // "syncStatusString"
QT_MOC_LITERAL(12, 181, 22) // "syncStatusDetailString"

    },
    "OCC::SyncStatusSummary\0syncProgressChanged\0"
    "\0syncIconChanged\0syncingChanged\0"
    "syncStatusStringChanged\0"
    "syncStatusDetailStringChanged\0load\0"
    "syncProgress\0syncIcon\0syncing\0"
    "syncStatusString\0syncStatusDetailString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SyncStatusSummary[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Double, 0x00495001,
       9, QMetaType::QUrl, 0x00495001,
      10, QMetaType::Bool, 0x00495001,
      11, QMetaType::QString, 0x00495001,
      12, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void OCC::SyncStatusSummary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SyncStatusSummary *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->syncProgressChanged(); break;
        case 1: _t->syncIconChanged(); break;
        case 2: _t->syncingChanged(); break;
        case 3: _t->syncStatusStringChanged(); break;
        case 4: _t->syncStatusDetailStringChanged(); break;
        case 5: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SyncStatusSummary::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncStatusSummary::syncProgressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SyncStatusSummary::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncStatusSummary::syncIconChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SyncStatusSummary::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncStatusSummary::syncingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SyncStatusSummary::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncStatusSummary::syncStatusStringChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SyncStatusSummary::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncStatusSummary::syncStatusDetailStringChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SyncStatusSummary *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->syncProgress(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->syncIcon(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->syncing(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->syncStatusString(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->syncStatusDetailString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::SyncStatusSummary::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__SyncStatusSummary.data,
    qt_meta_data_OCC__SyncStatusSummary,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::SyncStatusSummary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SyncStatusSummary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SyncStatusSummary.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::SyncStatusSummary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OCC::SyncStatusSummary::syncProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::SyncStatusSummary::syncIconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::SyncStatusSummary::syncingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::SyncStatusSummary::syncStatusStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::SyncStatusSummary::syncStatusDetailStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
