/****************************************************************************
** Meta object code from reading C++ file 'endtoendtestutils.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../test/endtoendtestutils.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'endtoendtestutils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EndToEndTestCredentials_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EndToEndTestCredentials_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EndToEndTestCredentials_t qt_meta_stringdata_EndToEndTestCredentials = {
    {
QT_MOC_LITERAL(0, 0, 23) // "EndToEndTestCredentials"

    },
    "EndToEndTestCredentials"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EndToEndTestCredentials[] = {

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

void EndToEndTestCredentials::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject EndToEndTestCredentials::staticMetaObject = { {
    QMetaObject::SuperData::link<OCC::AbstractCredentials::staticMetaObject>(),
    qt_meta_stringdata_EndToEndTestCredentials.data,
    qt_meta_data_EndToEndTestCredentials,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EndToEndTestCredentials::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EndToEndTestCredentials::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EndToEndTestCredentials.stringdata0))
        return static_cast<void*>(this);
    return OCC::AbstractCredentials::qt_metacast(_clname);
}

int EndToEndTestCredentials::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OCC::AbstractCredentials::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EndToEndTestHelper_t {
    QByteArrayData data[11];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EndToEndTestHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EndToEndTestHelper_t qt_meta_stringdata_EndToEndTestHelper = {
    {
QT_MOC_LITERAL(0, 0, 18), // "EndToEndTestHelper"
QT_MOC_LITERAL(1, 19, 12), // "accountReady"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "OCC::AccountPtr"
QT_MOC_LITERAL(4, 49, 7), // "account"
QT_MOC_LITERAL(5, 57, 18), // "startAccountConfig"
QT_MOC_LITERAL(6, 76, 23), // "removeConfiguredAccount"
QT_MOC_LITERAL(7, 100, 26), // "removeConfiguredSyncFolder"
QT_MOC_LITERAL(8, 127, 18), // "slotConnectToNCUrl"
QT_MOC_LITERAL(9, 146, 3), // "url"
QT_MOC_LITERAL(10, 150, 14) // "setupFolderMan"

    },
    "EndToEndTestHelper\0accountReady\0\0"
    "OCC::AccountPtr\0account\0startAccountConfig\0"
    "removeConfiguredAccount\0"
    "removeConfiguredSyncFolder\0"
    "slotConnectToNCUrl\0url\0setupFolderMan"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EndToEndTestHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,
       8,    1,   50,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void EndToEndTestHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EndToEndTestHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accountReady((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1]))); break;
        case 1: _t->startAccountConfig(); break;
        case 2: _t->removeConfiguredAccount(); break;
        case 3: _t->removeConfiguredSyncFolder(); break;
        case 4: _t->slotConnectToNCUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setupFolderMan(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EndToEndTestHelper::*)(const OCC::AccountPtr & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EndToEndTestHelper::accountReady)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EndToEndTestHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EndToEndTestHelper.data,
    qt_meta_data_EndToEndTestHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EndToEndTestHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EndToEndTestHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EndToEndTestHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EndToEndTestHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EndToEndTestHelper::accountReady(const OCC::AccountPtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
