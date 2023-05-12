/****************************************************************************
** Meta object code from reading C++ file 'wheelhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/3rdparty/kirigami/wheelhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wheelhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KirigamiWheelEvent_t {
    QByteArrayData data[9];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KirigamiWheelEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KirigamiWheelEvent_t qt_meta_stringdata_KirigamiWheelEvent = {
    {
QT_MOC_LITERAL(0, 0, 18), // "KirigamiWheelEvent"
QT_MOC_LITERAL(1, 19, 1), // "x"
QT_MOC_LITERAL(2, 21, 1), // "y"
QT_MOC_LITERAL(3, 23, 10), // "angleDelta"
QT_MOC_LITERAL(4, 34, 10), // "pixelDelta"
QT_MOC_LITERAL(5, 45, 7), // "buttons"
QT_MOC_LITERAL(6, 53, 9), // "modifiers"
QT_MOC_LITERAL(7, 63, 8), // "inverted"
QT_MOC_LITERAL(8, 72, 8) // "accepted"

    },
    "KirigamiWheelEvent\0x\0y\0angleDelta\0"
    "pixelDelta\0buttons\0modifiers\0inverted\0"
    "accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KirigamiWheelEvent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095401,
       2, QMetaType::QReal, 0x00095401,
       3, QMetaType::QPointF, 0x00095401,
       4, QMetaType::QPointF, 0x00095401,
       5, QMetaType::Int, 0x00095401,
       6, QMetaType::Int, 0x00095401,
       7, QMetaType::Bool, 0x00095401,
       8, QMetaType::Bool, 0x00095103,

       0        // eod
};

void KirigamiWheelEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KirigamiWheelEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->angleDelta(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = _t->pixelDelta(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->buttons(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->modifiers(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->inverted(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KirigamiWheelEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 7: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject KirigamiWheelEvent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KirigamiWheelEvent.data,
    qt_meta_data_KirigamiWheelEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KirigamiWheelEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KirigamiWheelEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KirigamiWheelEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KirigamiWheelEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_WheelFilterItem_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WheelFilterItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WheelFilterItem_t qt_meta_stringdata_WheelFilterItem = {
    {
QT_MOC_LITERAL(0, 0, 15) // "WheelFilterItem"

    },
    "WheelFilterItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WheelFilterItem[] = {

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

void WheelFilterItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject WheelFilterItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_WheelFilterItem.data,
    qt_meta_data_WheelFilterItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WheelFilterItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WheelFilterItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WheelFilterItem.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int WheelFilterItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WheelHandler_t {
    QByteArrayData data[27];
    char stringdata0[464];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WheelHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WheelHandler_t qt_meta_stringdata_WheelHandler = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WheelHandler"
QT_MOC_LITERAL(1, 13, 13), // "targetChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 23), // "verticalStepSizeChanged"
QT_MOC_LITERAL(4, 52, 25), // "horizontalStepSizeChanged"
QT_MOC_LITERAL(5, 78, 26), // "pageScrollModifiersChanged"
QT_MOC_LITERAL(6, 105, 24), // "filterMouseEventsChanged"
QT_MOC_LITERAL(7, 130, 27), // "keyNavigationEnabledChanged"
QT_MOC_LITERAL(8, 158, 23), // "blockTargetWheelChanged"
QT_MOC_LITERAL(9, 182, 28), // "scrollFlickableTargetChanged"
QT_MOC_LITERAL(10, 211, 5), // "wheel"
QT_MOC_LITERAL(11, 217, 19), // "KirigamiWheelEvent*"
QT_MOC_LITERAL(12, 237, 8), // "scrollUp"
QT_MOC_LITERAL(13, 246, 8), // "stepSize"
QT_MOC_LITERAL(14, 255, 10), // "scrollDown"
QT_MOC_LITERAL(15, 266, 10), // "scrollLeft"
QT_MOC_LITERAL(16, 277, 11), // "scrollRight"
QT_MOC_LITERAL(17, 289, 6), // "target"
QT_MOC_LITERAL(18, 296, 11), // "QQuickItem*"
QT_MOC_LITERAL(19, 308, 16), // "verticalStepSize"
QT_MOC_LITERAL(20, 325, 18), // "horizontalStepSize"
QT_MOC_LITERAL(21, 344, 19), // "pageScrollModifiers"
QT_MOC_LITERAL(22, 364, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(23, 386, 17), // "filterMouseEvents"
QT_MOC_LITERAL(24, 404, 20), // "keyNavigationEnabled"
QT_MOC_LITERAL(25, 425, 16), // "blockTargetWheel"
QT_MOC_LITERAL(26, 442, 21) // "scrollFlickableTarget"

    },
    "WheelHandler\0targetChanged\0\0"
    "verticalStepSizeChanged\0"
    "horizontalStepSizeChanged\0"
    "pageScrollModifiersChanged\0"
    "filterMouseEventsChanged\0"
    "keyNavigationEnabledChanged\0"
    "blockTargetWheelChanged\0"
    "scrollFlickableTargetChanged\0wheel\0"
    "KirigamiWheelEvent*\0scrollUp\0stepSize\0"
    "scrollDown\0scrollLeft\0scrollRight\0"
    "target\0QQuickItem*\0verticalStepSize\0"
    "horizontalStepSize\0pageScrollModifiers\0"
    "Qt::KeyboardModifiers\0filterMouseEvents\0"
    "keyNavigationEnabled\0blockTargetWheel\0"
    "scrollFlickableTarget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WheelHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       8,  126, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,
       6,    0,  103,    2, 0x06 /* Public */,
       7,    0,  104,    2, 0x06 /* Public */,
       8,    0,  105,    2, 0x06 /* Public */,
       9,    0,  106,    2, 0x06 /* Public */,
      10,    1,  107,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    1,  110,    2, 0x02 /* Public */,
      12,    0,  113,    2, 0x22 /* Public | MethodCloned */,
      14,    1,  114,    2, 0x02 /* Public */,
      14,    0,  117,    2, 0x22 /* Public | MethodCloned */,
      15,    1,  118,    2, 0x02 /* Public */,
      15,    0,  121,    2, 0x22 /* Public | MethodCloned */,
      16,    1,  122,    2, 0x02 /* Public */,
      16,    0,  125,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   10,

 // methods: parameters
    QMetaType::Bool, QMetaType::QReal,   13,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QReal,   13,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QReal,   13,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QReal,   13,
    QMetaType::Bool,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x0049590b,
      19, QMetaType::QReal, 0x00495907,
      20, QMetaType::QReal, 0x00495907,
      21, 0x80000000 | 22, 0x0049590f,
      23, QMetaType::Bool, 0x00495903,
      24, QMetaType::Bool, 0x00495903,
      25, QMetaType::Bool, 0x00495003,
      26, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

void WheelHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WheelHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->targetChanged(); break;
        case 1: _t->verticalStepSizeChanged(); break;
        case 2: _t->horizontalStepSizeChanged(); break;
        case 3: _t->pageScrollModifiersChanged(); break;
        case 4: _t->filterMouseEventsChanged(); break;
        case 5: _t->keyNavigationEnabledChanged(); break;
        case 6: _t->blockTargetWheelChanged(); break;
        case 7: _t->scrollFlickableTargetChanged(); break;
        case 8: _t->wheel((*reinterpret_cast< KirigamiWheelEvent*(*)>(_a[1]))); break;
        case 9: { bool _r = _t->scrollUp((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->scrollUp();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->scrollDown((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->scrollDown();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->scrollLeft((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->scrollLeft();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->scrollRight((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->scrollRight();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KirigamiWheelEvent* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WheelHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WheelHandler::targetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WheelHandler::verticalStepSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WheelHandler::horizontalStepSizeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WheelHandler::pageScrollModifiersChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WheelHandler::filterMouseEventsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WheelHandler::keyNavigationEnabledChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WheelHandler::blockTargetWheelChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WheelHandler::scrollFlickableTargetChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)(KirigamiWheelEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WheelHandler::wheel)) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<WheelHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->target(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->verticalStepSize(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->horizontalStepSize(); break;
        case 3: *reinterpret_cast< Qt::KeyboardModifiers*>(_v) = _t->pageScrollModifiers(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->filterMouseEvents(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->keyNavigationEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->m_blockTargetWheel; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->m_scrollFlickableTarget; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<WheelHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTarget(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 1: _t->setVerticalStepSize(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setHorizontalStepSize(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setPageScrollModifiers(*reinterpret_cast< Qt::KeyboardModifiers*>(_v)); break;
        case 4: _t->setFilterMouseEvents(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setKeyNavigationEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6:
            if (_t->m_blockTargetWheel != *reinterpret_cast< bool*>(_v)) {
                _t->m_blockTargetWheel = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->blockTargetWheelChanged();
            }
            break;
        case 7:
            if (_t->m_scrollFlickableTarget != *reinterpret_cast< bool*>(_v)) {
                _t->m_scrollFlickableTarget = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->scrollFlickableTargetChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        WheelHandler *_t = static_cast<WheelHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 1: _t->resetVerticalStepSize(); break;
        case 2: _t->resetHorizontalStepSize(); break;
        case 3: _t->resetPageScrollModifiers(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject WheelHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WheelHandler.data,
    qt_meta_data_WheelHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WheelHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WheelHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WheelHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WheelHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WheelHandler::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WheelHandler::verticalStepSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WheelHandler::horizontalStepSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WheelHandler::pageScrollModifiersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WheelHandler::filterMouseEventsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WheelHandler::keyNavigationEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void WheelHandler::blockTargetWheelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void WheelHandler::scrollFlickableTargetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void WheelHandler::wheel(KirigamiWheelEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
