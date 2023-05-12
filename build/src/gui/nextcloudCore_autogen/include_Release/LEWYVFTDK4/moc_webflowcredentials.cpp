/****************************************************************************
** Meta object code from reading C++ file 'webflowcredentials.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/creds/webflowcredentials.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webflowcredentials.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__WebFlowCredentials_t {
    QByteArrayData data[27];
    char stringdata0[499];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__WebFlowCredentials_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__WebFlowCredentials_t qt_meta_stringdata_OCC__WebFlowCredentials = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OCC::WebFlowCredentials"
QT_MOC_LITERAL(1, 24, 18), // "slotAuthentication"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 59, 5), // "reply"
QT_MOC_LITERAL(5, 65, 15), // "QAuthenticator*"
QT_MOC_LITERAL(6, 81, 13), // "authenticator"
QT_MOC_LITERAL(7, 95, 12), // "slotFinished"
QT_MOC_LITERAL(8, 108, 34), // "slotAskFromUserCredentialsPro..."
QT_MOC_LITERAL(9, 143, 4), // "user"
QT_MOC_LITERAL(10, 148, 4), // "pass"
QT_MOC_LITERAL(11, 153, 4), // "host"
QT_MOC_LITERAL(12, 158, 24), // "slotAskFromUserCancelled"
QT_MOC_LITERAL(13, 183, 28), // "slotReadClientCertPEMJobDone"
QT_MOC_LITERAL(14, 212, 23), // "KeychainChunk::ReadJob*"
QT_MOC_LITERAL(15, 236, 7), // "readJob"
QT_MOC_LITERAL(16, 244, 27), // "slotReadClientKeyPEMJobDone"
QT_MOC_LITERAL(17, 272, 31), // "slotReadClientCaCertsPEMJobDone"
QT_MOC_LITERAL(18, 304, 23), // "slotReadPasswordJobDone"
QT_MOC_LITERAL(19, 328, 15), // "QKeychain::Job*"
QT_MOC_LITERAL(20, 344, 11), // "incomingJob"
QT_MOC_LITERAL(21, 356, 29), // "slotWriteClientCertPEMJobDone"
QT_MOC_LITERAL(22, 386, 24), // "KeychainChunk::WriteJob*"
QT_MOC_LITERAL(23, 411, 8), // "writeJob"
QT_MOC_LITERAL(24, 420, 28), // "slotWriteClientKeyPEMJobDone"
QT_MOC_LITERAL(25, 449, 32), // "slotWriteClientCaCertsPEMJobDone"
QT_MOC_LITERAL(26, 482, 16) // "slotWriteJobDone"

    },
    "OCC::WebFlowCredentials\0slotAuthentication\0"
    "\0QNetworkReply*\0reply\0QAuthenticator*\0"
    "authenticator\0slotFinished\0"
    "slotAskFromUserCredentialsProvided\0"
    "user\0pass\0host\0slotAskFromUserCancelled\0"
    "slotReadClientCertPEMJobDone\0"
    "KeychainChunk::ReadJob*\0readJob\0"
    "slotReadClientKeyPEMJobDone\0"
    "slotReadClientCaCertsPEMJobDone\0"
    "slotReadPasswordJobDone\0QKeychain::Job*\0"
    "incomingJob\0slotWriteClientCertPEMJobDone\0"
    "KeychainChunk::WriteJob*\0writeJob\0"
    "slotWriteClientKeyPEMJobDone\0"
    "slotWriteClientCaCertsPEMJobDone\0"
    "slotWriteJobDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__WebFlowCredentials[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
       8,    3,   82,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      16,    1,   93,    2, 0x08 /* Private */,
      17,    1,   96,    2, 0x08 /* Private */,
      18,    1,   99,    2, 0x08 /* Private */,
      21,    1,  102,    2, 0x08 /* Private */,
      24,    1,  105,    2, 0x08 /* Private */,
      25,    1,  108,    2, 0x08 /* Private */,
      26,    1,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 19,    2,

       0        // eod
};

void OCC::WebFlowCredentials::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WebFlowCredentials *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotAuthentication((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 1: _t->slotFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->slotAskFromUserCredentialsProvided((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->slotAskFromUserCancelled(); break;
        case 4: _t->slotReadClientCertPEMJobDone((*reinterpret_cast< KeychainChunk::ReadJob*(*)>(_a[1]))); break;
        case 5: _t->slotReadClientKeyPEMJobDone((*reinterpret_cast< KeychainChunk::ReadJob*(*)>(_a[1]))); break;
        case 6: _t->slotReadClientCaCertsPEMJobDone((*reinterpret_cast< KeychainChunk::ReadJob*(*)>(_a[1]))); break;
        case 7: _t->slotReadPasswordJobDone((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        case 8: _t->slotWriteClientCertPEMJobDone((*reinterpret_cast< KeychainChunk::WriteJob*(*)>(_a[1]))); break;
        case 9: _t->slotWriteClientKeyPEMJobDone((*reinterpret_cast< KeychainChunk::WriteJob*(*)>(_a[1]))); break;
        case 10: _t->slotWriteClientCaCertsPEMJobDone((*reinterpret_cast< KeychainChunk::WriteJob*(*)>(_a[1]))); break;
        case 11: _t->slotWriteJobDone((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::WebFlowCredentials::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractCredentials::staticMetaObject>(),
    qt_meta_stringdata_OCC__WebFlowCredentials.data,
    qt_meta_data_OCC__WebFlowCredentials,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::WebFlowCredentials::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::WebFlowCredentials::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__WebFlowCredentials.stringdata0))
        return static_cast<void*>(this);
    return AbstractCredentials::qt_metacast(_clname);
}

int OCC::WebFlowCredentials::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCredentials::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
