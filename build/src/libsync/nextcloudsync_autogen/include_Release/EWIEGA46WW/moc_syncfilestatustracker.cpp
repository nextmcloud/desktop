/****************************************************************************
** Meta object code from reading C++ file 'syncfilestatustracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/syncfilestatustracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncfilestatustracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__SyncFileStatusTracker_t {
    QByteArrayData data[18];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SyncFileStatusTracker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SyncFileStatusTracker_t qt_meta_stringdata_OCC__SyncFileStatusTracker = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OCC::SyncFileStatusTracker"
QT_MOC_LITERAL(1, 27, 17), // "fileStatusChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "systemFileName"
QT_MOC_LITERAL(4, 61, 19), // "OCC::SyncFileStatus"
QT_MOC_LITERAL(5, 81, 10), // "fileStatus"
QT_MOC_LITERAL(6, 92, 15), // "slotPathTouched"
QT_MOC_LITERAL(7, 108, 8), // "fileName"
QT_MOC_LITERAL(8, 117, 23), // "slotAddSilentlyExcluded"
QT_MOC_LITERAL(9, 141, 10), // "folderPath"
QT_MOC_LITERAL(10, 152, 20), // "slotAboutToPropagate"
QT_MOC_LITERAL(11, 173, 24), // "OCC::SyncFileItemVector&"
QT_MOC_LITERAL(12, 198, 5), // "items"
QT_MOC_LITERAL(13, 204, 17), // "slotItemCompleted"
QT_MOC_LITERAL(14, 222, 20), // "OCC::SyncFileItemPtr"
QT_MOC_LITERAL(15, 243, 4), // "item"
QT_MOC_LITERAL(16, 248, 16), // "slotSyncFinished"
QT_MOC_LITERAL(17, 265, 28) // "slotSyncEngineRunningChanged"

    },
    "OCC::SyncFileStatusTracker\0fileStatusChanged\0"
    "\0systemFileName\0OCC::SyncFileStatus\0"
    "fileStatus\0slotPathTouched\0fileName\0"
    "slotAddSilentlyExcluded\0folderPath\0"
    "slotAboutToPropagate\0OCC::SyncFileItemVector&\0"
    "items\0slotItemCompleted\0OCC::SyncFileItemPtr\0"
    "item\0slotSyncFinished\0"
    "slotSyncEngineRunningChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SyncFileStatusTracker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   54,    2, 0x0a /* Public */,
       8,    1,   57,    2, 0x0a /* Public */,
      10,    1,   60,    2, 0x08 /* Private */,
      13,    1,   63,    2, 0x08 /* Private */,
      16,    0,   66,    2, 0x08 /* Private */,
      17,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::SyncFileStatusTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SyncFileStatusTracker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileStatusChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SyncFileStatus(*)>(_a[2]))); break;
        case 1: _t->slotPathTouched((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotAddSilentlyExcluded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotAboutToPropagate((*reinterpret_cast< OCC::SyncFileItemVector(*)>(_a[1]))); break;
        case 4: _t->slotItemCompleted((*reinterpret_cast< const OCC::SyncFileItemPtr(*)>(_a[1]))); break;
        case 5: _t->slotSyncFinished(); break;
        case 6: _t->slotSyncEngineRunningChanged(); break;
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
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SyncFileStatusTracker::*)(const QString & , OCC::SyncFileStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncFileStatusTracker::fileStatusChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::SyncFileStatusTracker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__SyncFileStatusTracker.data,
    qt_meta_data_OCC__SyncFileStatusTracker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::SyncFileStatusTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SyncFileStatusTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SyncFileStatusTracker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::SyncFileStatusTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OCC::SyncFileStatusTracker::fileStatusChanged(const QString & _t1, OCC::SyncFileStatus _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
