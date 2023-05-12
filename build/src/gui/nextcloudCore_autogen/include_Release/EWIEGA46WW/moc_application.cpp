/****************************************************************************
** Meta object code from reading C++ file 'application.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/application.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'application.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__Application_t {
    QByteArrayData data[22];
    char stringdata0[394];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__Application_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__Application_t qt_meta_stringdata_OCC__Application = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OCC::Application"
QT_MOC_LITERAL(1, 17, 13), // "folderRemoved"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "folderStateChanged"
QT_MOC_LITERAL(4, 51, 12), // "OCC::Folder*"
QT_MOC_LITERAL(5, 64, 23), // "isShowingSettingsDialog"
QT_MOC_LITERAL(6, 88, 22), // "slotownCloudWizardDone"
QT_MOC_LITERAL(7, 111, 9), // "slotCrash"
QT_MOC_LITERAL(8, 121, 15), // "openVirtualFile"
QT_MOC_LITERAL(9, 137, 8), // "filename"
QT_MOC_LITERAL(10, 146, 12), // "tryTrayAgain"
QT_MOC_LITERAL(11, 159, 16), // "slotParseMessage"
QT_MOC_LITERAL(12, 176, 19), // "slotCheckConnection"
QT_MOC_LITERAL(13, 196, 23), // "slotUseMonoIconsChanged"
QT_MOC_LITERAL(14, 220, 11), // "slotCleanup"
QT_MOC_LITERAL(15, 232, 21), // "slotAccountStateAdded"
QT_MOC_LITERAL(16, 254, 18), // "OCC::AccountState*"
QT_MOC_LITERAL(17, 273, 12), // "accountState"
QT_MOC_LITERAL(18, 286, 23), // "slotAccountStateRemoved"
QT_MOC_LITERAL(19, 310, 36), // "slotSystemOnlineConfiguration..."
QT_MOC_LITERAL(20, 347, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(21, 369, 24) // "slotGuiIsShowingSettings"

    },
    "OCC::Application\0folderRemoved\0\0"
    "folderStateChanged\0OCC::Folder*\0"
    "isShowingSettingsDialog\0slotownCloudWizardDone\0"
    "slotCrash\0openVirtualFile\0filename\0"
    "tryTrayAgain\0slotParseMessage\0"
    "slotCheckConnection\0slotUseMonoIconsChanged\0"
    "slotCleanup\0slotAccountStateAdded\0"
    "OCC::AccountState*\0accountState\0"
    "slotAccountStateRemoved\0"
    "slotSystemOnlineConfigurationChanged\0"
    "QNetworkConfiguration\0slotGuiIsShowingSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__Application[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    1,   90,    2, 0x06 /* Public */,
       5,    0,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   94,    2, 0x0a /* Public */,
       7,    0,   97,    2, 0x0a /* Public */,
       8,    1,   98,    2, 0x0a /* Public */,
      10,    0,  101,    2, 0x0a /* Public */,
      11,    2,  102,    2, 0x09 /* Protected */,
      12,    0,  107,    2, 0x09 /* Protected */,
      13,    1,  108,    2, 0x09 /* Protected */,
      14,    0,  111,    2, 0x09 /* Protected */,
      15,    1,  112,    2, 0x09 /* Protected */,
      18,    1,  115,    2, 0x09 /* Protected */,
      19,    1,  118,    2, 0x09 /* Protected */,
      21,    0,  121,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QObjectStar,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void,

       0        // eod
};

void OCC::Application::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Application *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->folderRemoved(); break;
        case 1: _t->folderStateChanged((*reinterpret_cast< OCC::Folder*(*)>(_a[1]))); break;
        case 2: _t->isShowingSettingsDialog(); break;
        case 3: _t->slotownCloudWizardDone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotCrash(); break;
        case 5: _t->openVirtualFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->tryTrayAgain(); break;
        case 7: _t->slotParseMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 8: _t->slotCheckConnection(); break;
        case 9: _t->slotUseMonoIconsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->slotCleanup(); break;
        case 11: _t->slotAccountStateAdded((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 12: _t->slotAccountStateRemoved((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 13: _t->slotSystemOnlineConfigurationChanged((*reinterpret_cast< QNetworkConfiguration(*)>(_a[1]))); break;
        case 14: _t->slotGuiIsShowingSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Folder* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountState* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountState* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Application::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Application::folderRemoved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Application::*)(OCC::Folder * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Application::folderStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Application::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Application::isShowingSettingsDialog)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::Application::staticMetaObject = { {
    QMetaObject::SuperData::link<SharedTools::QtSingleApplication::staticMetaObject>(),
    qt_meta_stringdata_OCC__Application.data,
    qt_meta_data_OCC__Application,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::Application::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Application::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__Application.stringdata0))
        return static_cast<void*>(this);
    return SharedTools::QtSingleApplication::qt_metacast(_clname);
}

int OCC::Application::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SharedTools::QtSingleApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void OCC::Application::folderRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::Application::folderStateChanged(OCC::Folder * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::Application::isShowingSettingsDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
