/****************************************************************************
** Meta object code from reading C++ file 'hydrationjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../src/libsync/vfs/cfapi/hydrationjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hydrationjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__HydrationJob_t {
    QByteArrayData data[17];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__HydrationJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__HydrationJob_t qt_meta_stringdata_OCC__HydrationJob = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::HydrationJob"
QT_MOC_LITERAL(1, 18, 8), // "finished"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "HydrationJob*"
QT_MOC_LITERAL(4, 42, 3), // "job"
QT_MOC_LITERAL(5, 46, 17), // "slotCheckFolderId"
QT_MOC_LITERAL(6, 64, 4), // "list"
QT_MOC_LITERAL(7, 69, 17), // "slotFolderIdError"
QT_MOC_LITERAL(8, 87, 32), // "slotCheckFolderEncryptedMetadata"
QT_MOC_LITERAL(9, 120, 4), // "json"
QT_MOC_LITERAL(10, 125, 32), // "slotFolderEncryptedMetadataError"
QT_MOC_LITERAL(11, 158, 6), // "fileId"
QT_MOC_LITERAL(12, 165, 14), // "httpReturnCode"
QT_MOC_LITERAL(13, 180, 6), // "Status"
QT_MOC_LITERAL(14, 187, 7), // "Success"
QT_MOC_LITERAL(15, 195, 5), // "Error"
QT_MOC_LITERAL(16, 201, 9) // "Cancelled"

    },
    "OCC::HydrationJob\0finished\0\0HydrationJob*\0"
    "job\0slotCheckFolderId\0list\0slotFolderIdError\0"
    "slotCheckFolderEncryptedMetadata\0json\0"
    "slotFolderEncryptedMetadataError\0"
    "fileId\0httpReturnCode\0Status\0Success\0"
    "Error\0Cancelled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__HydrationJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       1,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,
       8,    1,   46,    2, 0x0a /* Public */,
      10,    2,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,    9,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   11,   12,

 // enums: name, alias, flags, count, data
      13,   13, 0x0,    3,   59,

 // enum data: key, value
      14, uint(OCC::HydrationJob::Success),
      15, uint(OCC::HydrationJob::Error),
      16, uint(OCC::HydrationJob::Cancelled),

       0        // eod
};

void OCC::HydrationJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HydrationJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< HydrationJob*(*)>(_a[1]))); break;
        case 1: _t->slotCheckFolderId((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->slotFolderIdError(); break;
        case 3: _t->slotCheckFolderEncryptedMetadata((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        case 4: _t->slotFolderEncryptedMetadataError((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HydrationJob* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HydrationJob::*)(HydrationJob * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HydrationJob::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::HydrationJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__HydrationJob.data,
    qt_meta_data_OCC__HydrationJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::HydrationJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::HydrationJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__HydrationJob.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::HydrationJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void OCC::HydrationJob::finished(HydrationJob * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
