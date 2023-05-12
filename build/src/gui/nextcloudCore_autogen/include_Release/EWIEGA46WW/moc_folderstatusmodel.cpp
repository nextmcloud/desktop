/****************************************************************************
** Meta object code from reading C++ file 'folderstatusmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/folderstatusmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderstatusmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__FolderStatusModel_t {
    QByteArrayData data[31];
    char stringdata0[539];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__FolderStatusModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__FolderStatusModel_t qt_meta_stringdata_OCC__FolderStatusModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OCC::FolderStatusModel"
QT_MOC_LITERAL(1, 23, 12), // "dirtyChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "suggestExpand"
QT_MOC_LITERAL(4, 51, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 63, 21), // "slotUpdateFolderState"
QT_MOC_LITERAL(6, 85, 12), // "OCC::Folder*"
QT_MOC_LITERAL(7, 98, 22), // "slotApplySelectiveSync"
QT_MOC_LITERAL(8, 121, 12), // "resetFolders"
QT_MOC_LITERAL(9, 134, 28), // "slotSyncAllPendingBigFolders"
QT_MOC_LITERAL(10, 163, 27), // "slotSyncNoPendingBigFolders"
QT_MOC_LITERAL(11, 191, 15), // "slotSetProgress"
QT_MOC_LITERAL(12, 207, 17), // "OCC::ProgressInfo"
QT_MOC_LITERAL(13, 225, 8), // "progress"
QT_MOC_LITERAL(14, 234, 25), // "e2eInitializationFinished"
QT_MOC_LITERAL(15, 260, 22), // "isNewMnemonicGenerated"
QT_MOC_LITERAL(16, 283, 21), // "slotUpdateDirectories"
QT_MOC_LITERAL(17, 305, 21), // "slotGatherPermissions"
QT_MOC_LITERAL(18, 327, 4), // "name"
QT_MOC_LITERAL(19, 332, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(20, 354, 10), // "properties"
QT_MOC_LITERAL(21, 365, 26), // "slotGatherEncryptionStatus"
QT_MOC_LITERAL(22, 392, 4), // "href"
QT_MOC_LITERAL(23, 397, 26), // "slotLscolFinishedWithError"
QT_MOC_LITERAL(24, 424, 14), // "QNetworkReply*"
QT_MOC_LITERAL(25, 439, 1), // "r"
QT_MOC_LITERAL(26, 441, 25), // "slotFolderSyncStateChange"
QT_MOC_LITERAL(27, 467, 1), // "f"
QT_MOC_LITERAL(28, 469, 30), // "slotFolderScheduleQueueChanged"
QT_MOC_LITERAL(29, 500, 16), // "slotNewBigFolder"
QT_MOC_LITERAL(30, 517, 21) // "slotShowFetchProgress"

    },
    "OCC::FolderStatusModel\0dirtyChanged\0"
    "\0suggestExpand\0QModelIndex\0"
    "slotUpdateFolderState\0OCC::Folder*\0"
    "slotApplySelectiveSync\0resetFolders\0"
    "slotSyncAllPendingBigFolders\0"
    "slotSyncNoPendingBigFolders\0slotSetProgress\0"
    "OCC::ProgressInfo\0progress\0"
    "e2eInitializationFinished\0"
    "isNewMnemonicGenerated\0slotUpdateDirectories\0"
    "slotGatherPermissions\0name\0"
    "QMap<QString,QString>\0properties\0"
    "slotGatherEncryptionStatus\0href\0"
    "slotLscolFinishedWithError\0QNetworkReply*\0"
    "r\0slotFolderSyncStateChange\0f\0"
    "slotFolderScheduleQueueChanged\0"
    "slotNewBigFolder\0slotShowFetchProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__FolderStatusModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    1,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  103,    2, 0x0a /* Public */,
       7,    0,  106,    2, 0x0a /* Public */,
       8,    0,  107,    2, 0x0a /* Public */,
       9,    0,  108,    2, 0x0a /* Public */,
      10,    0,  109,    2, 0x0a /* Public */,
      11,    1,  110,    2, 0x0a /* Public */,
      14,    1,  113,    2, 0x0a /* Public */,
      16,    1,  116,    2, 0x08 /* Private */,
      17,    2,  119,    2, 0x08 /* Private */,
      21,    2,  124,    2, 0x08 /* Private */,
      23,    1,  129,    2, 0x08 /* Private */,
      26,    1,  132,    2, 0x08 /* Private */,
      28,    0,  135,    2, 0x08 /* Private */,
      29,    0,  136,    2, 0x08 /* Private */,
      30,    0,  137,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 19,   18,   20,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 19,   22,   20,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 6,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::FolderStatusModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderStatusModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dirtyChanged(); break;
        case 1: _t->suggestExpand((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->slotUpdateFolderState((*reinterpret_cast< OCC::Folder*(*)>(_a[1]))); break;
        case 3: _t->slotApplySelectiveSync(); break;
        case 4: _t->resetFolders(); break;
        case 5: _t->slotSyncAllPendingBigFolders(); break;
        case 6: _t->slotSyncNoPendingBigFolders(); break;
        case 7: _t->slotSetProgress((*reinterpret_cast< const OCC::ProgressInfo(*)>(_a[1]))); break;
        case 8: _t->e2eInitializationFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->slotUpdateDirectories((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 10: _t->slotGatherPermissions((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[2]))); break;
        case 11: _t->slotGatherEncryptionStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[2]))); break;
        case 12: _t->slotLscolFinishedWithError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 13: _t->slotFolderSyncStateChange((*reinterpret_cast< OCC::Folder*(*)>(_a[1]))); break;
        case 14: _t->slotFolderScheduleQueueChanged(); break;
        case 15: _t->slotNewBigFolder(); break;
        case 16: _t->slotShowFetchProgress(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FolderStatusModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderStatusModel::dirtyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FolderStatusModel::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderStatusModel::suggestExpand)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::FolderStatusModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_OCC__FolderStatusModel.data,
    qt_meta_data_OCC__FolderStatusModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::FolderStatusModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderStatusModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__FolderStatusModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int OCC::FolderStatusModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void OCC::FolderStatusModel::dirtyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::FolderStatusModel::suggestExpand(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
