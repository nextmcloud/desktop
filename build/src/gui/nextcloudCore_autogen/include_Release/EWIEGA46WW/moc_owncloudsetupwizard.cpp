/****************************************************************************
** Meta object code from reading C++ file 'owncloudsetupwizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/owncloudsetupwizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudsetupwizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__OwncloudSetupWizard_t {
    QByteArrayData data[23];
    char stringdata0[426];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OwncloudSetupWizard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OwncloudSetupWizard_t qt_meta_stringdata_OCC__OwncloudSetupWizard = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OCC::OwncloudSetupWizard"
QT_MOC_LITERAL(1, 25, 18), // "ownCloudWizardDone"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 15), // "slotCheckServer"
QT_MOC_LITERAL(4, 61, 25), // "slotSystemProxyLookupDone"
QT_MOC_LITERAL(5, 87, 13), // "QNetworkProxy"
QT_MOC_LITERAL(6, 101, 5), // "proxy"
QT_MOC_LITERAL(7, 107, 14), // "slotFindServer"
QT_MOC_LITERAL(8, 122, 28), // "slotFindServerBehindRedirect"
QT_MOC_LITERAL(9, 151, 15), // "slotFoundServer"
QT_MOC_LITERAL(10, 167, 17), // "slotNoServerFound"
QT_MOC_LITERAL(11, 185, 14), // "QNetworkReply*"
QT_MOC_LITERAL(12, 200, 5), // "reply"
QT_MOC_LITERAL(13, 206, 24), // "slotNoServerFoundTimeout"
QT_MOC_LITERAL(14, 231, 3), // "url"
QT_MOC_LITERAL(15, 235, 21), // "slotDetermineAuthType"
QT_MOC_LITERAL(16, 257, 18), // "slotConnectToOCUrl"
QT_MOC_LITERAL(17, 276, 13), // "slotAuthError"
QT_MOC_LITERAL(18, 290, 31), // "slotCreateLocalAndRemoteFolders"
QT_MOC_LITERAL(19, 322, 22), // "slotRemoteFolderExists"
QT_MOC_LITERAL(20, 345, 30), // "slotCreateRemoteFolderFinished"
QT_MOC_LITERAL(21, 376, 21), // "slotAssistantFinished"
QT_MOC_LITERAL(22, 398, 27) // "slotSkipFolderConfiguration"

    },
    "OCC::OwncloudSetupWizard\0ownCloudWizardDone\0"
    "\0slotCheckServer\0slotSystemProxyLookupDone\0"
    "QNetworkProxy\0proxy\0slotFindServer\0"
    "slotFindServerBehindRedirect\0"
    "slotFoundServer\0slotNoServerFound\0"
    "QNetworkReply*\0reply\0slotNoServerFoundTimeout\0"
    "url\0slotDetermineAuthType\0slotConnectToOCUrl\0"
    "slotAuthError\0slotCreateLocalAndRemoteFolders\0"
    "slotRemoteFolderExists\0"
    "slotCreateRemoteFolderFinished\0"
    "slotAssistantFinished\0slotSkipFolderConfiguration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OwncloudSetupWizard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   97,    2, 0x08 /* Private */,
       4,    1,  100,    2, 0x08 /* Private */,
       7,    0,  103,    2, 0x08 /* Private */,
       8,    0,  104,    2, 0x08 /* Private */,
       9,    2,  105,    2, 0x08 /* Private */,
      10,    1,  110,    2, 0x08 /* Private */,
      13,    1,  113,    2, 0x08 /* Private */,
      15,    0,  116,    2, 0x08 /* Private */,
      16,    1,  117,    2, 0x08 /* Private */,
      17,    0,  120,    2, 0x08 /* Private */,
      18,    2,  121,    2, 0x08 /* Private */,
      19,    1,  126,    2, 0x08 /* Private */,
      20,    1,  129,    2, 0x08 /* Private */,
      21,    1,  132,    2, 0x08 /* Private */,
      22,    0,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QJsonObject,    2,    2,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QUrl,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void OCC::OwncloudSetupWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OwncloudSetupWizard *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ownCloudWizardDone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotCheckServer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotSystemProxyLookupDone((*reinterpret_cast< const QNetworkProxy(*)>(_a[1]))); break;
        case 3: _t->slotFindServer(); break;
        case 4: _t->slotFindServerBehindRedirect(); break;
        case 5: _t->slotFoundServer((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2]))); break;
        case 6: _t->slotNoServerFound((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->slotNoServerFoundTimeout((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->slotDetermineAuthType(); break;
        case 9: _t->slotConnectToOCUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->slotAuthError(); break;
        case 11: _t->slotCreateLocalAndRemoteFolders((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->slotRemoteFolderExists((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 13: _t->slotCreateRemoteFolderFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 14: _t->slotAssistantFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->slotSkipFolderConfiguration(); break;
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
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 13:
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
            using _t = void (OwncloudSetupWizard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OwncloudSetupWizard::ownCloudWizardDone)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::OwncloudSetupWizard::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__OwncloudSetupWizard.data,
    qt_meta_data_OCC__OwncloudSetupWizard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::OwncloudSetupWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudSetupWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OwncloudSetupWizard.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::OwncloudSetupWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void OCC::OwncloudSetupWizard::ownCloudWizardDone(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
