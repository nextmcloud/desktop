/****************************************************************************
** Meta object code from reading C++ file 'webflowcredentialsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/creds/webflowcredentialsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webflowcredentialsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__WebFlowCredentialsDialog_t {
    QByteArrayData data[14];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__WebFlowCredentialsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__WebFlowCredentialsDialog_t qt_meta_stringdata_OCC__WebFlowCredentialsDialog = {
    {
QT_MOC_LITERAL(0, 0, 29), // "OCC::WebFlowCredentialsDialog"
QT_MOC_LITERAL(1, 30, 10), // "urlCatched"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "user"
QT_MOC_LITERAL(4, 47, 4), // "pass"
QT_MOC_LITERAL(5, 52, 4), // "host"
QT_MOC_LITERAL(6, 57, 12), // "styleChanged"
QT_MOC_LITERAL(7, 70, 10), // "onActivate"
QT_MOC_LITERAL(8, 81, 7), // "onClose"
QT_MOC_LITERAL(9, 89, 19), // "slotFlow2AuthResult"
QT_MOC_LITERAL(10, 109, 17), // "Flow2Auth::Result"
QT_MOC_LITERAL(11, 127, 11), // "errorString"
QT_MOC_LITERAL(12, 139, 11), // "appPassword"
QT_MOC_LITERAL(13, 151, 22) // "slotShowSettingsDialog"

    },
    "OCC::WebFlowCredentialsDialog\0urlCatched\0"
    "\0user\0pass\0host\0styleChanged\0onActivate\0"
    "onClose\0slotFlow2AuthResult\0"
    "Flow2Auth::Result\0errorString\0appPassword\0"
    "slotShowSettingsDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__WebFlowCredentialsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       6,    0,   51,    2, 0x06 /* Public */,
       7,    0,   52,    2, 0x06 /* Public */,
       8,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    4,   54,    2, 0x0a /* Public */,
      13,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,   11,    3,   12,
    QMetaType::Void,

       0        // eod
};

void OCC::WebFlowCredentialsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WebFlowCredentialsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->urlCatched((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->styleChanged(); break;
        case 2: _t->onActivate(); break;
        case 3: _t->onClose(); break;
        case 4: _t->slotFlow2AuthResult((*reinterpret_cast< Flow2Auth::Result(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 5: _t->slotShowSettingsDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WebFlowCredentialsDialog::*)(const QString , const QString , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebFlowCredentialsDialog::urlCatched)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WebFlowCredentialsDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebFlowCredentialsDialog::styleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WebFlowCredentialsDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebFlowCredentialsDialog::onActivate)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WebFlowCredentialsDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebFlowCredentialsDialog::onClose)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::WebFlowCredentialsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_OCC__WebFlowCredentialsDialog.data,
    qt_meta_data_OCC__WebFlowCredentialsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::WebFlowCredentialsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::WebFlowCredentialsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__WebFlowCredentialsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OCC::WebFlowCredentialsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OCC::WebFlowCredentialsDialog::urlCatched(const QString _t1, const QString _t2, const QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::WebFlowCredentialsDialog::styleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::WebFlowCredentialsDialog::onActivate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::WebFlowCredentialsDialog::onClose()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
