/****************************************************************************
** Meta object code from reading C++ file 'emojimodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/emojimodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emojimodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__Emoji_t {
    QByteArrayData data[4];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__Emoji_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__Emoji_t qt_meta_stringdata_OCC__Emoji = {
    {
QT_MOC_LITERAL(0, 0, 10), // "OCC::Emoji"
QT_MOC_LITERAL(1, 11, 7), // "unicode"
QT_MOC_LITERAL(2, 19, 9), // "shortname"
QT_MOC_LITERAL(3, 29, 8) // "isCustom"

    },
    "OCC::Emoji\0unicode\0shortname\0isCustom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__Emoji[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QString, 0x00095003,
       3, QMetaType::Bool, 0x00095003,

       0        // eod
};

void OCC::Emoji::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Emoji *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->unicode; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->shortname; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isCustom; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<Emoji *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->unicode != *reinterpret_cast< QString*>(_v)) {
                _t->unicode = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->shortname != *reinterpret_cast< QString*>(_v)) {
                _t->shortname = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->isCustom != *reinterpret_cast< bool*>(_v)) {
                _t->isCustom = *reinterpret_cast< bool*>(_v);
            }
            break;
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

QT_INIT_METAOBJECT const QMetaObject OCC::Emoji::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_OCC__Emoji.data,
    qt_meta_data_OCC__Emoji,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_OCC__EmojiModel_t {
    QByteArrayData data[20];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__EmojiModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__EmojiModel_t qt_meta_stringdata_OCC__EmojiModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OCC::EmojiModel"
QT_MOC_LITERAL(1, 16, 14), // "historyChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "modelChanged"
QT_MOC_LITERAL(4, 45, 7), // "history"
QT_MOC_LITERAL(5, 53, 11), // "setCategory"
QT_MOC_LITERAL(6, 65, 8), // "category"
QT_MOC_LITERAL(7, 74, 9), // "emojiUsed"
QT_MOC_LITERAL(8, 84, 9), // "modelData"
QT_MOC_LITERAL(9, 94, 5), // "model"
QT_MOC_LITERAL(10, 100, 20), // "emojiCategoriesModel"
QT_MOC_LITERAL(11, 121, 19), // "QAbstractListModel*"
QT_MOC_LITERAL(12, 141, 6), // "people"
QT_MOC_LITERAL(13, 148, 6), // "nature"
QT_MOC_LITERAL(14, 155, 4), // "food"
QT_MOC_LITERAL(15, 160, 8), // "activity"
QT_MOC_LITERAL(16, 169, 6), // "travel"
QT_MOC_LITERAL(17, 176, 7), // "objects"
QT_MOC_LITERAL(18, 184, 7), // "symbols"
QT_MOC_LITERAL(19, 192, 5) // "flags"

    },
    "OCC::EmojiModel\0historyChanged\0\0"
    "modelChanged\0history\0setCategory\0"
    "category\0emojiUsed\0modelData\0model\0"
    "emojiCategoriesModel\0QAbstractListModel*\0"
    "people\0nature\0food\0activity\0travel\0"
    "objects\0symbols\0flags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__EmojiModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
      11,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x02 /* Public */,
       5,    1,   42,    2, 0x02 /* Public */,
       7,    1,   45,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariantList,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QVariant,    8,

 // properties: name, type, flags
       9, QMetaType::QVariantList, 0x00495001,
      10, 0x80000000 | 11, 0x00095409,
       4, QMetaType::QVariantList, 0x00495001,
      12, QMetaType::QVariantList, 0x00095401,
      13, QMetaType::QVariantList, 0x00095401,
      14, QMetaType::QVariantList, 0x00095401,
      15, QMetaType::QVariantList, 0x00095401,
      16, QMetaType::QVariantList, 0x00095401,
      17, QMetaType::QVariantList, 0x00095401,
      18, QMetaType::QVariantList, 0x00095401,
      19, QMetaType::QVariantList, 0x00095401,

 // properties: notify_signal_id
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void OCC::EmojiModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EmojiModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->historyChanged(); break;
        case 1: _t->modelChanged(); break;
        case 2: { QVariantList _r = _t->history();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setCategory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->emojiUsed((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EmojiModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EmojiModel::historyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EmojiModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EmojiModel::modelChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EmojiModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->model(); break;
        case 1: *reinterpret_cast< QAbstractListModel**>(_v) = _t->emojiCategoriesModel(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->history(); break;
        case 3: *reinterpret_cast< QVariantList*>(_v) = _t->people; break;
        case 4: *reinterpret_cast< QVariantList*>(_v) = _t->nature; break;
        case 5: *reinterpret_cast< QVariantList*>(_v) = _t->food; break;
        case 6: *reinterpret_cast< QVariantList*>(_v) = _t->activity; break;
        case 7: *reinterpret_cast< QVariantList*>(_v) = _t->travel; break;
        case 8: *reinterpret_cast< QVariantList*>(_v) = _t->objects; break;
        case 9: *reinterpret_cast< QVariantList*>(_v) = _t->symbols; break;
        case 10: *reinterpret_cast< QVariantList*>(_v) = _t->flags; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OCC::EmojiModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__EmojiModel.data,
    qt_meta_data_OCC__EmojiModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::EmojiModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::EmojiModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__EmojiModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::EmojiModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OCC::EmojiModel::historyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::EmojiModel::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
