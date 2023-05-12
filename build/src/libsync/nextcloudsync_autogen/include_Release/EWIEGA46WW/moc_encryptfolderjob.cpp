/****************************************************************************
** Meta object code from reading C++ file 'encryptfolderjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/encryptfolderjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'encryptfolderjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__EncryptFolderJob_t {
    QByteArrayData data[19];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__EncryptFolderJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__EncryptFolderJob_t qt_meta_stringdata_OCC__EncryptFolderJob = {
    {
QT_MOC_LITERAL(0, 0, 21), // "OCC::EncryptFolderJob"
QT_MOC_LITERAL(1, 22, 8), // "finished"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "status"
QT_MOC_LITERAL(4, 39, 25), // "slotEncryptionFlagSuccess"
QT_MOC_LITERAL(5, 65, 8), // "folderId"
QT_MOC_LITERAL(6, 74, 23), // "slotEncryptionFlagError"
QT_MOC_LITERAL(7, 98, 14), // "httpReturnCode"
QT_MOC_LITERAL(8, 113, 12), // "errorMessage"
QT_MOC_LITERAL(9, 126, 28), // "slotLockForEncryptionSuccess"
QT_MOC_LITERAL(10, 155, 5), // "token"
QT_MOC_LITERAL(11, 161, 26), // "slotLockForEncryptionError"
QT_MOC_LITERAL(12, 188, 23), // "slotUnlockFolderSuccess"
QT_MOC_LITERAL(13, 212, 21), // "slotUnlockFolderError"
QT_MOC_LITERAL(14, 234, 25), // "slotUploadMetadataSuccess"
QT_MOC_LITERAL(15, 260, 23), // "slotUpdateMetadataError"
QT_MOC_LITERAL(16, 284, 6), // "Status"
QT_MOC_LITERAL(17, 291, 7), // "Success"
QT_MOC_LITERAL(18, 299, 5) // "Error"

    },
    "OCC::EncryptFolderJob\0finished\0\0status\0"
    "slotEncryptionFlagSuccess\0folderId\0"
    "slotEncryptionFlagError\0httpReturnCode\0"
    "errorMessage\0slotLockForEncryptionSuccess\0"
    "token\0slotLockForEncryptionError\0"
    "slotUnlockFolderSuccess\0slotUnlockFolderError\0"
    "slotUploadMetadataSuccess\0"
    "slotUpdateMetadataError\0Status\0Success\0"
    "Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__EncryptFolderJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       1,  102, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   62,    2, 0x08 /* Private */,
       6,    3,   65,    2, 0x08 /* Private */,
       9,    2,   72,    2, 0x08 /* Private */,
      11,    3,   77,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      13,    3,   87,    2, 0x08 /* Private */,
      14,    1,   94,    2, 0x08 /* Private */,
      15,    2,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int, QMetaType::QString,    5,    7,    8,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    5,   10,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int, QMetaType::QString,    5,    7,    8,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int, QMetaType::QString,    5,    7,    8,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,    5,    7,

 // enums: name, alias, flags, count, data
      16,   16, 0x0,    2,  107,

 // enum data: key, value
      17, uint(OCC::EncryptFolderJob::Success),
      18, uint(OCC::EncryptFolderJob::Error),

       0        // eod
};

void OCC::EncryptFolderJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EncryptFolderJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotEncryptionFlagSuccess((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->slotEncryptionFlagError((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->slotLockForEncryptionSuccess((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 4: _t->slotLockForEncryptionError((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->slotUnlockFolderSuccess((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 6: _t->slotUnlockFolderError((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->slotUploadMetadataSuccess((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 8: _t->slotUpdateMetadataError((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EncryptFolderJob::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EncryptFolderJob::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::EncryptFolderJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__EncryptFolderJob.data,
    qt_meta_data_OCC__EncryptFolderJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::EncryptFolderJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::EncryptFolderJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__EncryptFolderJob.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::EncryptFolderJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void OCC::EncryptFolderJob::finished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
