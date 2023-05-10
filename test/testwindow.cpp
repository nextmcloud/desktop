/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <QQmlApplicationEngine>
#include <qqmlengine.h>
#include <QQmlContext>
#include <QQuickItem>
#include <QtTest>

#include "tray/usermodel.h"
#include "systray.h"
#include "theme.h"

#include "tray/syncstatussummary.h"
#include "wheelhandler.h"
#include "emojimodel.h"
#include "filedetails/filedetails.h"
#include "tray/activitylistmodel.h"


using namespace OCC;

class TestWindow: public QObject
{
    Q_OBJECT

public:
    QQmlApplicationEngine view;
    QObject *rootObj = nullptr;

private slots:

    void initTestCase()
    {
        qmlRegisterType<UserStatusSelectorModel>("com.nextcloud.desktopclient", 1, 0, "UserStatusSelectorModel");
        qmlRegisterType<SyncStatusSummary>("com.nextcloud.desktopclient", 1, 0, "SyncStatusSummary");
        qmlRegisterType<ActivityListModel>("com.nextcloud.desktopclient", 1, 0,"ActivityList");
        qmlRegisterType<WheelHandler>("com.nextcloud.desktopclient", 1, 0, "WheelHandler");
        qmlRegisterType<FileDetails>("com.nextcloud.desktopclient", 1, 0, "FileDetailsView");
        qmlRegisterType<EmojiModel>("com.nextcloud.desktopclient", 1, 0, "EmojiModel");
        qmlRegisterType<FileDetails>("com.nextcloud.desktopclient", 1, 0, "FileDetailsPage");


        qmlRegisterSingletonType<UserModel>("com.nextcloud.desktopclient", 1, 0, "UserModel",
                                            [](QQmlEngine *, QJSEngine *) -> QObject * {
            return UserModel::instance();
        }
        );

        qmlRegisterSingletonType<UserAppsModel>("com.nextcloud.desktopclient", 1, 0, "UserAppsModel",
                                                [](QQmlEngine *, QJSEngine *) -> QObject * {
            return UserAppsModel::instance();
        }
        );

        qmlRegisterSingletonType<Theme>("com.nextcloud.desktopclient", 1, 0, "Theme",
                                        [](QQmlEngine *, QJSEngine *) -> QObject * {
            return Theme::instance();
        }
        );

        qmlRegisterSingletonType<Systray>("com.nextcloud.desktopclient", 1, 0, "Systray",
                                          [](QQmlEngine *, QJSEngine *) -> QObject * {
            return Systray::instance();
        }
        );

        view.addImportPath("../../../theme");
        view.load(QStringLiteral("../../src/gui/tray/Window.qml"));

        QList<QObject*> obj= view.rootObjects();
        QVERIFY(obj.size());
        rootObj = obj.at(0);
    }

    void testUserLine_Root()
    {
        QCOMPARE(rootObj->property("width"), 440); //Style.qml::property int trayWindowWidth: 380
        QCOMPARE(rootObj->property("height"), 561); //Style.qml::property int trayWindowHeight: 600
        QCOMPARE(rootObj->property("color"), "transparent");

        /* verify property */
        int flag = Qt::Dialog | Qt::FramelessWindowHint;
        QCOMPARE(rootObj->property("flags"), flag);
    }
    void testTrayWindowHeaderLayout()
    {
        QVERIFY(rootObj->findChild<QObject*>("trayWindowHeaderLayout"));

        auto *trayWindowHeaderLayout = rootObj->findChild<QObject*>("trayWindowHeaderLayout");

        /* verify property */
        QVERIFY(trayWindowHeaderLayout);
        QCOMPARE(trayWindowHeaderLayout->objectName(), "trayWindowHeaderLayout");
        QCOMPARE(trayWindowHeaderLayout->property("spacing"), 0);
    }
    void testCurrentAccountButton()
    {
        QVERIFY(rootObj->findChild<QObject*>("currentAccountButton"));

        auto *currentAccountButton = rootObj->findChild<QObject*>("currentAccountButton");

        /* verify property */
        QVERIFY(currentAccountButton);
        QCOMPARE(currentAccountButton->objectName(), "currentAccountButton");
        QCOMPARE(currentAccountButton->property("display"), 0); //qnamespace.h:1452 ToolButtonStyle::ToolButtonIconOnly:0
        QCOMPARE(currentAccountButton->property("flat"), true);
    }


