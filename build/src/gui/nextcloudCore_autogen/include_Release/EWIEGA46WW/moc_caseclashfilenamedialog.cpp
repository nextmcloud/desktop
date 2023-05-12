/****************************************************************************
** Meta object code from reading C++ file 'caseclashfilenamedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/caseclashfilenamedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caseclashfilenamedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__CaseClashFilenameDialog_t {
    QByteArrayData data[13];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__CaseClashFilenameDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__CaseClashFilenameDialog_t qt_meta_stringdata_OCC__CaseClashFilenameDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "OCC::CaseClashFilenameDialog"
QT_MOC_LITERAL(1, 29, 16), // "successfulRename"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "filePath"
QT_MOC_LITERAL(4, 56, 21), // "updateFileWidgetGroup"
QT_MOC_LITERAL(5, 78, 8), // "linkText"
QT_MOC_LITERAL(6, 87, 7), // "QLabel*"
QT_MOC_LITERAL(7, 95, 13), // "filenameLabel"
QT_MOC_LITERAL(8, 109, 9), // "linkLabel"
QT_MOC_LITERAL(9, 119, 10), // "mtimeLabel"
QT_MOC_LITERAL(10, 130, 9), // "sizeLabel"
QT_MOC_LITERAL(11, 140, 12), // "QToolButton*"
QT_MOC_LITERAL(12, 153, 6) // "button"

    },
    "OCC::CaseClashFilenameDialog\0"
    "successfulRename\0\0filePath\0"
    "updateFileWidgetGroup\0linkText\0QLabel*\0"
    "filenameLabel\0linkLabel\0mtimeLabel\0"
    "sizeLabel\0QToolButton*\0button"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__CaseClashFilenameDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    7,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 11,    3,    5,    7,    8,    9,   10,   12,

       0        // eod
};

void OCC::CaseClashFilenameDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CaseClashFilenameDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->successfulRename((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateFileWidgetGroup((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QLabel*(*)>(_a[3])),(*reinterpret_cast< QLabel*(*)>(_a[4])),(*reinterpret_cast< QLabel*(*)>(_a[5])),(*reinterpret_cast< QLabel*(*)>(_a[6])),(*reinterpret_cast< QToolButton*(*)>(_a[7]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 5:
            case 4:
            case 3:
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLabel* >(); break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QToolButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CaseClashFilenameDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CaseClashFilenameDialog::successfulRename)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::CaseClashFilenameDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_OCC__CaseClashFilenameDialog.data,
    qt_meta_data_OCC__CaseClashFilenameDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::CaseClashFilenameDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::CaseClashFilenameDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__CaseClashFilenameDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OCC::CaseClashFilenameDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::CaseClashFilenameDialog::successfulRename(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
