/****************************************************************************
** Meta object code from reading C++ file 'accountsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/accountsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__AccountSettings_t {
    QByteArrayData data[90];
    char stringdata0[1757];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__AccountSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__AccountSettings_t qt_meta_stringdata_OCC__AccountSettings = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OCC::AccountSettings"
QT_MOC_LITERAL(1, 21, 13), // "folderChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "openFolderAlias"
QT_MOC_LITERAL(4, 52, 14), // "showIssuesList"
QT_MOC_LITERAL(5, 67, 18), // "OCC::AccountState*"
QT_MOC_LITERAL(6, 86, 7), // "account"
QT_MOC_LITERAL(7, 94, 15), // "requestMnemonic"
QT_MOC_LITERAL(8, 110, 20), // "removeAccountFolders"
QT_MOC_LITERAL(9, 131, 12), // "styleChanged"
QT_MOC_LITERAL(10, 144, 10), // "slotOpenOC"
QT_MOC_LITERAL(11, 155, 15), // "slotUpdateQuota"
QT_MOC_LITERAL(12, 171, 5), // "total"
QT_MOC_LITERAL(13, 177, 4), // "used"
QT_MOC_LITERAL(14, 182, 23), // "slotAccountStateChanged"
QT_MOC_LITERAL(15, 206, 16), // "slotStyleChanged"
QT_MOC_LITERAL(16, 223, 13), // "accountsState"
QT_MOC_LITERAL(17, 237, 27), // "slotHideSelectiveSyncWidget"
QT_MOC_LITERAL(18, 265, 13), // "slotAddFolder"
QT_MOC_LITERAL(19, 279, 23), // "slotEnableCurrentFolder"
QT_MOC_LITERAL(20, 303, 9), // "terminate"
QT_MOC_LITERAL(21, 313, 25), // "slotScheduleCurrentFolder"
QT_MOC_LITERAL(22, 339, 45), // "slotScheduleCurrentFolderForc..."
QT_MOC_LITERAL(23, 385, 26), // "slotForceSyncCurrentFolder"
QT_MOC_LITERAL(24, 412, 23), // "slotRemoveCurrentFolder"
QT_MOC_LITERAL(25, 436, 21), // "slotOpenCurrentFolder"
QT_MOC_LITERAL(26, 458, 29), // "slotOpenCurrentLocalSubFolder"
QT_MOC_LITERAL(27, 488, 27), // "slotEditCurrentIgnoredFiles"
QT_MOC_LITERAL(28, 516, 24), // "slotOpenMakeFolderDialog"
QT_MOC_LITERAL(29, 541, 32), // "slotEditCurrentLocalIgnoredFiles"
QT_MOC_LITERAL(30, 574, 26), // "slotEnableVfsCurrentFolder"
QT_MOC_LITERAL(31, 601, 27), // "slotDisableVfsCurrentFolder"
QT_MOC_LITERAL(32, 629, 32), // "slotSetCurrentFolderAvailability"
QT_MOC_LITERAL(33, 662, 13), // "OCC::PinState"
QT_MOC_LITERAL(34, 676, 5), // "state"
QT_MOC_LITERAL(35, 682, 28), // "slotSetSubFolderAvailability"
QT_MOC_LITERAL(36, 711, 12), // "OCC::Folder*"
QT_MOC_LITERAL(37, 724, 6), // "folder"
QT_MOC_LITERAL(38, 731, 4), // "path"
QT_MOC_LITERAL(39, 736, 24), // "slotFolderWizardAccepted"
QT_MOC_LITERAL(40, 761, 24), // "slotFolderWizardRejected"
QT_MOC_LITERAL(41, 786, 21), // "slotToggleSignInState"
QT_MOC_LITERAL(42, 808, 26), // "refreshSelectiveSyncStatus"
QT_MOC_LITERAL(43, 835, 26), // "slotMarkSubfolderEncrypted"
QT_MOC_LITERAL(44, 862, 38), // "OCC::FolderStatusModel::SubFo..."
QT_MOC_LITERAL(45, 901, 10), // "folderInfo"
QT_MOC_LITERAL(46, 912, 33), // "slotSubfolderContextMenuReque..."
QT_MOC_LITERAL(47, 946, 11), // "QModelIndex"
QT_MOC_LITERAL(48, 958, 3), // "idx"
QT_MOC_LITERAL(49, 962, 5), // "point"
QT_MOC_LITERAL(50, 968, 30), // "slotCustomContextMenuRequested"
QT_MOC_LITERAL(51, 999, 21), // "slotFolderListClicked"
QT_MOC_LITERAL(52, 1021, 4), // "indx"
QT_MOC_LITERAL(53, 1026, 8), // "doExpand"
QT_MOC_LITERAL(54, 1035, 17), // "slotLinkActivated"
QT_MOC_LITERAL(55, 1053, 4), // "link"
QT_MOC_LITERAL(56, 1058, 14), // "slotMoreMemory"
QT_MOC_LITERAL(57, 1073, 30), // "slotE2eEncryptionMnemonicReady"
QT_MOC_LITERAL(58, 1104, 29), // "slotE2eEncryptionGenerateKeys"
QT_MOC_LITERAL(59, 1134, 39), // "slotE2eEncryptionInitializati..."
QT_MOC_LITERAL(60, 1174, 22), // "isNewMnemonicGenerated"
QT_MOC_LITERAL(61, 1197, 25), // "slotEncryptFolderFinished"
QT_MOC_LITERAL(62, 1223, 6), // "status"
QT_MOC_LITERAL(63, 1230, 24), // "slotSelectiveSyncChanged"
QT_MOC_LITERAL(64, 1255, 7), // "topLeft"
QT_MOC_LITERAL(65, 1263, 11), // "bottomRight"
QT_MOC_LITERAL(66, 1275, 12), // "QVector<int>"
QT_MOC_LITERAL(67, 1288, 5), // "roles"
QT_MOC_LITERAL(68, 1294, 48), // "slotPossiblyUnblacklistE2EeFo..."
QT_MOC_LITERAL(69, 1343, 36), // "updateBlackListAndScheduleFol..."
QT_MOC_LITERAL(70, 1380, 9), // "blackList"
QT_MOC_LITERAL(71, 1390, 28), // "foldersToRemoveFromBlacklist"
QT_MOC_LITERAL(72, 1419, 37), // "folderTerminateSyncAndUpdateB..."
QT_MOC_LITERAL(73, 1457, 15), // "displayMnemonic"
QT_MOC_LITERAL(74, 1473, 8), // "mnemonic"
QT_MOC_LITERAL(75, 1482, 27), // "disableEncryptionForAccount"
QT_MOC_LITERAL(76, 1510, 15), // "OCC::AccountPtr"
QT_MOC_LITERAL(77, 1526, 19), // "showConnectionLabel"
QT_MOC_LITERAL(78, 1546, 7), // "message"
QT_MOC_LITERAL(79, 1554, 6), // "errors"
QT_MOC_LITERAL(80, 1561, 22), // "openIgnoredFilesDialog"
QT_MOC_LITERAL(81, 1584, 13), // "absFolderPath"
QT_MOC_LITERAL(82, 1598, 14), // "customizeStyle"
QT_MOC_LITERAL(83, 1613, 23), // "initializeE2eEncryption"
QT_MOC_LITERAL(84, 1637, 18), // "resetE2eEncryption"
QT_MOC_LITERAL(85, 1656, 30), // "checkClientSideEncryptionState"
QT_MOC_LITERAL(86, 1687, 33), // "removeActionFromEncryptionMes..."
QT_MOC_LITERAL(87, 1721, 8), // "actionId"
QT_MOC_LITERAL(88, 1730, 12), // "accountState"
QT_MOC_LITERAL(89, 1743, 13) // "AccountState*"

    },
    "OCC::AccountSettings\0folderChanged\0\0"
    "openFolderAlias\0showIssuesList\0"
    "OCC::AccountState*\0account\0requestMnemonic\0"
    "removeAccountFolders\0styleChanged\0"
    "slotOpenOC\0slotUpdateQuota\0total\0used\0"
    "slotAccountStateChanged\0slotStyleChanged\0"
    "accountsState\0slotHideSelectiveSyncWidget\0"
    "slotAddFolder\0slotEnableCurrentFolder\0"
    "terminate\0slotScheduleCurrentFolder\0"
    "slotScheduleCurrentFolderForceRemoteDiscovery\0"
    "slotForceSyncCurrentFolder\0"
    "slotRemoveCurrentFolder\0slotOpenCurrentFolder\0"
    "slotOpenCurrentLocalSubFolder\0"
    "slotEditCurrentIgnoredFiles\0"
    "slotOpenMakeFolderDialog\0"
    "slotEditCurrentLocalIgnoredFiles\0"
    "slotEnableVfsCurrentFolder\0"
    "slotDisableVfsCurrentFolder\0"
    "slotSetCurrentFolderAvailability\0"
    "OCC::PinState\0state\0slotSetSubFolderAvailability\0"
    "OCC::Folder*\0folder\0path\0"
    "slotFolderWizardAccepted\0"
    "slotFolderWizardRejected\0slotToggleSignInState\0"
    "refreshSelectiveSyncStatus\0"
    "slotMarkSubfolderEncrypted\0"
    "OCC::FolderStatusModel::SubFolderInfo*\0"
    "folderInfo\0slotSubfolderContextMenuRequested\0"
    "QModelIndex\0idx\0point\0"
    "slotCustomContextMenuRequested\0"
    "slotFolderListClicked\0indx\0doExpand\0"
    "slotLinkActivated\0link\0slotMoreMemory\0"
    "slotE2eEncryptionMnemonicReady\0"
    "slotE2eEncryptionGenerateKeys\0"
    "slotE2eEncryptionInitializationFinished\0"
    "isNewMnemonicGenerated\0slotEncryptFolderFinished\0"
    "status\0slotSelectiveSyncChanged\0topLeft\0"
    "bottomRight\0QVector<int>\0roles\0"
    "slotPossiblyUnblacklistE2EeFoldersAndRestartSync\0"
    "updateBlackListAndScheduleFolderSync\0"
    "blackList\0foldersToRemoveFromBlacklist\0"
    "folderTerminateSyncAndUpdateBlackList\0"
    "displayMnemonic\0mnemonic\0"
    "disableEncryptionForAccount\0OCC::AccountPtr\0"
    "showConnectionLabel\0message\0errors\0"
    "openIgnoredFilesDialog\0absFolderPath\0"
    "customizeStyle\0initializeE2eEncryption\0"
    "resetE2eEncryption\0checkClientSideEncryptionState\0"
    "removeActionFromEncryptionMessage\0"
    "actionId\0accountState\0AccountState*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__AccountSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       1,  424, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  299,    2, 0x06 /* Public */,
       3,    1,  300,    2, 0x06 /* Public */,
       4,    1,  303,    2, 0x06 /* Public */,
       7,    0,  306,    2, 0x06 /* Public */,
       8,    1,  307,    2, 0x06 /* Public */,
       9,    0,  310,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  311,    2, 0x0a /* Public */,
      11,    2,  312,    2, 0x0a /* Public */,
      14,    0,  317,    2, 0x0a /* Public */,
      15,    0,  318,    2, 0x0a /* Public */,
      16,    0,  319,    2, 0x0a /* Public */,
      17,    0,  320,    2, 0x0a /* Public */,
      18,    0,  321,    2, 0x09 /* Protected */,
      19,    1,  322,    2, 0x09 /* Protected */,
      19,    0,  325,    2, 0x29 /* Protected | MethodCloned */,
      21,    0,  326,    2, 0x09 /* Protected */,
      22,    0,  327,    2, 0x09 /* Protected */,
      23,    0,  328,    2, 0x09 /* Protected */,
      24,    0,  329,    2, 0x09 /* Protected */,
      25,    0,  330,    2, 0x09 /* Protected */,
      26,    0,  331,    2, 0x09 /* Protected */,
      27,    0,  332,    2, 0x09 /* Protected */,
      28,    0,  333,    2, 0x09 /* Protected */,
      29,    0,  334,    2, 0x09 /* Protected */,
      30,    0,  335,    2, 0x09 /* Protected */,
      31,    0,  336,    2, 0x09 /* Protected */,
      32,    1,  337,    2, 0x09 /* Protected */,
      35,    3,  340,    2, 0x09 /* Protected */,
      39,    0,  347,    2, 0x09 /* Protected */,
      40,    0,  348,    2, 0x09 /* Protected */,
      41,    0,  349,    2, 0x09 /* Protected */,
      42,    0,  350,    2, 0x09 /* Protected */,
      43,    1,  351,    2, 0x09 /* Protected */,
      46,    2,  354,    2, 0x09 /* Protected */,
      50,    1,  359,    2, 0x09 /* Protected */,
      51,    1,  362,    2, 0x09 /* Protected */,
      53,    0,  365,    2, 0x09 /* Protected */,
      54,    1,  366,    2, 0x09 /* Protected */,
      56,    0,  369,    2, 0x09 /* Protected */,
      57,    0,  370,    2, 0x09 /* Protected */,
      58,    0,  371,    2, 0x09 /* Protected */,
      59,    1,  372,    2, 0x09 /* Protected */,
      61,    1,  375,    2, 0x09 /* Protected */,
      63,    3,  378,    2, 0x09 /* Protected */,
      68,    0,  385,    2, 0x09 /* Protected */,
      69,    3,  386,    2, 0x08 /* Private */,
      72,    3,  393,    2, 0x08 /* Private */,
      73,    1,  400,    2, 0x08 /* Private */,
      75,    1,  403,    2, 0x08 /* Private */,
      77,    2,  406,    2, 0x08 /* Private */,
      77,    1,  411,    2, 0x28 /* Private | MethodCloned */,
      80,    1,  414,    2, 0x08 /* Private */,
      82,    0,  417,    2, 0x08 /* Private */,
      83,    0,  418,    2, 0x08 /* Private */,
      84,    0,  419,    2, 0x08 /* Private */,
      85,    0,  420,    2, 0x08 /* Private */,
      86,    1,  421,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
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
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, 0x80000000 | 36, QMetaType::QString, 0x80000000 | 33,   37,   38,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, 0x80000000 | 47, QMetaType::QPoint,   48,   49,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, 0x80000000 | 47,   52,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   60,
    QMetaType::Void, QMetaType::Int,   62,
    QMetaType::Void, 0x80000000 | 47, 0x80000000 | 47, 0x80000000 | 66,   64,   65,   67,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 36, QMetaType::QStringList,   70,   37,   71,
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 36, QMetaType::QStringList,   70,   37,   71,
    QMetaType::Void, QMetaType::QString,   74,
    QMetaType::Void, 0x80000000 | 76,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   78,   79,
    QMetaType::Void, QMetaType::QString,   78,
    QMetaType::Void, QMetaType::QString,   81,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   87,

 // properties: name, type, flags
      88, 0x80000000 | 89, 0x0009500b,

       0        // eod
};

