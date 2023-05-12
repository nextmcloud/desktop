/****************************************************************************
** Meta object code from reading C++ file 'folderwizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/folderwizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderwizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__FormatWarningsWizardPage_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__FormatWarningsWizardPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__FormatWarningsWizardPage_t qt_meta_stringdata_OCC__FormatWarningsWizardPage = {
    {
QT_MOC_LITERAL(0, 0, 29) // "OCC::FormatWarningsWizardPage"

    },
    "OCC::FormatWarningsWizardPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__FormatWarningsWizardPage[] = {

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

void OCC::FormatWarningsWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::FormatWarningsWizardPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_OCC__FormatWarningsWizardPage.data,
    qt_meta_data_OCC__FormatWarningsWizardPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::FormatWarningsWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FormatWarningsWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__FormatWarningsWizardPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int OCC::FormatWarningsWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OCC__FolderWizardLocalPath_t {
    QByteArrayData data[3];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__FolderWizardLocalPath_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__FolderWizardLocalPath_t qt_meta_stringdata_OCC__FolderWizardLocalPath = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OCC::FolderWizardLocalPath"
QT_MOC_LITERAL(1, 27, 21), // "slotChooseLocalFolder"
QT_MOC_LITERAL(2, 49, 0) // ""

    },
    "OCC::FolderWizardLocalPath\0"
    "slotChooseLocalFolder\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__FolderWizardLocalPath[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::FolderWizardLocalPath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderWizardLocalPath *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotChooseLocalFolder(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::FolderWizardLocalPath::staticMetaObject = { {
    QMetaObject::SuperData::link<FormatWarningsWizardPage::staticMetaObject>(),
    qt_meta_stringdata_OCC__FolderWizardLocalPath.data,
    qt_meta_data_OCC__FolderWizardLocalPath,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::FolderWizardLocalPath::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderWizardLocalPath::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__FolderWizardLocalPath.stringdata0))
        return static_cast<void*>(this);
    return FormatWarningsWizardPage::qt_metacast(_clname);
}

int OCC::FolderWizardLocalPath::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FormatWarningsWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OCC__FolderWizardRemotePath_t {
    QByteArrayData data[21];
    char stringdata0[404];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__FolderWizardRemotePath_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__FolderWizardRemotePath_t qt_meta_stringdata_OCC__FolderWizardRemotePath = {
    {
QT_MOC_LITERAL(0, 0, 27), // "OCC::FolderWizardRemotePath"
QT_MOC_LITERAL(1, 28, 8), // "showWarn"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "slotAddRemoteFolder"
QT_MOC_LITERAL(4, 58, 22), // "slotCreateRemoteFolder"
QT_MOC_LITERAL(5, 81, 30), // "slotCreateRemoteFolderFinished"
QT_MOC_LITERAL(6, 112, 27), // "slotHandleMkdirNetworkError"
QT_MOC_LITERAL(7, 140, 14), // "QNetworkReply*"
QT_MOC_LITERAL(8, 155, 27), // "slotHandleLsColNetworkError"
QT_MOC_LITERAL(9, 183, 21), // "slotUpdateDirectories"
QT_MOC_LITERAL(10, 205, 24), // "slotGatherEncryptedPaths"
QT_MOC_LITERAL(11, 230, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(12, 252, 18), // "slotRefreshFolders"
QT_MOC_LITERAL(13, 271, 16), // "slotItemExpanded"
QT_MOC_LITERAL(14, 288, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(15, 305, 22), // "slotCurrentItemChanged"
QT_MOC_LITERAL(16, 328, 21), // "slotFolderEntryEdited"
QT_MOC_LITERAL(17, 350, 4), // "text"
QT_MOC_LITERAL(18, 355, 20), // "slotLsColFolderEntry"
QT_MOC_LITERAL(19, 376, 18), // "slotTypedPathFound"
QT_MOC_LITERAL(20, 395, 8) // "subpaths"

    },
    "OCC::FolderWizardRemotePath\0showWarn\0"
    "\0slotAddRemoteFolder\0slotCreateRemoteFolder\0"
    "slotCreateRemoteFolderFinished\0"
    "slotHandleMkdirNetworkError\0QNetworkReply*\0"
    "slotHandleLsColNetworkError\0"
    "slotUpdateDirectories\0slotGatherEncryptedPaths\0"
    "QMap<QString,QString>\0slotRefreshFolders\0"
    "slotItemExpanded\0QTreeWidgetItem*\0"
    "slotCurrentItemChanged\0slotFolderEntryEdited\0"
    "text\0slotLsColFolderEntry\0slotTypedPathFound\0"
    "subpaths"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__FolderWizardRemotePath[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x09 /* Protected */,
       1,    0,   92,    2, 0x29 /* Protected | MethodCloned */,
       3,    0,   93,    2, 0x09 /* Protected */,
       4,    1,   94,    2, 0x09 /* Protected */,
       5,    0,   97,    2, 0x09 /* Protected */,
       6,    1,   98,    2, 0x09 /* Protected */,
       8,    1,  101,    2, 0x09 /* Protected */,
       9,    1,  104,    2, 0x09 /* Protected */,
      10,    2,  107,    2, 0x09 /* Protected */,
      12,    0,  112,    2, 0x09 /* Protected */,
      13,    1,  113,    2, 0x09 /* Protected */,
      15,    1,  116,    2, 0x09 /* Protected */,
      16,    1,  119,    2, 0x09 /* Protected */,
      18,    0,  122,    2, 0x09 /* Protected */,
      19,    1,  123,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   20,

       0        // eod
};

