/****************************************************************************
** Meta object code from reading C++ file 'activitylistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/tray/activitylistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activitylistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__ActivityListModel_t {
    QByteArrayData data[82];
    char stringdata0[1405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ActivityListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ActivityListModel_t qt_meta_stringdata_OCC__ActivityListModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OCC::ActivityListModel"
QT_MOC_LITERAL(1, 23, 19), // "accountStateChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 21), // "activityJobStatusCode"
QT_MOC_LITERAL(4, 66, 10), // "statusCode"
QT_MOC_LITERAL(5, 77, 23), // "sendNotificationRequest"
QT_MOC_LITERAL(6, 101, 11), // "accountName"
QT_MOC_LITERAL(7, 113, 4), // "link"
QT_MOC_LITERAL(8, 118, 4), // "verb"
QT_MOC_LITERAL(9, 123, 3), // "row"
QT_MOC_LITERAL(10, 127, 19), // "slotRefreshActivity"
QT_MOC_LITERAL(11, 147, 26), // "slotRefreshActivityInitial"
QT_MOC_LITERAL(12, 174, 17), // "slotRemoveAccount"
QT_MOC_LITERAL(13, 192, 24), // "slotTriggerDefaultAction"
QT_MOC_LITERAL(14, 217, 13), // "activityIndex"
QT_MOC_LITERAL(15, 231, 17), // "slotTriggerAction"
QT_MOC_LITERAL(16, 249, 11), // "actionIndex"
QT_MOC_LITERAL(17, 261, 18), // "slotTriggerDismiss"
QT_MOC_LITERAL(18, 280, 29), // "addNotificationToActivityList"
QT_MOC_LITERAL(19, 310, 13), // "OCC::Activity"
QT_MOC_LITERAL(20, 324, 8), // "activity"
QT_MOC_LITERAL(21, 333, 22), // "addErrorToActivityList"
QT_MOC_LITERAL(22, 356, 20), // "addIgnoredFileToList"
QT_MOC_LITERAL(23, 377, 11), // "newActivity"
QT_MOC_LITERAL(24, 389, 29), // "addSyncFileItemToActivityList"
QT_MOC_LITERAL(25, 419, 30), // "removeActivityFromActivityList"
QT_MOC_LITERAL(26, 450, 15), // "setAccountState"
QT_MOC_LITERAL(27, 466, 18), // "OCC::AccountState*"
QT_MOC_LITERAL(28, 485, 5), // "state"
QT_MOC_LITERAL(29, 491, 19), // "setReplyMessageSent"
QT_MOC_LITERAL(30, 511, 7), // "message"
QT_MOC_LITERAL(31, 519, 14), // "setCurrentItem"
QT_MOC_LITERAL(32, 534, 11), // "currentItem"
QT_MOC_LITERAL(33, 546, 18), // "activitiesReceived"
QT_MOC_LITERAL(34, 565, 4), // "json"
QT_MOC_LITERAL(35, 570, 30), // "setAndRefreshCurrentlyFetching"
QT_MOC_LITERAL(36, 601, 5), // "value"
QT_MOC_LITERAL(37, 607, 15), // "setDoneFetching"
QT_MOC_LITERAL(38, 623, 20), // "setHideOldActivities"
QT_MOC_LITERAL(39, 644, 17), // "setDisplayActions"
QT_MOC_LITERAL(40, 662, 12), // "setFinalList"
QT_MOC_LITERAL(41, 675, 17), // "OCC::ActivityList"
QT_MOC_LITERAL(42, 693, 9), // "finalList"
QT_MOC_LITERAL(43, 703, 13), // "startFetchJob"
QT_MOC_LITERAL(44, 717, 24), // "addEntriesToActivityList"
QT_MOC_LITERAL(45, 742, 12), // "activityList"
QT_MOC_LITERAL(46, 755, 16), // "maxActionButtons"
QT_MOC_LITERAL(47, 772, 12), // "accountState"
QT_MOC_LITERAL(48, 785, 13), // "AccountState*"
QT_MOC_LITERAL(49, 799, 8), // "DataRole"
QT_MOC_LITERAL(50, 808, 12), // "DarkIconRole"
QT_MOC_LITERAL(51, 821, 13), // "LightIconRole"
QT_MOC_LITERAL(52, 835, 11), // "AccountRole"
QT_MOC_LITERAL(53, 847, 14), // "ObjectTypeRole"
QT_MOC_LITERAL(54, 862, 12), // "ObjectIdRole"
QT_MOC_LITERAL(55, 875, 14), // "ObjectNameRole"
QT_MOC_LITERAL(56, 890, 16), // "ActionsLinksRole"
QT_MOC_LITERAL(57, 907, 27), // "ActionsLinksContextMenuRole"
QT_MOC_LITERAL(58, 935, 32), // "ActionsLinksForActionButtonsRole"
QT_MOC_LITERAL(59, 968, 14), // "ActionTextRole"
QT_MOC_LITERAL(60, 983, 19), // "ActionTextColorRole"
QT_MOC_LITERAL(61, 1003, 10), // "ActionRole"
QT_MOC_LITERAL(62, 1014, 11), // "MessageRole"
QT_MOC_LITERAL(63, 1026, 15), // "DisplayPathRole"
QT_MOC_LITERAL(64, 1042, 8), // "PathRole"
QT_MOC_LITERAL(65, 1051, 16), // "OpenablePathRole"
QT_MOC_LITERAL(66, 1068, 19), // "DisplayLocationRole"
QT_MOC_LITERAL(67, 1088, 8), // "LinkRole"
QT_MOC_LITERAL(68, 1097, 15), // "PointInTimeRole"
QT_MOC_LITERAL(69, 1113, 20), // "AccountConnectedRole"
QT_MOC_LITERAL(70, 1134, 14), // "DisplayActions"
QT_MOC_LITERAL(71, 1149, 19), // "ShowFileDetailsRole"
QT_MOC_LITERAL(72, 1169, 13), // "ShareableRole"
QT_MOC_LITERAL(73, 1183, 15), // "DismissableRole"
QT_MOC_LITERAL(74, 1199, 29), // "IsCurrentUserFileActivityRole"
QT_MOC_LITERAL(75, 1229, 13), // "ThumbnailRole"
QT_MOC_LITERAL(76, 1243, 37), // "TalkNotificationConversationT..."
QT_MOC_LITERAL(77, 1281, 29), // "TalkNotificationMessageIdRole"
QT_MOC_LITERAL(78, 1311, 31), // "TalkNotificationMessageSentRole"
QT_MOC_LITERAL(79, 1343, 30), // "TalkNotificationUserAvatarRole"
QT_MOC_LITERAL(80, 1374, 17), // "ActivityIndexRole"
QT_MOC_LITERAL(81, 1392, 12) // "ActivityRole"

    },
    "OCC::ActivityListModel\0accountStateChanged\0"
    "\0activityJobStatusCode\0statusCode\0"
    "sendNotificationRequest\0accountName\0"
    "link\0verb\0row\0slotRefreshActivity\0"
    "slotRefreshActivityInitial\0slotRemoveAccount\0"
    "slotTriggerDefaultAction\0activityIndex\0"
    "slotTriggerAction\0actionIndex\0"
    "slotTriggerDismiss\0addNotificationToActivityList\0"
    "OCC::Activity\0activity\0addErrorToActivityList\0"
    "addIgnoredFileToList\0newActivity\0"
    "addSyncFileItemToActivityList\0"
    "removeActivityFromActivityList\0"
    "setAccountState\0OCC::AccountState*\0"
    "state\0setReplyMessageSent\0message\0"
    "setCurrentItem\0currentItem\0"
    "activitiesReceived\0json\0"
    "setAndRefreshCurrentlyFetching\0value\0"
    "setDoneFetching\0setHideOldActivities\0"
    "setDisplayActions\0setFinalList\0"
    "OCC::ActivityList\0finalList\0startFetchJob\0"
    "addEntriesToActivityList\0activityList\0"
    "maxActionButtons\0accountState\0"
    "AccountState*\0DataRole\0DarkIconRole\0"
    "LightIconRole\0AccountRole\0ObjectTypeRole\0"
    "ObjectIdRole\0ObjectNameRole\0"
    "ActionsLinksRole\0ActionsLinksContextMenuRole\0"
    "ActionsLinksForActionButtonsRole\0"
    "ActionTextRole\0ActionTextColorRole\0"
    "ActionRole\0MessageRole\0DisplayPathRole\0"
    "PathRole\0OpenablePathRole\0DisplayLocationRole\0"
    "LinkRole\0PointInTimeRole\0AccountConnectedRole\0"
    "DisplayActions\0ShowFileDetailsRole\0"
    "ShareableRole\0DismissableRole\0"
    "IsCurrentUserFileActivityRole\0"
    "ThumbnailRole\0TalkNotificationConversationTokenRole\0"
    "TalkNotificationMessageIdRole\0"
    "TalkNotificationMessageSentRole\0"
    "TalkNotificationUserAvatarRole\0"
    "ActivityIndexRole\0ActivityRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ActivityListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       2,  224, // properties
       1,  232, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x06 /* Public */,
       3,    1,  145,    2, 0x06 /* Public */,
       5,    4,  148,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  157,    2, 0x0a /* Public */,
      11,    0,  158,    2, 0x0a /* Public */,
      12,    0,  159,    2, 0x0a /* Public */,
      13,    1,  160,    2, 0x0a /* Public */,
      15,    2,  163,    2, 0x0a /* Public */,
      17,    1,  168,    2, 0x0a /* Public */,
      18,    1,  171,    2, 0x0a /* Public */,
      21,    1,  174,    2, 0x0a /* Public */,
      22,    1,  177,    2, 0x0a /* Public */,
      24,    1,  180,    2, 0x0a /* Public */,
      25,    1,  183,    2, 0x0a /* Public */,
      25,    1,  186,    2, 0x0a /* Public */,
      26,    1,  189,    2, 0x0a /* Public */,
      29,    2,  192,    2, 0x0a /* Public */,
      31,    1,  197,    2, 0x0a /* Public */,
      33,    2,  200,    2, 0x09 /* Protected */,
      35,    1,  205,    2, 0x09 /* Protected */,
      37,    1,  208,    2, 0x09 /* Protected */,
      38,    1,  211,    2, 0x09 /* Protected */,
      39,    1,  214,    2, 0x09 /* Protected */,
      40,    1,  217,    2, 0x09 /* Protected */,
      43,    0,  220,    2, 0x09 /* Protected */,
      44,    1,  221,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray, QMetaType::Int,    6,    7,    8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   16,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   23,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   14,   30,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,   34,    4,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 41,   45,

 // properties: name, type, flags
      46, QMetaType::UInt, 0x00095401,
      47, 0x80000000 | 48, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,

 // enums: name, alias, flags, count, data
      49,   49, 0x0,   32,  237,

 // enum data: key, value
      50, uint(OCC::ActivityListModel::DarkIconRole),
      51, uint(OCC::ActivityListModel::LightIconRole),
      52, uint(OCC::ActivityListModel::AccountRole),
      53, uint(OCC::ActivityListModel::ObjectTypeRole),
      54, uint(OCC::ActivityListModel::ObjectIdRole),
      55, uint(OCC::ActivityListModel::ObjectNameRole),
      56, uint(OCC::ActivityListModel::ActionsLinksRole),
      57, uint(OCC::ActivityListModel::ActionsLinksContextMenuRole),
      58, uint(OCC::ActivityListModel::ActionsLinksForActionButtonsRole),
      59, uint(OCC::ActivityListModel::ActionTextRole),
      60, uint(OCC::ActivityListModel::ActionTextColorRole),
      61, uint(OCC::ActivityListModel::ActionRole),
      62, uint(OCC::ActivityListModel::MessageRole),
      63, uint(OCC::ActivityListModel::DisplayPathRole),
      64, uint(OCC::ActivityListModel::PathRole),
      65, uint(OCC::ActivityListModel::OpenablePathRole),
      66, uint(OCC::ActivityListModel::DisplayLocationRole),
      67, uint(OCC::ActivityListModel::LinkRole),
      68, uint(OCC::ActivityListModel::PointInTimeRole),
      69, uint(OCC::ActivityListModel::AccountConnectedRole),
      70, uint(OCC::ActivityListModel::DisplayActions),
      71, uint(OCC::ActivityListModel::ShowFileDetailsRole),
      72, uint(OCC::ActivityListModel::ShareableRole),
      73, uint(OCC::ActivityListModel::DismissableRole),
      74, uint(OCC::ActivityListModel::IsCurrentUserFileActivityRole),
      75, uint(OCC::ActivityListModel::ThumbnailRole),
      76, uint(OCC::ActivityListModel::TalkNotificationConversationTokenRole),
      77, uint(OCC::ActivityListModel::TalkNotificationMessageIdRole),
      78, uint(OCC::ActivityListModel::TalkNotificationMessageSentRole),
      79, uint(OCC::ActivityListModel::TalkNotificationUserAvatarRole),
      80, uint(OCC::ActivityListModel::ActivityIndexRole),
      81, uint(OCC::ActivityListModel::ActivityRole),

       0        // eod
};

