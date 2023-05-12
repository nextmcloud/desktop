/****************************************************************************
** Meta object code from reading C++ file 'usermodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/tray/usermodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__TrayFolderInfo_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__TrayFolderInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__TrayFolderInfo_t qt_meta_stringdata_OCC__TrayFolderInfo = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OCC::TrayFolderInfo"
QT_MOC_LITERAL(1, 20, 4), // "name"
QT_MOC_LITERAL(2, 25, 10), // "parentPath"
QT_MOC_LITERAL(3, 36, 8), // "fullPath"
QT_MOC_LITERAL(4, 45, 13) // "isGroupFolder"

    },
    "OCC::TrayFolderInfo\0name\0parentPath\0"
    "fullPath\0isGroupFolder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__TrayFolderInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QString, 0x00095003,
       3, QMetaType::QString, 0x00095003,
       4, QMetaType::Bool, 0x00095401,

       0        // eod
};

void OCC::TrayFolderInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<TrayFolderInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_name; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_parentPath; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_fullPath; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isGroupFolder(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<TrayFolderInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_name != *reinterpret_cast< QString*>(_v)) {
                _t->_name = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->_parentPath != *reinterpret_cast< QString*>(_v)) {
                _t->_parentPath = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->_fullPath != *reinterpret_cast< QString*>(_v)) {
                _t->_fullPath = *reinterpret_cast< QString*>(_v);
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

QT_INIT_METAOBJECT const QMetaObject OCC::TrayFolderInfo::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_OCC__TrayFolderInfo.data,
    qt_meta_data_OCC__TrayFolderInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_OCC__User_t {
    QByteArrayData data[98];
    char stringdata0[1714];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__User_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__User_t qt_meta_stringdata_OCC__User = {
    {
QT_MOC_LITERAL(0, 0, 9), // "OCC::User"
QT_MOC_LITERAL(1, 10, 11), // "nameChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 21), // "hasLocalFolderChanged"
QT_MOC_LITERAL(4, 45, 20), // "serverHasTalkChanged"
QT_MOC_LITERAL(5, 66, 13), // "avatarChanged"
QT_MOC_LITERAL(6, 80, 19), // "accountStateChanged"
QT_MOC_LITERAL(7, 100, 13), // "statusChanged"
QT_MOC_LITERAL(8, 114, 34), // "desktopNotificationsAllowedCh..."
QT_MOC_LITERAL(9, 149, 18), // "headerColorChanged"
QT_MOC_LITERAL(10, 168, 22), // "headerTextColorChanged"
QT_MOC_LITERAL(11, 191, 18), // "accentColorChanged"
QT_MOC_LITERAL(12, 210, 16), // "sendReplyMessage"
QT_MOC_LITERAL(13, 227, 13), // "activityIndex"
QT_MOC_LITERAL(14, 241, 17), // "conversationToken"
QT_MOC_LITERAL(15, 259, 7), // "message"
QT_MOC_LITERAL(16, 267, 7), // "replyTo"
QT_MOC_LITERAL(17, 275, 19), // "groupFoldersChanged"
QT_MOC_LITERAL(18, 295, 17), // "slotItemCompleted"
QT_MOC_LITERAL(19, 313, 6), // "folder"
QT_MOC_LITERAL(20, 320, 20), // "OCC::SyncFileItemPtr"
QT_MOC_LITERAL(21, 341, 4), // "item"
QT_MOC_LITERAL(22, 346, 16), // "slotProgressInfo"
QT_MOC_LITERAL(23, 363, 17), // "OCC::ProgressInfo"
QT_MOC_LITERAL(24, 381, 8), // "progress"
QT_MOC_LITERAL(25, 390, 12), // "slotAddError"
QT_MOC_LITERAL(26, 403, 11), // "folderAlias"
QT_MOC_LITERAL(27, 415, 18), // "OCC::ErrorCategory"
QT_MOC_LITERAL(28, 434, 8), // "category"
QT_MOC_LITERAL(29, 443, 17), // "slotAddErrorToGui"
QT_MOC_LITERAL(30, 461, 25), // "OCC::SyncFileItem::Status"
QT_MOC_LITERAL(31, 487, 6), // "status"
QT_MOC_LITERAL(32, 494, 12), // "errorMessage"
QT_MOC_LITERAL(33, 507, 7), // "subject"
QT_MOC_LITERAL(34, 515, 31), // "slotNotificationRequestFinished"
QT_MOC_LITERAL(35, 547, 10), // "statusCode"
QT_MOC_LITERAL(36, 558, 22), // "slotNotifyNetworkError"
QT_MOC_LITERAL(37, 581, 14), // "QNetworkReply*"
QT_MOC_LITERAL(38, 596, 5), // "reply"
QT_MOC_LITERAL(39, 602, 26), // "slotEndNotificationRequest"
QT_MOC_LITERAL(40, 629, 9), // "replyCode"
QT_MOC_LITERAL(41, 639, 24), // "slotNotifyServerFinished"
QT_MOC_LITERAL(42, 664, 27), // "slotSendNotificationRequest"
QT_MOC_LITERAL(43, 692, 11), // "accountName"
QT_MOC_LITERAL(44, 704, 4), // "link"
QT_MOC_LITERAL(45, 709, 4), // "verb"
QT_MOC_LITERAL(46, 714, 3), // "row"
QT_MOC_LITERAL(47, 718, 28), // "slotBuildNotificationDisplay"
QT_MOC_LITERAL(48, 747, 17), // "OCC::ActivityList"
QT_MOC_LITERAL(49, 765, 4), // "list"
QT_MOC_LITERAL(50, 770, 28), // "slotBuildIncomingCallDialogs"
QT_MOC_LITERAL(51, 799, 24), // "slotRefreshNotifications"
QT_MOC_LITERAL(52, 824, 28), // "slotRefreshActivitiesInitial"
QT_MOC_LITERAL(53, 853, 21), // "slotRefreshActivities"
QT_MOC_LITERAL(54, 875, 11), // "slotRefresh"
QT_MOC_LITERAL(55, 887, 21), // "slotRefreshUserStatus"
QT_MOC_LITERAL(56, 909, 22), // "slotRefreshImmediately"
QT_MOC_LITERAL(57, 932, 30), // "setNotificationRefreshInterval"
QT_MOC_LITERAL(58, 963, 25), // "std::chrono::milliseconds"
QT_MOC_LITERAL(59, 989, 8), // "interval"
QT_MOC_LITERAL(60, 998, 28), // "slotRebuildNavigationAppList"
QT_MOC_LITERAL(61, 1027, 20), // "slotSendReplyMessage"
QT_MOC_LITERAL(62, 1048, 12), // "forceSyncNow"
QT_MOC_LITERAL(63, 1061, 49), // "slotAccountCapabilitiesChange..."
QT_MOC_LITERAL(64, 1111, 21), // "slotFetchGroupFolders"
QT_MOC_LITERAL(65, 1133, 26), // "slotPushNotificationsReady"
QT_MOC_LITERAL(66, 1160, 31), // "slotDisconnectPushNotifications"
QT_MOC_LITERAL(67, 1192, 28), // "slotReceivedPushNotification"
QT_MOC_LITERAL(68, 1221, 13), // "OCC::Account*"
QT_MOC_LITERAL(69, 1235, 7), // "account"
QT_MOC_LITERAL(70, 1243, 24), // "slotReceivedPushActivity"
QT_MOC_LITERAL(71, 1268, 26), // "slotCheckExpiredActivities"
QT_MOC_LITERAL(72, 1295, 23), // "slotGroupFoldersFetched"
QT_MOC_LITERAL(73, 1319, 26), // "checkNotifiedNotifications"
QT_MOC_LITERAL(74, 1346, 23), // "showDesktopNotification"
QT_MOC_LITERAL(75, 1370, 5), // "title"
QT_MOC_LITERAL(76, 1376, 14), // "notificationId"
QT_MOC_LITERAL(77, 1391, 13), // "OCC::Activity"
QT_MOC_LITERAL(78, 1405, 8), // "activity"
QT_MOC_LITERAL(79, 1414, 12), // "activityList"
QT_MOC_LITERAL(80, 1427, 27), // "showDesktopTalkNotification"
QT_MOC_LITERAL(81, 1455, 4), // "name"
QT_MOC_LITERAL(82, 1460, 6), // "server"
QT_MOC_LITERAL(83, 1467, 11), // "headerColor"
QT_MOC_LITERAL(84, 1479, 15), // "headerTextColor"
QT_MOC_LITERAL(85, 1495, 11), // "accentColor"
QT_MOC_LITERAL(86, 1507, 19), // "serverHasUserStatus"
QT_MOC_LITERAL(87, 1527, 10), // "statusIcon"
QT_MOC_LITERAL(88, 1538, 11), // "statusEmoji"
QT_MOC_LITERAL(89, 1550, 13), // "statusMessage"
QT_MOC_LITERAL(90, 1564, 27), // "desktopNotificationsAllowed"
QT_MOC_LITERAL(91, 1592, 14), // "hasLocalFolder"
QT_MOC_LITERAL(92, 1607, 13), // "serverHasTalk"
QT_MOC_LITERAL(93, 1621, 6), // "avatar"
QT_MOC_LITERAL(94, 1628, 11), // "isConnected"
QT_MOC_LITERAL(95, 1640, 29), // "unifiedSearchResultsListModel"
QT_MOC_LITERAL(96, 1670, 30), // "UnifiedSearchResultsListModel*"
QT_MOC_LITERAL(97, 1701, 12) // "groupFolders"

    },
    "OCC::User\0nameChanged\0\0hasLocalFolderChanged\0"
    "serverHasTalkChanged\0avatarChanged\0"
    "accountStateChanged\0statusChanged\0"
    "desktopNotificationsAllowedChanged\0"
    "headerColorChanged\0headerTextColorChanged\0"
    "accentColorChanged\0sendReplyMessage\0"
    "activityIndex\0conversationToken\0message\0"
    "replyTo\0groupFoldersChanged\0"
    "slotItemCompleted\0folder\0OCC::SyncFileItemPtr\0"
    "item\0slotProgressInfo\0OCC::ProgressInfo\0"
    "progress\0slotAddError\0folderAlias\0"
    "OCC::ErrorCategory\0category\0"
    "slotAddErrorToGui\0OCC::SyncFileItem::Status\0"
    "status\0errorMessage\0subject\0"
    "slotNotificationRequestFinished\0"
    "statusCode\0slotNotifyNetworkError\0"
    "QNetworkReply*\0reply\0slotEndNotificationRequest\0"
    "replyCode\0slotNotifyServerFinished\0"
    "slotSendNotificationRequest\0accountName\0"
    "link\0verb\0row\0slotBuildNotificationDisplay\0"
    "OCC::ActivityList\0list\0"
    "slotBuildIncomingCallDialogs\0"
    "slotRefreshNotifications\0"
    "slotRefreshActivitiesInitial\0"
    "slotRefreshActivities\0slotRefresh\0"
    "slotRefreshUserStatus\0slotRefreshImmediately\0"
    "setNotificationRefreshInterval\0"
    "std::chrono::milliseconds\0interval\0"
    "slotRebuildNavigationAppList\0"
    "slotSendReplyMessage\0forceSyncNow\0"
    "slotAccountCapabilitiesChangedRefreshGroupFolders\0"
    "slotFetchGroupFolders\0slotPushNotificationsReady\0"
    "slotDisconnectPushNotifications\0"
    "slotReceivedPushNotification\0OCC::Account*\0"
    "account\0slotReceivedPushActivity\0"
    "slotCheckExpiredActivities\0"
    "slotGroupFoldersFetched\0"
    "checkNotifiedNotifications\0"
    "showDesktopNotification\0title\0"
    "notificationId\0OCC::Activity\0activity\0"
    "activityList\0showDesktopTalkNotification\0"
    "name\0server\0headerColor\0headerTextColor\0"
    "accentColor\0serverHasUserStatus\0"
    "statusIcon\0statusEmoji\0statusMessage\0"
    "desktopNotificationsAllowed\0hasLocalFolder\0"
    "serverHasTalk\0avatar\0isConnected\0"
    "unifiedSearchResultsListModel\0"
    "UnifiedSearchResultsListModel*\0"
    "groupFolders"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__User[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
      16,  382, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  249,    2, 0x06 /* Public */,
       3,    0,  250,    2, 0x06 /* Public */,
       4,    0,  251,    2, 0x06 /* Public */,
       5,    0,  252,    2, 0x06 /* Public */,
       6,    0,  253,    2, 0x06 /* Public */,
       7,    0,  254,    2, 0x06 /* Public */,
       8,    0,  255,    2, 0x06 /* Public */,
       9,    0,  256,    2, 0x06 /* Public */,
      10,    0,  257,    2, 0x06 /* Public */,
      11,    0,  258,    2, 0x06 /* Public */,
      12,    4,  259,    2, 0x06 /* Public */,
      17,    0,  268,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    2,  269,    2, 0x0a /* Public */,
      22,    2,  274,    2, 0x0a /* Public */,
      25,    3,  279,    2, 0x0a /* Public */,
      29,    4,  286,    2, 0x0a /* Public */,
      29,    3,  295,    2, 0x2a /* Public | MethodCloned */,
      34,    1,  302,    2, 0x0a /* Public */,
      36,    1,  305,    2, 0x0a /* Public */,
      39,    1,  308,    2, 0x0a /* Public */,
      41,    2,  311,    2, 0x0a /* Public */,
      42,    4,  316,    2, 0x0a /* Public */,
      47,    1,  325,    2, 0x0a /* Public */,
      50,    1,  328,    2, 0x0a /* Public */,
      51,    0,  331,    2, 0x0a /* Public */,
      52,    0,  332,    2, 0x0a /* Public */,
      53,    0,  333,    2, 0x0a /* Public */,
      54,    0,  334,    2, 0x0a /* Public */,
      55,    0,  335,    2, 0x0a /* Public */,
      56,    0,  336,    2, 0x0a /* Public */,
      57,    1,  337,    2, 0x0a /* Public */,
      60,    0,  340,    2, 0x0a /* Public */,
      61,    4,  341,    2, 0x0a /* Public */,
      62,    0,  350,    2, 0x0a /* Public */,
      63,    0,  351,    2, 0x0a /* Public */,
      64,    0,  352,    2, 0x0a /* Public */,
      65,    0,  353,    2, 0x08 /* Private */,
      66,    0,  354,    2, 0x08 /* Private */,
      67,    1,  355,    2, 0x08 /* Private */,
      70,    1,  358,    2, 0x08 /* Private */,
      71,    0,  361,    2, 0x08 /* Private */,
      72,    1,  362,    2, 0x08 /* Private */,
      73,    0,  365,    2, 0x08 /* Private */,
      74,    3,  366,    2, 0x08 /* Private */,
      74,    1,  373,    2, 0x08 /* Private */,
      74,    1,  376,    2, 0x08 /* Private */,
      80,    1,  379,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,   13,   14,   15,   16,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20,   19,   21,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 23,   19,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 27,   26,   15,   28,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 30, QMetaType::QString, QMetaType::QString,   26,   31,   32,   33,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 30, QMetaType::QString,   26,   31,   32,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   38,   40,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray, QMetaType::Int,   43,   44,   45,   46,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,   13,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 68,   69,
    QMetaType::Void, 0x80000000 | 68,   69,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Long,   75,   15,   76,
    QMetaType::Void, 0x80000000 | 77,   78,
    QMetaType::Void, 0x80000000 | 48,   79,
    QMetaType::Void, 0x80000000 | 77,   78,

 // properties: name, type, flags
      81, QMetaType::QString, 0x00495001,
      82, QMetaType::QString, 0x00095401,
      83, QMetaType::QColor, 0x00495001,
      84, QMetaType::QColor, 0x00495001,
      85, QMetaType::QColor, 0x00495001,
      86, QMetaType::Bool, 0x00095401,
      87, QMetaType::QUrl, 0x00495001,
      88, QMetaType::QString, 0x00495001,
      89, QMetaType::QString, 0x00495001,
      90, QMetaType::Bool, 0x00495001,
      91, QMetaType::Bool, 0x00495001,
      92, QMetaType::Bool, 0x00495001,
      93, QMetaType::QString, 0x00495001,
      94, QMetaType::Bool, 0x00495001,
      95, 0x80000000 | 96, 0x00095409,
      97, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       7,
       8,
       9,
       0,
       5,
       5,
       5,
       6,
       1,
       2,
       3,
       4,
       0,
      11,

       0        // eod
};

