/****************************************************************************
** Meta object code from reading C++ file 'abstractnetworkjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/libsync/abstractnetworkjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractnetworkjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__AbstractNetworkJob_t {
    QByteArrayData data[14];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__AbstractNetworkJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__AbstractNetworkJob_t qt_meta_stringdata_OCC__AbstractNetworkJob = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OCC::AbstractNetworkJob"
QT_MOC_LITERAL(1, 24, 12), // "networkError"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 53, 5), // "reply"
QT_MOC_LITERAL(5, 59, 15), // "networkActivity"
QT_MOC_LITERAL(6, 75, 10), // "redirected"
QT_MOC_LITERAL(7, 86, 9), // "targetUrl"
QT_MOC_LITERAL(8, 96, 13), // "redirectCount"
QT_MOC_LITERAL(9, 110, 10), // "setTimeout"
QT_MOC_LITERAL(10, 121, 4), // "msec"
QT_MOC_LITERAL(11, 126, 12), // "resetTimeout"
QT_MOC_LITERAL(12, 139, 12), // "slotFinished"
QT_MOC_LITERAL(13, 152, 11) // "slotTimeout"

    },
    "OCC::AbstractNetworkJob\0networkError\0"
    "\0QNetworkReply*\0reply\0networkActivity\0"
    "redirected\0targetUrl\0redirectCount\0"
    "setTimeout\0msec\0resetTimeout\0slotFinished\0"
    "slotTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__AbstractNetworkJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    3,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   60,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x0a /* Public */,
      12,    0,   64,    2, 0x08 /* Private */,
      13,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QUrl, QMetaType::Int,    4,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::AbstractNetworkJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractNetworkJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->networkError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: _t->networkActivity(); break;
        case 2: _t->redirected((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->setTimeout((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->resetTimeout(); break;
        case 5: _t->slotFinished(); break;
        case 6: _t->slotTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractNetworkJob::*)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractNetworkJob::networkError)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractNetworkJob::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractNetworkJob::networkActivity)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractNetworkJob::*)(QNetworkReply * , const QUrl & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractNetworkJob::redirected)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::AbstractNetworkJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__AbstractNetworkJob.data,
    qt_meta_data_OCC__AbstractNetworkJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::AbstractNetworkJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AbstractNetworkJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__AbstractNetworkJob.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::AbstractNetworkJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OCC::AbstractNetworkJob::networkError(QNetworkReply * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::AbstractNetworkJob::networkActivity()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::AbstractNetworkJob::redirected(QNetworkReply * _t1, const QUrl & _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
