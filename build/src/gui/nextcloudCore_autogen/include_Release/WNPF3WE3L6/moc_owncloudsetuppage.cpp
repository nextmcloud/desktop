/****************************************************************************
** Meta object code from reading C++ file 'owncloudsetuppage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/wizard/owncloudsetuppage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudsetuppage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__OwncloudSetupPage_t {
    QByteArrayData data[12];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OwncloudSetupPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OwncloudSetupPage_t qt_meta_stringdata_OCC__OwncloudSetupPage = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OCC::OwncloudSetupPage"
QT_MOC_LITERAL(1, 23, 17), // "determineAuthType"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 14), // "setErrorString"
QT_MOC_LITERAL(4, 57, 13), // "retryHTTPonly"
QT_MOC_LITERAL(5, 71, 12), // "startSpinner"
QT_MOC_LITERAL(6, 84, 11), // "stopSpinner"
QT_MOC_LITERAL(7, 96, 23), // "slotCertificateAccepted"
QT_MOC_LITERAL(8, 120, 16), // "slotStyleChanged"
QT_MOC_LITERAL(9, 137, 14), // "slotUrlChanged"
QT_MOC_LITERAL(10, 152, 19), // "slotUrlEditFinished"
QT_MOC_LITERAL(11, 172, 18) // "setupCustomization"

    },
    "OCC::OwncloudSetupPage\0determineAuthType\0"
    "\0setErrorString\0retryHTTPonly\0"
    "startSpinner\0stopSpinner\0"
    "slotCertificateAccepted\0slotStyleChanged\0"
    "slotUrlChanged\0slotUrlEditFinished\0"
    "setupCustomization"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OwncloudSetupPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   62,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x09 /* Protected */,
      10,    0,   74,    2, 0x09 /* Protected */,
      11,    0,   75,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::OwncloudSetupPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OwncloudSetupPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->determineAuthType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setErrorString((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->startSpinner(); break;
        case 3: _t->stopSpinner(); break;
        case 4: _t->slotCertificateAccepted(); break;
        case 5: _t->slotStyleChanged(); break;
        case 6: _t->slotUrlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->slotUrlEditFinished(); break;
        case 8: _t->setupCustomization(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OwncloudSetupPage::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OwncloudSetupPage::determineAuthType)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::OwncloudSetupPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_OCC__OwncloudSetupPage.data,
    qt_meta_data_OCC__OwncloudSetupPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::OwncloudSetupPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudSetupPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OwncloudSetupPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int OCC::OwncloudSetupPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void OCC::OwncloudSetupPage::determineAuthType(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
