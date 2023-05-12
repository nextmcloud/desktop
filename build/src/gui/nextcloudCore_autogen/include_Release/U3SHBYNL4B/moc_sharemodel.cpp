/****************************************************************************
** Meta object code from reading C++ file 'sharemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/filedetails/sharemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sharemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__ShareModel_t {
    QByteArrayData data[149];
    char stringdata0[2926];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ShareModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ShareModel_t qt_meta_stringdata_OCC__ShareModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OCC::ShareModel"
QT_MOC_LITERAL(1, 16, 16), // "localPathChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "accountStateChanged"
QT_MOC_LITERAL(4, 54, 23), // "accountConnectedChanged"
QT_MOC_LITERAL(5, 78, 21), // "sharingEnabledChanged"
QT_MOC_LITERAL(6, 100, 30), // "publicLinkSharesEnabledChanged"
QT_MOC_LITERAL(7, 131, 30), // "userGroupSharingEnabledChanged"
QT_MOC_LITERAL(8, 162, 23), // "sharePermissionsChanged"
QT_MOC_LITERAL(9, 186, 23), // "lockExpireStringChanged"
QT_MOC_LITERAL(10, 210, 19), // "fetchOngoingChanged"
QT_MOC_LITERAL(11, 230, 36), // "hasInitialShareFetchCompleted..."
QT_MOC_LITERAL(12, 267, 14), // "shareesChanged"
QT_MOC_LITERAL(13, 282, 17), // "internalLinkReady"
QT_MOC_LITERAL(14, 300, 11), // "serverError"
QT_MOC_LITERAL(15, 312, 4), // "code"
QT_MOC_LITERAL(16, 317, 7), // "message"
QT_MOC_LITERAL(17, 325, 16), // "passwordSetError"
QT_MOC_LITERAL(18, 342, 7), // "shareId"
QT_MOC_LITERAL(19, 350, 27), // "requestPasswordForLinkShare"
QT_MOC_LITERAL(20, 378, 29), // "requestPasswordForEmailSharee"
QT_MOC_LITERAL(21, 408, 14), // "OCC::ShareePtr"
QT_MOC_LITERAL(22, 423, 6), // "sharee"
QT_MOC_LITERAL(23, 430, 13), // "sharesChanged"
QT_MOC_LITERAL(24, 444, 15), // "setAccountState"
QT_MOC_LITERAL(25, 460, 18), // "OCC::AccountState*"
QT_MOC_LITERAL(26, 479, 12), // "accountState"
QT_MOC_LITERAL(27, 492, 12), // "setLocalPath"
QT_MOC_LITERAL(28, 505, 9), // "localPath"
QT_MOC_LITERAL(29, 515, 18), // "createNewLinkShare"
QT_MOC_LITERAL(30, 534, 30), // "createNewLinkShareWithPassword"
QT_MOC_LITERAL(31, 565, 8), // "password"
QT_MOC_LITERAL(32, 574, 23), // "createNewUserGroupShare"
QT_MOC_LITERAL(33, 598, 30), // "createNewUserGroupShareFromQml"
QT_MOC_LITERAL(34, 629, 35), // "createNewUserGroupShareWithPa..."
QT_MOC_LITERAL(35, 665, 42), // "createNewUserGroupShareWithPa..."
QT_MOC_LITERAL(36, 708, 11), // "deleteShare"
QT_MOC_LITERAL(37, 720, 13), // "OCC::SharePtr"
QT_MOC_LITERAL(38, 734, 5), // "share"
QT_MOC_LITERAL(39, 740, 18), // "deleteShareFromQml"
QT_MOC_LITERAL(40, 759, 25), // "toggleHideDownloadFromQml"
QT_MOC_LITERAL(41, 785, 6), // "enable"
QT_MOC_LITERAL(42, 792, 23), // "toggleShareAllowEditing"
QT_MOC_LITERAL(43, 816, 30), // "toggleShareAllowEditingFromQml"
QT_MOC_LITERAL(44, 847, 25), // "toggleShareAllowResharing"
QT_MOC_LITERAL(45, 873, 32), // "toggleShareAllowResharingFromQml"
QT_MOC_LITERAL(46, 906, 26), // "toggleSharePasswordProtect"
QT_MOC_LITERAL(47, 933, 33), // "toggleSharePasswordProtectFro..."
QT_MOC_LITERAL(48, 967, 25), // "toggleShareExpirationDate"
QT_MOC_LITERAL(49, 993, 32), // "toggleShareExpirationDateFromQml"
QT_MOC_LITERAL(50, 1026, 26), // "toggleShareNoteToRecipient"
QT_MOC_LITERAL(51, 1053, 33), // "toggleShareNoteToRecipientFro..."
QT_MOC_LITERAL(52, 1087, 27), // "changePermissionModeFromQml"
QT_MOC_LITERAL(53, 1115, 20), // "SharePermissionsMode"
QT_MOC_LITERAL(54, 1136, 14), // "permissionMode"
QT_MOC_LITERAL(55, 1151, 17), // "setLinkShareLabel"
QT_MOC_LITERAL(56, 1169, 30), // "QSharedPointer<OCC::LinkShare>"
QT_MOC_LITERAL(57, 1200, 9), // "linkShare"
QT_MOC_LITERAL(58, 1210, 5), // "label"
QT_MOC_LITERAL(59, 1216, 24), // "setLinkShareLabelFromQml"
QT_MOC_LITERAL(60, 1241, 18), // "setShareExpireDate"
QT_MOC_LITERAL(61, 1260, 12), // "milliseconds"
QT_MOC_LITERAL(62, 1273, 25), // "setShareExpireDateFromQml"
QT_MOC_LITERAL(63, 1299, 16), // "setSharePassword"
QT_MOC_LITERAL(64, 1316, 23), // "setSharePasswordFromQml"
QT_MOC_LITERAL(65, 1340, 12), // "setShareNote"
QT_MOC_LITERAL(66, 1353, 4), // "note"
QT_MOC_LITERAL(67, 1358, 19), // "setShareNoteFromQml"
QT_MOC_LITERAL(68, 1378, 9), // "resetData"
QT_MOC_LITERAL(69, 1388, 10), // "updateData"
QT_MOC_LITERAL(70, 1399, 16), // "initShareManager"
QT_MOC_LITERAL(71, 1416, 26), // "handlePlaceholderLinkShare"
QT_MOC_LITERAL(72, 1443, 29), // "handleSecureFileDropLinkShare"
QT_MOC_LITERAL(73, 1473, 15), // "handleLinkShare"
QT_MOC_LITERAL(74, 1489, 22), // "setupInternalLinkShare"
QT_MOC_LITERAL(75, 1512, 34), // "setSharePermissionChangeInPro..."
QT_MOC_LITERAL(76, 1547, 12), // "isInProgress"
QT_MOC_LITERAL(77, 1560, 38), // "setHideDownloadEnabledChangeI..."
QT_MOC_LITERAL(78, 1599, 20), // "slotPropfindReceived"
QT_MOC_LITERAL(79, 1620, 6), // "result"
QT_MOC_LITERAL(80, 1627, 15), // "slotServerError"
QT_MOC_LITERAL(81, 1643, 12), // "slotAddShare"
QT_MOC_LITERAL(82, 1656, 21), // "slotRemoveShareWithId"
QT_MOC_LITERAL(83, 1678, 17), // "slotSharesFetched"
QT_MOC_LITERAL(84, 1696, 20), // "QList<OCC::SharePtr>"
QT_MOC_LITERAL(85, 1717, 6), // "shares"
QT_MOC_LITERAL(86, 1724, 13), // "slotAddSharee"
QT_MOC_LITERAL(87, 1738, 16), // "slotRemoveSharee"
QT_MOC_LITERAL(88, 1755, 23), // "slotSharePermissionsSet"
QT_MOC_LITERAL(89, 1779, 20), // "slotSharePasswordSet"
QT_MOC_LITERAL(90, 1800, 16), // "slotShareNoteSet"
QT_MOC_LITERAL(91, 1817, 19), // "slotHideDownloadSet"
QT_MOC_LITERAL(92, 1837, 16), // "slotShareNameSet"
QT_MOC_LITERAL(93, 1854, 17), // "slotShareLabelSet"
QT_MOC_LITERAL(94, 1872, 22), // "slotShareExpireDateSet"
QT_MOC_LITERAL(95, 1895, 13), // "AccountState*"
QT_MOC_LITERAL(96, 1909, 16), // "accountConnected"
QT_MOC_LITERAL(97, 1926, 14), // "sharingEnabled"
QT_MOC_LITERAL(98, 1941, 23), // "publicLinkSharesEnabled"
QT_MOC_LITERAL(99, 1965, 23), // "userGroupSharingEnabled"
QT_MOC_LITERAL(100, 1989, 8), // "canShare"
QT_MOC_LITERAL(101, 1998, 12), // "fetchOngoing"
QT_MOC_LITERAL(102, 2011, 29), // "hasInitialShareFetchCompleted"
QT_MOC_LITERAL(103, 2041, 7), // "sharees"
QT_MOC_LITERAL(104, 2049, 5), // "Roles"
QT_MOC_LITERAL(105, 2055, 9), // "ShareRole"
QT_MOC_LITERAL(106, 2065, 13), // "ShareTypeRole"
QT_MOC_LITERAL(107, 2079, 11), // "ShareIdRole"
QT_MOC_LITERAL(108, 2091, 11), // "IconUrlRole"
QT_MOC_LITERAL(109, 2103, 13), // "AvatarUrlRole"
QT_MOC_LITERAL(110, 2117, 8), // "LinkRole"
QT_MOC_LITERAL(111, 2126, 17), // "LinkShareNameRole"
QT_MOC_LITERAL(112, 2144, 18), // "LinkShareLabelRole"
QT_MOC_LITERAL(113, 2163, 15), // "NoteEnabledRole"
QT_MOC_LITERAL(114, 2179, 8), // "NoteRole"
QT_MOC_LITERAL(115, 2188, 21), // "ExpireDateEnabledRole"
QT_MOC_LITERAL(116, 2210, 22), // "ExpireDateEnforcedRole"
QT_MOC_LITERAL(117, 2233, 14), // "ExpireDateRole"
QT_MOC_LITERAL(118, 2248, 29), // "EnforcedMaximumExpireDateRole"
QT_MOC_LITERAL(119, 2278, 26), // "PasswordProtectEnabledRole"
QT_MOC_LITERAL(120, 2305, 12), // "PasswordRole"
QT_MOC_LITERAL(121, 2318, 20), // "PasswordEnforcedRole"
QT_MOC_LITERAL(122, 2339, 18), // "EditingAllowedRole"
QT_MOC_LITERAL(123, 2358, 25), // "CurrentPermissionModeRole"
QT_MOC_LITERAL(124, 2384, 18), // "SharedItemTypeRole"
QT_MOC_LITERAL(125, 2403, 34), // "IsSharePermissionsChangeInPro..."
QT_MOC_LITERAL(126, 2438, 23), // "HideDownloadEnabledRole"
QT_MOC_LITERAL(127, 2462, 37), // "IsHideDownloadEnabledChangeIn..."
QT_MOC_LITERAL(128, 2500, 9), // "ShareType"
QT_MOC_LITERAL(129, 2510, 13), // "ShareTypeUser"
QT_MOC_LITERAL(130, 2524, 14), // "ShareTypeGroup"
QT_MOC_LITERAL(131, 2539, 13), // "ShareTypeLink"
QT_MOC_LITERAL(132, 2553, 14), // "ShareTypeEmail"
QT_MOC_LITERAL(133, 2568, 15), // "ShareTypeRemote"
QT_MOC_LITERAL(134, 2584, 15), // "ShareTypeCircle"
QT_MOC_LITERAL(135, 2600, 13), // "ShareTypeRoom"
QT_MOC_LITERAL(136, 2614, 24), // "ShareTypePlaceholderLink"
QT_MOC_LITERAL(137, 2639, 21), // "ShareTypeInternalLink"
QT_MOC_LITERAL(138, 2661, 38), // "ShareTypeSecureFileDropPlaceh..."
QT_MOC_LITERAL(139, 2700, 14), // "SharedItemType"
QT_MOC_LITERAL(140, 2715, 23), // "SharedItemTypeUndefined"
QT_MOC_LITERAL(141, 2739, 18), // "SharedItemTypeFile"
QT_MOC_LITERAL(142, 2758, 20), // "SharedItemTypeFolder"
QT_MOC_LITERAL(143, 2779, 27), // "SharedItemTypeEncryptedFile"
QT_MOC_LITERAL(144, 2807, 29), // "SharedItemTypeEncryptedFolder"
QT_MOC_LITERAL(145, 2837, 37), // "SharedItemTypeEncryptedTopLev..."
QT_MOC_LITERAL(146, 2875, 12), // "ModeViewOnly"
QT_MOC_LITERAL(147, 2888, 20), // "ModeUploadAndEditing"
QT_MOC_LITERAL(148, 2909, 16) // "ModeFileDropOnly"

    },
    "OCC::ShareModel\0localPathChanged\0\0"
    "accountStateChanged\0accountConnectedChanged\0"
    "sharingEnabledChanged\0"
    "publicLinkSharesEnabledChanged\0"
    "userGroupSharingEnabledChanged\0"
    "sharePermissionsChanged\0lockExpireStringChanged\0"
    "fetchOngoingChanged\0"
    "hasInitialShareFetchCompletedChanged\0"
    "shareesChanged\0internalLinkReady\0"
    "serverError\0code\0message\0passwordSetError\0"
    "shareId\0requestPasswordForLinkShare\0"
    "requestPasswordForEmailSharee\0"
    "OCC::ShareePtr\0sharee\0sharesChanged\0"
    "setAccountState\0OCC::AccountState*\0"
    "accountState\0setLocalPath\0localPath\0"
    "createNewLinkShare\0createNewLinkShareWithPassword\0"
    "password\0createNewUserGroupShare\0"
    "createNewUserGroupShareFromQml\0"
    "createNewUserGroupShareWithPassword\0"
    "createNewUserGroupShareWithPasswordFromQml\0"
    "deleteShare\0OCC::SharePtr\0share\0"
    "deleteShareFromQml\0toggleHideDownloadFromQml\0"
    "enable\0toggleShareAllowEditing\0"
    "toggleShareAllowEditingFromQml\0"
    "toggleShareAllowResharing\0"
    "toggleShareAllowResharingFromQml\0"
    "toggleSharePasswordProtect\0"
    "toggleSharePasswordProtectFromQml\0"
    "toggleShareExpirationDate\0"
    "toggleShareExpirationDateFromQml\0"
    "toggleShareNoteToRecipient\0"
    "toggleShareNoteToRecipientFromQml\0"
    "changePermissionModeFromQml\0"
    "SharePermissionsMode\0permissionMode\0"
    "setLinkShareLabel\0QSharedPointer<OCC::LinkShare>\0"
    "linkShare\0label\0setLinkShareLabelFromQml\0"
    "setShareExpireDate\0milliseconds\0"
    "setShareExpireDateFromQml\0setSharePassword\0"
    "setSharePasswordFromQml\0setShareNote\0"
    "note\0setShareNoteFromQml\0resetData\0"
    "updateData\0initShareManager\0"
    "handlePlaceholderLinkShare\0"
    "handleSecureFileDropLinkShare\0"
    "handleLinkShare\0setupInternalLinkShare\0"
    "setSharePermissionChangeInProgress\0"
    "isInProgress\0setHideDownloadEnabledChangeInProgress\0"
    "slotPropfindReceived\0result\0slotServerError\0"
    "slotAddShare\0slotRemoveShareWithId\0"
    "slotSharesFetched\0QList<OCC::SharePtr>\0"
    "shares\0slotAddSharee\0slotRemoveSharee\0"
    "slotSharePermissionsSet\0slotSharePasswordSet\0"
    "slotShareNoteSet\0slotHideDownloadSet\0"
    "slotShareNameSet\0slotShareLabelSet\0"
    "slotShareExpireDateSet\0AccountState*\0"
    "accountConnected\0sharingEnabled\0"
    "publicLinkSharesEnabled\0userGroupSharingEnabled\0"
    "canShare\0fetchOngoing\0"
    "hasInitialShareFetchCompleted\0sharees\0"
    "Roles\0ShareRole\0ShareTypeRole\0ShareIdRole\0"
    "IconUrlRole\0AvatarUrlRole\0LinkRole\0"
    "LinkShareNameRole\0LinkShareLabelRole\0"
    "NoteEnabledRole\0NoteRole\0ExpireDateEnabledRole\0"
    "ExpireDateEnforcedRole\0ExpireDateRole\0"
    "EnforcedMaximumExpireDateRole\0"
    "PasswordProtectEnabledRole\0PasswordRole\0"
    "PasswordEnforcedRole\0EditingAllowedRole\0"
    "CurrentPermissionModeRole\0SharedItemTypeRole\0"
    "IsSharePermissionsChangeInProgress\0"
    "HideDownloadEnabledRole\0"
    "IsHideDownloadEnabledChangeInProgress\0"
    "ShareType\0ShareTypeUser\0ShareTypeGroup\0"
    "ShareTypeLink\0ShareTypeEmail\0"
    "ShareTypeRemote\0ShareTypeCircle\0"
    "ShareTypeRoom\0ShareTypePlaceholderLink\0"
    "ShareTypeInternalLink\0"
    "ShareTypeSecureFileDropPlaceholderLink\0"
    "SharedItemType\0SharedItemTypeUndefined\0"
    "SharedItemTypeFile\0SharedItemTypeFolder\0"
    "SharedItemTypeEncryptedFile\0"
    "SharedItemTypeEncryptedFolder\0"
    "SharedItemTypeEncryptedTopLevelFolder\0"
    "ModeViewOnly\0ModeUploadAndEditing\0"
    "ModeFileDropOnly"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ShareModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      70,   14, // methods
      10,  586, // properties
       4,  626, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  364,    2, 0x06 /* Public */,
       3,    0,  365,    2, 0x06 /* Public */,
       4,    0,  366,    2, 0x06 /* Public */,
       5,    0,  367,    2, 0x06 /* Public */,
       6,    0,  368,    2, 0x06 /* Public */,
       7,    0,  369,    2, 0x06 /* Public */,
       8,    0,  370,    2, 0x06 /* Public */,
       9,    0,  371,    2, 0x06 /* Public */,
      10,    0,  372,    2, 0x06 /* Public */,
      11,    0,  373,    2, 0x06 /* Public */,
      12,    0,  374,    2, 0x06 /* Public */,
      13,    0,  375,    2, 0x06 /* Public */,
      14,    2,  376,    2, 0x06 /* Public */,
      17,    3,  381,    2, 0x06 /* Public */,
      19,    0,  388,    2, 0x06 /* Public */,
      20,    1,  389,    2, 0x06 /* Public */,
      23,    0,  392,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    1,  393,    2, 0x0a /* Public */,
      27,    1,  396,    2, 0x0a /* Public */,
      29,    0,  399,    2, 0x0a /* Public */,
      30,    1,  400,    2, 0x0a /* Public */,
      32,    1,  403,    2, 0x0a /* Public */,
      33,    1,  406,    2, 0x0a /* Public */,
      34,    2,  409,    2, 0x0a /* Public */,
      35,    2,  414,    2, 0x0a /* Public */,
      36,    1,  419,    2, 0x0a /* Public */,
      39,    1,  422,    2, 0x0a /* Public */,
      40,    2,  425,    2, 0x0a /* Public */,
      42,    2,  430,    2, 0x0a /* Public */,
      43,    2,  435,    2, 0x0a /* Public */,
      44,    2,  440,    2, 0x0a /* Public */,
      45,    2,  445,    2, 0x0a /* Public */,
      46,    2,  450,    2, 0x0a /* Public */,
      47,    2,  455,    2, 0x0a /* Public */,
      48,    2,  460,    2, 0x0a /* Public */,
      49,    2,  465,    2, 0x0a /* Public */,
      50,    2,  470,    2, 0x0a /* Public */,
      51,    2,  475,    2, 0x0a /* Public */,
      52,    2,  480,    2, 0x0a /* Public */,
      55,    2,  485,    2, 0x0a /* Public */,
      59,    2,  490,    2, 0x0a /* Public */,
      60,    2,  495,    2, 0x0a /* Public */,
      62,    2,  500,    2, 0x0a /* Public */,
      63,    2,  505,    2, 0x0a /* Public */,
      64,    2,  510,    2, 0x0a /* Public */,
      65,    2,  515,    2, 0x0a /* Public */,
      67,    2,  520,    2, 0x0a /* Public */,
      68,    0,  525,    2, 0x08 /* Private */,
      69,    0,  526,    2, 0x08 /* Private */,
      70,    0,  527,    2, 0x08 /* Private */,
      71,    0,  528,    2, 0x08 /* Private */,
      72,    0,  529,    2, 0x08 /* Private */,
      73,    0,  530,    2, 0x08 /* Private */,
      74,    0,  531,    2, 0x08 /* Private */,
      75,    2,  532,    2, 0x08 /* Private */,
      77,    2,  537,    2, 0x08 /* Private */,
      78,    1,  542,    2, 0x08 /* Private */,
      80,    2,  545,    2, 0x08 /* Private */,
      81,    1,  550,    2, 0x08 /* Private */,
      82,    1,  553,    2, 0x08 /* Private */,
      83,    1,  556,    2, 0x08 /* Private */,
      86,    1,  559,    2, 0x08 /* Private */,
      87,    1,  562,    2, 0x08 /* Private */,
      88,    1,  565,    2, 0x08 /* Private */,
      89,    1,  568,    2, 0x08 /* Private */,
      90,    1,  571,    2, 0x08 /* Private */,
      91,    1,  574,    2, 0x08 /* Private */,
      92,    1,  577,    2, 0x08 /* Private */,
      93,    1,  580,    2, 0x08 /* Private */,
      94,    1,  583,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,   18,   15,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::QVariant,   22,
    QMetaType::Void, 0x80000000 | 21, QMetaType::QString,   22,   31,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QString,   22,   31,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, QMetaType::QVariant,   38,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool,   38,   41,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Bool,   38,   41,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool,   38,   41,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Bool,   38,   41,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool,   38,   41,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Bool,   38,   41,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool,   38,   41,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Bool,   38,   41,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool,   38,   41,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Bool,   38,   41,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool,   38,   41,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 53,   38,   54,
    QMetaType::Void, 0x80000000 | 56, QMetaType::QString,   57,   58,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QString,   57,   58,
    QMetaType::Void, 0x80000000 | 37, QMetaType::LongLong,   38,   61,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariant,   38,   61,
    QMetaType::Void, 0x80000000 | 37, QMetaType::QString,   38,   31,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QString,   38,   31,
    QMetaType::Void, 0x80000000 | 37, QMetaType::QString,   38,   66,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QString,   38,   66,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   18,   76,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   18,   76,
    QMetaType::Void, QMetaType::QVariantMap,   79,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   15,   16,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, 0x80000000 | 84,   85,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,

 // properties: name, type, flags
      26, 0x80000000 | 95, 0x0049510b,
      28, QMetaType::QString, 0x00495103,
      96, QMetaType::Bool, 0x00495001,
      97, QMetaType::Bool, 0x00495001,
      98, QMetaType::Bool, 0x00495001,
      99, QMetaType::Bool, 0x00495001,
     100, QMetaType::Bool, 0x00495001,
     101, QMetaType::Bool, 0x00495001,
     102, QMetaType::Bool, 0x00495001,
     103, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       1,
       0,
       2,
       3,
       4,
       5,
       6,
       8,
       9,
      10,

 // enums: name, alias, flags, count, data
     104,  104, 0x0,   23,  646,
     128,  128, 0x0,   10,  692,
     139,  139, 0x2,    6,  712,
      53,   53, 0x2,    3,  724,

 // enum data: key, value
     105, uint(OCC::ShareModel::ShareRole),
     106, uint(OCC::ShareModel::ShareTypeRole),
     107, uint(OCC::ShareModel::ShareIdRole),
     108, uint(OCC::ShareModel::IconUrlRole),
     109, uint(OCC::ShareModel::AvatarUrlRole),
     110, uint(OCC::ShareModel::LinkRole),
     111, uint(OCC::ShareModel::LinkShareNameRole),
     112, uint(OCC::ShareModel::LinkShareLabelRole),
     113, uint(OCC::ShareModel::NoteEnabledRole),
     114, uint(OCC::ShareModel::NoteRole),
     115, uint(OCC::ShareModel::ExpireDateEnabledRole),
     116, uint(OCC::ShareModel::ExpireDateEnforcedRole),
     117, uint(OCC::ShareModel::ExpireDateRole),
     118, uint(OCC::ShareModel::EnforcedMaximumExpireDateRole),
     119, uint(OCC::ShareModel::PasswordProtectEnabledRole),
     120, uint(OCC::ShareModel::PasswordRole),
     121, uint(OCC::ShareModel::PasswordEnforcedRole),
     122, uint(OCC::ShareModel::EditingAllowedRole),
     123, uint(OCC::ShareModel::CurrentPermissionModeRole),
     124, uint(OCC::ShareModel::SharedItemTypeRole),
     125, uint(OCC::ShareModel::IsSharePermissionsChangeInProgress),
     126, uint(OCC::ShareModel::HideDownloadEnabledRole),
     127, uint(OCC::ShareModel::IsHideDownloadEnabledChangeInProgress),
     129, uint(OCC::ShareModel::ShareTypeUser),
     130, uint(OCC::ShareModel::ShareTypeGroup),
     131, uint(OCC::ShareModel::ShareTypeLink),
     132, uint(OCC::ShareModel::ShareTypeEmail),
     133, uint(OCC::ShareModel::ShareTypeRemote),
     134, uint(OCC::ShareModel::ShareTypeCircle),
     135, uint(OCC::ShareModel::ShareTypeRoom),
     136, uint(OCC::ShareModel::ShareTypePlaceholderLink),
     137, uint(OCC::ShareModel::ShareTypeInternalLink),
     138, uint(OCC::ShareModel::ShareTypeSecureFileDropPlaceholderLink),
     140, uint(OCC::ShareModel::SharedItemType::SharedItemTypeUndefined),
     141, uint(OCC::ShareModel::SharedItemType::SharedItemTypeFile),
     142, uint(OCC::ShareModel::SharedItemType::SharedItemTypeFolder),
     143, uint(OCC::ShareModel::SharedItemType::SharedItemTypeEncryptedFile),
     144, uint(OCC::ShareModel::SharedItemType::SharedItemTypeEncryptedFolder),
     145, uint(OCC::ShareModel::SharedItemType::SharedItemTypeEncryptedTopLevelFolder),
     146, uint(OCC::ShareModel::SharePermissionsMode::ModeViewOnly),
     147, uint(OCC::ShareModel::SharePermissionsMode::ModeUploadAndEditing),
     148, uint(OCC::ShareModel::SharePermissionsMode::ModeFileDropOnly),

       0        // eod
};

