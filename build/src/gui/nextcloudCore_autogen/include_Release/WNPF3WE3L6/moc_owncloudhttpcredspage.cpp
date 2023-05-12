/****************************************************************************
** Meta object code from reading C++ file 'owncloudhttpcredspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/wizard/owncloudhttpcredspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudhttpcredspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__OwncloudHttpCredsPage_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OwncloudHttpCredsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OwncloudHttpCredsPage_t qt_meta_stringdata_OCC__OwncloudHttpCredsPage = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OCC::OwncloudHttpCredsPage"
QT_MOC_LITERAL(1, 27, 14), // "connectToOCUrl"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 16) // "slotStyleChanged"

    },
    "OCC::OwncloudHttpCredsPage\0connectToOCUrl\0"
    "\0slotStyleChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OwncloudHttpCredsPage[] = {

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
       3,    0,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::OwncloudHttpCredsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OwncloudHttpCredsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectToOCUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotStyleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OwncloudHttpCredsPage::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OwncloudHttpCredsPage::connectToOCUrl)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::OwncloudHttpCredsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractCredentialsWizardPage::staticMetaObject>(),
    qt_meta_stringdata_OCC__OwncloudHttpCredsPage.data,
    qt_meta_data_OCC__OwncloudHttpCredsPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::OwncloudHttpCredsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudHttpCredsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OwncloudHttpCredsPage.stringdata0))
        return static_cast<void*>(this);
    return AbstractCredentialsWizardPage::qt_metacast(_clname);
}

int OCC::OwncloudHttpCredsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCredentialsWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::OwncloudHttpCredsPage::connectToOCUrl(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
