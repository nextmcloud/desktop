/****************************************************************************
** Meta object code from reading C++ file 'connectionvalidator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/connectionvalidator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionvalidator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__ConnectionValidator_t {
    QByteArrayData data[37];
    char stringdata0[536];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ConnectionValidator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ConnectionValidator_t qt_meta_stringdata_OCC__ConnectionValidator = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OCC::ConnectionValidator"
QT_MOC_LITERAL(1, 25, 16), // "connectionResult"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 32), // "OCC::ConnectionValidator::Status"
QT_MOC_LITERAL(4, 76, 6), // "status"
QT_MOC_LITERAL(5, 83, 6), // "errors"
QT_MOC_LITERAL(6, 90, 18), // "checkServerAndAuth"
QT_MOC_LITERAL(7, 109, 21), // "systemProxyLookupDone"
QT_MOC_LITERAL(8, 131, 13), // "QNetworkProxy"
QT_MOC_LITERAL(9, 145, 5), // "proxy"
QT_MOC_LITERAL(10, 151, 19), // "checkAuthentication"
QT_MOC_LITERAL(11, 171, 22), // "slotCheckServerAndAuth"
QT_MOC_LITERAL(12, 194, 15), // "slotStatusFound"
QT_MOC_LITERAL(13, 210, 3), // "url"
QT_MOC_LITERAL(14, 214, 4), // "info"
QT_MOC_LITERAL(15, 219, 17), // "slotNoStatusFound"
QT_MOC_LITERAL(16, 237, 14), // "QNetworkReply*"
QT_MOC_LITERAL(17, 252, 5), // "reply"
QT_MOC_LITERAL(18, 258, 14), // "slotJobTimeout"
QT_MOC_LITERAL(19, 273, 14), // "slotAuthFailed"
QT_MOC_LITERAL(20, 288, 15), // "slotAuthSuccess"
QT_MOC_LITERAL(21, 304, 24), // "slotCapabilitiesRecieved"
QT_MOC_LITERAL(22, 329, 15), // "slotUserFetched"
QT_MOC_LITERAL(23, 345, 14), // "OCC::UserInfo*"
QT_MOC_LITERAL(24, 360, 8), // "userInfo"
QT_MOC_LITERAL(25, 369, 6), // "Status"
QT_MOC_LITERAL(26, 376, 9), // "Undefined"
QT_MOC_LITERAL(27, 386, 9), // "Connected"
QT_MOC_LITERAL(28, 396, 13), // "NotConfigured"
QT_MOC_LITERAL(29, 410, 21), // "ServerVersionMismatch"
QT_MOC_LITERAL(30, 432, 19), // "CredentialsNotReady"
QT_MOC_LITERAL(31, 452, 16), // "CredentialsWrong"
QT_MOC_LITERAL(32, 469, 8), // "SslError"
QT_MOC_LITERAL(33, 478, 14), // "StatusNotFound"
QT_MOC_LITERAL(34, 493, 18), // "ServiceUnavailable"
QT_MOC_LITERAL(35, 512, 15), // "MaintenanceMode"
QT_MOC_LITERAL(36, 528, 7) // "Timeout"

    },
    "OCC::ConnectionValidator\0connectionResult\0"
    "\0OCC::ConnectionValidator::Status\0"
    "status\0errors\0checkServerAndAuth\0"
    "systemProxyLookupDone\0QNetworkProxy\0"
    "proxy\0checkAuthentication\0"
    "slotCheckServerAndAuth\0slotStatusFound\0"
    "url\0info\0slotNoStatusFound\0QNetworkReply*\0"
    "reply\0slotJobTimeout\0slotAuthFailed\0"
    "slotAuthSuccess\0slotCapabilitiesRecieved\0"
    "slotUserFetched\0OCC::UserInfo*\0userInfo\0"
    "Status\0Undefined\0Connected\0NotConfigured\0"
    "ServerVersionMismatch\0CredentialsNotReady\0"
    "CredentialsWrong\0SslError\0StatusNotFound\0"
    "ServiceUnavailable\0MaintenanceMode\0"
    "Timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ConnectionValidator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       1,  106, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   79,    2, 0x0a /* Public */,
       7,    1,   80,    2, 0x0a /* Public */,
      10,    0,   83,    2, 0x0a /* Public */,
      11,    0,   84,    2, 0x09 /* Protected */,
      12,    2,   85,    2, 0x09 /* Protected */,
      15,    1,   90,    2, 0x09 /* Protected */,
      18,    1,   93,    2, 0x09 /* Protected */,
      19,    1,   96,    2, 0x09 /* Protected */,
      20,    0,   99,    2, 0x09 /* Protected */,
      21,    1,  100,    2, 0x09 /* Protected */,
      22,    1,  103,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QJsonObject,   13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QUrl,   13,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, 0x80000000 | 23,   24,

 // enums: name, alias, flags, count, data
      25,   25, 0x0,   11,  111,

 // enum data: key, value
      26, uint(OCC::ConnectionValidator::Undefined),
      27, uint(OCC::ConnectionValidator::Connected),
      28, uint(OCC::ConnectionValidator::NotConfigured),
      29, uint(OCC::ConnectionValidator::ServerVersionMismatch),
      30, uint(OCC::ConnectionValidator::CredentialsNotReady),
      31, uint(OCC::ConnectionValidator::CredentialsWrong),
      32, uint(OCC::ConnectionValidator::SslError),
      33, uint(OCC::ConnectionValidator::StatusNotFound),
      34, uint(OCC::ConnectionValidator::ServiceUnavailable),
      35, uint(OCC::ConnectionValidator::MaintenanceMode),
      36, uint(OCC::ConnectionValidator::Timeout),

       0        // eod
};

void OCC::ConnectionValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConnectionValidator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectionResult((*reinterpret_cast< OCC::ConnectionValidator::Status(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 1: _t->checkServerAndAuth(); break;
        case 2: _t->systemProxyLookupDone((*reinterpret_cast< const QNetworkProxy(*)>(_a[1]))); break;
        case 3: _t->checkAuthentication(); break;
        case 4: _t->slotCheckServerAndAuth(); break;
        case 5: _t->slotStatusFound((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2]))); break;
        case 6: _t->slotNoStatusFound((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->slotJobTimeout((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->slotAuthFailed((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->slotAuthSuccess(); break;
        case 10: _t->slotCapabilitiesRecieved((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        case 11: _t->slotUserFetched((*reinterpret_cast< OCC::UserInfo*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 8:
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
            using _t = void (ConnectionValidator::*)(OCC::ConnectionValidator::Status , const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionValidator::connectionResult)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::ConnectionValidator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__ConnectionValidator.data,
    qt_meta_data_OCC__ConnectionValidator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::ConnectionValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ConnectionValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ConnectionValidator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::ConnectionValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::ConnectionValidator::connectionResult(OCC::ConnectionValidator::Status _t1, const QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
