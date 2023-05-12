/****************************************************************************
** Meta object code from reading C++ file 'systray.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/systray.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systray.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__Systray_t {
    QByteArrayData data[83];
    char stringdata0[1193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__Systray_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__Systray_t qt_meta_stringdata_OCC__Systray = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OCC::Systray"
QT_MOC_LITERAL(1, 13, 18), // "currentUserChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "openAccountWizard"
QT_MOC_LITERAL(4, 51, 12), // "openSettings"
QT_MOC_LITERAL(5, 64, 8), // "openHelp"
QT_MOC_LITERAL(6, 73, 8), // "shutdown"
QT_MOC_LITERAL(7, 82, 19), // "showFileDetailsPage"
QT_MOC_LITERAL(8, 102, 13), // "fileLocalPath"
QT_MOC_LITERAL(9, 116, 29), // "OCC::Systray::FileDetailsPage"
QT_MOC_LITERAL(10, 146, 4), // "page"
QT_MOC_LITERAL(11, 151, 15), // "showFileDetails"
QT_MOC_LITERAL(12, 167, 18), // "OCC::AccountState*"
QT_MOC_LITERAL(13, 186, 12), // "accountState"
QT_MOC_LITERAL(14, 199, 9), // "localPath"
QT_MOC_LITERAL(15, 209, 15), // "fileDetailsPage"
QT_MOC_LITERAL(16, 225, 15), // "sendChatMessage"
QT_MOC_LITERAL(17, 241, 5), // "token"
QT_MOC_LITERAL(18, 247, 7), // "message"
QT_MOC_LITERAL(19, 255, 7), // "replyTo"
QT_MOC_LITERAL(20, 263, 22), // "showErrorMessageDialog"
QT_MOC_LITERAL(21, 286, 5), // "error"
QT_MOC_LITERAL(22, 292, 19), // "syncIsPausedChanged"
QT_MOC_LITERAL(23, 312, 13), // "isOpenChanged"
QT_MOC_LITERAL(24, 326, 13), // "setTrayEngine"
QT_MOC_LITERAL(25, 340, 22), // "QQmlApplicationEngine*"
QT_MOC_LITERAL(26, 363, 10), // "trayEngine"
QT_MOC_LITERAL(27, 374, 6), // "create"
QT_MOC_LITERAL(28, 381, 11), // "showMessage"
QT_MOC_LITERAL(29, 393, 5), // "title"
QT_MOC_LITERAL(30, 399, 28), // "QSystemTrayIcon::MessageIcon"
QT_MOC_LITERAL(31, 428, 4), // "icon"
QT_MOC_LITERAL(32, 433, 17), // "showUpdateMessage"
QT_MOC_LITERAL(33, 451, 6), // "webUrl"
QT_MOC_LITERAL(34, 458, 15), // "showTalkMessage"
QT_MOC_LITERAL(35, 474, 20), // "OCC::AccountStatePtr"
QT_MOC_LITERAL(36, 495, 10), // "setToolTip"
QT_MOC_LITERAL(37, 506, 3), // "tip"
QT_MOC_LITERAL(38, 510, 16), // "createCallDialog"
QT_MOC_LITERAL(39, 527, 13), // "OCC::Activity"
QT_MOC_LITERAL(40, 541, 16), // "callNotification"
QT_MOC_LITERAL(41, 558, 34), // "createEditFileLocallyLoadingD..."
QT_MOC_LITERAL(42, 593, 8), // "fileName"
QT_MOC_LITERAL(43, 602, 35), // "destroyEditFileLocallyLoading..."
QT_MOC_LITERAL(44, 638, 22), // "slotCurrentUserChanged"
QT_MOC_LITERAL(45, 661, 15), // "forceWindowInit"
QT_MOC_LITERAL(46, 677, 13), // "QQuickWindow*"
QT_MOC_LITERAL(47, 691, 6), // "window"
QT_MOC_LITERAL(48, 698, 20), // "positionWindowAtTray"
QT_MOC_LITERAL(49, 719, 28), // "positionWindowAtScreenCenter"
QT_MOC_LITERAL(50, 748, 26), // "positionNotificationWindow"
QT_MOC_LITERAL(51, 775, 13), // "destroyDialog"
QT_MOC_LITERAL(52, 789, 10), // "showWindow"
QT_MOC_LITERAL(53, 800, 28), // "OCC::Systray::WindowPosition"
QT_MOC_LITERAL(54, 829, 8), // "position"
QT_MOC_LITERAL(55, 838, 10), // "hideWindow"
QT_MOC_LITERAL(56, 849, 15), // "setSyncIsPaused"
QT_MOC_LITERAL(57, 865, 12), // "syncIsPaused"
QT_MOC_LITERAL(58, 878, 9), // "setIsOpen"
QT_MOC_LITERAL(59, 888, 6), // "isOpen"
QT_MOC_LITERAL(60, 895, 17), // "createShareDialog"
QT_MOC_LITERAL(61, 913, 24), // "createFileActivityDialog"
QT_MOC_LITERAL(62, 938, 22), // "presentShareViewInTray"
QT_MOC_LITERAL(63, 961, 21), // "slotUnpauseAllFolders"
QT_MOC_LITERAL(64, 983, 19), // "slotPauseAllFolders"
QT_MOC_LITERAL(65, 1003, 11), // "windowTitle"
QT_MOC_LITERAL(66, 1015, 15), // "useNormalWindow"
QT_MOC_LITERAL(67, 1031, 15), // "TaskBarPosition"
QT_MOC_LITERAL(68, 1047, 6), // "Bottom"
QT_MOC_LITERAL(69, 1054, 4), // "Left"
QT_MOC_LITERAL(70, 1059, 3), // "Top"
QT_MOC_LITERAL(71, 1063, 5), // "Right"
QT_MOC_LITERAL(72, 1069, 20), // "NotificationPosition"
QT_MOC_LITERAL(73, 1090, 7), // "Default"
QT_MOC_LITERAL(74, 1098, 7), // "TopLeft"
QT_MOC_LITERAL(75, 1106, 8), // "TopRight"
QT_MOC_LITERAL(76, 1115, 10), // "BottomLeft"
QT_MOC_LITERAL(77, 1126, 11), // "BottomRight"
QT_MOC_LITERAL(78, 1138, 14), // "WindowPosition"
QT_MOC_LITERAL(79, 1153, 6), // "Center"
QT_MOC_LITERAL(80, 1160, 15), // "FileDetailsPage"
QT_MOC_LITERAL(81, 1176, 8), // "Activity"
QT_MOC_LITERAL(82, 1185, 7) // "Sharing"

    },
    "OCC::Systray\0currentUserChanged\0\0"
    "openAccountWizard\0openSettings\0openHelp\0"
    "shutdown\0showFileDetailsPage\0fileLocalPath\0"
    "OCC::Systray::FileDetailsPage\0page\0"
    "showFileDetails\0OCC::AccountState*\0"
    "accountState\0localPath\0fileDetailsPage\0"
    "sendChatMessage\0token\0message\0replyTo\0"
    "showErrorMessageDialog\0error\0"
    "syncIsPausedChanged\0isOpenChanged\0"
    "setTrayEngine\0QQmlApplicationEngine*\0"
    "trayEngine\0create\0showMessage\0title\0"
    "QSystemTrayIcon::MessageIcon\0icon\0"
    "showUpdateMessage\0webUrl\0showTalkMessage\0"
    "OCC::AccountStatePtr\0setToolTip\0tip\0"
    "createCallDialog\0OCC::Activity\0"
    "callNotification\0createEditFileLocallyLoadingDialog\0"
    "fileName\0destroyEditFileLocallyLoadingDialog\0"
    "slotCurrentUserChanged\0forceWindowInit\0"
    "QQuickWindow*\0window\0positionWindowAtTray\0"
    "positionWindowAtScreenCenter\0"
    "positionNotificationWindow\0destroyDialog\0"
    "showWindow\0OCC::Systray::WindowPosition\0"
    "position\0hideWindow\0setSyncIsPaused\0"
    "syncIsPaused\0setIsOpen\0isOpen\0"
    "createShareDialog\0createFileActivityDialog\0"
    "presentShareViewInTray\0slotUnpauseAllFolders\0"
    "slotPauseAllFolders\0windowTitle\0"
    "useNormalWindow\0TaskBarPosition\0Bottom\0"
    "Left\0Top\0Right\0NotificationPosition\0"
    "Default\0TopLeft\0TopRight\0BottomLeft\0"
    "BottomRight\0WindowPosition\0Center\0"
    "FileDetailsPage\0Activity\0Sharing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__Systray[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       4,  312, // properties
       4,  328, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  199,    2, 0x06 /* Public */,
       3,    0,  200,    2, 0x06 /* Public */,
       4,    0,  201,    2, 0x06 /* Public */,
       5,    0,  202,    2, 0x06 /* Public */,
       6,    0,  203,    2, 0x06 /* Public */,
       7,    2,  204,    2, 0x06 /* Public */,
      11,    3,  209,    2, 0x06 /* Public */,
      16,    3,  216,    2, 0x06 /* Public */,
      20,    1,  223,    2, 0x06 /* Public */,
      22,    0,  226,    2, 0x06 /* Public */,
      23,    0,  227,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    1,  228,    2, 0x0a /* Public */,
      27,    0,  231,    2, 0x0a /* Public */,
      28,    3,  232,    2, 0x0a /* Public */,
      28,    2,  239,    2, 0x2a /* Public | MethodCloned */,
      32,    3,  244,    2, 0x0a /* Public */,
      34,    5,  251,    2, 0x0a /* Public */,
      36,    1,  262,    2, 0x0a /* Public */,
      38,    2,  265,    2, 0x0a /* Public */,
      41,    1,  270,    2, 0x0a /* Public */,
      43,    0,  273,    2, 0x0a /* Public */,
      44,    0,  274,    2, 0x0a /* Public */,
      45,    1,  275,    2, 0x0a /* Public */,
      48,    1,  278,    2, 0x0a /* Public */,
      49,    1,  281,    2, 0x0a /* Public */,
      50,    1,  284,    2, 0x0a /* Public */,
      51,    1,  287,    2, 0x0a /* Public */,
      52,    1,  290,    2, 0x0a /* Public */,
      52,    0,  293,    2, 0x2a /* Public | MethodCloned */,
      55,    0,  294,    2, 0x0a /* Public */,
      56,    1,  295,    2, 0x0a /* Public */,
      58,    1,  298,    2, 0x0a /* Public */,
      60,    1,  301,    2, 0x0a /* Public */,
      61,    1,  304,    2, 0x0a /* Public */,
      62,    1,  307,    2, 0x0a /* Public */,
      63,    0,  310,    2, 0x08 /* Private */,
      64,    0,  311,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString, 0x80000000 | 9,   13,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   17,   18,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 30,   29,   18,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   29,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QUrl,   29,   18,   33,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 35,   29,   18,   19,   17,   13,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, 0x80000000 | 39, 0x80000000 | 35,   40,   13,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      65, QMetaType::QString, 0x00095401,
      66, QMetaType::Bool, 0x00095401,
      57, QMetaType::Bool, 0x00495103,
      59, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       9,
      10,

 // enums: name, alias, flags, count, data
      67,   67, 0x2,    4,  348,
      72,   72, 0x2,    5,  356,
      78,   78, 0x2,    2,  366,
      80,   80, 0x2,    2,  370,

 // enum data: key, value
      68, uint(OCC::Systray::TaskBarPosition::Bottom),
      69, uint(OCC::Systray::TaskBarPosition::Left),
      70, uint(OCC::Systray::TaskBarPosition::Top),
      71, uint(OCC::Systray::TaskBarPosition::Right),
      73, uint(OCC::Systray::NotificationPosition::Default),
      74, uint(OCC::Systray::NotificationPosition::TopLeft),
      75, uint(OCC::Systray::NotificationPosition::TopRight),
      76, uint(OCC::Systray::NotificationPosition::BottomLeft),
      77, uint(OCC::Systray::NotificationPosition::BottomRight),
      73, uint(OCC::Systray::WindowPosition::Default),
      79, uint(OCC::Systray::WindowPosition::Center),
      81, uint(OCC::Systray::FileDetailsPage::Activity),
      82, uint(OCC::Systray::FileDetailsPage::Sharing),

       0        // eod
};