void OCC::ShareModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShareModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->localPathChanged(); break;
        case 1: _t->accountStateChanged(); break;
        case 2: _t->accountConnectedChanged(); break;
        case 3: _t->sharingEnabledChanged(); break;
        case 4: _t->publicLinkSharesEnabledChanged(); break;
        case 5: _t->userGroupSharingEnabledChanged(); break;
        case 6: _t->sharePermissionsChanged(); break;
        case 7: _t->lockExpireStringChanged(); break;
        case 8: _t->fetchOngoingChanged(); break;
        case 9: _t->hasInitialShareFetchCompletedChanged(); break;
        case 10: _t->shareesChanged(); break;
        case 11: _t->internalLinkReady(); break;
        case 12: _t->serverError((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->passwordSetError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 14: _t->requestPasswordForLinkShare(); break;
        case 15: _t->requestPasswordForEmailSharee((*reinterpret_cast< const OCC::ShareePtr(*)>(_a[1]))); break;
        case 16: _t->sharesChanged(); break;
        case 17: _t->setAccountState((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 18: _t->setLocalPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->createNewLinkShare(); break;
        case 20: _t->createNewLinkShareWithPassword((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->createNewUserGroupShare((*reinterpret_cast< const OCC::ShareePtr(*)>(_a[1]))); break;
        case 22: _t->createNewUserGroupShareFromQml((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 23: _t->createNewUserGroupShareWithPassword((*reinterpret_cast< const OCC::ShareePtr(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 24: _t->createNewUserGroupShareWithPasswordFromQml((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 25: _t->deleteShare((*reinterpret_cast< const OCC::SharePtr(*)>(_a[1]))); break;
        case 26: _t->deleteShareFromQml((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 27: _t->toggleHideDownloadFromQml((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 28: _t->toggleShareAllowEditing((*reinterpret_cast< const OCC::SharePtr(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 29: _t->toggleShareAllowEditingFromQml((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 30: _t->toggleShareAllowResharing((*reinterpret_cast< const OCC::SharePtr(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 31: _t->toggleShareAllowResharingFromQml((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 32: _t->toggleSharePasswordProtect((*reinterpret_cast< const OCC::SharePtr(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 33: _t->toggleSharePasswordProtectFromQml((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 34: _t->toggleShareExpirationDate((*reinterpret_cast< const OCC::SharePtr(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 35: _t->toggleShareExpirationDateFromQml((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 36: _t->toggleShareNoteToRecipient((*reinterpret_cast< const OCC::SharePtr(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 37: _t->toggleShareNoteToRecipientFromQml((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 38: _t->changePermissionModeFromQml((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const SharePermissionsMode(*)>(_a[2]))); break;
        case 39: _t->setLinkShareLabel((*reinterpret_cast< const QSharedPointer<OCC::LinkShare>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 40: _t->setLinkShareLabelFromQml((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 41: _t->setShareExpireDate((*reinterpret_cast< const OCC::SharePtr(*)>(_a[1])),(*reinterpret_cast< const qint64(*)>(_a[2]))); break;
        case 42: _t->setShareExpireDateFromQml((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 43: _t->setSharePassword((*reinterpret_cast< const OCC::SharePtr(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 44: _t->setSharePasswordFromQml((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 45: _t->setShareNote((*reinterpret_cast< const OCC::SharePtr(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 46: _t->setShareNoteFromQml((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 47: _t->resetData(); break;
        case 48: _t->updateData(); break;
        case 49: _t->initShareManager(); break;
        case 50: _t->handlePlaceholderLinkShare(); break;
        case 51: _t->handleSecureFileDropLinkShare(); break;
        case 52: _t->handleLinkShare(); break;
        case 53: _t->setupInternalLinkShare(); break;
        case 54: _t->setSharePermissionChangeInProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 55: _t->setHideDownloadEnabledChangeInProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 56: _t->slotPropfindReceived((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 57: _t->slotServerError((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 58: _t->slotAddShare((*reinterpret_cast< const OCC::SharePtr(*)>(_a[1]))); break;
        case 59: _t->slotRemoveShareWithId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 60: _t->slotSharesFetched((*reinterpret_cast< const QList<OCC::SharePtr>(*)>(_a[1]))); break;
        case 61: _t->slotAddSharee((*reinterpret_cast< const OCC::ShareePtr(*)>(_a[1]))); break;
        case 62: _t->slotRemoveSharee((*reinterpret_cast< const OCC::ShareePtr(*)>(_a[1]))); break;
        case 63: _t->slotSharePermissionsSet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 64: _t->slotSharePasswordSet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 65: _t->slotShareNoteSet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 66: _t->slotHideDownloadSet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 67: _t->slotShareNameSet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 68: _t->slotShareLabelSet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 69: _t->slotShareExpireDateSet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::ShareePtr >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountState* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::ShareePtr >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::ShareePtr >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SharePtr >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SharePtr >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SharePtr >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SharePtr >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SharePtr >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SharePtr >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<OCC::LinkShare> >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SharePtr >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SharePtr >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SharePtr >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::SharePtr >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<OCC::SharePtr> >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::ShareePtr >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::ShareePtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShareModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::localPathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::accountStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::accountConnectedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::sharingEnabledChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::publicLinkSharesEnabledChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::userGroupSharingEnabledChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::sharePermissionsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::lockExpireStringChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::fetchOngoingChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::hasInitialShareFetchCompletedChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::shareesChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::internalLinkReady)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)(const int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::serverError)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)(const QString & , const int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::passwordSetError)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::requestPasswordForLinkShare)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)(const OCC::ShareePtr & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::requestPasswordForEmailSharee)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareModel::sharesChanged)) {
                *result = 16;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountState* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ShareModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AccountState**>(_v) = _t->accountState(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->localPath(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->accountConnected(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->sharingEnabled(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->publicLinkSharesEnabled(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->userGroupSharingEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->canShare(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->fetchOngoing(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->hasInitialShareFetchCompleted(); break;
        case 9: *reinterpret_cast< QVariantList*>(_v) = _t->sharees(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ShareModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccountState(*reinterpret_cast< AccountState**>(_v)); break;
        case 1: _t->setLocalPath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OCC::ShareModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_OCC__ShareModel.data,
    qt_meta_data_OCC__ShareModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::ShareModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ShareModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ShareModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::ShareModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OCC::ShareModel::localPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::ShareModel::accountStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::ShareModel::accountConnectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::ShareModel::sharingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::ShareModel::publicLinkSharesEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::ShareModel::userGroupSharingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void OCC::ShareModel::sharePermissionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OCC::ShareModel::lockExpireStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void OCC::ShareModel::fetchOngoingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void OCC::ShareModel::hasInitialShareFetchCompletedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void OCC::ShareModel::shareesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void OCC::ShareModel::internalLinkReady()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void OCC::ShareModel::serverError(const int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void OCC::ShareModel::passwordSetError(const QString & _t1, const int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void OCC::ShareModel::requestPasswordForLinkShare()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void OCC::ShareModel::requestPasswordForEmailSharee(const OCC::ShareePtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void OCC::ShareModel::sharesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
