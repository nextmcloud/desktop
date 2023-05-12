/****************************************************************************
** Meta object code from reading C++ file 'shareemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/filedetails/shareemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shareemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__ShareeModel_t {
    QByteArrayData data[43];
    char stringdata0[665];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ShareeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ShareeModel_t qt_meta_stringdata_OCC__ShareeModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OCC::ShareeModel"
QT_MOC_LITERAL(1, 17, 19), // "accountStateChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 24), // "shareItemIsFolderChanged"
QT_MOC_LITERAL(4, 63, 19), // "searchStringChanged"
QT_MOC_LITERAL(5, 83, 19), // "fetchOngoingChanged"
QT_MOC_LITERAL(6, 103, 17), // "lookupModeChanged"
QT_MOC_LITERAL(7, 121, 22), // "shareeBlocklistChanged"
QT_MOC_LITERAL(8, 144, 12), // "shareesReady"
QT_MOC_LITERAL(9, 157, 19), // "displayErrorMessage"
QT_MOC_LITERAL(10, 177, 4), // "code"
QT_MOC_LITERAL(11, 182, 7), // "message"
QT_MOC_LITERAL(12, 190, 15), // "setAccountState"
QT_MOC_LITERAL(13, 206, 18), // "OCC::AccountState*"
QT_MOC_LITERAL(14, 225, 12), // "accountState"
QT_MOC_LITERAL(15, 238, 20), // "setShareItemIsFolder"
QT_MOC_LITERAL(16, 259, 17), // "shareItemIsFolder"
QT_MOC_LITERAL(17, 277, 15), // "setSearchString"
QT_MOC_LITERAL(18, 293, 12), // "searchString"
QT_MOC_LITERAL(19, 306, 13), // "setLookupMode"
QT_MOC_LITERAL(20, 320, 28), // "OCC::ShareeModel::LookupMode"
QT_MOC_LITERAL(21, 349, 10), // "lookupMode"
QT_MOC_LITERAL(22, 360, 18), // "setShareeBlocklist"
QT_MOC_LITERAL(23, 379, 15), // "shareeBlocklist"
QT_MOC_LITERAL(24, 395, 14), // "searchGlobally"
QT_MOC_LITERAL(25, 410, 5), // "fetch"
QT_MOC_LITERAL(26, 416, 14), // "shareesFetched"
QT_MOC_LITERAL(27, 431, 5), // "reply"
QT_MOC_LITERAL(28, 437, 24), // "insertSearchGloballyItem"
QT_MOC_LITERAL(29, 462, 23), // "QVector<OCC::ShareePtr>"
QT_MOC_LITERAL(30, 486, 17), // "newShareesFetched"
QT_MOC_LITERAL(31, 504, 13), // "filterSharees"
QT_MOC_LITERAL(32, 518, 19), // "slotDarkModeChanged"
QT_MOC_LITERAL(33, 538, 13), // "AccountState*"
QT_MOC_LITERAL(34, 552, 12), // "fetchOngoing"
QT_MOC_LITERAL(35, 565, 10), // "LookupMode"
QT_MOC_LITERAL(36, 576, 11), // "LocalSearch"
QT_MOC_LITERAL(37, 588, 12), // "GlobalSearch"
QT_MOC_LITERAL(38, 601, 5), // "Roles"
QT_MOC_LITERAL(39, 607, 10), // "ShareeRole"
QT_MOC_LITERAL(40, 618, 28), // "AutoCompleterStringMatchRole"
QT_MOC_LITERAL(41, 647, 8), // "TypeRole"
QT_MOC_LITERAL(42, 656, 8) // "IconRole"

    },
    "OCC::ShareeModel\0accountStateChanged\0"
    "\0shareItemIsFolderChanged\0searchStringChanged\0"
    "fetchOngoingChanged\0lookupModeChanged\0"
    "shareeBlocklistChanged\0shareesReady\0"
    "displayErrorMessage\0code\0message\0"
    "setAccountState\0OCC::AccountState*\0"
    "accountState\0setShareItemIsFolder\0"
    "shareItemIsFolder\0setSearchString\0"
    "searchString\0setLookupMode\0"
    "OCC::ShareeModel::LookupMode\0lookupMode\0"
    "setShareeBlocklist\0shareeBlocklist\0"
    "searchGlobally\0fetch\0shareesFetched\0"
    "reply\0insertSearchGloballyItem\0"
    "QVector<OCC::ShareePtr>\0newShareesFetched\0"
    "filterSharees\0slotDarkModeChanged\0"
    "AccountState*\0fetchOngoing\0LookupMode\0"
    "LocalSearch\0GlobalSearch\0Roles\0"
    "ShareeRole\0AutoCompleterStringMatchRole\0"
    "TypeRole\0IconRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ShareeModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       6,  146, // properties
       2,  170, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    0,  111,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,
       6,    0,  113,    2, 0x06 /* Public */,
       7,    0,  114,    2, 0x06 /* Public */,
       8,    0,  115,    2, 0x06 /* Public */,
       9,    2,  116,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  121,    2, 0x0a /* Public */,
      15,    1,  124,    2, 0x0a /* Public */,
      17,    1,  127,    2, 0x0a /* Public */,
      19,    1,  130,    2, 0x0a /* Public */,
      22,    1,  133,    2, 0x0a /* Public */,
      24,    0,  136,    2, 0x0a /* Public */,
      25,    0,  137,    2, 0x0a /* Public */,
      26,    1,  138,    2, 0x08 /* Private */,
      28,    1,  141,    2, 0x08 /* Private */,
      31,    0,  144,    2, 0x08 /* Private */,
      32,    0,  145,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QVariantList,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      14, 0x80000000 | 33, 0x0049510b,
      16, QMetaType::Bool, 0x00495103,
      18, QMetaType::QString, 0x00495103,
      34, QMetaType::Bool, 0x00495001,
      21, 0x80000000 | 35, 0x0049510b,
      23, QMetaType::QVariantList, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

 // enums: name, alias, flags, count, data
      35,   35, 0x2,    2,  180,
      38,   38, 0x0,    4,  184,

 // enum data: key, value
      36, uint(OCC::ShareeModel::LookupMode::LocalSearch),
      37, uint(OCC::ShareeModel::LookupMode::GlobalSearch),
      39, uint(OCC::ShareeModel::ShareeRole),
      40, uint(OCC::ShareeModel::AutoCompleterStringMatchRole),
      41, uint(OCC::ShareeModel::TypeRole),
      42, uint(OCC::ShareeModel::IconRole),

       0        // eod
};