    void testAccountMenu()
    {
        QVERIFY(rootObj->findChild<QObject*>("accountMenu"));

        auto *accountMenu = rootObj->findChild<QObject*>("accountMenu");

        /* verify property */
        QVERIFY(accountMenu);
        QCOMPARE(accountMenu->objectName(), "accountMenu");
        QCOMPARE(accountMenu->property("width"), 218); //width: 230
        QCOMPARE(accountMenu->property("closePolicy"), 18); //Menu.CloseOnPressOutsideParent | Menu.CloseOnEscape
    }

    void testSyncPauseButton()
    {
        QVERIFY(rootObj->findChild<QObject*>("syncPauseButton"));

        auto *syncPauseButton = rootObj->findChild<QObject*>("syncPauseButton");

        /* verify property */
        QVERIFY(syncPauseButton);
        QCOMPARE(syncPauseButton->objectName(), "syncPauseButton");
       // QCOMPARE(syncPauseButton->property("display"), 0); //qnamespace.h:1452 ToolButtonStyle::ToolButtonIconOnly:0
        QCOMPARE(syncPauseButton->property("hoverEnabled"), true);
        QVariant varFont = syncPauseButton->property("font");
        auto font = qvariant_cast<QFont>(varFont);
        QCOMPARE(font.family(), "Segoe UI");
        QCOMPARE(font.pixelSize(), 10); //Style.qml::property int topLinePixelSize: 13

    }
    void testSettingsButton()
    {
        QVERIFY(rootObj->findChild<QObject*>("settingsButton"));

        auto *settingsButton = rootObj->findChild<QObject*>("settingsButton");

        /* verify property */
        QVERIFY(settingsButton);
        QCOMPARE(settingsButton->objectName(), "settingsButton");
        QCOMPARE(settingsButton->property("hoverEnabled"), true);

        QVariant varFont = settingsButton->property("font");
        auto font = qvariant_cast<QFont>(varFont);
        QCOMPARE(settingsButton->property("text"), "Settings");
        QCOMPARE(font.family(), "Segoe UI");
        QCOMPARE(font.pixelSize(), 10); //Style.qml::property int topLinePixelSize: 13
    }

    void testExitButton()
    {
        QVERIFY(rootObj->findChild<QObject*>("exitButton"));

        auto *exitButton = rootObj->findChild<QObject*>("exitButton");

        /* verify property */
        QVERIFY(exitButton);
        QCOMPARE(exitButton->objectName(), "exitButton");
        QCOMPARE(exitButton->property("display"), 2); //qnamespace.h:1454 ToolButtonStyle::ToolButtonTextBesideIcon:2
        QCOMPARE(exitButton->property("hoverEnabled"), true);
        QVariant varFont = exitButton->property("font");
        auto font = qvariant_cast<QFont>(varFont);
        QCOMPARE(exitButton->property("text"), "Exit");
        QCOMPARE(font.family(), "Segoe UI");
        QCOMPARE(font.pixelSize(), 10); //Style.qml::property int topLinePixelSize: 13
    }
    void testAccountControlRowLayout()
    {
        QVERIFY(rootObj->findChild<QObject*>("accountControlRowLayout"));

        auto *accountControlRowLayout = rootObj->findChild<QObject*>("accountControlRowLayout");

        /* verify property */
        QVERIFY(accountControlRowLayout);
        QCOMPARE(accountControlRowLayout->objectName(), "accountControlRowLayout");

        QCOMPARE(accountControlRowLayout->property("height"), 66); //Style.qml::int trayWindowHeaderHeight: 60
        QCOMPARE(accountControlRowLayout->property("spacing"), 0);
    }

    void cleanupTestCase()
    {
        delete rootObj;
    }
};

QTEST_MAIN(TestWindow)
#include "testwindow.moc"
