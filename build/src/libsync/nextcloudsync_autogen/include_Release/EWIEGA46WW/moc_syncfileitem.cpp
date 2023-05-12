/****************************************************************************
** Meta object code from reading C++ file 'syncfileitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/syncfileitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncfileitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__SyncFileItem_t {
    QByteArrayData data[26];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SyncFileItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SyncFileItem_t qt_meta_stringdata_OCC__SyncFileItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::SyncFileItem"
QT_MOC_LITERAL(1, 18, 9), // "Direction"
QT_MOC_LITERAL(2, 28, 4), // "None"
QT_MOC_LITERAL(3, 33, 2), // "Up"
QT_MOC_LITERAL(4, 36, 4), // "Down"
QT_MOC_LITERAL(5, 41, 6), // "Status"
QT_MOC_LITERAL(6, 48, 8), // "NoStatus"
QT_MOC_LITERAL(7, 57, 10), // "FatalError"
QT_MOC_LITERAL(8, 68, 11), // "NormalError"
QT_MOC_LITERAL(9, 80, 9), // "SoftError"
QT_MOC_LITERAL(10, 90, 8), // "Conflict"
QT_MOC_LITERAL(11, 99, 11), // "FileIgnored"
QT_MOC_LITERAL(12, 111, 10), // "FileLocked"
QT_MOC_LITERAL(13, 122, 11), // "Restoration"
QT_MOC_LITERAL(14, 134, 15), // "FileNameInvalid"
QT_MOC_LITERAL(15, 150, 13), // "FileNameClash"
QT_MOC_LITERAL(16, 164, 11), // "DetailError"
QT_MOC_LITERAL(17, 176, 16), // "BlacklistedError"
QT_MOC_LITERAL(18, 193, 7), // "Success"
QT_MOC_LITERAL(19, 201, 10), // "LockStatus"
QT_MOC_LITERAL(20, 212, 12), // "UnlockedItem"
QT_MOC_LITERAL(21, 225, 10), // "LockedItem"
QT_MOC_LITERAL(22, 236, 13), // "LockOwnerType"
QT_MOC_LITERAL(23, 250, 8), // "UserLock"
QT_MOC_LITERAL(24, 259, 7), // "AppLock"
QT_MOC_LITERAL(25, 267, 9) // "TokenLock"

    },
    "OCC::SyncFileItem\0Direction\0None\0Up\0"
    "Down\0Status\0NoStatus\0FatalError\0"
    "NormalError\0SoftError\0Conflict\0"
    "FileIgnored\0FileLocked\0Restoration\0"
    "FileNameInvalid\0FileNameClash\0DetailError\0"
    "BlacklistedError\0Success\0LockStatus\0"
    "UnlockedItem\0LockedItem\0LockOwnerType\0"
    "UserLock\0AppLock\0TokenLock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SyncFileItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       4,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    3,   34,
       5,    5, 0x0,   13,   40,
      19,   19, 0x2,    2,   66,
      22,   22, 0x2,    3,   70,

 // enum data: key, value
       2, uint(OCC::SyncFileItem::None),
       3, uint(OCC::SyncFileItem::Up),
       4, uint(OCC::SyncFileItem::Down),
       6, uint(OCC::SyncFileItem::NoStatus),
       7, uint(OCC::SyncFileItem::FatalError),
       8, uint(OCC::SyncFileItem::NormalError),
       9, uint(OCC::SyncFileItem::SoftError),
      10, uint(OCC::SyncFileItem::Conflict),
      11, uint(OCC::SyncFileItem::FileIgnored),
      12, uint(OCC::SyncFileItem::FileLocked),
      13, uint(OCC::SyncFileItem::Restoration),
      14, uint(OCC::SyncFileItem::FileNameInvalid),
      15, uint(OCC::SyncFileItem::FileNameClash),
      16, uint(OCC::SyncFileItem::DetailError),
      17, uint(OCC::SyncFileItem::BlacklistedError),
      18, uint(OCC::SyncFileItem::Success),
      20, uint(OCC::SyncFileItem::LockStatus::UnlockedItem),
      21, uint(OCC::SyncFileItem::LockStatus::LockedItem),
      23, uint(OCC::SyncFileItem::LockOwnerType::UserLock),
      24, uint(OCC::SyncFileItem::LockOwnerType::AppLock),
      25, uint(OCC::SyncFileItem::LockOwnerType::TokenLock),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject OCC::SyncFileItem::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_OCC__SyncFileItem.data,
    qt_meta_data_OCC__SyncFileItem,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