void OCC::User::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<User *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->hasLocalFolderChanged(); break;
        case 2: _t->serverHasTalkChanged(); break;
        case 3: _t->avatarChanged(); break;
        case 4: _t->accountStateChanged(); break;
        case 5: _t->statusChanged(); break;
        case 6: _t->desktopNotificationsAllowedChanged(); break;
        case 7: _t->headerColorChanged(); break;
        case 8: _t->headerTextColorChanged(); break;
        case 9: _t->accentColorChanged(); break;
        case 10: _t->sendReplyMessage((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 11: _t->groupFoldersChanged(); break;
        case 12: _t->slotItemCompleted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const OCC::SyncFileItemPtr(*)>(_a[2]))); break;
        case 13: _t->slotProgressInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const OCC::ProgressInfo(*)>(_a[2]))); break;
        case 14: _t->slotAddError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< OCC::ErrorCategory(*)>(_a[3]))); break;
        case 15: _t->slotAddErrorToGui((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SyncFileItem::Status(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 16: _t->slotAddErrorToGui((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< OCC::SyncFileItem::Status(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 17: _t->slotNotificationRequestFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->slotNotifyNetworkError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 19: _t->slotEndNotificationRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->slotNotifyServerFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->slotSendNotificationRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 22: _t->slotBuildNotificationDisplay((*reinterpret_cast< const OCC::ActivityList(*)>(_a[1]))); break;
        case 23: _t->slotBuildIncomingCallDialogs((*reinterpret_cast< const OCC::ActivityList(*)>(_a[1]))); break;
        case 24: _t->slotRefreshNotifications(); break;
        case 25: _t->slotRefreshActivitiesInitial(); break;
        case 26: _t->slotRefreshActivities(); break;
        case 27: _t->slotRefresh(); break;
        case 28: _t->slotRefreshUserStatus(); break;
        case 29: _t->slotRefreshImmediately(); break;
        case 30: _t->setNotificationRefreshInterval((*reinterpret_cast< std::chrono::milliseconds(*)>(_a[1]))); break;
        case 31: _t->slotRebuildNavigationAppList(); break;
        case 32: _t->slotSendReplyMessage((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 33: _t->forceSyncNow(); break;
        case 34: _t->slotAccountCapabilitiesChangedRefreshGroupFolders(); break;
        case 35: _t->slotFetchGroupFolders(); break;
        case 36: _t->slotPushNotificationsReady(); break;
        case 37: _t->slotDisconnectPushNotifications(); break;
        case 38: _t->slotReceivedPushNotification((*reinterpret_cast< OCC::Account*(*)>(_a[1]))); break;
        case 39: _t->slotReceivedPushActivity((*reinterpret_cast< OCC::Account*(*)>(_a[1]))); break;
        case 40: _t->slotCheckExpiredActivities(); break;
        case 41: _t->slotGroupFoldersFetched((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 42: _t->checkNotifiedNotifications(); break;
        case 43: _t->showDesktopNotification((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const long(*)>(_a[3]))); break;
        case 44: _t->showDesktopNotification((*reinterpret_cast< const OCC::Activity(*)>(_a[1]))); break;
        case 45: _t->showDesktopNotification((*reinterpret_cast< const OCC::ActivityList(*)>(_a[1]))); break;
        case 46: _t->showDesktopTalkNotification((*reinterpret_cast< const OCC::Activity(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Account* >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Account* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Activity >(); break;
            }
            break;
        case 46:
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
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::hasLocalFolderChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::serverHasTalkChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::avatarChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::accountStateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::statusChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::desktopNotificationsAllowedChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::headerColorChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::headerTextColorChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::accentColorChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (User::*)(const int , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::sendReplyMessage)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::groupFoldersChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<User *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->server(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->headerColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->headerTextColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->accentColor(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->serverHasUserStatus(); break;
        case 6: *reinterpret_cast< QUrl*>(_v) = _t->statusIcon(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->statusEmoji(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->statusMessage(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isDesktopNotificationsAllowed(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->hasLocalFolder(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->serverHasTalk(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->avatarUrl(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->isConnected(); break;
        case 14: *reinterpret_cast< UnifiedSearchResultsListModel**>(_v) = _t->getUnifiedSearchResultsListModel(); break;
        case 15: *reinterpret_cast< QVariantList*>(_v) = _t->groupFolders(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OCC::User::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__User.data,
    qt_meta_data_OCC__User,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::User::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::User::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__User.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::User::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OCC::User::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::User::hasLocalFolderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::User::serverHasTalkChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::User::avatarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::User::accountStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::User::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void OCC::User::desktopNotificationsAllowedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OCC::User::headerColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void OCC::User::headerTextColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void OCC::User::accentColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void OCC::User::sendReplyMessage(const int _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void OCC::User::groupFoldersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
struct qt_meta_stringdata_OCC__UserModel_t {
    QByteArrayData data[23];
    char stringdata0[386];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__UserModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__UserModel_t qt_meta_stringdata_OCC__UserModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OCC::UserModel"
QT_MOC_LITERAL(1, 15, 10), // "addAccount"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "currentUserChanged"
QT_MOC_LITERAL(4, 46, 25), // "fetchCurrentActivityModel"
QT_MOC_LITERAL(5, 72, 29), // "openCurrentAccountLocalFolder"
QT_MOC_LITERAL(6, 102, 22), // "openCurrentAccountTalk"
QT_MOC_LITERAL(7, 125, 24), // "openCurrentAccountServer"
QT_MOC_LITERAL(8, 150, 36), // "openCurrentAccountFolderFromT..."
QT_MOC_LITERAL(9, 187, 14), // "fullRemotePath"
QT_MOC_LITERAL(10, 202, 16), // "setCurrentUserId"
QT_MOC_LITERAL(11, 219, 2), // "id"
QT_MOC_LITERAL(12, 222, 5), // "login"
QT_MOC_LITERAL(13, 228, 6), // "logout"
QT_MOC_LITERAL(14, 235, 13), // "removeAccount"
QT_MOC_LITERAL(15, 249, 8), // "numUsers"
QT_MOC_LITERAL(16, 258, 17), // "currentUserServer"
QT_MOC_LITERAL(17, 276, 15), // "isUserConnected"
QT_MOC_LITERAL(18, 292, 19), // "userStatusConnector"
QT_MOC_LITERAL(19, 312, 41), // "std::shared_ptr<OCC::UserStat..."
QT_MOC_LITERAL(20, 354, 11), // "currentUser"
QT_MOC_LITERAL(21, 366, 5), // "User*"
QT_MOC_LITERAL(22, 372, 13) // "currentUserId"

    },
    "OCC::UserModel\0addAccount\0\0"
    "currentUserChanged\0fetchCurrentActivityModel\0"
    "openCurrentAccountLocalFolder\0"
    "openCurrentAccountTalk\0openCurrentAccountServer\0"
    "openCurrentAccountFolderFromTrayInfo\0"
    "fullRemotePath\0setCurrentUserId\0id\0"
    "login\0logout\0removeAccount\0numUsers\0"
    "currentUserServer\0isUserConnected\0"
    "userStatusConnector\0"
    "std::shared_ptr<OCC::UserStatusConnector>\0"
    "currentUser\0User*\0currentUserId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__UserModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       2,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    1,   95,    2, 0x0a /* Public */,
      10,    1,   98,    2, 0x0a /* Public */,
      12,    1,  101,    2, 0x0a /* Public */,
      13,    1,  104,    2, 0x0a /* Public */,
      14,    1,  107,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    0,  110,    2, 0x02 /* Public */,
      16,    0,  111,    2, 0x02 /* Public */,
      17,    1,  112,    2, 0x02 /* Public */,
      18,    1,  115,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,

 // methods: parameters
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::Int,   11,
    0x80000000 | 19, QMetaType::Int,   11,

 // properties: name, type, flags
      20, 0x80000000 | 21, 0x00495009,
      22, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       1,
       1,

       0        // eod
};

void OCC::UserModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addAccount(); break;
        case 1: _t->currentUserChanged(); break;
        case 2: _t->fetchCurrentActivityModel(); break;
        case 3: _t->openCurrentAccountLocalFolder(); break;
        case 4: _t->openCurrentAccountTalk(); break;
        case 5: _t->openCurrentAccountServer(); break;
        case 6: _t->openCurrentAccountFolderFromTrayInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setCurrentUserId((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->login((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 9: _t->logout((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 10: _t->removeAccount((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 11: { int _r = _t->numUsers();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->currentUserServer();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->isUserConnected((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { std::shared_ptr<OCC::UserStatusConnector> _r = _t->userStatusConnector((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::shared_ptr<OCC::UserStatusConnector>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserModel::addAccount)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserModel::currentUserChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UserModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< User**>(_v) = _t->currentUser(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentUserId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UserModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCurrentUserId(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OCC::UserModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_OCC__UserModel.data,
    qt_meta_data_OCC__UserModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::UserModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UserModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__UserModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::UserModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
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
void OCC::UserModel::addAccount()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::UserModel::currentUserChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_OCC__UserAppsModel_t {
    QByteArrayData data[4];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__UserAppsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__UserAppsModel_t qt_meta_stringdata_OCC__UserAppsModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "OCC::UserAppsModel"
QT_MOC_LITERAL(1, 19, 10), // "openAppUrl"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3) // "url"

    },
    "OCC::UserAppsModel\0openAppUrl\0\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__UserAppsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

       0        // eod
};

void OCC::UserAppsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserAppsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openAppUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::UserAppsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_OCC__UserAppsModel.data,
    qt_meta_data_OCC__UserAppsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::UserAppsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UserAppsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__UserAppsModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::UserAppsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
