/****************************************************************************
** Meta object code from reading C++ file 'accountsetupfromcommandlinejob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/accountsetupfromcommandlinejob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountsetupfromcommandlinejob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__AccountSetupFromCommandLineJob_t {
    QByteArrayData data[13];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__AccountSetupFromCommandLineJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__AccountSetupFromCommandLineJob_t qt_meta_stringdata_OCC__AccountSetupFromCommandLineJob = {
    {
QT_MOC_LITERAL(0, 0, 35), // "OCC::AccountSetupFromCommandL..."
QT_MOC_LITERAL(1, 36, 33), // "handleAccountSetupFromCommand..."
QT_MOC_LITERAL(2, 70, 0), // ""
QT_MOC_LITERAL(3, 71, 29), // "checkLastModifiedWithPropfind"
QT_MOC_LITERAL(4, 101, 48), // "accountSetupFromCommandLinePr..."
QT_MOC_LITERAL(5, 150, 48), // "accountSetupFromCommandLinePr..."
QT_MOC_LITERAL(6, 199, 20), // "setupLocalSyncFolder"
QT_MOC_LITERAL(7, 220, 18), // "OCC::AccountState*"
QT_MOC_LITERAL(8, 239, 12), // "accountState"
QT_MOC_LITERAL(9, 252, 45), // "printAccountSetupFromCommandL..."
QT_MOC_LITERAL(10, 298, 6), // "status"
QT_MOC_LITERAL(11, 305, 9), // "isFailure"
QT_MOC_LITERAL(12, 315, 13) // "fetchUserName"

    },
    "OCC::AccountSetupFromCommandLineJob\0"
    "handleAccountSetupFromCommandLine\0\0"
    "checkLastModifiedWithPropfind\0"
    "accountSetupFromCommandLinePropfindHandleSuccess\0"
    "accountSetupFromCommandLinePropfindHandleFailure\0"
    "setupLocalSyncFolder\0OCC::AccountState*\0"
    "accountState\0printAccountSetupFromCommandLineStatusAndExit\0"
    "status\0isFailure\0fetchUserName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__AccountSetupFromCommandLineJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       9,    2,   56,    2, 0x08 /* Private */,
      12,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   10,   11,
    QMetaType::Void,

       0        // eod
};

void OCC::AccountSetupFromCommandLineJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountSetupFromCommandLineJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleAccountSetupFromCommandLine(); break;
        case 1: _t->checkLastModifiedWithPropfind(); break;
        case 2: _t->accountSetupFromCommandLinePropfindHandleSuccess(); break;
        case 3: _t->accountSetupFromCommandLinePropfindHandleFailure(); break;
        case 4: _t->setupLocalSyncFolder((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 5: _t->printAccountSetupFromCommandLineStatusAndExit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->fetchUserName(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::AccountSetupFromCommandLineJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__AccountSetupFromCommandLineJob.data,
    qt_meta_data_OCC__AccountSetupFromCommandLineJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::AccountSetupFromCommandLineJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AccountSetupFromCommandLineJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__AccountSetupFromCommandLineJob.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::AccountSetupFromCommandLineJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
