/****************************************************************************
** Meta object code from reading C++ file 'discoveryphase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/discoveryphase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'discoveryphase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__DiscoverySingleLocalDirectoryJob_t {
    QByteArrayData data[13];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__DiscoverySingleLocalDirectoryJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__DiscoverySingleLocalDirectoryJob_t qt_meta_stringdata_OCC__DiscoverySingleLocalDirectoryJob = {
    {
QT_MOC_LITERAL(0, 0, 37), // "OCC::DiscoverySingleLocalDire..."
QT_MOC_LITERAL(1, 38, 8), // "finished"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 23), // "QVector<OCC::LocalInfo>"
QT_MOC_LITERAL(4, 72, 6), // "result"
QT_MOC_LITERAL(5, 79, 18), // "finishedFatalError"
QT_MOC_LITERAL(6, 98, 11), // "errorString"
QT_MOC_LITERAL(7, 110, 21), // "finishedNonFatalError"
QT_MOC_LITERAL(8, 132, 14), // "itemDiscovered"
QT_MOC_LITERAL(9, 147, 20), // "OCC::SyncFileItemPtr"
QT_MOC_LITERAL(10, 168, 4), // "item"
QT_MOC_LITERAL(11, 173, 12), // "childIgnored"
QT_MOC_LITERAL(12, 186, 1) // "b"

    },
    "OCC::DiscoverySingleLocalDirectoryJob\0"
    "finished\0\0QVector<OCC::LocalInfo>\0"
    "result\0finishedFatalError\0errorString\0"
    "finishedNonFatalError\0itemDiscovered\0"
    "OCC::SyncFileItemPtr\0item\0childIgnored\0"
    "b"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__DiscoverySingleLocalDirectoryJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,
       8,    1,   48,    2, 0x06 /* Public */,
      11,    1,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void OCC::DiscoverySingleLocalDirectoryJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiscoverySingleLocalDirectoryJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< QVector<OCC::LocalInfo>(*)>(_a[1]))); break;
        case 1: _t->finishedFatalError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->finishedNonFatalError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->itemDiscovered((*reinterpret_cast< OCC::SyncFileItemPtr(*)>(_a[1]))); break;
        case 4: _t->childIgnored((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            using _t = void (DiscoverySingleLocalDirectoryJob::*)(QVector<OCC::LocalInfo> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoverySingleLocalDirectoryJob::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DiscoverySingleLocalDirectoryJob::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoverySingleLocalDirectoryJob::finishedFatalError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DiscoverySingleLocalDirectoryJob::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoverySingleLocalDirectoryJob::finishedNonFatalError)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DiscoverySingleLocalDirectoryJob::*)(OCC::SyncFileItemPtr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoverySingleLocalDirectoryJob::itemDiscovered)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DiscoverySingleLocalDirectoryJob::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoverySingleLocalDirectoryJob::childIgnored)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::DiscoverySingleLocalDirectoryJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__DiscoverySingleLocalDirectoryJob.data,
    qt_meta_data_OCC__DiscoverySingleLocalDirectoryJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::DiscoverySingleLocalDirectoryJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::DiscoverySingleLocalDirectoryJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__DiscoverySingleLocalDirectoryJob.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::DiscoverySingleLocalDirectoryJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::DiscoverySingleLocalDirectoryJob::finished(QVector<OCC::LocalInfo> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::DiscoverySingleLocalDirectoryJob::finishedFatalError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::DiscoverySingleLocalDirectoryJob::finishedNonFatalError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::DiscoverySingleLocalDirectoryJob::itemDiscovered(OCC::SyncFileItemPtr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::DiscoverySingleLocalDirectoryJob::childIgnored(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_OCC__DiscoverySingleDirectoryJob_t {
    QByteArrayData data[21];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__DiscoverySingleDirectoryJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__DiscoverySingleDirectoryJob_t qt_meta_stringdata_OCC__DiscoverySingleDirectoryJob = {
    {
QT_MOC_LITERAL(0, 0, 32), // "OCC::DiscoverySingleDirectoryJob"
QT_MOC_LITERAL(1, 33, 25), // "firstDirectoryPermissions"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 22), // "OCC::RemotePermissions"
QT_MOC_LITERAL(4, 83, 4), // "etag"
QT_MOC_LITERAL(5, 88, 4), // "time"
QT_MOC_LITERAL(6, 93, 8), // "finished"
QT_MOC_LITERAL(7, 102, 42), // "OCC::HttpResult<QVector<OCC::..."
QT_MOC_LITERAL(8, 145, 6), // "result"
QT_MOC_LITERAL(9, 152, 28), // "directoryListingIteratedSlot"
QT_MOC_LITERAL(10, 181, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(11, 203, 29), // "lsJobFinishedWithoutErrorSlot"
QT_MOC_LITERAL(12, 233, 26), // "lsJobFinishedWithErrorSlot"
QT_MOC_LITERAL(13, 260, 14), // "QNetworkReply*"
QT_MOC_LITERAL(14, 275, 16), // "fetchE2eMetadata"
QT_MOC_LITERAL(15, 292, 16), // "metadataReceived"
QT_MOC_LITERAL(16, 309, 4), // "json"
QT_MOC_LITERAL(17, 314, 10), // "statusCode"
QT_MOC_LITERAL(18, 325, 13), // "metadataError"
QT_MOC_LITERAL(19, 339, 6), // "fileId"
QT_MOC_LITERAL(20, 346, 14) // "httpReturnCode"

    },
    "OCC::DiscoverySingleDirectoryJob\0"
    "firstDirectoryPermissions\0\0"
    "OCC::RemotePermissions\0etag\0time\0"
    "finished\0OCC::HttpResult<QVector<OCC::RemoteInfo> >\0"
    "result\0directoryListingIteratedSlot\0"
    "QMap<QString,QString>\0"
    "lsJobFinishedWithoutErrorSlot\0"
    "lsJobFinishedWithErrorSlot\0QNetworkReply*\0"
    "fetchE2eMetadata\0metadataReceived\0"
    "json\0statusCode\0metadataError\0fileId\0"
    "httpReturnCode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__DiscoverySingleDirectoryJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    2,   62,    2, 0x06 /* Public */,
       6,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   70,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    1,   76,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,
      15,    2,   80,    2, 0x08 /* Private */,
      18,    2,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QDateTime,    2,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,   16,   17,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   19,   20,

       0        // eod
};

void OCC::DiscoverySingleDirectoryJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiscoverySingleDirectoryJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->firstDirectoryPermissions((*reinterpret_cast< OCC::RemotePermissions(*)>(_a[1]))); break;
        case 1: _t->etag((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 2: _t->finished((*reinterpret_cast< const OCC::HttpResult<QVector<OCC::RemoteInfo> >(*)>(_a[1]))); break;
        case 3: _t->directoryListingIteratedSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[2]))); break;
        case 4: _t->lsJobFinishedWithoutErrorSlot(); break;
        case 5: _t->lsJobFinishedWithErrorSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->fetchE2eMetadata(); break;
        case 7: _t->metadataReceived((*reinterpret_cast< const QJsonDocument(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->metadataError((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::RemotePermissions >(); break;
            }
            break;
        case 5:
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
            using _t = void (DiscoverySingleDirectoryJob::*)(OCC::RemotePermissions );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoverySingleDirectoryJob::firstDirectoryPermissions)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DiscoverySingleDirectoryJob::*)(const QByteArray & , const QDateTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoverySingleDirectoryJob::etag)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DiscoverySingleDirectoryJob::*)(const OCC::HttpResult<QVector<OCC::RemoteInfo>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoverySingleDirectoryJob::finished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::DiscoverySingleDirectoryJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__DiscoverySingleDirectoryJob.data,
    qt_meta_data_OCC__DiscoverySingleDirectoryJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::DiscoverySingleDirectoryJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::DiscoverySingleDirectoryJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__DiscoverySingleDirectoryJob.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::DiscoverySingleDirectoryJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void OCC::DiscoverySingleDirectoryJob::firstDirectoryPermissions(OCC::RemotePermissions _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::DiscoverySingleDirectoryJob::etag(const QByteArray & _t1, const QDateTime & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::DiscoverySingleDirectoryJob::finished(const OCC::HttpResult<QVector<OCC::RemoteInfo>> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_OCC__DiscoveryPhase_t {
    QByteArrayData data[18];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__DiscoveryPhase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__DiscoveryPhase_t qt_meta_stringdata_OCC__DiscoveryPhase = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OCC::DiscoveryPhase"
QT_MOC_LITERAL(1, 20, 10), // "fatalError"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "errorString"
QT_MOC_LITERAL(4, 44, 14), // "itemDiscovered"
QT_MOC_LITERAL(5, 59, 20), // "OCC::SyncFileItemPtr"
QT_MOC_LITERAL(6, 80, 4), // "item"
QT_MOC_LITERAL(7, 85, 8), // "finished"
QT_MOC_LITERAL(8, 94, 12), // "newBigFolder"
QT_MOC_LITERAL(9, 107, 6), // "folder"
QT_MOC_LITERAL(10, 114, 10), // "isExternal"
QT_MOC_LITERAL(11, 125, 16), // "silentlyExcluded"
QT_MOC_LITERAL(12, 142, 10), // "folderPath"
QT_MOC_LITERAL(13, 153, 13), // "addErrorToGui"
QT_MOC_LITERAL(14, 167, 20), // "SyncFileItem::Status"
QT_MOC_LITERAL(15, 188, 6), // "status"
QT_MOC_LITERAL(16, 195, 12), // "errorMessage"
QT_MOC_LITERAL(17, 208, 7) // "subject"

    },
    "OCC::DiscoveryPhase\0fatalError\0\0"
    "errorString\0itemDiscovered\0"
    "OCC::SyncFileItemPtr\0item\0finished\0"
    "newBigFolder\0folder\0isExternal\0"
    "silentlyExcluded\0folderPath\0addErrorToGui\0"
    "SyncFileItem::Status\0status\0errorMessage\0"
    "subject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__DiscoveryPhase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       7,    0,   50,    2, 0x06 /* Public */,
       8,    2,   51,    2, 0x06 /* Public */,
      11,    1,   56,    2, 0x06 /* Public */,
      13,    3,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString, QMetaType::QString,   15,   16,   17,

       0        // eod
};

void OCC::DiscoveryPhase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiscoveryPhase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fatalError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->itemDiscovered((*reinterpret_cast< const OCC::SyncFileItemPtr(*)>(_a[1]))); break;
        case 2: _t->finished(); break;
        case 3: _t->newBigFolder((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->silentlyExcluded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->addErrorToGui((*reinterpret_cast< SyncFileItem::Status(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            using _t = void (DiscoveryPhase::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoveryPhase::fatalError)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DiscoveryPhase::*)(const OCC::SyncFileItemPtr & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoveryPhase::itemDiscovered)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DiscoveryPhase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoveryPhase::finished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DiscoveryPhase::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoveryPhase::newBigFolder)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DiscoveryPhase::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoveryPhase::silentlyExcluded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DiscoveryPhase::*)(SyncFileItem::Status , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoveryPhase::addErrorToGui)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::DiscoveryPhase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__DiscoveryPhase.data,
    qt_meta_data_OCC__DiscoveryPhase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::DiscoveryPhase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::DiscoveryPhase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__DiscoveryPhase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::DiscoveryPhase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OCC::DiscoveryPhase::fatalError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::DiscoveryPhase::itemDiscovered(const OCC::SyncFileItemPtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::DiscoveryPhase::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::DiscoveryPhase::newBigFolder(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::DiscoveryPhase::silentlyExcluded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::DiscoveryPhase::addErrorToGui(SyncFileItem::Status _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_OCC__LocalDiscoveryEnums_t {
    QByteArrayData data[4];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__LocalDiscoveryEnums_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__LocalDiscoveryEnums_t qt_meta_stringdata_OCC__LocalDiscoveryEnums = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OCC::LocalDiscoveryEnums"
QT_MOC_LITERAL(1, 25, 19), // "LocalDiscoveryStyle"
QT_MOC_LITERAL(2, 45, 14), // "FilesystemOnly"
QT_MOC_LITERAL(3, 60, 21) // "DatabaseAndFilesystem"

    },
    "OCC::LocalDiscoveryEnums\0LocalDiscoveryStyle\0"
    "FilesystemOnly\0DatabaseAndFilesystem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__LocalDiscoveryEnums[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    2,   19,

 // enum data: key, value
       2, uint(OCC::LocalDiscoveryEnums::LocalDiscoveryStyle::FilesystemOnly),
       3, uint(OCC::LocalDiscoveryEnums::LocalDiscoveryStyle::DatabaseAndFilesystem),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject OCC::LocalDiscoveryEnums::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_OCC__LocalDiscoveryEnums.data,
    qt_meta_data_OCC__LocalDiscoveryEnums,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
