/****************************************************************************
** Meta object code from reading C++ file 'csync.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/csync/csync.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'csync.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__EncryptionStatusEnums_t {
    QByteArrayData data[7];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__EncryptionStatusEnums_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__EncryptionStatusEnums_t qt_meta_stringdata_OCC__EncryptionStatusEnums = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OCC::EncryptionStatusEnums"
QT_MOC_LITERAL(1, 27, 20), // "ItemEncryptionStatus"
QT_MOC_LITERAL(2, 48, 12), // "NotEncrypted"
QT_MOC_LITERAL(3, 61, 9), // "Encrypted"
QT_MOC_LITERAL(4, 71, 21), // "EncryptedMigratedV1_2"
QT_MOC_LITERAL(5, 93, 25), // "JournalDbEncryptionStatus"
QT_MOC_LITERAL(6, 119, 28) // "EncryptedMigratedV1_2Invalid"

    },
    "OCC::EncryptionStatusEnums\0"
    "ItemEncryptionStatus\0NotEncrypted\0"
    "Encrypted\0EncryptedMigratedV1_2\0"
    "JournalDbEncryptionStatus\0"
    "EncryptedMigratedV1_2Invalid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__EncryptionStatusEnums[] = {

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
       1,    1, 0x2,    3,   24,
       5,    5, 0x2,    4,   30,

 // enum data: key, value
       2, uint(OCC::EncryptionStatusEnums::ItemEncryptionStatus::NotEncrypted),
       3, uint(OCC::EncryptionStatusEnums::ItemEncryptionStatus::Encrypted),
       4, uint(OCC::EncryptionStatusEnums::ItemEncryptionStatus::EncryptedMigratedV1_2),
       2, uint(OCC::EncryptionStatusEnums::JournalDbEncryptionStatus::NotEncrypted),
       3, uint(OCC::EncryptionStatusEnums::JournalDbEncryptionStatus::Encrypted),
       6, uint(OCC::EncryptionStatusEnums::JournalDbEncryptionStatus::EncryptedMigratedV1_2Invalid),
       4, uint(OCC::EncryptionStatusEnums::JournalDbEncryptionStatus::EncryptedMigratedV1_2),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject OCC::EncryptionStatusEnums::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_OCC__EncryptionStatusEnums.data,
    qt_meta_data_OCC__EncryptionStatusEnums,
    nullptr,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_CSyncEnums_t {
    QByteArrayData data[55];
    char stringdata0[1478];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CSyncEnums_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CSyncEnums_t qt_meta_stringdata_CSyncEnums = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CSyncEnums"
QT_MOC_LITERAL(1, 11, 20), // "csync_status_codes_e"
QT_MOC_LITERAL(2, 32, 15), // "CSYNC_STATUS_OK"
QT_MOC_LITERAL(3, 48, 18), // "CSYNC_STATUS_ERROR"
QT_MOC_LITERAL(4, 67, 25), // "CSYNC_STATUS_UNSUCCESSFUL"
QT_MOC_LITERAL(5, 93, 31), // "CSYNC_STATUS_STATEDB_LOAD_ERROR"
QT_MOC_LITERAL(6, 125, 25), // "CSYNC_STATUS_UPDATE_ERROR"
QT_MOC_LITERAL(7, 151, 20), // "CSYNC_STATUS_TIMEOUT"
QT_MOC_LITERAL(8, 172, 23), // "CSYNC_STATUS_HTTP_ERROR"
QT_MOC_LITERAL(9, 196, 30), // "CSYNC_STATUS_PERMISSION_DENIED"
QT_MOC_LITERAL(10, 227, 22), // "CSYNC_STATUS_NOT_FOUND"
QT_MOC_LITERAL(11, 250, 24), // "CSYNC_STATUS_FILE_EXISTS"
QT_MOC_LITERAL(12, 275, 25), // "CSYNC_STATUS_OUT_OF_SPACE"
QT_MOC_LITERAL(13, 301, 32), // "CSYNC_STATUS_SERVICE_UNAVAILABLE"
QT_MOC_LITERAL(14, 334, 32), // "CSYNC_STATUS_STORAGE_UNAVAILABLE"
QT_MOC_LITERAL(15, 367, 28), // "CSYNC_STATUS_FILE_SIZE_ERROR"
QT_MOC_LITERAL(16, 396, 26), // "CSYNC_STATUS_OPENDIR_ERROR"
QT_MOC_LITERAL(17, 423, 26), // "CSYNC_STATUS_READDIR_ERROR"
QT_MOC_LITERAL(18, 450, 23), // "CSYNC_STATUS_OPEN_ERROR"
QT_MOC_LITERAL(19, 474, 20), // "CSYNC_STATUS_ABORTED"
QT_MOC_LITERAL(20, 495, 34), // "CSYNC_STATUS_INDIVIDUAL_IS_SY..."
QT_MOC_LITERAL(21, 530, 35), // "CSYNC_STATUS_INDIVIDUAL_IGNOR..."
QT_MOC_LITERAL(22, 566, 40), // "CSYNC_STATUS_INDIVIDUAL_IS_IN..."
QT_MOC_LITERAL(23, 607, 38), // "CSYNC_STATUS_INDIVIDUAL_TRAIL..."
QT_MOC_LITERAL(24, 646, 45), // "CSYNC_STATUS_INDIVIDUAL_EXCLU..."
QT_MOC_LITERAL(25, 692, 38), // "CSYNC_STATUS_INDIVIDUAL_EXCLU..."
QT_MOC_LITERAL(26, 731, 31), // "CSYNC_STATUS_INVALID_CHARACTERS"
QT_MOC_LITERAL(27, 763, 35), // "CSYNC_STATUS_INDIVIDUAL_STAT_..."
QT_MOC_LITERAL(28, 799, 22), // "CSYNC_STATUS_FORBIDDEN"
QT_MOC_LITERAL(29, 822, 32), // "CSYNC_STATUS_INDIVIDUAL_TOO_DEEP"
QT_MOC_LITERAL(30, 855, 40), // "CSYNC_STATUS_INDIVIDUAL_IS_CO..."
QT_MOC_LITERAL(31, 896, 37), // "CSYNC_STATUS_INDIVIDUAL_CANNO..."
QT_MOC_LITERAL(32, 934, 16), // "SyncInstructions"
QT_MOC_LITERAL(33, 951, 22), // "CSYNC_INSTRUCTION_NONE"
QT_MOC_LITERAL(34, 974, 22), // "CSYNC_INSTRUCTION_EVAL"
QT_MOC_LITERAL(35, 997, 24), // "CSYNC_INSTRUCTION_REMOVE"
QT_MOC_LITERAL(36, 1022, 24), // "CSYNC_INSTRUCTION_RENAME"
QT_MOC_LITERAL(37, 1047, 29), // "CSYNC_INSTRUCTION_EVAL_RENAME"
QT_MOC_LITERAL(38, 1077, 21), // "CSYNC_INSTRUCTION_NEW"
QT_MOC_LITERAL(39, 1099, 26), // "CSYNC_INSTRUCTION_CONFLICT"
QT_MOC_LITERAL(40, 1126, 24), // "CSYNC_INSTRUCTION_IGNORE"
QT_MOC_LITERAL(41, 1151, 22), // "CSYNC_INSTRUCTION_SYNC"
QT_MOC_LITERAL(42, 1174, 28), // "CSYNC_INSTRUCTION_STAT_ERROR"
QT_MOC_LITERAL(43, 1203, 23), // "CSYNC_INSTRUCTION_ERROR"
QT_MOC_LITERAL(44, 1227, 29), // "CSYNC_INSTRUCTION_TYPE_CHANGE"
QT_MOC_LITERAL(45, 1257, 33), // "CSYNC_INSTRUCTION_UPDATE_META..."
QT_MOC_LITERAL(46, 1291, 37), // "CSYNC_INSTRUCTION_CASE_CLASH_..."
QT_MOC_LITERAL(47, 1329, 8), // "ItemType"
QT_MOC_LITERAL(48, 1338, 12), // "ItemTypeFile"
QT_MOC_LITERAL(49, 1351, 16), // "ItemTypeSoftLink"
QT_MOC_LITERAL(50, 1368, 17), // "ItemTypeDirectory"
QT_MOC_LITERAL(51, 1386, 12), // "ItemTypeSkip"
QT_MOC_LITERAL(52, 1399, 19), // "ItemTypeVirtualFile"
QT_MOC_LITERAL(53, 1419, 27), // "ItemTypeVirtualFileDownload"
QT_MOC_LITERAL(54, 1447, 30) // "ItemTypeVirtualFileDehydration"

    },
    "CSyncEnums\0csync_status_codes_e\0"
    "CSYNC_STATUS_OK\0CSYNC_STATUS_ERROR\0"
    "CSYNC_STATUS_UNSUCCESSFUL\0"
    "CSYNC_STATUS_STATEDB_LOAD_ERROR\0"
    "CSYNC_STATUS_UPDATE_ERROR\0"
    "CSYNC_STATUS_TIMEOUT\0CSYNC_STATUS_HTTP_ERROR\0"
    "CSYNC_STATUS_PERMISSION_DENIED\0"
    "CSYNC_STATUS_NOT_FOUND\0CSYNC_STATUS_FILE_EXISTS\0"
    "CSYNC_STATUS_OUT_OF_SPACE\0"
    "CSYNC_STATUS_SERVICE_UNAVAILABLE\0"
    "CSYNC_STATUS_STORAGE_UNAVAILABLE\0"
    "CSYNC_STATUS_FILE_SIZE_ERROR\0"
    "CSYNC_STATUS_OPENDIR_ERROR\0"
    "CSYNC_STATUS_READDIR_ERROR\0"
    "CSYNC_STATUS_OPEN_ERROR\0CSYNC_STATUS_ABORTED\0"
    "CSYNC_STATUS_INDIVIDUAL_IS_SYMLINK\0"
    "CSYNC_STATUS_INDIVIDUAL_IGNORE_LIST\0"
    "CSYNC_STATUS_INDIVIDUAL_IS_INVALID_CHARS\0"
    "CSYNC_STATUS_INDIVIDUAL_TRAILING_SPACE\0"
    "CSYNC_STATUS_INDIVIDUAL_EXCLUDE_LONG_FILENAME\0"
    "CSYNC_STATUS_INDIVIDUAL_EXCLUDE_HIDDEN\0"
    "CSYNC_STATUS_INVALID_CHARACTERS\0"
    "CSYNC_STATUS_INDIVIDUAL_STAT_FAILED\0"
    "CSYNC_STATUS_FORBIDDEN\0"
    "CSYNC_STATUS_INDIVIDUAL_TOO_DEEP\0"
    "CSYNC_STATUS_INDIVIDUAL_IS_CONFLICT_FILE\0"
    "CSYNC_STATUS_INDIVIDUAL_CANNOT_ENCODE\0"
    "SyncInstructions\0CSYNC_INSTRUCTION_NONE\0"
    "CSYNC_INSTRUCTION_EVAL\0CSYNC_INSTRUCTION_REMOVE\0"
    "CSYNC_INSTRUCTION_RENAME\0"
    "CSYNC_INSTRUCTION_EVAL_RENAME\0"
    "CSYNC_INSTRUCTION_NEW\0CSYNC_INSTRUCTION_CONFLICT\0"
    "CSYNC_INSTRUCTION_IGNORE\0"
    "CSYNC_INSTRUCTION_SYNC\0"
    "CSYNC_INSTRUCTION_STAT_ERROR\0"
    "CSYNC_INSTRUCTION_ERROR\0"
    "CSYNC_INSTRUCTION_TYPE_CHANGE\0"
    "CSYNC_INSTRUCTION_UPDATE_METADATA\0"
    "CSYNC_INSTRUCTION_CASE_CLASH_CONFLICT\0"
    "ItemType\0ItemTypeFile\0ItemTypeSoftLink\0"
    "ItemTypeDirectory\0ItemTypeSkip\0"
    "ItemTypeVirtualFile\0ItemTypeVirtualFileDownload\0"
    "ItemTypeVirtualFileDehydration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CSyncEnums[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   30,   29,
      32,   32, 0x0,   14,   89,
      47,   47, 0x0,    7,  117,

 // enum data: key, value
       2, uint(CSyncEnums::CSYNC_STATUS_OK),
       3, uint(CSyncEnums::CSYNC_STATUS_ERROR),
       4, uint(CSyncEnums::CSYNC_STATUS_UNSUCCESSFUL),
       5, uint(CSyncEnums::CSYNC_STATUS_STATEDB_LOAD_ERROR),
       6, uint(CSyncEnums::CSYNC_STATUS_UPDATE_ERROR),
       7, uint(CSyncEnums::CSYNC_STATUS_TIMEOUT),
       8, uint(CSyncEnums::CSYNC_STATUS_HTTP_ERROR),
       9, uint(CSyncEnums::CSYNC_STATUS_PERMISSION_DENIED),
      10, uint(CSyncEnums::CSYNC_STATUS_NOT_FOUND),
      11, uint(CSyncEnums::CSYNC_STATUS_FILE_EXISTS),
      12, uint(CSyncEnums::CSYNC_STATUS_OUT_OF_SPACE),
      13, uint(CSyncEnums::CSYNC_STATUS_SERVICE_UNAVAILABLE),
      14, uint(CSyncEnums::CSYNC_STATUS_STORAGE_UNAVAILABLE),
      15, uint(CSyncEnums::CSYNC_STATUS_FILE_SIZE_ERROR),
      16, uint(CSyncEnums::CSYNC_STATUS_OPENDIR_ERROR),
      17, uint(CSyncEnums::CSYNC_STATUS_READDIR_ERROR),
      18, uint(CSyncEnums::CSYNC_STATUS_OPEN_ERROR),
      19, uint(CSyncEnums::CSYNC_STATUS_ABORTED),
      20, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_IS_SYMLINK),
      21, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_IGNORE_LIST),
      22, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_IS_INVALID_CHARS),
      23, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_TRAILING_SPACE),
      24, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_EXCLUDE_LONG_FILENAME),
      25, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_EXCLUDE_HIDDEN),
      26, uint(CSyncEnums::CSYNC_STATUS_INVALID_CHARACTERS),
      27, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_STAT_FAILED),
      28, uint(CSyncEnums::CSYNC_STATUS_FORBIDDEN),
      29, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_TOO_DEEP),
      30, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_IS_CONFLICT_FILE),
      31, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_CANNOT_ENCODE),
      33, uint(CSyncEnums::CSYNC_INSTRUCTION_NONE),
      34, uint(CSyncEnums::CSYNC_INSTRUCTION_EVAL),
      35, uint(CSyncEnums::CSYNC_INSTRUCTION_REMOVE),
      36, uint(CSyncEnums::CSYNC_INSTRUCTION_RENAME),
      37, uint(CSyncEnums::CSYNC_INSTRUCTION_EVAL_RENAME),
      38, uint(CSyncEnums::CSYNC_INSTRUCTION_NEW),
      39, uint(CSyncEnums::CSYNC_INSTRUCTION_CONFLICT),
      40, uint(CSyncEnums::CSYNC_INSTRUCTION_IGNORE),
      41, uint(CSyncEnums::CSYNC_INSTRUCTION_SYNC),
      42, uint(CSyncEnums::CSYNC_INSTRUCTION_STAT_ERROR),
      43, uint(CSyncEnums::CSYNC_INSTRUCTION_ERROR),
      44, uint(CSyncEnums::CSYNC_INSTRUCTION_TYPE_CHANGE),
      45, uint(CSyncEnums::CSYNC_INSTRUCTION_UPDATE_METADATA),
      46, uint(CSyncEnums::CSYNC_INSTRUCTION_CASE_CLASH_CONFLICT),
      48, uint(CSyncEnums::ItemTypeFile),
      49, uint(CSyncEnums::ItemTypeSoftLink),
      50, uint(CSyncEnums::ItemTypeDirectory),
      51, uint(CSyncEnums::ItemTypeSkip),
      52, uint(CSyncEnums::ItemTypeVirtualFile),
      53, uint(CSyncEnums::ItemTypeVirtualFileDownload),
      54, uint(CSyncEnums::ItemTypeVirtualFileDehydration),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject CSyncEnums::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CSyncEnums.data,
    qt_meta_data_CSyncEnums,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
