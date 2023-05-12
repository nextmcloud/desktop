/****************************************************************************
** Meta object code from reading C++ file 'owncloudgui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/gui/owncloudgui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCC__ownCloudGui_t {
    QByteArrayData data[48];
    char stringdata0[772];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ownCloudGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ownCloudGui_t qt_meta_stringdata_OCC__ownCloudGui = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OCC::ownCloudGui"
QT_MOC_LITERAL(1, 17, 10), // "setupProxy"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "serverError"
QT_MOC_LITERAL(4, 41, 4), // "code"
QT_MOC_LITERAL(5, 46, 7), // "message"
QT_MOC_LITERAL(6, 54, 23), // "isShowingSettingsDialog"
QT_MOC_LITERAL(7, 78, 28), // "slotComputeOverallSyncStatus"
QT_MOC_LITERAL(8, 107, 19), // "slotShowTrayMessage"
QT_MOC_LITERAL(9, 127, 5), // "title"
QT_MOC_LITERAL(10, 133, 3), // "msg"
QT_MOC_LITERAL(11, 137, 25), // "slotShowTrayUpdateMessage"
QT_MOC_LITERAL(12, 163, 6), // "webUrl"
QT_MOC_LITERAL(13, 170, 27), // "slotShowOptionalTrayMessage"
QT_MOC_LITERAL(14, 198, 20), // "slotFolderOpenAction"
QT_MOC_LITERAL(15, 219, 5), // "alias"
QT_MOC_LITERAL(16, 225, 18), // "slotUpdateProgress"
QT_MOC_LITERAL(17, 244, 6), // "folder"
QT_MOC_LITERAL(18, 251, 17), // "OCC::ProgressInfo"
QT_MOC_LITERAL(19, 269, 8), // "progress"
QT_MOC_LITERAL(20, 278, 18), // "slotShowGuiMessage"
QT_MOC_LITERAL(21, 297, 18), // "slotFoldersChanged"
QT_MOC_LITERAL(22, 316, 16), // "slotShowSettings"
QT_MOC_LITERAL(23, 333, 20), // "slotShowSyncProtocol"
QT_MOC_LITERAL(24, 354, 12), // "slotShutdown"
QT_MOC_LITERAL(25, 367, 19), // "slotSyncStateChange"
QT_MOC_LITERAL(26, 387, 12), // "OCC::Folder*"
QT_MOC_LITERAL(27, 400, 15), // "slotTrayClicked"
QT_MOC_LITERAL(28, 416, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(29, 450, 6), // "reason"
QT_MOC_LITERAL(30, 457, 20), // "slotToggleLogBrowser"
QT_MOC_LITERAL(31, 478, 16), // "slotOpenOwnCloud"
QT_MOC_LITERAL(32, 495, 22), // "slotOpenSettingsDialog"
QT_MOC_LITERAL(33, 518, 18), // "slotOpenMainDialog"
QT_MOC_LITERAL(34, 537, 27), // "slotSettingsDialogActivated"
QT_MOC_LITERAL(35, 565, 8), // "slotHelp"
QT_MOC_LITERAL(36, 574, 12), // "slotOpenPath"
QT_MOC_LITERAL(37, 587, 4), // "path"
QT_MOC_LITERAL(38, 592, 23), // "slotAccountStateChanged"
QT_MOC_LITERAL(39, 616, 34), // "slotTrayMessageIfServerUnsupp..."
QT_MOC_LITERAL(40, 651, 13), // "OCC::Account*"
QT_MOC_LITERAL(41, 665, 7), // "account"
QT_MOC_LITERAL(42, 673, 19), // "slotShowShareDialog"
QT_MOC_LITERAL(43, 693, 9), // "localPath"
QT_MOC_LITERAL(44, 703, 26), // "slotShowFileActivityDialog"
QT_MOC_LITERAL(45, 730, 20), // "slotNewAccountWizard"
QT_MOC_LITERAL(46, 751, 9), // "slotLogin"
QT_MOC_LITERAL(47, 761, 10) // "slotLogout"

    },
    "OCC::ownCloudGui\0setupProxy\0\0serverError\0"
    "code\0message\0isShowingSettingsDialog\0"
    "slotComputeOverallSyncStatus\0"
    "slotShowTrayMessage\0title\0msg\0"
    "slotShowTrayUpdateMessage\0webUrl\0"
    "slotShowOptionalTrayMessage\0"
    "slotFolderOpenAction\0alias\0"
    "slotUpdateProgress\0folder\0OCC::ProgressInfo\0"
    "progress\0slotShowGuiMessage\0"
    "slotFoldersChanged\0slotShowSettings\0"
    "slotShowSyncProtocol\0slotShutdown\0"
    "slotSyncStateChange\0OCC::Folder*\0"
    "slotTrayClicked\0QSystemTrayIcon::ActivationReason\0"
    "reason\0slotToggleLogBrowser\0"
    "slotOpenOwnCloud\0slotOpenSettingsDialog\0"
    "slotOpenMainDialog\0slotSettingsDialogActivated\0"
    "slotHelp\0slotOpenPath\0path\0"
    "slotAccountStateChanged\0"
    "slotTrayMessageIfServerUnsupported\0"
    "OCC::Account*\0account\0slotShowShareDialog\0"
    "localPath\0slotShowFileActivityDialog\0"
    "slotNewAccountWizard\0slotLogin\0"
    "slotLogout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ownCloudGui[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  164,    2, 0x06 /* Public */,
       3,    2,  165,    2, 0x06 /* Public */,
       6,    0,  170,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  171,    2, 0x0a /* Public */,
       8,    2,  172,    2, 0x0a /* Public */,
      11,    3,  177,    2, 0x0a /* Public */,
      13,    2,  184,    2, 0x0a /* Public */,
      14,    1,  189,    2, 0x0a /* Public */,
      16,    2,  192,    2, 0x0a /* Public */,
      20,    2,  197,    2, 0x0a /* Public */,
      21,    0,  202,    2, 0x0a /* Public */,
      22,    0,  203,    2, 0x0a /* Public */,
      23,    0,  204,    2, 0x0a /* Public */,
      24,    0,  205,    2, 0x0a /* Public */,
      25,    1,  206,    2, 0x0a /* Public */,
      27,    1,  209,    2, 0x0a /* Public */,
      30,    0,  212,    2, 0x0a /* Public */,
      31,    0,  213,    2, 0x0a /* Public */,
      32,    0,  214,    2, 0x0a /* Public */,
      33,    0,  215,    2, 0x0a /* Public */,
      34,    0,  216,    2, 0x0a /* Public */,
      35,    0,  217,    2, 0x0a /* Public */,
      36,    1,  218,    2, 0x0a /* Public */,
      38,    0,  221,    2, 0x0a /* Public */,
      39,    1,  222,    2, 0x0a /* Public */,
      42,    1,  225,    2, 0x0a /* Public */,
      44,    1,  228,    2, 0x0a /* Public */,
      45,    0,  231,    2, 0x0a /* Public */,
      46,    0,  232,    2, 0x08 /* Private */,
      47,    0,  233,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QUrl,    9,   10,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 18,   17,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::ownCloudGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ownCloudGui *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setupProxy(); break;
        case 1: _t->serverError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->isShowingSettingsDialog(); break;
        case 3: _t->slotComputeOverallSyncStatus(); break;
        case 4: _t->slotShowTrayMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->slotShowTrayUpdateMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 6: _t->slotShowOptionalTrayMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->slotFolderOpenAction((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->slotUpdateProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const OCC::ProgressInfo(*)>(_a[2]))); break;
        case 9: _t->slotShowGuiMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->slotFoldersChanged(); break;
        case 11: _t->slotShowSettings(); break;
        case 12: _t->slotShowSyncProtocol(); break;
        case 13: _t->slotShutdown(); break;
        case 14: _t->slotSyncStateChange((*reinterpret_cast< OCC::Folder*(*)>(_a[1]))); break;
        case 15: _t->slotTrayClicked((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 16: _t->slotToggleLogBrowser(); break;
        case 17: _t->slotOpenOwnCloud(); break;
        case 18: _t->slotOpenSettingsDialog(); break;
        case 19: _t->slotOpenMainDialog(); break;
        case 20: _t->slotSettingsDialogActivated(); break;
        case 21: _t->slotHelp(); break;
        case 22: _t->slotOpenPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->slotAccountStateChanged(); break;
        case 24: _t->slotTrayMessageIfServerUnsupported((*reinterpret_cast< OCC::Account*(*)>(_a[1]))); break;
        case 25: _t->slotShowShareDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->slotShowFileActivityDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->slotNewAccountWizard(); break;
        case 28: _t->slotLogin(); break;
        case 29: _t->slotLogout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Folder* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Account* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ownCloudGui::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ownCloudGui::setupProxy)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ownCloudGui::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ownCloudGui::serverError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ownCloudGui::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ownCloudGui::isShowingSettingsDialog)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCC::ownCloudGui::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OCC__ownCloudGui.data,
    qt_meta_data_OCC__ownCloudGui,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCC::ownCloudGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ownCloudGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ownCloudGui.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::ownCloudGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void OCC::ownCloudGui::setupProxy()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::ownCloudGui::serverError(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::ownCloudGui::isShowingSettingsDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