void OCC::Systray::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Systray *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentUserChanged(); break;
        case 1: _t->openAccountWizard(); break;
        case 2: _t->openSettings(); break;
        case 3: _t->openHelp(); break;
        case 4: _t->shutdown(); break;
        case 5: _t->showFileDetailsPage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const OCC::Systray::FileDetailsPage(*)>(_a[2]))); break;
        case 6: _t->showFileDetails((*reinterpret_cast< OCC::AccountState*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const OCC::Systray::FileDetailsPage(*)>(_a[3]))); break;
        case 7: _t->sendChatMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: _t->showErrorMessageDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->syncIsPausedChanged(); break;
        case 10: _t->isOpenChanged(); break;
        case 11: _t->setTrayEngine((*reinterpret_cast< QQmlApplicationEngine*(*)>(_a[1]))); break;
        case 12: _t->create(); break;
        case 13: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSystemTrayIcon::MessageIcon(*)>(_a[3]))); break;
        case 14: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->showUpdateMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 16: _t->showTalkMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const OCC::AccountStatePtr(*)>(_a[5]))); break;
        case 17: _t->setToolTip((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->createCallDialog((*reinterpret_cast< const OCC::Activity(*)>(_a[1])),(*reinterpret_cast< const OCC::AccountStatePtr(*)>(_a[2]))); break;
        case 19: _t->createEditFileLocallyLoadingDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->destroyEditFileLocallyLoadingDialog(); break;
        case 21: _t->slotCurrentUserChanged(); break;
        case 22: _t->forceWindowInit((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        case 23: _t->positionWindowAtTray((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        case 24: _t->positionWindowAtScreenCenter((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        case 25: _t->positionNotificationWindow((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        case 26: _t->destroyDialog((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        case 27: _t->showWindow((*reinterpret_cast< OCC::Systray::WindowPosition(*)>(_a[1]))); break;
        case 28: _t->showWindow(); break;
        case 29: _t->hideWindow(); break;
        case 30: _t->setSyncIsPaused((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 31: _t->setIsOpen((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 32: _t->createShareDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->createFileActivityDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->presentShareViewInTray((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->slotUnpauseAllFolders(); break;
        case 36: _t->slotPauseAllFolders(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountState* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountStatePtr >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::AccountStatePtr >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Activity >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Systray::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Systray::currentUserChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Systray::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Systray::openAccountWizard)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Systray::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Systray::openSettings)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Systray::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Systray::openHelp)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Systray::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Systray::shutdown)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Systray::*)(const QString & , const OCC::Systray::FileDetailsPage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Systray::showFileDetailsPage)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Systray::*)(OCC::AccountState * , const QString & , const OCC::Systray::FileDetailsPage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Systray::showFileDetails)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Systray::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Systray::sendChatMessage)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Systray::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Systray::showErrorMessageDialog)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Systray::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Systray::syncIsPausedChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Systray::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Systray::isOpenChanged)) {
                *result = 10;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Systray *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->windowTitle(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->useNormalWindow(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->syncIsPaused(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isOpen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Systray *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setSyncIsPaused(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setIsOpen(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OCC::Systray::staticMetaObject = { {
    QMetaObject::SuperData::link<QSystemTrayIcon::staticMetaObject>(),
    qt_meta_stringdata_OCC__Systray.data,
    qt_meta_data_OCC__Systray,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::Systray::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Systray::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__Systray.stringdata0))
        return static_cast<void*>(this);
    return QSystemTrayIcon::qt_metacast(_clname);
}

int OCC::Systray::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSystemTrayIcon::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OCC::Systray::currentUserChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::Systray::openAccountWizard()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::Systray::openSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::Systray::openHelp()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::Systray::shutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::Systray::showFileDetailsPage(const QString & _t1, const OCC::Systray::FileDetailsPage _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OCC::Systray::showFileDetails(OCC::AccountState * _t1, const QString & _t2, const OCC::Systray::FileDetailsPage _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OCC::Systray::sendChatMessage(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OCC::Systray::showErrorMessageDialog(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void OCC::Systray::syncIsPausedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void OCC::Systray::isOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
