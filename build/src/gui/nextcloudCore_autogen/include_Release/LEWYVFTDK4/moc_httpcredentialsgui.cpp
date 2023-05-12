/****************************************************************************
** Meta object code from reading C++ file 'httpcredentialsgui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/creds/httpcredentialsgui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpcredentialsgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__HttpCredentialsGui_t {
    QByteArrayData data[10];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__HttpCredentialsGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__HttpCredentialsGui_t qt_meta_stringdata_OCC__HttpCredentialsGui = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OCC::HttpCredentialsGui"
QT_MOC_LITERAL(1, 24, 24), // "authorisationLinkChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 15), // "asyncAuthResult"
QT_MOC_LITERAL(4, 66, 13), // "OAuth::Result"
QT_MOC_LITERAL(5, 80, 4), // "user"
QT_MOC_LITERAL(6, 85, 11), // "accessToken"
QT_MOC_LITERAL(7, 97, 12), // "refreshToken"
QT_MOC_LITERAL(8, 110, 10), // "showDialog"
QT_MOC_LITERAL(9, 121, 16) // "askFromUserAsync"

    },
    "OCC::HttpCredentialsGui\0"
    "authorisationLinkChanged\0\0asyncAuthResult\0"
    "OAuth::Result\0user\0accessToken\0"
    "refreshToken\0showDialog\0askFromUserAsync"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__HttpCredentialsGui[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    4,   35,    2, 0x08 /* Private */,
       8,    0,   44,    2, 0x08 /* Private */,
       9,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::HttpCredentialsGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HttpCredentialsGui *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authorisationLinkChanged(); break;
        case 1: _t->asyncAuthResult((*reinterpret_cast< OAuth::Result(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 2: _t->showDialog(); break;
        case 3: _t->askFromUserAsync(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HttpCredentialsGui::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpCredentialsGui::authorisationLinkChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::HttpCredentialsGui::staticMetaObject = { {
    QMetaObject::SuperData::link<HttpCredentials::staticMetaObject>(),
    qt_meta_stringdata_OCC__HttpCredentialsGui.data,
    qt_meta_data_OCC__HttpCredentialsGui,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::HttpCredentialsGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::HttpCredentialsGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__HttpCredentialsGui.stringdata0))
        return static_cast<void*>(this);
    return HttpCredentials::qt_metacast(_clname);
}

int OCC::HttpCredentialsGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpCredentials::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OCC::HttpCredentialsGui::authorisationLinkChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
