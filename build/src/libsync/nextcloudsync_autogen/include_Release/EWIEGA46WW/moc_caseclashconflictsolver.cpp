/****************************************************************************
** Meta object code from reading C++ file 'caseclashconflictsolver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/caseclashconflictsolver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caseclashconflictsolver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__CaseClashConflictSolver_t {
    QByteArrayData data[21];
    char stringdata0[397];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__CaseClashConflictSolver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__CaseClashConflictSolver_t qt_meta_stringdata_OCC__CaseClashConflictSolver = {
    {
QT_MOC_LITERAL(0, 0, 28), // "OCC::CaseClashConflictSolver"
QT_MOC_LITERAL(1, 29, 22), // "allowedToRenameChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 18), // "errorStringChanged"
QT_MOC_LITERAL(4, 72, 4), // "done"
QT_MOC_LITERAL(5, 77, 6), // "failed"
QT_MOC_LITERAL(6, 84, 13), // "solveConflict"
QT_MOC_LITERAL(7, 98, 11), // "newFilename"
QT_MOC_LITERAL(8, 110, 22), // "checkIfAllowedToRename"
QT_MOC_LITERAL(9, 133, 36), // "onRemoteDestinationFileAlread..."
QT_MOC_LITERAL(10, 170, 35), // "onRemoteDestinationFileDoesNo..."
QT_MOC_LITERAL(11, 206, 27), // "onPropfindPermissionSuccess"
QT_MOC_LITERAL(12, 234, 6), // "values"
QT_MOC_LITERAL(13, 241, 25), // "onPropfindPermissionError"
QT_MOC_LITERAL(14, 267, 14), // "QNetworkReply*"
QT_MOC_LITERAL(15, 282, 5), // "reply"
QT_MOC_LITERAL(16, 288, 31), // "onRemoteSourceFileAlreadyExists"
QT_MOC_LITERAL(17, 320, 30), // "onRemoteSourceFileDoesNotExist"
QT_MOC_LITERAL(18, 351, 17), // "onMoveJobFinished"
QT_MOC_LITERAL(19, 369, 15), // "allowedToRename"
QT_MOC_LITERAL(20, 385, 11) // "errorString"

    },
    "OCC::CaseClashConflictSolver\0"
    "allowedToRenameChanged\0\0errorStringChanged\0"
    "done\0failed\0solveConflict\0newFilename\0"
    "checkIfAllowedToRename\0"
    "onRemoteDestinationFileAlreadyExists\0"
    "onRemoteDestinationFileDoesNotExist\0"
    "onPropfindPermissionSuccess\0values\0"
    "onPropfindPermissionError\0QNetworkReply*\0"
    "reply\0onRemoteSourceFileAlreadyExists\0"
    "onRemoteSourceFileDoesNotExist\0"
    "onMoveJobFinished\0allowedToRename\0"
    "errorString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__CaseClashConflictSolver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       2,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   83,    2, 0x0a /* Public */,
       8,    0,   86,    2, 0x0a /* Public */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      13,    1,   92,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,
      17,    0,   96,    2, 0x08 /* Private */,
      18,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      19, QMetaType::Bool, 0x00495001,
      20, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void OCC::CaseClashConflictSolver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CaseClashConflictSolver *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->allowedToRenameChanged(); break;
        case 1: _t->errorStringChanged(); break;
        case 2: _t->done(); break;
        case 3: _t->failed(); break;
        case 4: _t->solveConflict((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->checkIfAllowedToRename(); break;
        case 6: _t->onRemoteDestinationFileAlreadyExists(); break;
        case 7: _t->onRemoteDestinationFileDoesNotExist(); break;
        case 8: _t->onPropfindPermissionSuccess((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 9: _t->onPropfindPermissionError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->onRemoteSourceFileAlreadyExists(); break;
        case 11: _t->onRemoteSourceFileDoesNotExist(); break;
        case 12: _t->onMoveJobFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CaseClashConflictSolver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CaseClashConflictSolver::allowedToRenameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CaseClashConflictSolver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CaseClashConflictSolver::errorStringChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CaseClashConflictSolver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CaseClashConflictSolver::done)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CaseClashConflictSolver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CaseClashConflictSolver::failed)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CaseClashConflictSolver *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->allowedToRename(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OCC::CaseClashConflictSolver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__CaseClashConflictSolver.data,
    qt_meta_data_OCC__CaseClashConflictSolver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::CaseClashConflictSolver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::CaseClashConflictSolver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__CaseClashConflictSolver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::CaseClashConflictSolver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OCC::CaseClashConflictSolver::allowedToRenameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::CaseClashConflictSolver::errorStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::CaseClashConflictSolver::done()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::CaseClashConflictSolver::failed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
