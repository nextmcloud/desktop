/****************************************************************************
** Meta object code from reading C++ file 'conflictdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/conflictdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'conflictdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__ConflictDialog_t {
    QByteArrayData data[9];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ConflictDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ConflictDialog_t qt_meta_stringdata_OCC__ConflictDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OCC::ConflictDialog"
QT_MOC_LITERAL(1, 20, 15), // "setBaseFilename"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "baseFilename"
QT_MOC_LITERAL(4, 50, 23), // "setLocalVersionFilename"
QT_MOC_LITERAL(5, 74, 20), // "localVersionFilename"
QT_MOC_LITERAL(6, 95, 24), // "setRemoteVersionFilename"
QT_MOC_LITERAL(7, 120, 21), // "remoteVersionFilename"
QT_MOC_LITERAL(8, 142, 6) // "accept"

    },
    "OCC::ConflictDialog\0setBaseFilename\0"
    "\0baseFilename\0setLocalVersionFilename\0"
    "localVersionFilename\0setRemoteVersionFilename\0"
    "remoteVersionFilename\0accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ConflictDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    1,   40,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void OCC::ConflictDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConflictDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setBaseFilename((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setLocalVersionFilename((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setRemoteVersionFilename((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->accept(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::ConflictDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_OCC__ConflictDialog.data,
    qt_meta_data_OCC__ConflictDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::ConflictDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ConflictDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ConflictDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OCC::ConflictDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
