/****************************************************************************
** Meta object code from reading C++ file 'activitydata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/tray/activitydata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activitydata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__ActivityLink_t {
    QByteArrayData data[7];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ActivityLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ActivityLink_t qt_meta_stringdata_OCC__ActivityLink = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::ActivityLink"
QT_MOC_LITERAL(1, 18, 11), // "imageSource"
QT_MOC_LITERAL(2, 30, 18), // "imageSourceHovered"
QT_MOC_LITERAL(3, 49, 5), // "label"
QT_MOC_LITERAL(4, 55, 4), // "link"
QT_MOC_LITERAL(5, 60, 4), // "verb"
QT_MOC_LITERAL(6, 65, 7) // "primary"

    },
    "OCC::ActivityLink\0imageSource\0"
    "imageSourceHovered\0label\0link\0verb\0"
    "primary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ActivityLink[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QString, 0x00095003,
       3, QMetaType::QString, 0x00095003,
       4, QMetaType::QString, 0x00095003,
       5, QMetaType::QByteArray, 0x00095003,
       6, QMetaType::Bool, 0x00095003,

       0        // eod
};

void OCC::ActivityLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<ActivityLink *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_imageSource; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_imageSourceHovered; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_label; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->_link; break;
        case 4: *reinterpret_cast< QByteArray*>(_v) = _t->_verb; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->_primary; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<ActivityLink *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_imageSource != *reinterpret_cast< QString*>(_v)) {
                _t->_imageSource = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->_imageSourceHovered != *reinterpret_cast< QString*>(_v)) {
                _t->_imageSourceHovered = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->_label != *reinterpret_cast< QString*>(_v)) {
                _t->_label = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->_link != *reinterpret_cast< QString*>(_v)) {
                _t->_link = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 4:
            if (_t->_verb != *reinterpret_cast< QByteArray*>(_v)) {
                _t->_verb = *reinterpret_cast< QByteArray*>(_v);
            }
            break;
        case 5:
            if (_t->_primary != *reinterpret_cast< bool*>(_v)) {
                _t->_primary = *reinterpret_cast< bool*>(_v);
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

QT_INIT_METAOBJECT const QMetaObject OCC::ActivityLink::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_OCC__ActivityLink.data,
    qt_meta_data_OCC__ActivityLink,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_OCC__PreviewData_t {
    QByteArrayData data[8];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PreviewData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PreviewData_t qt_meta_stringdata_OCC__PreviewData = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OCC::PreviewData"
QT_MOC_LITERAL(1, 17, 6), // "source"
QT_MOC_LITERAL(2, 24, 4), // "link"
QT_MOC_LITERAL(3, 29, 8), // "mimeType"
QT_MOC_LITERAL(4, 38, 6), // "fileId"
QT_MOC_LITERAL(5, 45, 4), // "view"
QT_MOC_LITERAL(6, 50, 14), // "isMimeTypeIcon"
QT_MOC_LITERAL(7, 65, 8) // "filename"

    },
    "OCC::PreviewData\0source\0link\0mimeType\0"
    "fileId\0view\0isMimeTypeIcon\0filename"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PreviewData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QString, 0x00095003,
       3, QMetaType::QString, 0x00095003,
       4, QMetaType::Int, 0x00095003,
       5, QMetaType::QString, 0x00095003,
       6, QMetaType::Bool, 0x00095003,
       7, QMetaType::QString, 0x00095003,

       0        // eod
};

void OCC::PreviewData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<PreviewData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_source; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_link; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_mimeType; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->_fileId; break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->_view; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->_isMimeTypeIcon; break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->_filename; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<PreviewData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_source != *reinterpret_cast< QString*>(_v)) {
                _t->_source = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->_link != *reinterpret_cast< QString*>(_v)) {
                _t->_link = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->_mimeType != *reinterpret_cast< QString*>(_v)) {
                _t->_mimeType = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->_fileId != *reinterpret_cast< int*>(_v)) {
                _t->_fileId = *reinterpret_cast< int*>(_v);
            }
            break;
        case 4:
            if (_t->_view != *reinterpret_cast< QString*>(_v)) {
                _t->_view = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 5:
            if (_t->_isMimeTypeIcon != *reinterpret_cast< bool*>(_v)) {
                _t->_isMimeTypeIcon = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 6:
            if (_t->_filename != *reinterpret_cast< QString*>(_v)) {
                _t->_filename = *reinterpret_cast< QString*>(_v);
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

QT_INIT_METAOBJECT const QMetaObject OCC::PreviewData::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_OCC__PreviewData.data,
    qt_meta_data_OCC__PreviewData,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
