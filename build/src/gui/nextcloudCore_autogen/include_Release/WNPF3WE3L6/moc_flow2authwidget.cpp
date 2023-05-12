/****************************************************************************
** Meta object code from reading C++ file 'flow2authwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/wizard/flow2authwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flow2authwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__Flow2AuthWidget_t {
    QByteArrayData data[17];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__Flow2AuthWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__Flow2AuthWidget_t qt_meta_stringdata_OCC__Flow2AuthWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OCC::Flow2AuthWidget"
QT_MOC_LITERAL(1, 21, 10), // "authResult"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "Flow2Auth::Result"
QT_MOC_LITERAL(4, 51, 11), // "errorString"
QT_MOC_LITERAL(5, 63, 4), // "user"
QT_MOC_LITERAL(6, 68, 11), // "appPassword"
QT_MOC_LITERAL(7, 80, 7), // "pollNow"
QT_MOC_LITERAL(8, 88, 14), // "slotAuthResult"
QT_MOC_LITERAL(9, 103, 11), // "slotPollNow"
QT_MOC_LITERAL(10, 115, 17), // "slotStatusChanged"
QT_MOC_LITERAL(11, 133, 21), // "Flow2Auth::PollStatus"
QT_MOC_LITERAL(12, 155, 6), // "status"
QT_MOC_LITERAL(13, 162, 11), // "secondsLeft"
QT_MOC_LITERAL(14, 174, 16), // "slotStyleChanged"
QT_MOC_LITERAL(15, 191, 15), // "slotOpenBrowser"
QT_MOC_LITERAL(16, 207, 23) // "slotCopyLinkToClipboard"

    },
    "OCC::Flow2AuthWidget\0authResult\0\0"
    "Flow2Auth::Result\0errorString\0user\0"
    "appPassword\0pollNow\0slotAuthResult\0"
    "slotPollNow\0slotStatusChanged\0"
    "Flow2Auth::PollStatus\0status\0secondsLeft\0"
    "slotStyleChanged\0slotOpenBrowser\0"
    "slotCopyLinkToClipboard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__Flow2AuthWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   54,    2, 0x06 /* Public */,
       7,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    4,   64,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    2,   74,    2, 0x0a /* Public */,
      14,    0,   79,    2, 0x0a /* Public */,
      15,    0,   80,    2, 0x09 /* Protected */,
      16,    0,   81,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    4,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::Flow2AuthWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Flow2AuthWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authResult((*reinterpret_cast< Flow2Auth::Result(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->pollNow(); break;
        case 2: _t->slotAuthResult((*reinterpret_cast< Flow2Auth::Result(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 3: _t->slotPollNow(); break;
        case 4: _t->slotStatusChanged((*reinterpret_cast< Flow2Auth::PollStatus(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->slotStyleChanged(); break;
        case 6: _t->slotOpenBrowser(); break;
        case 7: _t->slotCopyLinkToClipboard(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Flow2AuthWidget::*)(Flow2Auth::Result , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Flow2AuthWidget::authResult)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Flow2AuthWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Flow2AuthWidget::pollNow)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::Flow2AuthWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_OCC__Flow2AuthWidget.data,
    qt_meta_data_OCC__Flow2AuthWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::Flow2AuthWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Flow2AuthWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__Flow2AuthWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OCC::Flow2AuthWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OCC::Flow2AuthWidget::authResult(Flow2Auth::Result _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::Flow2AuthWidget::pollNow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
