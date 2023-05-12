/****************************************************************************
** Meta object code from reading C++ file 'syncresult.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/syncresult.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncresult.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__SyncResult_t {
    QByteArrayData data[12];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SyncResult_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SyncResult_t qt_meta_stringdata_OCC__SyncResult = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OCC::SyncResult"
QT_MOC_LITERAL(1, 16, 6), // "Status"
QT_MOC_LITERAL(2, 23, 9), // "Undefined"
QT_MOC_LITERAL(3, 33, 13), // "NotYetStarted"
QT_MOC_LITERAL(4, 47, 11), // "SyncPrepare"
QT_MOC_LITERAL(5, 59, 11), // "SyncRunning"
QT_MOC_LITERAL(6, 71, 18), // "SyncAbortRequested"
QT_MOC_LITERAL(7, 90, 7), // "Success"
QT_MOC_LITERAL(8, 98, 7), // "Problem"
QT_MOC_LITERAL(9, 106, 5), // "Error"
QT_MOC_LITERAL(10, 112, 10), // "SetupError"
QT_MOC_LITERAL(11, 123, 6) // "Paused"

    },
    "OCC::SyncResult\0Status\0Undefined\0"
    "NotYetStarted\0SyncPrepare\0SyncRunning\0"
    "SyncAbortRequested\0Success\0Problem\0"
    "Error\0SetupError\0Paused"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SyncResult[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   10,   19,

 // enum data: key, value
       2, uint(OCC::SyncResult::Undefined),
       3, uint(OCC::SyncResult::NotYetStarted),
       4, uint(OCC::SyncResult::SyncPrepare),
       5, uint(OCC::SyncResult::SyncRunning),
       6, uint(OCC::SyncResult::SyncAbortRequested),
       7, uint(OCC::SyncResult::Success),
       8, uint(OCC::SyncResult::Problem),
       9, uint(OCC::SyncResult::Error),
      10, uint(OCC::SyncResult::SetupError),
      11, uint(OCC::SyncResult::Paused),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject OCC::SyncResult::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_OCC__SyncResult.data,
    qt_meta_data_OCC__SyncResult,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
