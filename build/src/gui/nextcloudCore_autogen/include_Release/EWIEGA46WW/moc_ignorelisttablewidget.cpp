/****************************************************************************
** Meta object code from reading C++ file 'ignorelisttablewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/ignorelisttablewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ignorelisttablewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__IgnoreListTableWidget_t {
    QByteArrayData data[8];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__IgnoreListTableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__IgnoreListTableWidget_t qt_meta_stringdata_OCC__IgnoreListTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OCC::IgnoreListTableWidget"
QT_MOC_LITERAL(1, 27, 18), // "slotRemoveAllItems"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 19), // "slotWriteIgnoreFile"
QT_MOC_LITERAL(4, 67, 4), // "file"
QT_MOC_LITERAL(5, 72, 24), // "slotItemSelectionChanged"
QT_MOC_LITERAL(6, 97, 21), // "slotRemoveCurrentItem"
QT_MOC_LITERAL(7, 119, 14) // "slotAddPattern"

    },
    "OCC::IgnoreListTableWidget\0"
    "slotRemoveAllItems\0\0slotWriteIgnoreFile\0"
    "file\0slotItemSelectionChanged\0"
    "slotRemoveCurrentItem\0slotAddPattern"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__IgnoreListTableWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::IgnoreListTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IgnoreListTableWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotRemoveAllItems(); break;
        case 1: _t->slotWriteIgnoreFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotItemSelectionChanged(); break;
        case 3: _t->slotRemoveCurrentItem(); break;
        case 4: _t->slotAddPattern(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::IgnoreListTableWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_OCC__IgnoreListTableWidget.data,
    qt_meta_data_OCC__IgnoreListTableWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::IgnoreListTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::IgnoreListTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__IgnoreListTableWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OCC::IgnoreListTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
