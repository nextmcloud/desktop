/****************************************************************************
** Meta object code from reading C++ file 'propagateuploadencrypted.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/propagateuploadencrypted.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propagateuploadencrypted.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__PropagateUploadEncrypted_t {
    QByteArrayData data[28];
    char stringdata0[420];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateUploadEncrypted_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateUploadEncrypted_t qt_meta_stringdata_OCC__PropagateUploadEncrypted = {
    {
QT_MOC_LITERAL(0, 0, 29), // "OCC::PropagateUploadEncrypted"
QT_MOC_LITERAL(1, 30, 9), // "finalized"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "path"
QT_MOC_LITERAL(4, 46, 8), // "filename"
QT_MOC_LITERAL(5, 55, 4), // "size"
QT_MOC_LITERAL(6, 60, 5), // "error"
QT_MOC_LITERAL(7, 66, 14), // "folderUnlocked"
QT_MOC_LITERAL(8, 81, 8), // "folderId"
QT_MOC_LITERAL(9, 90, 10), // "httpStatus"
QT_MOC_LITERAL(10, 101, 29), // "slotFolderEncryptedIdReceived"
QT_MOC_LITERAL(11, 131, 4), // "list"
QT_MOC_LITERAL(12, 136, 26), // "slotFolderEncryptedIdError"
QT_MOC_LITERAL(13, 163, 14), // "QNetworkReply*"
QT_MOC_LITERAL(14, 178, 1), // "r"
QT_MOC_LITERAL(15, 180, 28), // "slotFolderLockedSuccessfully"
QT_MOC_LITERAL(16, 209, 6), // "fileId"
QT_MOC_LITERAL(17, 216, 5), // "token"
QT_MOC_LITERAL(18, 222, 21), // "slotFolderLockedError"
QT_MOC_LITERAL(19, 244, 13), // "httpErrorCode"
QT_MOC_LITERAL(20, 258, 11), // "slotTryLock"
QT_MOC_LITERAL(21, 270, 35), // "slotFolderEncryptedMetadataRe..."
QT_MOC_LITERAL(22, 306, 4), // "json"
QT_MOC_LITERAL(23, 311, 10), // "statusCode"
QT_MOC_LITERAL(24, 322, 32), // "slotFolderEncryptedMetadataError"
QT_MOC_LITERAL(25, 355, 14), // "httpReturnCode"
QT_MOC_LITERAL(26, 370, 25), // "slotUpdateMetadataSuccess"
QT_MOC_LITERAL(27, 396, 23) // "slotUpdateMetadataError"

    },
    "OCC::PropagateUploadEncrypted\0finalized\0"
    "\0path\0filename\0size\0error\0folderUnlocked\0"
    "folderId\0httpStatus\0slotFolderEncryptedIdReceived\0"
    "list\0slotFolderEncryptedIdError\0"
    "QNetworkReply*\0r\0slotFolderLockedSuccessfully\0"
    "fileId\0token\0slotFolderLockedError\0"
    "httpErrorCode\0slotTryLock\0"
    "slotFolderEncryptedMetadataReceived\0"
    "json\0statusCode\0slotFolderEncryptedMetadataError\0"
    "httpReturnCode\0slotUpdateMetadataSuccess\0"
    "slotUpdateMetadataError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateUploadEncrypted[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   74,    2, 0x06 /* Public */,
       6,    0,   81,    2, 0x06 /* Public */,
       7,    2,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   87,    2, 0x08 /* Private */,
      12,    1,   90,    2, 0x08 /* Private */,
      15,    2,   93,    2, 0x08 /* Private */,
      18,    2,   98,    2, 0x08 /* Private */,
      20,    1,  103,    2, 0x08 /* Private */,
      21,    2,  106,    2, 0x08 /* Private */,
      24,    2,  111,    2, 0x08 /* Private */,
      26,    1,  116,    2, 0x08 /* Private */,
      27,    2,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::ULongLong,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,   16,   17,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   16,   19,
    QMetaType::Void, QMetaType::QByteArray,   16,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,   22,   23,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   16,   25,
    QMetaType::Void, QMetaType::QByteArray,   16,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   16,   25,

       0        // eod
};

void OCC::PropagateUploadEncrypted::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateUploadEncrypted *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finalized((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint64(*)>(_a[3]))); break;
        case 1: _t->error(); break;
        case 2: _t->folderUnlocked((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->slotFolderEncryptedIdReceived((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->slotFolderEncryptedIdError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->slotFolderLockedSuccessfully((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: _t->slotFolderLockedError((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->slotTryLock((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 8: _t->slotFolderEncryptedMetadataReceived((*reinterpret_cast< const QJsonDocument(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->slotFolderEncryptedMetadataError((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->slotUpdateMetadataSuccess((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 11: _t->slotUpdateMetadataError((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
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
            using _t = void (PropagateUploadEncrypted::*)(const QString & , const QString & , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropagateUploadEncrypted::finalized)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PropagateUploadEncrypted::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropagateUploadEncrypted::error)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PropagateUploadEncrypted::*)(const QByteArray & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropagateUploadEncrypted::folderUnlocked)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::PropagateUploadEncrypted::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__PropagateUploadEncrypted.data,
    qt_meta_data_OCC__PropagateUploadEncrypted,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PropagateUploadEncrypted::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateUploadEncrypted::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateUploadEncrypted.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::PropagateUploadEncrypted::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void OCC::PropagateUploadEncrypted::finalized(const QString & _t1, const QString & _t2, quint64 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::PropagateUploadEncrypted::error()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::PropagateUploadEncrypted::folderUnlocked(const QByteArray & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
