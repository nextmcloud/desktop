/****************************************************************************
** Meta object code from reading C++ file 'sharetestutils.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../test/sharetestutils.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sharetestutils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShareTestHelper_t {
    QByteArrayData data[22];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShareTestHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShareTestHelper_t qt_meta_stringdata_ShareTestHelper = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ShareTestHelper"
QT_MOC_LITERAL(1, 16, 14), // "setupSucceeded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "setup"
QT_MOC_LITERAL(4, 38, 20), // "appendShareReplyData"
QT_MOC_LITERAL(5, 59, 19), // "FakeShareDefinition"
QT_MOC_LITERAL(6, 79, 10), // "definition"
QT_MOC_LITERAL(7, 90, 15), // "resetTestShares"
QT_MOC_LITERAL(8, 106, 13), // "resetTestData"
QT_MOC_LITERAL(9, 120, 12), // "qnamOverride"
QT_MOC_LITERAL(10, 133, 14), // "QNetworkReply*"
QT_MOC_LITERAL(11, 148, 32), // "QNetworkAccessManager::Operation"
QT_MOC_LITERAL(12, 181, 2), // "op"
QT_MOC_LITERAL(13, 184, 15), // "QNetworkRequest"
QT_MOC_LITERAL(14, 200, 3), // "req"
QT_MOC_LITERAL(15, 204, 10), // "QIODevice*"
QT_MOC_LITERAL(16, 215, 6), // "device"
QT_MOC_LITERAL(17, 222, 24), // "handleSharePostOperation"
QT_MOC_LITERAL(18, 247, 23), // "handleSharePutOperation"
QT_MOC_LITERAL(19, 271, 7), // "reqPath"
QT_MOC_LITERAL(20, 279, 26), // "handleShareDeleteOperation"
QT_MOC_LITERAL(21, 306, 23) // "handleShareGetOperation"

    },
    "ShareTestHelper\0setupSucceeded\0\0setup\0"
    "appendShareReplyData\0FakeShareDefinition\0"
    "definition\0resetTestShares\0resetTestData\0"
    "qnamOverride\0QNetworkReply*\0"
    "QNetworkAccessManager::Operation\0op\0"
    "QNetworkRequest\0req\0QIODevice*\0device\0"
    "handleSharePostOperation\0"
    "handleSharePutOperation\0reqPath\0"
    "handleShareDeleteOperation\0"
    "handleShareGetOperation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShareTestHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x0a /* Public */,
       4,    1,   66,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    3,   71,    2, 0x08 /* Private */,
      17,    3,   78,    2, 0x08 /* Private */,
      18,    4,   85,    2, 0x08 /* Private */,
      20,    3,   94,    2, 0x08 /* Private */,
      21,    3,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 10, 0x80000000 | 11, 0x80000000 | 13, 0x80000000 | 15,   12,   14,   16,
    0x80000000 | 10, 0x80000000 | 11, 0x80000000 | 13, 0x80000000 | 15,   12,   14,   16,
    0x80000000 | 10, 0x80000000 | 11, 0x80000000 | 13, QMetaType::QString, 0x80000000 | 15,   12,   14,   19,   16,
    0x80000000 | 10, 0x80000000 | 11, 0x80000000 | 13, QMetaType::QString,   12,   14,   19,
    0x80000000 | 10, 0x80000000 | 11, 0x80000000 | 13, QMetaType::QString,   12,   14,   19,

       0        // eod
};

void ShareTestHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShareTestHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setupSucceeded(); break;
        case 1: _t->setup(); break;
        case 2: _t->appendShareReplyData((*reinterpret_cast< const FakeShareDefinition(*)>(_a[1]))); break;
        case 3: _t->resetTestShares(); break;
        case 4: _t->resetTestData(); break;
        case 5: { QNetworkReply* _r = _t->qnamOverride((*reinterpret_cast< const QNetworkAccessManager::Operation(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 6: { QNetworkReply* _r = _t->handleSharePostOperation((*reinterpret_cast< const QNetworkAccessManager::Operation(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 7: { QNetworkReply* _r = _t->handleSharePutOperation((*reinterpret_cast< const QNetworkAccessManager::Operation(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QIODevice*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 8: { QNetworkReply* _r = _t->handleShareDeleteOperation((*reinterpret_cast< const QNetworkAccessManager::Operation(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        case 9: { QNetworkReply* _r = _t->handleShareGetOperation((*reinterpret_cast< const QNetworkAccessManager::Operation(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShareTestHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareTestHelper::setupSucceeded)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ShareTestHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ShareTestHelper.data,
    qt_meta_data_ShareTestHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShareTestHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShareTestHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShareTestHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ShareTestHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ShareTestHelper::setupSucceeded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
