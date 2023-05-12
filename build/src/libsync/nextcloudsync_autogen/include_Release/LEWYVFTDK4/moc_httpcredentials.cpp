/****************************************************************************
** Meta object code from reading C++ file 'httpcredentials.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/creds/httpcredentials.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpcredentials.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__HttpCredentials_t {
    QByteArrayData data[16];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__HttpCredentials_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__HttpCredentials_t qt_meta_stringdata_OCC__HttpCredentials = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OCC::HttpCredentials"
QT_MOC_LITERAL(1, 21, 18), // "slotAuthentication"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 56, 15), // "QAuthenticator*"
QT_MOC_LITERAL(5, 72, 33), // "slotReadClientCertPasswordJob..."
QT_MOC_LITERAL(6, 106, 15), // "QKeychain::Job*"
QT_MOC_LITERAL(7, 122, 28), // "slotReadClientCertPEMJobDone"
QT_MOC_LITERAL(8, 151, 27), // "slotReadClientKeyPEMJobDone"
QT_MOC_LITERAL(9, 179, 28), // "slotReadPasswordFromKeychain"
QT_MOC_LITERAL(10, 208, 15), // "slotReadJobDone"
QT_MOC_LITERAL(11, 224, 34), // "slotWriteClientCertPasswordJo..."
QT_MOC_LITERAL(12, 259, 29), // "slotWriteClientCertPEMJobDone"
QT_MOC_LITERAL(13, 289, 28), // "slotWriteClientKeyPEMJobDone"
QT_MOC_LITERAL(14, 318, 27), // "slotWritePasswordToKeychain"
QT_MOC_LITERAL(15, 346, 16) // "slotWriteJobDone"

    },
    "OCC::HttpCredentials\0slotAuthentication\0"
    "\0QNetworkReply*\0QAuthenticator*\0"
    "slotReadClientCertPasswordJobDone\0"
    "QKeychain::Job*\0slotReadClientCertPEMJobDone\0"
    "slotReadClientKeyPEMJobDone\0"
    "slotReadPasswordFromKeychain\0"
    "slotReadJobDone\0slotWriteClientCertPasswordJobDone\0"
    "slotWriteClientCertPEMJobDone\0"
    "slotWriteClientKeyPEMJobDone\0"
    "slotWritePasswordToKeychain\0"
    "slotWriteJobDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__HttpCredentials[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x08 /* Private */,
       5,    1,   74,    2, 0x08 /* Private */,
       7,    1,   77,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
       9,    0,   83,    2, 0x08 /* Private */,
      10,    1,   84,    2, 0x08 /* Private */,
      11,    1,   87,    2, 0x08 /* Private */,
      12,    1,   90,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,

       0        // eod
};

void OCC::HttpCredentials::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HttpCredentials *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotAuthentication((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 1: _t->slotReadClientCertPasswordJobDone((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        case 2: _t->slotReadClientCertPEMJobDone((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        case 3: _t->slotReadClientKeyPEMJobDone((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        case 4: _t->slotReadPasswordFromKeychain(); break;
        case 5: _t->slotReadJobDone((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        case 6: _t->slotWriteClientCertPasswordJobDone((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        case 7: _t->slotWriteClientCertPEMJobDone((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        case 8: _t->slotWriteClientKeyPEMJobDone((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        case 9: _t->slotWritePasswordToKeychain(); break;
        case 10: _t->slotWriteJobDone((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::HttpCredentials::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractCredentials::staticMetaObject>(),
    qt_meta_stringdata_OCC__HttpCredentials.data,
    qt_meta_data_OCC__HttpCredentials,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::HttpCredentials::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::HttpCredentials::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__HttpCredentials.stringdata0))
        return static_cast<void*>(this);
    return AbstractCredentials::qt_metacast(_clname);
}

int OCC::HttpCredentials::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCredentials::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