void OCC::ShareeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShareeModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accountStateChanged(); break;
        case 1: _t->shareItemIsFolderChanged(); break;
        case 2: _t->searchStringChanged(); break;
        case 3: _t->fetchOngoingChanged(); break;
        case 4: _t->lookupModeChanged(); break;
        case 5: _t->shareeBlocklistChanged(); break;
        case 6: _t->shareesReady(); break;
        case 7: _t->displayErrorMessage((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->setAccountState((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 9: _t->setShareItemIsFolder((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 10: _t->setSearchString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->setLookupMode((*reinterpret_cast< const OCC::ShareeModel::LookupMode(*)>(_a[1]))); break;
        case 12: _t->setShareeBlocklist((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 13: _t->searchGlobally(); break;
        case 14: _t->fetch(); break;
        case 15: _t->shareesFetched((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        case 16: _t->insertSearchGloballyItem((*reinterpret_cast< const QVector<OCC::ShareePtr>(*)>(_a[1]))); break;
        case 17: _t->filterSharees(); break;
        case 18: _t->slotDarkModeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountState* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<OCC::ShareePtr> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShareeModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareeModel::accountStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ShareeModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareeModel::shareItemIsFolderChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ShareeModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareeModel::searchStringChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ShareeModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareeModel::fetchOngoingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ShareeModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareeModel::lookupModeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ShareeModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareeModel::shareeBlocklistChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ShareeModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareeModel::shareesReady)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ShareeModel::*)(const int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareeModel::displayErrorMessage)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountState* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ShareeModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AccountState**>(_v) = _t->accountState(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->shareItemIsFolder(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->searchString(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->fetchOngoing(); break;
        case 4: *reinterpret_cast< LookupMode*>(_v) = _t->lookupMode(); break;
        case 5: *reinterpret_cast< QVariantList*>(_v) = _t->shareeBlocklist(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ShareeModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccountState(*reinterpret_cast< AccountState**>(_v)); break;
        case 1: _t->setShareItemIsFolder(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setSearchString(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setLookupMode(*reinterpret_cast< LookupMode*>(_v)); break;
        case 5: _t->setShareeBlocklist(*reinterpret_cast< QVariantList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OCC::ShareeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_OCC__ShareeModel.data,
    qt_meta_data_OCC__ShareeModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::ShareeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ShareeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ShareeModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::ShareeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OCC::ShareeModel::accountStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::ShareeModel::shareItemIsFolderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::ShareeModel::searchStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::ShareeModel::fetchOngoingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::ShareeModel::lookupModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::ShareeModel::shareeBlocklistChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void OCC::ShareeModel::shareesReady()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OCC::ShareeModel::displayErrorMessage(const int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
