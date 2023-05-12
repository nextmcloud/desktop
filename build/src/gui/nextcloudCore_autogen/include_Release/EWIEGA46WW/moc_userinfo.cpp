/****************************************************************************
** Meta object code from reading C++ file 'userinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/userinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__UserInfo_t {
    QByteArrayData data[15];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__UserInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__UserInfo_t qt_meta_stringdata_OCC__UserInfo = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OCC::UserInfo"
QT_MOC_LITERAL(1, 14, 12), // "quotaUpdated"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "total"
QT_MOC_LITERAL(4, 34, 4), // "used"
QT_MOC_LITERAL(5, 39, 15), // "fetchedLastInfo"
QT_MOC_LITERAL(6, 55, 14), // "OCC::UserInfo*"
QT_MOC_LITERAL(7, 70, 8), // "userInfo"
QT_MOC_LITERAL(8, 79, 13), // "slotFetchInfo"
QT_MOC_LITERAL(9, 93, 18), // "slotUpdateLastInfo"
QT_MOC_LITERAL(10, 112, 4), // "json"
QT_MOC_LITERAL(11, 117, 23), // "slotAccountStateChanged"
QT_MOC_LITERAL(12, 141, 17), // "slotRequestFailed"
QT_MOC_LITERAL(13, 159, 15), // "slotAvatarImage"
QT_MOC_LITERAL(14, 175, 3) // "img"

    },
    "OCC::UserInfo\0quotaUpdated\0\0total\0"
    "used\0fetchedLastInfo\0OCC::UserInfo*\0"
    "userInfo\0slotFetchInfo\0slotUpdateLastInfo\0"
    "json\0slotAccountStateChanged\0"
    "slotRequestFailed\0slotAvatarImage\0img"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__UserInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   57,    2, 0x0a /* Public */,
       9,    1,   58,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,
      12,    0,   62,    2, 0x08 /* Private */,
      13,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,   14,

       0        // eod
};

void OCC::UserInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserInfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->quotaUpdated((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: _t->fetchedLastInfo((*reinterpret_cast< OCC::UserInfo*(*)>(_a[1]))); break;
        case 2: _t->slotFetchInfo(); break;
        case 3: _t->slotUpdateLastInfo((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        case 4: _t->slotAccountStateChanged(); break;
        case 5: _t->slotRequestFailed(); break;
        case 6: _t->slotAvatarImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::UserInfo* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserInfo::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserInfo::quotaUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserInfo::*)(OCC::UserInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserInfo::fetchedLastInfo)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::UserInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__UserInfo.data,
    qt_meta_data_OCC__UserInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::UserInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UserInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__UserInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::UserInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OCC::UserInfo::quotaUpdated(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::UserInfo::fetchedLastInfo(OCC::UserInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
