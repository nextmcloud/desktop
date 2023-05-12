/****************************************************************************
** Meta object code from reading C++ file 'sharee.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/sharee.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sharee.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__Sharee_t {
    QByteArrayData data[16];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__Sharee_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__Sharee_t qt_meta_stringdata_OCC__Sharee = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OCC::Sharee"
QT_MOC_LITERAL(1, 12, 6), // "format"
QT_MOC_LITERAL(2, 19, 9), // "shareWith"
QT_MOC_LITERAL(3, 29, 11), // "displayName"
QT_MOC_LITERAL(4, 41, 15), // "iconUrlColoured"
QT_MOC_LITERAL(5, 57, 4), // "type"
QT_MOC_LITERAL(6, 62, 4), // "Type"
QT_MOC_LITERAL(7, 67, 7), // "Invalid"
QT_MOC_LITERAL(8, 75, 4), // "User"
QT_MOC_LITERAL(9, 80, 5), // "Group"
QT_MOC_LITERAL(10, 86, 5), // "Email"
QT_MOC_LITERAL(11, 92, 9), // "Federated"
QT_MOC_LITERAL(12, 102, 6), // "Circle"
QT_MOC_LITERAL(13, 109, 4), // "Room"
QT_MOC_LITERAL(14, 114, 18), // "LookupServerSearch"
QT_MOC_LITERAL(15, 133, 25) // "LookupServerSearchResults"

    },
    "OCC::Sharee\0format\0shareWith\0displayName\0"
    "iconUrlColoured\0type\0Type\0Invalid\0"
    "User\0Group\0Email\0Federated\0Circle\0"
    "Room\0LookupServerSearch\0"
    "LookupServerSearchResults"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__Sharee[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       1,   29, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095001,
       2, QMetaType::QString, 0x00095003,
       3, QMetaType::QString, 0x00095003,
       4, QMetaType::QString, 0x00095003,
       5, 0x80000000 | 6, 0x0009500b,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    9,   34,

 // enum data: key, value
       7, uint(OCC::Sharee::Invalid),
       8, uint(OCC::Sharee::User),
       9, uint(OCC::Sharee::Group),
      10, uint(OCC::Sharee::Email),
      11, uint(OCC::Sharee::Federated),
      12, uint(OCC::Sharee::Circle),
      13, uint(OCC::Sharee::Room),
      14, uint(OCC::Sharee::LookupServerSearch),
      15, uint(OCC::Sharee::LookupServerSearchResults),

       0        // eod
};

void OCC::Sharee::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Sharee *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->format(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_shareWith; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_displayName; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->_iconUrlColoured; break;
        case 4: *reinterpret_cast< Type*>(_v) = _t->_type; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<Sharee *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1:
            if (_t->_shareWith != *reinterpret_cast< QString*>(_v)) {
                _t->_shareWith = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->_displayName != *reinterpret_cast< QString*>(_v)) {
                _t->_displayName = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->_iconUrlColoured != *reinterpret_cast< QString*>(_v)) {
                _t->_iconUrlColoured = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 4:
            if (_t->_type != *reinterpret_cast< Type*>(_v)) {
                _t->_type = *reinterpret_cast< Type*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::Sharee::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_OCC__Sharee.data,
    qt_meta_data_OCC__Sharee,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
