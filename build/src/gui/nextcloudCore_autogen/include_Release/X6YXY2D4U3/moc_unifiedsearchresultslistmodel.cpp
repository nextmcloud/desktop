/****************************************************************************
** Meta object code from reading C++ file 'unifiedsearchresultslistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/tray/unifiedsearchresultslistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'unifiedsearchresultslistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__UnifiedSearchResultsListModel_t {
    QByteArrayData data[23];
    char stringdata0[468];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__UnifiedSearchResultsListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__UnifiedSearchResultsListModel_t qt_meta_stringdata_OCC__UnifiedSearchResultsListModel = {
    {
QT_MOC_LITERAL(0, 0, 34), // "OCC::UnifiedSearchResultsList..."
QT_MOC_LITERAL(1, 35, 43), // "currentFetchMoreInProgressPro..."
QT_MOC_LITERAL(2, 79, 0), // ""
QT_MOC_LITERAL(3, 80, 25), // "isSearchInProgressChanged"
QT_MOC_LITERAL(4, 106, 18), // "errorStringChanged"
QT_MOC_LITERAL(5, 125, 17), // "searchTermChanged"
QT_MOC_LITERAL(6, 143, 34), // "waitingForSearchTermEditEndCh..."
QT_MOC_LITERAL(7, 178, 13), // "setSearchTerm"
QT_MOC_LITERAL(8, 192, 4), // "term"
QT_MOC_LITERAL(9, 197, 29), // "slotSearchTermEditingFinished"
QT_MOC_LITERAL(10, 227, 26), // "slotFetchProvidersFinished"
QT_MOC_LITERAL(11, 254, 4), // "json"
QT_MOC_LITERAL(12, 259, 10), // "statusCode"
QT_MOC_LITERAL(13, 270, 29), // "slotSearchForProviderFinished"
QT_MOC_LITERAL(14, 300, 13), // "resultClicked"
QT_MOC_LITERAL(15, 314, 10), // "providerId"
QT_MOC_LITERAL(16, 325, 11), // "resourceUrl"
QT_MOC_LITERAL(17, 337, 23), // "fetchMoreTriggerClicked"
QT_MOC_LITERAL(18, 361, 18), // "isSearchInProgress"
QT_MOC_LITERAL(19, 380, 36), // "currentFetchMoreInProgressPro..."
QT_MOC_LITERAL(20, 417, 11), // "errorString"
QT_MOC_LITERAL(21, 429, 10), // "searchTerm"
QT_MOC_LITERAL(22, 440, 27) // "waitingForSearchTermEditEnd"

    },
    "OCC::UnifiedSearchResultsListModel\0"
    "currentFetchMoreInProgressProviderIdChanged\0"
    "\0isSearchInProgressChanged\0"
    "errorStringChanged\0searchTermChanged\0"
    "waitingForSearchTermEditEndChanged\0"
    "setSearchTerm\0term\0slotSearchTermEditingFinished\0"
    "slotFetchProvidersFinished\0json\0"
    "statusCode\0slotSearchForProviderFinished\0"
    "resultClicked\0providerId\0resourceUrl\0"
    "fetchMoreTriggerClicked\0isSearchInProgress\0"
    "currentFetchMoreInProgressProviderId\0"
    "errorString\0searchTerm\0"
    "waitingForSearchTermEditEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__UnifiedSearchResultsListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       5,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   74,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    2,   78,    2, 0x08 /* Private */,
      13,    2,   83,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      14,    2,   88,    2, 0x02 /* Public */,
      17,    1,   93,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,   11,   12,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,   15,   16,
    QMetaType::Void, QMetaType::QString,   15,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00495001,
      19, QMetaType::QString, 0x00495001,
      20, QMetaType::QString, 0x00495001,
      21, QMetaType::QString, 0x00495103,
      22, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       1,
       0,
       2,
       3,
       4,

       0        // eod
};

void OCC::UnifiedSearchResultsListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UnifiedSearchResultsListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentFetchMoreInProgressProviderIdChanged(); break;
        case 1: _t->isSearchInProgressChanged(); break;
        case 2: _t->errorStringChanged(); break;
        case 3: _t->searchTermChanged(); break;
        case 4: _t->waitingForSearchTermEditEndChanged(); break;
        case 5: _t->setSearchTerm((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotSearchTermEditingFinished(); break;
        case 7: _t->slotFetchProvidersFinished((*reinterpret_cast< const QJsonDocument(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->slotSearchForProviderFinished((*reinterpret_cast< const QJsonDocument(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->resultClicked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 10: _t->fetchMoreTriggerClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UnifiedSearchResultsListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UnifiedSearchResultsListModel::currentFetchMoreInProgressProviderIdChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UnifiedSearchResultsListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UnifiedSearchResultsListModel::isSearchInProgressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UnifiedSearchResultsListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UnifiedSearchResultsListModel::errorStringChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UnifiedSearchResultsListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UnifiedSearchResultsListModel::searchTermChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UnifiedSearchResultsListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UnifiedSearchResultsListModel::waitingForSearchTermEditEndChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UnifiedSearchResultsListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isSearchInProgress(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->currentFetchMoreInProgressProviderId(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->searchTerm(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->waitingForSearchTermEditEnd(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UnifiedSearchResultsListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setSearchTerm(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OCC::UnifiedSearchResultsListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_OCC__UnifiedSearchResultsListModel.data,
    qt_meta_data_OCC__UnifiedSearchResultsListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::UnifiedSearchResultsListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UnifiedSearchResultsListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__UnifiedSearchResultsListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::UnifiedSearchResultsListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OCC::UnifiedSearchResultsListModel::currentFetchMoreInProgressProviderIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::UnifiedSearchResultsListModel::isSearchInProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::UnifiedSearchResultsListModel::errorStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::UnifiedSearchResultsListModel::searchTermChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::UnifiedSearchResultsListModel::waitingForSearchTermEditEndChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
