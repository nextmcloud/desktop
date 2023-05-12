/****************************************************************************
** Meta object code from reading C++ file 'updatefiledropmetadata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/updatefiledropmetadata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatefiledropmetadata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__UpdateFileDropMetadataJob_t {
    QByteArrayData data[28];
    char stringdata0[478];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__UpdateFileDropMetadataJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__UpdateFileDropMetadataJob_t qt_meta_stringdata_OCC__UpdateFileDropMetadataJob = {
    {
QT_MOC_LITERAL(0, 0, 30), // "OCC::UpdateFileDropMetadataJob"
QT_MOC_LITERAL(1, 31, 14), // "folderUnlocked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "folderId"
QT_MOC_LITERAL(4, 56, 10), // "httpStatus"
QT_MOC_LITERAL(5, 67, 33), // "fileDropMetadataParsedAndAdju..."
QT_MOC_LITERAL(6, 101, 25), // "OCC::FolderMetadata*const"
QT_MOC_LITERAL(7, 127, 8), // "metadata"
QT_MOC_LITERAL(8, 136, 5), // "start"
QT_MOC_LITERAL(9, 142, 29), // "slotFolderEncryptedIdReceived"
QT_MOC_LITERAL(10, 172, 4), // "list"
QT_MOC_LITERAL(11, 177, 26), // "slotFolderEncryptedIdError"
QT_MOC_LITERAL(12, 204, 14), // "QNetworkReply*"
QT_MOC_LITERAL(13, 219, 5), // "reply"
QT_MOC_LITERAL(14, 225, 28), // "slotFolderLockedSuccessfully"
QT_MOC_LITERAL(15, 254, 6), // "fileId"
QT_MOC_LITERAL(16, 261, 5), // "token"
QT_MOC_LITERAL(17, 267, 21), // "slotFolderLockedError"
QT_MOC_LITERAL(18, 289, 13), // "httpErrorCode"
QT_MOC_LITERAL(19, 303, 11), // "slotTryLock"
QT_MOC_LITERAL(20, 315, 35), // "slotFolderEncryptedMetadataRe..."
QT_MOC_LITERAL(21, 351, 4), // "json"
QT_MOC_LITERAL(22, 356, 10), // "statusCode"
QT_MOC_LITERAL(23, 367, 32), // "slotFolderEncryptedMetadataError"
QT_MOC_LITERAL(24, 400, 14), // "httpReturnCode"
QT_MOC_LITERAL(25, 415, 25), // "slotUpdateMetadataSuccess"
QT_MOC_LITERAL(26, 441, 23), // "slotUpdateMetadataError"
QT_MOC_LITERAL(27, 465, 12) // "unlockFolder"

    },
    "OCC::UpdateFileDropMetadataJob\0"
    "folderUnlocked\0\0folderId\0httpStatus\0"
    "fileDropMetadataParsedAndAdjusted\0"
    "OCC::FolderMetadata*const\0metadata\0"
    "start\0slotFolderEncryptedIdReceived\0"
    "list\0slotFolderEncryptedIdError\0"
    "QNetworkReply*\0reply\0slotFolderLockedSuccessfully\0"
    "fileId\0token\0slotFolderLockedError\0"
    "httpErrorCode\0slotTryLock\0"
    "slotFolderEncryptedMetadataReceived\0"
    "json\0statusCode\0slotFolderEncryptedMetadataError\0"
    "httpReturnCode\0slotUpdateMetadataSuccess\0"
    "slotUpdateMetadataError\0unlockFolder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__UpdateFileDropMetadataJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       5,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   87,    2, 0x08 /* Private */,
       9,    1,   88,    2, 0x08 /* Private */,
      11,    1,   91,    2, 0x08 /* Private */,
      14,    2,   94,    2, 0x08 /* Private */,
      17,    2,   99,    2, 0x08 /* Private */,
      19,    1,  104,    2, 0x08 /* Private */,
      20,    2,  107,    2, 0x08 /* Private */,
      23,    2,  112,    2, 0x08 /* Private */,
      25,    1,  117,    2, 0x08 /* Private */,
      26,    2,  120,    2, 0x08 /* Private */,
      27,    0,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,   15,   16,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   15,   18,
    QMetaType::Void, QMetaType::QByteArray,   15,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,   21,   22,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   15,   24,
    QMetaType::Void, QMetaType::QByteArray,   15,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   15,   24,
    QMetaType::Void,

       0        // eod
};

void OCC::UpdateFileDropMetadataJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateFileDropMetadataJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->folderUnlocked((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->fileDropMetadataParsedAndAdjusted((*reinterpret_cast< const OCC::FolderMetadata*const(*)>(_a[1]))); break;
        case 2: _t->start(); break;
        case 3: _t->slotFolderEncryptedIdReceived((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->slotFolderEncryptedIdError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->slotFolderLockedSuccessfully((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: _t->slotFolderLockedError((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->slotTryLock((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 8: _t->slotFolderEncryptedMetadataReceived((*reinterpret_cast< const QJsonDocument(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->slotFolderEncryptedMetadataError((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->slotUpdateMetadataSuccess((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 11: _t->slotUpdateMetadataError((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->unlockFolder(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UpdateFileDropMetadataJob::*)(const QByteArray & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateFileDropMetadataJob::folderUnlocked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UpdateFileDropMetadataJob::*)(const OCC::FolderMetadata * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateFileDropMetadataJob::fileDropMetadataParsedAndAdjusted)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::UpdateFileDropMetadataJob::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagatorJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__UpdateFileDropMetadataJob.data,
    qt_meta_data_OCC__UpdateFileDropMetadataJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::UpdateFileDropMetadataJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UpdateFileDropMetadataJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__UpdateFileDropMetadataJob.stringdata0))
        return static_cast<void*>(this);
    return PropagatorJob::qt_metacast(_clname);
}

int OCC::UpdateFileDropMetadataJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagatorJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void OCC::UpdateFileDropMetadataJob::folderUnlocked(const QByteArray & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::UpdateFileDropMetadataJob::fileDropMetadataParsedAndAdjusted(const OCC::FolderMetadata * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
