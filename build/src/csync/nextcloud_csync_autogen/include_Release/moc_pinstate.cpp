/****************************************************************************
** Meta object code from reading C++ file 'pinstate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/common/pinstate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pinstate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__PinStateEnums_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PinStateEnums_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PinStateEnums_t qt_meta_stringdata_OCC__PinStateEnums = {
    {
QT_MOC_LITERAL(0, 0, 18), // "OCC::PinStateEnums"
QT_MOC_LITERAL(1, 19, 8), // "PinState"
QT_MOC_LITERAL(2, 28, 9), // "Inherited"
QT_MOC_LITERAL(3, 38, 11), // "AlwaysLocal"
QT_MOC_LITERAL(4, 50, 10), // "OnlineOnly"
QT_MOC_LITERAL(5, 61, 11), // "Unspecified"
QT_MOC_LITERAL(6, 73, 19), // "VfsItemAvailability"
QT_MOC_LITERAL(7, 93, 11), // "AllHydrated"
QT_MOC_LITERAL(8, 105, 5), // "Mixed"
QT_MOC_LITERAL(9, 111, 13) // "AllDehydrated"

    },
    "OCC::PinStateEnums\0PinState\0Inherited\0"
    "AlwaysLocal\0OnlineOnly\0Unspecified\0"
    "VfsItemAvailability\0AllHydrated\0Mixed\0"
    "AllDehydrated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PinStateEnums[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    4,   24,
       6,    6, 0x2,    5,   32,

 // enum data: key, value
       2, uint(OCC::PinStateEnums::PinState::Inherited),
       3, uint(OCC::PinStateEnums::PinState::AlwaysLocal),
       4, uint(OCC::PinStateEnums::PinState::OnlineOnly),
       5, uint(OCC::PinStateEnums::PinState::Unspecified),
       3, uint(OCC::PinStateEnums::VfsItemAvailability::AlwaysLocal),
       7, uint(OCC::PinStateEnums::VfsItemAvailability::AllHydrated),
       8, uint(OCC::PinStateEnums::VfsItemAvailability::Mixed),
       9, uint(OCC::PinStateEnums::VfsItemAvailability::AllDehydrated),
       4, uint(OCC::PinStateEnums::VfsItemAvailability::OnlineOnly),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject OCC::PinStateEnums::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_OCC__PinStateEnums.data,
    qt_meta_data_OCC__PinStateEnums,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
