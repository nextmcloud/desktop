/****************************************************************************
** Meta object code from reading C++ file 'propagatedownload.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/propagatedownload.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propagatedownload.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__GETFileJob_t {
    QByteArrayData data[6];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__GETFileJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__GETFileJob_t qt_meta_stringdata_OCC__GETFileJob = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OCC::GETFileJob"
QT_MOC_LITERAL(1, 16, 14), // "finishedSignal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "downloadProgress"
QT_MOC_LITERAL(4, 49, 13), // "slotReadyRead"
QT_MOC_LITERAL(5, 63, 19) // "slotMetaDataChanged"

    },
    "OCC::GETFileJob\0finishedSignal\0\0"
    "downloadProgress\0slotReadyRead\0"
    "slotMetaDataChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__GETFileJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    2,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   40,    2, 0x08 /* Private */,
       5,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::GETFileJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GETFileJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finishedSignal(); break;
        case 1: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->slotReadyRead(); break;
        case 3: _t->slotMetaDataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GETFileJob::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GETFileJob::finishedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GETFileJob::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GETFileJob::downloadProgress)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::GETFileJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__GETFileJob.data,
    qt_meta_data_OCC__GETFileJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::GETFileJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::GETFileJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__GETFileJob.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::GETFileJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OCC::GETFileJob::finishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::GETFileJob::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__GETEncryptedFileJob_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__GETEncryptedFileJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__GETEncryptedFileJob_t qt_meta_stringdata_OCC__GETEncryptedFileJob = {
    {
QT_MOC_LITERAL(0, 0, 24) // "OCC::GETEncryptedFileJob"

    },
    "OCC::GETEncryptedFileJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__GETEncryptedFileJob[] = {

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

void OCC::GETEncryptedFileJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::GETEncryptedFileJob::staticMetaObject = { {
    QMetaObject::SuperData::link<GETFileJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__GETEncryptedFileJob.data,
    qt_meta_data_OCC__GETEncryptedFileJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::GETEncryptedFileJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::GETEncryptedFileJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__GETEncryptedFileJob.stringdata0))
        return static_cast<void*>(this);
    return GETFileJob::qt_metacast(_clname);
}