void OCC::AccountSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->folderChanged(); break;
        case 1: _t->openFolderAlias((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->showIssuesList((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 3: _t->requestMnemonic(); break;
        case 4: _t->removeAccountFolders((*reinterpret_cast< OCC::AccountState*(*)>(_a[1]))); break;
        case 5: _t->styleChanged(); break;
        case 6: _t->slotOpenOC(); break;
        case 7: _t->slotUpdateQuota((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 8: _t->slotAccountStateChanged(); break;
        case 9: _t->slotStyleChanged(); break;
        case 10: { OCC::AccountState* _r = _t->accountsState();
            if (_a[0]) *reinterpret_cast< OCC::AccountState**>(_a[0]) = std::move(_r); }  break;
        case 11: _t->slotHideSelectiveSyncWidget(); break;
        case 12: _t->slotAddFolder(); break;
        case 13: _t->slotEnableCurrentFolder((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->slotEnableCurrentFolder(); break;
        case 15: _t->slotScheduleCurrentFolder(); break;
        case 16: _t->slotScheduleCurrentFolderForceRemoteDiscovery(); break;
        case 17: _t->slotForceSyncCurrentFolder(); break;
        case 18: _t->slotRemoveCurrentFolder(); break;
        case 19: _t->slotOpenCurrentFolder(); break;
        case 20: _t->slotOpenCurrentLocalSubFolder(); break;
        case 21: _t->slotEditCurrentIgnoredFiles(); break;
        case 22: _t->slotOpenMakeFolderDialog(); break;
        case 23: _t->slotEditCurrentLocalIgnoredFiles(); break;
        case 24: _t->slotEnableVfsCurrentFolder(); break;
        case 25: _t->slotDisableVfsCurrentFolder(); break;
        case 26: _t->slotSetCurrentFolderAvailability((*reinterpret_cast< OCC::PinState(*)>(_a[1]))); break;
        case 27: _t->slotSetSubFolderAvailability((*reinterpret_cast< OCC::Folder*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< OCC::PinState(*)>(_a[3]))); break;
        case 28: _t->slotFolderWizardAccepted(); break;
        case 29: _t->slotFolderWizardRejected(); break;
        case 30: _t->slotToggleSignInState(); break;
        case 31: _t->refreshSelectiveSyncStatus(); break;
        case 32: _t->slotMarkSubfolderEncrypted((*reinterpret_cast< OCC::FolderStatusModel::SubFolderInfo*(*)>(_a[1]))); break;
        case 33: _t->slotSubfolderContextMenuRequested((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 34: _t->slotCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 35: _t->slotFolderListClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 36: _t->doExpand(); break;
        case 37: _t->slotLinkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->slotMoreMemory(); break;
        case 39: _t->slotE2eEncryptionMnemonicReady(); break;
        case 40: _t->slotE2eEncryptionGenerateKeys(); break;
        case 41: _t->slotE2eEncryptionInitializationFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->slotEncryptFolderFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->slotSelectiveSyncChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 44: _t->slotPossiblyUnblacklistE2EeFoldersAndRestartSync(); break;
        case 45: _t->updateBlackListAndScheduleFolderSync((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< OCC::Folder*(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 46: _t->folderTerminateSyncAndUpdateBlackList((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< OCC::Folder*(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 47: _t->displayMnemonic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 48: _t->disableEncryptionForAccount((*reinterpret_cast< const OCC::AccountPtr(*)>(_a[1]))); break;
        case 49: _t->showConnectionLabel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 50: _t->showConnectionLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 51: _t->openIgnoredFilesDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 52: _t->customizeStyle(); break;
        case 53: _t->initializeE2eEncryption(); break;
        case 54: _t->resetE2eEncryption(); break;
        case 55: _t->checkClientSideEncryptionState(); break;
        case 56: _t->removeActionFromEncryptionMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountState* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountState* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Folder* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::FolderStatusModel::SubFolderInfo* >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Folder* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Folder* >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettings::folderChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccountSettings::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettings::openFolderAlias)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccountSettings::*)(OCC::AccountState * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettings::showIssuesList)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccountSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettings::requestMnemonic)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AccountSettings::*)(OCC::AccountState * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettings::removeAccountFolders)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AccountSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountSettings::styleChanged)) {
                *result = 5;
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
        auto *_t = static_cast<AccountSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AccountState**>(_v) = _t->_accountState; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AccountSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_accountState != *reinterpret_cast< AccountState**>(_v)) {
                _t->_accountState = *reinterpret_cast< AccountState**>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OCC::AccountSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_OCC__AccountSettings.data,
    qt_meta_data_OCC__AccountSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::AccountSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AccountSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__AccountSettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OCC::AccountSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OCC::AccountSettings::folderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::AccountSettings::openFolderAlias(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::AccountSettings::showIssuesList(OCC::AccountState * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::AccountSettings::requestMnemonic()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::AccountSettings::removeAccountFolders(OCC::AccountState * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::AccountSettings::styleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