void OCC::FolderWizardRemotePath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderWizardRemotePath *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showWarn((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->showWarn(); break;
        case 2: _t->slotAddRemoteFolder(); break;
        case 3: _t->slotCreateRemoteFolder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotCreateRemoteFolderFinished(); break;
        case 5: _t->slotHandleMkdirNetworkError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->slotHandleLsColNetworkError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->slotUpdateDirectories((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 8: _t->slotGatherEncryptedPaths((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[2]))); break;
        case 9: _t->slotRefreshFolders(); break;
        case 10: _t->slotItemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->slotCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->slotFolderEntryEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->slotLsColFolderEntry(); break;
        case 14: _t->slotTypedPathFound((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::FolderWizardRemotePath::staticMetaObject = { {
    QMetaObject::SuperData::link<FormatWarningsWizardPage::staticMetaObject>(),
    qt_meta_stringdata_OCC__FolderWizardRemotePath.data,
    qt_meta_data_OCC__FolderWizardRemotePath,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::FolderWizardRemotePath::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderWizardRemotePath::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__FolderWizardRemotePath.stringdata0))
        return static_cast<void*>(this);
    return FormatWarningsWizardPage::qt_metacast(_clname);
}

int OCC::FolderWizardRemotePath::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FormatWarningsWizardPage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_OCC__FolderWizardSelectiveSync_t {
    QByteArrayData data[3];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__FolderWizardSelectiveSync_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__FolderWizardSelectiveSync_t qt_meta_stringdata_OCC__FolderWizardSelectiveSync = {
    {
QT_MOC_LITERAL(0, 0, 30), // "OCC::FolderWizardSelectiveSync"
QT_MOC_LITERAL(1, 31, 27), // "virtualFilesCheckboxClicked"
QT_MOC_LITERAL(2, 59, 0) // ""

    },
    "OCC::FolderWizardSelectiveSync\0"
    "virtualFilesCheckboxClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__FolderWizardSelectiveSync[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::FolderWizardSelectiveSync::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderWizardSelectiveSync *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->virtualFilesCheckboxClicked(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::FolderWizardSelectiveSync::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_OCC__FolderWizardSelectiveSync.data,
    qt_meta_data_OCC__FolderWizardSelectiveSync,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::FolderWizardSelectiveSync::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderWizardSelectiveSync::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__FolderWizardSelectiveSync.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int OCC::FolderWizardSelectiveSync::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OCC__FolderWizard_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__FolderWizard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__FolderWizard_t qt_meta_stringdata_OCC__FolderWizard = {
    {
QT_MOC_LITERAL(0, 0, 17) // "OCC::FolderWizard"

    },
    "OCC::FolderWizard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__FolderWizard[] = {

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

void OCC::FolderWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OCC::FolderWizard::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizard::staticMetaObject>(),
    qt_meta_stringdata_OCC__FolderWizard.data,
    qt_meta_data_OCC__FolderWizard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::FolderWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__FolderWizard.stringdata0))
        return static_cast<void*>(this);
    return QWizard::qt_metacast(_clname);
}

int OCC::FolderWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