int OCC::GETEncryptedFileJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GETFileJob::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OCC__PropagateDownloadFile_t {
    QByteArrayData data[30];
    char stringdata0[551];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateDownloadFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateDownloadFile_t qt_meta_stringdata_OCC__PropagateDownloadFile = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OCC::PropagateDownloadFile"
QT_MOC_LITERAL(1, 27, 24), // "conflictChecksumComputed"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 12), // "checksumType"
QT_MOC_LITERAL(4, 66, 8), // "checksum"
QT_MOC_LITERAL(5, 75, 13), // "startDownload"
QT_MOC_LITERAL(6, 89, 15), // "slotGetFinished"
QT_MOC_LITERAL(7, 105, 29), // "transmissionChecksumValidated"
QT_MOC_LITERAL(8, 135, 23), // "contentChecksumComputed"
QT_MOC_LITERAL(9, 159, 32), // "localFileContentChecksumComputed"
QT_MOC_LITERAL(10, 192, 16), // "finalizeDownload"
QT_MOC_LITERAL(11, 209, 16), // "downloadFinished"
QT_MOC_LITERAL(12, 226, 14), // "updateMetadata"
QT_MOC_LITERAL(13, 241, 10), // "isConflict"
QT_MOC_LITERAL(14, 252, 5), // "abort"
QT_MOC_LITERAL(15, 258, 24), // "PropagatorJob::AbortType"
QT_MOC_LITERAL(16, 283, 9), // "abortType"
QT_MOC_LITERAL(17, 293, 20), // "slotDownloadProgress"
QT_MOC_LITERAL(18, 314, 16), // "slotChecksumFail"
QT_MOC_LITERAL(19, 331, 6), // "errMsg"
QT_MOC_LITERAL(20, 338, 22), // "calculatedChecksumType"
QT_MOC_LITERAL(21, 361, 18), // "calculatedChecksum"
QT_MOC_LITERAL(22, 380, 37), // "ValidateChecksumHeader::Failu..."
QT_MOC_LITERAL(23, 418, 6), // "reason"
QT_MOC_LITERAL(24, 425, 26), // "processChecksumRecalculate"
QT_MOC_LITERAL(25, 452, 20), // "const QNetworkReply*"
QT_MOC_LITERAL(26, 473, 5), // "reply"
QT_MOC_LITERAL(27, 479, 22), // "originalChecksumHeader"
QT_MOC_LITERAL(28, 502, 12), // "errorMessage"
QT_MOC_LITERAL(29, 515, 35) // "checksumValidateFailedAbortDo..."

    },
    "OCC::PropagateDownloadFile\0"
    "conflictChecksumComputed\0\0checksumType\0"
    "checksum\0startDownload\0slotGetFinished\0"
    "transmissionChecksumValidated\0"
    "contentChecksumComputed\0"
    "localFileContentChecksumComputed\0"
    "finalizeDownload\0downloadFinished\0"
    "updateMetadata\0isConflict\0abort\0"
    "PropagatorJob::AbortType\0abortType\0"
    "slotDownloadProgress\0slotChecksumFail\0"
    "errMsg\0calculatedChecksumType\0"
    "calculatedChecksum\0"
    "ValidateChecksumHeader::FailureReason\0"
    "reason\0processChecksumRecalculate\0"
    "const QNetworkReply*\0reply\0"
    "originalChecksumHeader\0errorMessage\0"
    "checksumValidateFailedAbortDownload"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateDownloadFile[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x08 /* Private */,
       5,    0,   89,    2, 0x08 /* Private */,
       6,    0,   90,    2, 0x08 /* Private */,
       7,    2,   91,    2, 0x08 /* Private */,
       8,    2,   96,    2, 0x08 /* Private */,
       9,    2,  101,    2, 0x08 /* Private */,
      10,    0,  106,    2, 0x08 /* Private */,
      11,    0,  107,    2, 0x08 /* Private */,
      12,    1,  108,    2, 0x08 /* Private */,
      14,    1,  111,    2, 0x08 /* Private */,
      17,    2,  114,    2, 0x08 /* Private */,
      18,    4,  119,    2, 0x08 /* Private */,
      24,    3,  128,    2, 0x08 /* Private */,
      29,    1,  135,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, QMetaType::QByteArray, 0x80000000 | 22,   19,   20,   21,   23,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QByteArray, QMetaType::QString,   26,   27,   28,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void OCC::PropagateDownloadFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateDownloadFile *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->conflictChecksumComputed((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->startDownload(); break;
        case 2: _t->slotGetFinished(); break;
        case 3: _t->transmissionChecksumValidated((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 4: _t->contentChecksumComputed((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 5: _t->localFileContentChecksumComputed((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: _t->finalizeDownload(); break;
        case 7: _t->downloadFinished(); break;
        case 8: _t->updateMetadata((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->abort((*reinterpret_cast< PropagatorJob::AbortType(*)>(_a[1]))); break;
        case 10: _t->slotDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 11: _t->slotChecksumFail((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< const ValidateChecksumHeader::FailureReason(*)>(_a[4]))); break;
        case 12: _t->processChecksumRecalculate((*reinterpret_cast< const QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 13: _t->checksumValidateFailedAbortDownload((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::PropagateDownloadFile::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagateItemJob::staticMetaObject>(),
    qt_meta_stringdata_OCC__PropagateDownloadFile.data,
    qt_meta_data_OCC__PropagateDownloadFile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::PropagateDownloadFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateDownloadFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateDownloadFile.stringdata0))
        return static_cast<void*>(this);
    return PropagateItemJob::qt_metacast(_clname);
}

int OCC::PropagateDownloadFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateItemJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