void OCC::ActivityListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActivityListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accountStateChanged(); break;
        case 1: _t->activityJobStatusCode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sendNotificationRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->slotRefreshActivity(); break;
        case 4: _t->slotRefreshActivityInitial(); break;
        case 5: _t->slotRemoveAccount(); break;
        case 6: _t->slotTriggerDefaultAction((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->slotTriggerAction((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 8: _t->slotTriggerDismiss((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 9: _t->addNotificationToActivityList((*reinterpret_cast< const OCC::Activity(*)>(_a[1]))); break;
        case 10: _t->addErrorToActivityList((*reinterpret_cast< const OCC::Activity(*)>(_a[1]))); break;
        case 11: _t->addIgnoredFileToList((*reinterpret_cast< const OCC::Activity(*)>(_a[1]))); break;
        case 12: _t->addSyncFileItemToActivityList((*reinterpret_cast< const OCC::Activity(*)>(_a[1]))); break;
        case 13: _t->removeActivityFromActivityList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->removeActivityFromActivityList((*reinterpret_cast< const OCC::Activity(*)>(_a[1]))); break;
        case 15: _t->setAccountState((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 16: _t->setReplyMessageSent((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->setCurrentItem((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 18: _t->activitiesReceived((*reinterpret_cast< const QJsonDocument(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->setAndRefreshCurrentlyFetching((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->setDoneFetching((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setHideOldActivities((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->setDisplayActions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->setFinalList((*reinterpret_cast< const OCC::ActivityList(*)>(_a[1]))); break;
        case 24: _t->startFetchJob(); break;
        case 25: _t->addEntriesToActivityList((*reinterpret_cast< const OCC::ActivityList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Activity >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Activity >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Activity >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Activity >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Activity >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActivityListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActivityListModel::accountStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActivityListModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActivityListModel::activityJobStatusCode)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ActivityListModel::*)(const QString & , const QString & , const QByteArray & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActivityListModel::sendNotificationRequest)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActivityListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->maxActionButtons(); break;
        case 1: *reinterpret_cast< AccountState**>(_v) = _t->accountState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ActivityListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setAccountState(*reinterpret_cast< AccountState**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OCC::ActivityListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_OCC__ActivityListModel.data,
    qt_meta_data_OCC__ActivityListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::ActivityListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ActivityListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ActivityListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::ActivityListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
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
void OCC::ActivityListModel::accountStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::ActivityListModel::activityJobStatusCode(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::ActivityListModel::sendNotificationRequest(const QString & _t1, const QString & _t2, const QByteArray & _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
