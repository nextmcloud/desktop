/****************************************************************************
** Meta object code from reading C++ file 'selectivesyncdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/selectivesyncdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectivesyncdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__SelectiveSyncWidget_t {
    QByteArrayData data[12];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SelectiveSyncWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SelectiveSyncWidget_t qt_meta_stringdata_OCC__SelectiveSyncWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OCC::SelectiveSyncWidget"
QT_MOC_LITERAL(1, 25, 21), // "slotUpdateDirectories"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 29), // "slotUpdateRootFolderFilesSize"
QT_MOC_LITERAL(4, 78, 10), // "subfolders"
QT_MOC_LITERAL(5, 89, 16), // "slotItemExpanded"
QT_MOC_LITERAL(6, 106, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 123, 15), // "slotItemChanged"
QT_MOC_LITERAL(8, 139, 26), // "slotLscolFinishedWithError"
QT_MOC_LITERAL(9, 166, 14), // "QNetworkReply*"
QT_MOC_LITERAL(10, 181, 24), // "slotGatherEncryptedPaths"
QT_MOC_LITERAL(11, 206, 21) // "QMap<QString,QString>"

    },
    "OCC::SelectiveSyncWidget\0slotUpdateDirectories\0"
    "\0slotUpdateRootFolderFilesSize\0"
    "subfolders\0slotItemExpanded\0"
    "QTreeWidgetItem*\0slotItemChanged\0"
    "slotLscolFinishedWithError\0QNetworkReply*\0"
    "slotGatherEncryptedPaths\0QMap<QString,QString>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SelectiveSyncWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       3,    1,   47,    2, 0x08 /* Private */,
       5,    1,   50,    2, 0x08 /* Private */,
       7,    2,   53,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
      10,    2,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QStringList,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,    2,    2,

       0        // eod
};

void OCC::SelectiveSyncWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectiveSyncWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotUpdateDirectories((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->slotUpdateRootFolderFilesSize((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->slotItemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->slotItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->slotLscolFinishedWithError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->slotGatherEncryptedPaths((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::SelectiveSyncWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_OCC__SelectiveSyncWidget.data,
    qt_meta_data_OCC__SelectiveSyncWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::SelectiveSyncWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SelectiveSyncWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SelectiveSyncWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OCC::SelectiveSyncWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_OCC__SelectiveSyncDialog_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SelectiveSyncDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SelectiveSyncDialog_t qt_meta_stringdata_OCC__SelectiveSyncDialog = {
    {
QT_MOC_LITERAL(0, 0, 24) // "OCC::SelectiveSyncDialog"

    },
    "OCC::SelectiveSyncDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SelectiveSyncDialog[] = {

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

void OCC::SelectiveSyncDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::SelectiveSyncDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_OCC__SelectiveSyncDialog.data,
    qt_meta_data_OCC__SelectiveSyncDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::SelectiveSyncDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SelectiveSyncDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SelectiveSyncDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OCC::SelectiveSyncDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
