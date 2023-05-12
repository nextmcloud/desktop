/****************************************************************************
** Meta object code from reading C++ file 'clientsideencryption.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/clientsideencryption.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientsideencryption.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__ClientSideEncryption_t {
    QByteArrayData data[33];
    char stringdata0[608];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ClientSideEncryption_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ClientSideEncryption_t qt_meta_stringdata_OCC__ClientSideEncryption = {
    {
QT_MOC_LITERAL(0, 0, 25), // "OCC::ClientSideEncryption"
QT_MOC_LITERAL(1, 26, 22), // "initializationFinished"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 22), // "isNewMnemonicGenerated"
QT_MOC_LITERAL(4, 73, 22), // "sensitiveDataForgotten"
QT_MOC_LITERAL(5, 96, 17), // "privateKeyDeleted"
QT_MOC_LITERAL(6, 114, 18), // "certificateDeleted"
QT_MOC_LITERAL(7, 133, 15), // "mnemonicDeleted"
QT_MOC_LITERAL(8, 149, 10), // "initialize"
QT_MOC_LITERAL(9, 160, 15), // "OCC::AccountPtr"
QT_MOC_LITERAL(10, 176, 7), // "account"
QT_MOC_LITERAL(11, 184, 19), // "forgetSensitiveData"
QT_MOC_LITERAL(12, 204, 15), // "generateKeyPair"
QT_MOC_LITERAL(13, 220, 17), // "encryptPrivateKey"
QT_MOC_LITERAL(14, 238, 16), // "publicKeyFetched"
QT_MOC_LITERAL(15, 255, 15), // "QKeychain::Job*"
QT_MOC_LITERAL(16, 271, 8), // "incoming"
QT_MOC_LITERAL(17, 280, 17), // "privateKeyFetched"
QT_MOC_LITERAL(18, 298, 18), // "mnemonicKeyFetched"
QT_MOC_LITERAL(19, 317, 23), // "handlePrivateKeyDeleted"
QT_MOC_LITERAL(20, 341, 20), // "QKeychain::Job*const"
QT_MOC_LITERAL(21, 362, 24), // "handleCertificateDeleted"
QT_MOC_LITERAL(22, 387, 21), // "handleMnemonicDeleted"
QT_MOC_LITERAL(23, 409, 28), // "checkAllSensitiveDataDeleted"
QT_MOC_LITERAL(24, 438, 23), // "getPrivateKeyFromServer"
QT_MOC_LITERAL(25, 462, 22), // "getPublicKeyFromServer"
QT_MOC_LITERAL(26, 485, 35), // "fetchAndValidatePublicKeyFrom..."
QT_MOC_LITERAL(27, 521, 17), // "decryptPrivateKey"
QT_MOC_LITERAL(28, 539, 3), // "key"
QT_MOC_LITERAL(29, 543, 17), // "fetchFromKeyChain"
QT_MOC_LITERAL(30, 561, 15), // "writePrivateKey"
QT_MOC_LITERAL(31, 577, 16), // "writeCertificate"
QT_MOC_LITERAL(32, 594, 13) // "writeMnemonic"

    },
    "OCC::ClientSideEncryption\0"
    "initializationFinished\0\0isNewMnemonicGenerated\0"
    "sensitiveDataForgotten\0privateKeyDeleted\0"
    "certificateDeleted\0mnemonicDeleted\0"
    "initialize\0OCC::AccountPtr\0account\0"
    "forgetSensitiveData\0generateKeyPair\0"
    "encryptPrivateKey\0publicKeyFetched\0"
    "QKeychain::Job*\0incoming\0privateKeyFetched\0"
    "mnemonicKeyFetched\0handlePrivateKeyDeleted\0"
    "QKeychain::Job*const\0handleCertificateDeleted\0"
    "handleMnemonicDeleted\0"
    "checkAllSensitiveDataDeleted\0"
    "getPrivateKeyFromServer\0getPublicKeyFromServer\0"
    "fetchAndValidatePublicKeyFromServer\0"
    "decryptPrivateKey\0key\0fetchFromKeyChain\0"
    "writePrivateKey\0writeCertificate\0"
    "writeMnemonic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ClientSideEncryption[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,
       1,    0,  142,    2, 0x26 /* Public | MethodCloned */,
       4,    0,  143,    2, 0x06 /* Public */,
       5,    0,  144,    2, 0x06 /* Public */,
       6,    0,  145,    2, 0x06 /* Public */,
       7,    0,  146,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  147,    2, 0x0a /* Public */,
      11,    1,  150,    2, 0x0a /* Public */,
      12,    1,  153,    2, 0x08 /* Private */,
      13,    1,  156,    2, 0x08 /* Private */,
      14,    1,  159,    2, 0x08 /* Private */,
      17,    1,  162,    2, 0x08 /* Private */,
      18,    1,  165,    2, 0x08 /* Private */,
      19,    1,  168,    2, 0x08 /* Private */,
      21,    1,  171,    2, 0x08 /* Private */,
      22,    1,  174,    2, 0x08 /* Private */,
      23,    0,  177,    2, 0x08 /* Private */,
      24,    1,  178,    2, 0x08 /* Private */,
      25,    1,  181,    2, 0x08 /* Private */,
      26,    1,  184,    2, 0x08 /* Private */,
      27,    2,  187,    2, 0x08 /* Private */,
      29,    1,  192,    2, 0x08 /* Private */,
      30,    1,  195,    2, 0x08 /* Private */,
      31,    1,  198,    2, 0x08 /* Private */,
      32,    1,  201,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 20,   16,
    QMetaType::Void, 0x80000000 | 20,   16,
    QMetaType::Void, 0x80000000 | 20,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QByteArray,   10,   28,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void OCC::ClientSideEncryption::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientSideEncryption *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initializationFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->initializationFinished(); break;
        case 2: _t->sensitiveDataForgotten(); break;
        case 3: _t->privateKeyDeleted(); break;
        case 4: _t->certificateDeleted(); break;
        case 5: _t->mnemonicDeleted(); break;
        case 6: _t->initialize((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1]))); break;
        case 7: _t->forgetSensitiveData((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1]))); break;
        case 8: _t->generateKeyPair((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1]))); break;
        case 9: _t->encryptPrivateKey((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1]))); break;
        case 10: _t->publicKeyFetched((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        case 11: _t->privateKeyFetched((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        case 12: _t->mnemonicKeyFetched((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        case 13: _t->handlePrivateKeyDeleted((*reinterpret_cast< const QKeychain::Job*const(*)>(_a[1]))); break;
        case 14: _t->handleCertificateDeleted((*reinterpret_cast< const QKeychain::Job*const(*)>(_a[1]))); break;
        case 15: _t->handleMnemonicDeleted((*reinterpret_cast< const QKeychain::Job*const(*)>(_a[1]))); break;
        case 16: _t->checkAllSensitiveDataDeleted(); break;
        case 17: _t->getPrivateKeyFromServer((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1]))); break;
        case 18: _t->getPublicKeyFromServer((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1]))); break;
        case 19: _t->fetchAndValidatePublicKeyFromServer((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1]))); break;
        case 20: _t->decryptPrivateKey((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 21: _t->fetchFromKeyChain((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1]))); break;
        case 22: _t->writePrivateKey((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1]))); break;
        case 23: _t->writeCertificate((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1]))); break;
        case 24: _t->writeMnemonic((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientSideEncryption::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientSideEncryption::initializationFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientSideEncryption::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientSideEncryption::sensitiveDataForgotten)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientSideEncryption::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientSideEncryption::privateKeyDeleted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ClientSideEncryption::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientSideEncryption::certificateDeleted)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ClientSideEncryption::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientSideEncryption::mnemonicDeleted)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::ClientSideEncryption::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__ClientSideEncryption.data,
    qt_meta_data_OCC__ClientSideEncryption,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::ClientSideEncryption::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ClientSideEncryption::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ClientSideEncryption.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::ClientSideEncryption::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void OCC::ClientSideEncryption::initializationFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void OCC::ClientSideEncryption::sensitiveDataForgotten()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::ClientSideEncryption::privateKeyDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::ClientSideEncryption::certificateDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::ClientSideEncryption::mnemonicDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
