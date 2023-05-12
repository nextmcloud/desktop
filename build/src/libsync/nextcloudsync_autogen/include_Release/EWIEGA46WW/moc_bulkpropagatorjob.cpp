/****************************************************************************
** Meta object code from reading C++ file 'bulkpropagatorjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/bulkpropagatorjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bulkpropagatorjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__BulkPropagatorJob_t {
    QByteArrayData data[21];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__BulkPropagatorJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__BulkPropagatorJob_t qt_meta_stringdata_OCC__BulkPropagatorJob = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OCC::BulkPropagatorJob"
QT_MOC_LITERAL(1, 23, 15), // "startUploadFile"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 20), // "OCC::SyncFileItemPtr"
QT_MOC_LITERAL(4, 61, 4), // "item"
QT_MOC_LITERAL(5, 66, 38), // "OCC::BulkPropagatorJob::Uploa..."
QT_MOC_LITERAL(6, 105, 12), // "fileToUpload"
QT_MOC_LITERAL(7, 118, 31), // "slotComputeTransmissionChecksum"
QT_MOC_LITERAL(8, 150, 15), // "slotStartUpload"
QT_MOC_LITERAL(9, 166, 24), // "transmissionChecksumType"
QT_MOC_LITERAL(10, 191, 20), // "transmissionChecksum"
QT_MOC_LITERAL(11, 212, 28), // "slotOnErrorStartFolderUnlock"
QT_MOC_LITERAL(12, 241, 25), // "OCC::SyncFileItem::Status"
QT_MOC_LITERAL(13, 267, 6), // "status"
QT_MOC_LITERAL(14, 274, 11), // "errorString"
QT_MOC_LITERAL(15, 286, 15), // "slotPutFinished"
QT_MOC_LITERAL(16, 302, 18), // "slotUploadProgress"
QT_MOC_LITERAL(17, 321, 4), // "sent"
QT_MOC_LITERAL(18, 326, 5), // "total"
QT_MOC_LITERAL(19, 332, 16), // "slotJobDestroyed"
QT_MOC_LITERAL(20, 349, 3) // "job"

    },
    "OCC::BulkPropagatorJob\0startUploadFile\0"
    "\0OCC::SyncFileItemPtr\0item\0"
    "OCC::BulkPropagatorJob::UploadFileInfo\0"
    "fileToUpload\0slotComputeTransmissionChecksum\0"
    "slotStartUpload\0transmissionChecksumType\0"
    "transmissionChecksum\0slotOnErrorStartFolderUnlock\0"
    "OCC::SyncFileItem::Status\0status\0"
    "errorString\0slotPutFinished\0"
    "slotUploadProgress\0sent\0total\0"
    "slotJobDestroyed\0job"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__BulkPropagatorJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x08 /* Private */,
       7,    2,   54,    2, 0x08 /* Private */,
       8,    4,   59,    2, 0x08 /* Private */,
      11,    3,   68,    2, 0x08 /* Private */,
      15,    0,   75,    2, 0x08 /* Private */,
      16,    3,   76,    2, 0x08 /* Private */,
      19,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QByteArray, QMetaType::QByteArray,    4,    6,    9,   10,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 12, QMetaType::QString,    4,   13,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::LongLong, QMetaType::LongLong,    4,   17,   18,
    QMetaType::Void, QMetaType::QObjectStar,   20,

       0        // eod
};

void OCC::BulkPropagatorJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BulkPropagatorJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startUploadFile((*reinterpret_cast< OCC::SyncFileItemPtr(*)>(_a[1])),(*reinterpret_cast< OCC::BulkPropagatorJob::UploadFileInfo(*)>(_a[2]))); break;
        case 1: _t->slotComputeTransmissionChecksum((*reinterpret_cast< OCC::SyncFileItemPtr(*)>(_a[1])),(*reinterpret_cast< OCC::BulkPropagatorJob::UploadFileInfo(*)>(_a[2]))); break;
        case 2: _t->slotStartUpload((*reinterpret_cast< OCC::SyncFileItemPtr(*)>(_a[1])),(*reinterpret_cast< OCC::BulkPropagatorJob::UploadFileInfo(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< const QByteArray(*)>(_a[4]))); break;
        case 3: _t->slotOnErrorStartFolderUnlock((*reinterpret_cast< OCC::SyncFileItemPtr(*)>(_a[1])),(*reinterpret_cast< OCC::SyncFileItem::Status(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->slotPutFinished(); break;
        case 5: _t->slotUploadProgress((*reinterpret_cast< OCC::SyncFileItemPtr(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 6: _t->slotJobDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::BulkPropagatorJob::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagatorJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__BulkPropagatorJob.data,
    qt_meta_data_OCC__BulkPropagatorJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::BulkPropagatorJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::BulkPropagatorJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__BulkPropagatorJob.stringdata0))
        return static_cast<void*>(this);
    return PropagatorJob::qt_metacast(_clname);
}

int OCC::BulkPropagatorJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagatorJob::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
