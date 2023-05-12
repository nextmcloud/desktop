/****************************************************************************
** Meta object code from reading C++ file 'flow2authcredspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/wizard/flow2authcredspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flow2authcredspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__Flow2AuthCredsPage_t {
    QByteArrayData data[12];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__Flow2AuthCredsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__Flow2AuthCredsPage_t qt_meta_stringdata_OCC__Flow2AuthCredsPage = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OCC::Flow2AuthCredsPage"
QT_MOC_LITERAL(1, 24, 14), // "connectToOCUrl"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "pollNow"
QT_MOC_LITERAL(4, 48, 12), // "styleChanged"
QT_MOC_LITERAL(5, 61, 19), // "slotFlow2AuthResult"
QT_MOC_LITERAL(6, 81, 17), // "Flow2Auth::Result"
QT_MOC_LITERAL(7, 99, 11), // "errorString"
QT_MOC_LITERAL(8, 111, 4), // "user"
QT_MOC_LITERAL(9, 116, 11), // "appPassword"
QT_MOC_LITERAL(10, 128, 11), // "slotPollNow"
QT_MOC_LITERAL(11, 140, 16) // "slotStyleChanged"

    },
    "OCC::Flow2AuthCredsPage\0connectToOCUrl\0"
    "\0pollNow\0styleChanged\0slotFlow2AuthResult\0"
    "Flow2Auth::Result\0errorString\0user\0"
    "appPassword\0slotPollNow\0slotStyleChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__Flow2AuthCredsPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    0,   47,    2, 0x06 /* Public */,
       4,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    4,   49,    2, 0x0a /* Public */,
      10,    0,   58,    2, 0x0a /* Public */,
      11,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::Flow2AuthCredsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Flow2AuthCredsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectToOCUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->pollNow(); break;
        case 2: _t->styleChanged(); break;
        case 3: _t->slotFlow2AuthResult((*reinterpret_cast< Flow2Auth::Result(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 4: _t->slotPollNow(); break;
        case 5: _t->slotStyleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Flow2AuthCredsPage::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Flow2AuthCredsPage::connectToOCUrl)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Flow2AuthCredsPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Flow2AuthCredsPage::pollNow)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Flow2AuthCredsPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Flow2AuthCredsPage::styleChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::Flow2AuthCredsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractCredentialsWizardPage::staticMetaObject>(),
    qt_meta_stringdata_OCC__Flow2AuthCredsPage.data,
    qt_meta_data_OCC__Flow2AuthCredsPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::Flow2AuthCredsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Flow2AuthCredsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__Flow2AuthCredsPage.stringdata0))
        return static_cast<void*>(this);
    return AbstractCredentialsWizardPage::qt_metacast(_clname);
}

int OCC::Flow2AuthCredsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCredentialsWizardPage::qt_metacall(_c, _id, _a);
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
void OCC::Flow2AuthCredsPage::connectToOCUrl(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::Flow2AuthCredsPage::pollNow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::Flow2AuthCredsPage::styleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
