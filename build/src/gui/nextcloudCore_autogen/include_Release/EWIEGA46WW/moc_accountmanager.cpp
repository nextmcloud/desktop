/****************************************************************************
** Meta object code from reading C++ file 'accountmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/accountmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__AccountManager_t {
    QByteArrayData data[17];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__AccountManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__AccountManager_t qt_meta_stringdata_OCC__AccountManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OCC::AccountManager"
QT_MOC_LITERAL(1, 20, 12), // "accountAdded"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 18), // "OCC::AccountState*"
QT_MOC_LITERAL(4, 53, 7), // "account"
QT_MOC_LITERAL(5, 61, 14), // "accountRemoved"
QT_MOC_LITERAL(6, 76, 28), // "accountSyncConnectionRemoved"
QT_MOC_LITERAL(7, 105, 20), // "removeAccountFolders"
QT_MOC_LITERAL(8, 126, 11), // "saveAccount"
QT_MOC_LITERAL(9, 138, 13), // "OCC::Account*"
QT_MOC_LITERAL(10, 152, 1), // "a"
QT_MOC_LITERAL(11, 154, 16), // "saveAccountState"
QT_MOC_LITERAL(12, 171, 21), // "AccountsRestoreResult"
QT_MOC_LITERAL(13, 193, 22), // "AccountsRestoreFailure"
QT_MOC_LITERAL(14, 216, 22), // "AccountsRestoreSuccess"
QT_MOC_LITERAL(15, 239, 39), // "AccountsRestoreSuccessFromLeg..."
QT_MOC_LITERAL(16, 279, 33) // "AccountsRestoreSuccessWithSki..."

    },
    "OCC::AccountManager\0accountAdded\0\0"
    "OCC::AccountState*\0account\0accountRemoved\0"
    "accountSyncConnectionRemoved\0"
    "removeAccountFolders\0saveAccount\0"
    "OCC::Account*\0a\0saveAccountState\0"
    "AccountsRestoreResult\0AccountsRestoreFailure\0"
    "AccountsRestoreSuccess\0"
    "AccountsRestoreSuccessFromLegacyVersion\0"
    "AccountsRestoreSuccessWithSkipped"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__AccountManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   62, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       7,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   56,    2, 0x0a /* Public */,
      11,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 3,   10,

 // enums: name, alias, flags, count, data
      12,   12, 0x0,    4,   67,

 // enum data: key, value
      13, uint(OCC::AccountManager::AccountsRestoreFailure),
      14, uint(OCC::AccountManager::AccountsRestoreSuccess),
      15, uint(OCC::AccountManager::AccountsRestoreSuccessFromLegacyVersion),
      16, uint(OCC::AccountManager::AccountsRestoreSuccessWithSkipped),

       0        // eod
};

void OCC::AccountManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accountAdded((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 1: _t->accountRemoved((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 2: _t->accountSyncConnectionRemoved((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 3: _t->removeAccountFolders((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 4: _t->saveAccount((*reinterpret_cast< OCC::Account*(*)>(_a[1]))); break;
        case 5: _t->saveAccountState((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountState* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountState* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountState* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountState* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Account* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountState* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountManager::*)(OCC::AccountState * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::accountAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)(OCC::AccountState * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::accountRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)(OCC::AccountState * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::accountSyncConnectionRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)(OCC::AccountState * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::removeAccountFolders)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::AccountManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__AccountManager.data,
    qt_meta_data_OCC__AccountManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::AccountManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AccountManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__AccountManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::AccountManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::AccountManager::accountAdded(OCC::AccountState * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::AccountManager::accountRemoved(OCC::AccountState * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::AccountManager::accountSyncConnectionRemoved(OCC::AccountState * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::AccountManager::removeAccountFolders(OCC::AccountState * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
