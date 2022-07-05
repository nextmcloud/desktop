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

#include "tray/UserModel.h"
#include "systray.h"
#include "theme.h"

using namespace OCC;

class TestWindow: public QObject
{
    Q_OBJECT

public:
    QQmlApplicationEngine view;
    QObject *rootObj = NULL;

private slots:

    void initTestCase()
    {
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
        view.load(QStringLiteral("../../../src/gui/tray/Window.qml"));

        QList<QObject*> obj= view.rootObjects();
        QVERIFY(obj.size());
        rootObj = obj.at(0);
    }

    void testUserLine_Root()
    {
        QCOMPARE(rootObj->property("width"), 360); //Style.qml::property int trayWindowWidth: 360
        QCOMPARE(rootObj->property("height"), 600); //Style.qml::property int trayWindowHeight: 600
        QCOMPARE(rootObj->property("color"), "transparent");

        /* verify property */
        int flag = Qt::Dialog | Qt::FramelessWindowHint;
        QCOMPARE(rootObj->property("flags"), flag);
    }

    void testTrayWindowBackground()
    {
        QVERIFY(rootObj->findChild<QObject*>("trayWindowBackground"));

        QObject *trayWindowBackground = rootObj->findChild<QObject*>("trayWindowBackground");

        /* verify property */
        QVERIFY(trayWindowBackground);
        QCOMPARE(trayWindowBackground->objectName(), "trayWindowBackground");
        QCOMPARE(trayWindowBackground->property("radius"), 0); //Style.qml::property int trayWindowRadius: 0
    }

    void testTrayWindowMagentaBarBackground()
    {
        QVERIFY(rootObj->findChild<QObject*>("trayWindowMagentaBarBackground"));

        QObject *trayWindowMagentaBarBackground = rootObj->findChild<QObject*>("trayWindowMagentaBarBackground");

        /* verify property */
        QVERIFY(trayWindowMagentaBarBackground);
        QCOMPARE(trayWindowMagentaBarBackground->objectName(), "trayWindowMagentaBarBackground");
        QCOMPARE(trayWindowMagentaBarBackground->property("height"), 100);
        QCOMPARE(trayWindowMagentaBarBackground->property("color"), "#e20074"); //Style.qml::property color magenta:"#e20074"
    }

    void testTrayWindowTLogoBarBackground()
    {
        QVERIFY(rootObj->findChild<QObject*>("trayWindowTLogoBarBackground"));

        QObject *trayWindowTLogoBarBackground = rootObj->findChild<QObject*>("trayWindowTLogoBarBackground");

        /* verify property */
        QVERIFY(trayWindowTLogoBarBackground);
        QCOMPARE(trayWindowTLogoBarBackground->objectName(), "trayWindowTLogoBarBackground");
        QCOMPARE(trayWindowTLogoBarBackground->property("height"), 48);
        QCOMPARE(trayWindowTLogoBarBackground->property("color"), "#e20074"); //Style.qml::property color magenta:"#e20074"
    }

    void testTrayWindowTLogoBarTopSpacer()
    {
        QVERIFY(rootObj->findChild<QObject*>("trayWindowTLogoBarTopSpacer"));

        QObject *trayWindowTLogoBarTopSpacer = rootObj->findChild<QObject*>("trayWindowTLogoBarTopSpacer");

        /* verify property */
        QVERIFY(trayWindowTLogoBarTopSpacer);
        QCOMPARE(trayWindowTLogoBarTopSpacer->objectName(), "trayWindowTLogoBarTopSpacer");
        QCOMPARE(trayWindowTLogoBarTopSpacer->property("height"), 12);
        QCOMPARE(trayWindowTLogoBarTopSpacer->property("color"), "#e20074"); //Style.qml::property color magenta:"#e20074"
    }

    void testTrayWindowTLogoBarLeftSpacer()
    {
        QVERIFY(rootObj->findChild<QObject*>("trayWindowTLogoBarLeftSpacer"));

        QObject *trayWindowTLogoBarLeftSpacer = rootObj->findChild<QObject*>("trayWindowTLogoBarLeftSpacer");

        /* verify property */
        QVERIFY(trayWindowTLogoBarLeftSpacer);
        QCOMPARE(trayWindowTLogoBarLeftSpacer->objectName(), "trayWindowTLogoBarLeftSpacer");
        QCOMPARE(trayWindowTLogoBarLeftSpacer->property("height"), 38);
        QCOMPARE(trayWindowTLogoBarLeftSpacer->property("width"), 24);
        QCOMPARE(trayWindowTLogoBarLeftSpacer->property("color"), "#e20074"); //Style.qml::property color magenta:"#e20074"
    }

    void testMagentaTLogo()
    {
        QVERIFY(rootObj->findChild<QObject*>("magentaTLogo"));

        QObject *magentaTLogo = rootObj->findChild<QObject*>("magentaTLogo");

        /* verify property */
        QVERIFY(magentaTLogo);
        QCOMPARE(magentaTLogo->objectName(), "magentaTLogo");
        QCOMPARE(magentaTLogo->property("cache"), false);
        QCOMPARE(magentaTLogo->property("source"), "qrc:///client/theme/magenta/logomc.svg");
    }

    void testTrayWindowHeaderBackground()
    {
        QVERIFY(rootObj->findChild<QObject*>("trayWindowHeaderBackground"));

        QObject *trayWindowHeaderBackground = rootObj->findChild<QObject*>("trayWindowHeaderBackground");

        /* verify property */
        QVERIFY(trayWindowHeaderBackground);
        QCOMPARE(trayWindowHeaderBackground->objectName(), "trayWindowHeaderBackground");
        QCOMPARE(trayWindowHeaderBackground->property("height"), 60); //Style.qml::property int trayWindowHeaderHeight: 60
        QCOMPARE(trayWindowHeaderBackground->property("radius"), 10);
        QCOMPARE(trayWindowHeaderBackground->property("color"), "white");
    }

    void testTrayWindowHeaderLayout()
    {
        QVERIFY(rootObj->findChild<QObject*>("trayWindowHeaderLayout"));

        QObject *trayWindowHeaderLayout = rootObj->findChild<QObject*>("trayWindowHeaderLayout");

        /* verify property */
        QVERIFY(trayWindowHeaderLayout);
        QCOMPARE(trayWindowHeaderLayout->objectName(), "trayWindowHeaderLayout");
        QCOMPARE(trayWindowHeaderLayout->property("spacing"), 0);
    }

    void testCurrentAccountButton()
    {
        QVERIFY(rootObj->findChild<QObject*>("currentAccountButton"));

        QObject *currentAccountButton = rootObj->findChild<QObject*>("currentAccountButton");

        /* verify property */
        QVERIFY(currentAccountButton);
        QCOMPARE(currentAccountButton->objectName(), "currentAccountButton");
        QCOMPARE(currentAccountButton->property("display"), 0); //qnamespace.h:1452 ToolButtonStyle::ToolButtonIconOnly:0
        QCOMPARE(currentAccountButton->property("flat"), true);
    }

    void testAccountBtnMouseArea()
    {
        QVERIFY(rootObj->findChild<QObject*>("accountBtnMouseArea"));

        QObject *accountBtnMouseArea = rootObj->findChild<QObject*>("accountBtnMouseArea");

        /* verify property */
        QVERIFY(accountBtnMouseArea);
        QCOMPARE(accountBtnMouseArea->objectName(), "accountBtnMouseArea");
        QCOMPARE(accountBtnMouseArea->property("hoverEnabled"), true); //Style.qml::property bool hoverEffectsEnabled: true
    }

    void testAccountMenu()
    {
        QVERIFY(rootObj->findChild<QObject*>("accountMenu"));

        QObject *accountMenu = rootObj->findChild<QObject*>("accountMenu");

        /* verify property */
        QVERIFY(accountMenu);
        QCOMPARE(accountMenu->objectName(), "accountMenu");
        QCOMPARE(accountMenu->property("width"), 300); //Style.qml::property int accountMenuWidth: 300
        QCOMPARE(accountMenu->property("closePolicy"), 18); //Menu.CloseOnPressOutsideParent | Menu.CloseOnEscape
    }

    void testSyncPauseButton()
    {
        QVERIFY(rootObj->findChild<QObject*>("syncPauseButton"));

        QObject *syncPauseButton = rootObj->findChild<QObject*>("syncPauseButton");

        /* verify property */
        QVERIFY(syncPauseButton);
        QCOMPARE(syncPauseButton->objectName(), "syncPauseButton");
        QCOMPARE(syncPauseButton->property("display"), 0); //qnamespace.h:1452 ToolButtonStyle::ToolButtonIconOnly:0
        QCOMPARE(syncPauseButton->property("hoverEnabled"), true);
        QCOMPARE(syncPauseButton->property("horizontalPadding"), 16); //Style.qml::property int accountMenuPadding: 16
        QCOMPARE(syncPauseButton->property("verticalPadding"), 8); //Style.qml::property int accountMenuHalfPadding: 8
        QCOMPARE(syncPauseButton->property("spacing"), 8); //Style.qml::property int accountMenuSpacing: 8
    }

    void testSyncPauseButtonText()
    {
        QVERIFY(rootObj->findChild<QObject*>("syncPauseButtonText"));

        QObject *syncPauseButtonText = rootObj->findChild<QObject*>("syncPauseButtonText");

        /* verify property */
        QVERIFY(syncPauseButtonText);
        QCOMPARE(syncPauseButtonText->objectName(), "syncPauseButtonText");

        QVariant varFont = syncPauseButtonText->property("font");
        QFont font = qvariant_cast<QFont>(varFont);
        QCOMPARE(font.family(), "Segoe UI");
        QCOMPARE(font.pixelSize(), 13); //Style.qml::property int topLinePixelSize: 13
        QCOMPARE(syncPauseButtonText->property("color"), "#191919"); //Style.qml:property color nmcTextColor:"#191919"

        QObject *syncPauseButton = rootObj->findChild<QObject*>("syncPauseButton");
        QString text = "Test";
        syncPauseButton->setProperty("text", text);
        QString finalText = "            " + text;
        QCOMPARE(syncPauseButtonText->property("text"), finalText);
    }

    void testSettingsButton()
    {
        QVERIFY(rootObj->findChild<QObject*>("settingsButton"));

        QObject *settingsButton = rootObj->findChild<QObject*>("settingsButton");

        /* verify property */
        QVERIFY(settingsButton);
        QCOMPARE(settingsButton->objectName(), "settingsButton");

        QCOMPARE(settingsButton->property("hoverEnabled"), true);
        QCOMPARE(settingsButton->property("display"), 2); //qnamespace.h:1454 ToolButtonStyle::ToolButtonTextBesideIcon:2
        QCOMPARE(settingsButton->property("horizontalPadding"), 16); //Style.qml::property int accountMenuPadding: 16
        QCOMPARE(settingsButton->property("verticalPadding"), 8); //Style.qml::property int accountMenuHalfPadding: 8
        QCOMPARE(settingsButton->property("spacing"), 4);
    }

    void testSettingsButtonText()
    {
        QVERIFY(rootObj->findChild<QObject*>("settingsButtonText"));

        QObject *settingsButtonText = rootObj->findChild<QObject*>("settingsButtonText");

        /* verify property */
        QVERIFY(settingsButtonText);
        QCOMPARE(settingsButtonText->objectName(), "settingsButtonText");

        QVariant varFont = settingsButtonText->property("font");
        QFont font = qvariant_cast<QFont>(varFont);
        QCOMPARE(font.wordSpacing(), 45);
        QCOMPARE(settingsButtonText->property("text"), " Settings");
        QCOMPARE(font.family(), "Segoe UI");
        QCOMPARE(font.pixelSize(), 13); //Style.qml::property int topLinePixelSize: 13
        QCOMPARE(settingsButtonText->property("color"), "#191919"); //Style.qml:property color nmcTextColor:"#191919"
    }

    void testExitButton()
    {
        QVERIFY(rootObj->findChild<QObject*>("exitButton"));

        QObject *exitButton = rootObj->findChild<QObject*>("exitButton");

        /* verify property */
        QVERIFY(exitButton);
        QCOMPARE(exitButton->objectName(), "exitButton");

        QCOMPARE(exitButton->property("display"), 2); //qnamespace.h:1454 ToolButtonStyle::ToolButtonTextBesideIcon:2
        QCOMPARE(exitButton->property("hoverEnabled"), true);
        QCOMPARE(exitButton->property("horizontalPadding"), 16); //Style.qml::property int accountMenuPadding: 16
        QCOMPARE(exitButton->property("topPadding"), 8); //Style.qml::property int accountMenuHalfPadding: 8
        QCOMPARE(exitButton->property("bottomPadding"), 8); //Style.qml::property int accountMenuHalfPadding: 8
        QCOMPARE(exitButton->property("spacing"), 4);
    }

    void testExitButtonText()
    {
        QVERIFY(rootObj->findChild<QObject*>("exitButtonText"));

        QObject *exitButtonText = rootObj->findChild<QObject*>("exitButtonText");

        /* verify property */
        QVERIFY(exitButtonText);
        QCOMPARE(exitButtonText->objectName(), "exitButtonText");

        QVariant varFont = exitButtonText->property("font");
        QFont font = qvariant_cast<QFont>(varFont);
        QCOMPARE(font.wordSpacing(), 45);
        QCOMPARE(exitButtonText->property("text"), " Close");
        QCOMPARE(font.family(), "Segoe UI");
        QCOMPARE(font.pixelSize(), 13); //Style.qml::property int topLinePixelSize: 13
        QCOMPARE(exitButtonText->property("color"), "#191919"); //Style.qml:property color nmcTextColor:"#191919"
    }

    void testAccountControlRowLayout()
    {
        QVERIFY(rootObj->findChild<QObject*>("accountControlRowLayout"));

        QObject *accountControlRowLayout = rootObj->findChild<QObject*>("accountControlRowLayout");

        /* verify property */
        QVERIFY(accountControlRowLayout);
        QCOMPARE(accountControlRowLayout->objectName(), "accountControlRowLayout");

        QCOMPARE(accountControlRowLayout->property("height"), 60); //Style.qml::int trayWindowHeaderHeight: 60
        QCOMPARE(accountControlRowLayout->property("spacing"), 0);
    }

    void testCurrentAccountAvatar()
    {
        QVERIFY(rootObj->findChild<QObject*>("currentAccountAvatar"));

        QObject *currentAccountAvatar = rootObj->findChild<QObject*>("currentAccountAvatar");

        /* verify property */
        QVERIFY(currentAccountAvatar);
        QCOMPARE(currentAccountAvatar->objectName(), "currentAccountAvatar");

        QCOMPARE(currentAccountAvatar->property("cache"), false); //Style.qml::property int trayWindowHeaderHeight: 60
        QCOMPARE(currentAccountAvatar->property("source"), "qrc:///client/theme/magenta/user/default.png");
        QCOMPARE(currentAccountAvatar->property("width"), 24); //Style.qml::property int headerButtonIconSize: 24
        QCOMPARE(currentAccountAvatar->property("height"), 24); //Style.qml::property int headerButtonIconSize: 24
    }

    void testCurrentAccountStateIndicatorBackground()
    {
        QVERIFY(rootObj->findChild<QObject*>("currentAccountStateIndicatorBackground"));

        QObject *currentAccountStateIndicatorBackground = rootObj->findChild<QObject*>("currentAccountStateIndicatorBackground");

        /* verify property */
        QVERIFY(currentAccountStateIndicatorBackground);
        QCOMPARE(currentAccountStateIndicatorBackground->objectName(), "currentAccountStateIndicatorBackground");

        QCOMPARE(currentAccountStateIndicatorBackground->property("width"), 14); //Style.qml::property int accountAvatarStateIndicatorSize: 12 +2

        int width = currentAccountStateIndicatorBackground->property("width").toUInt();
        QCOMPARE(currentAccountStateIndicatorBackground->property("height"), width);
        QCOMPARE(currentAccountStateIndicatorBackground->property("color"), "transparent");
        QCOMPARE(currentAccountStateIndicatorBackground->property("radius"), (width*0.5));
    }

    void testCurrentAccountStateIndicator()
    {
        QVERIFY(rootObj->findChild<QObject*>("currentAccountStateIndicator"));

        QObject *currentAccountStateIndicator = rootObj->findChild<QObject*>("currentAccountStateIndicator");

        /* verify property */
        QVERIFY(currentAccountStateIndicator);
        QCOMPARE(currentAccountStateIndicator->objectName(), "currentAccountStateIndicator");

        QCOMPARE(currentAccountStateIndicator->property("source"), "qrc:/client/theme/colored/state-offline.svg"); //Style.qml::property url stateOfflineImageSource: Theme.stateOfflineImageSource
        QCOMPARE(currentAccountStateIndicator->property("cache"), false);

        QObject *currentAccountStateIndicatorBackground = rootObj->findChild<QObject*>("currentAccountStateIndicatorBackground");

        QCOMPARE(currentAccountStateIndicator->property("x"), currentAccountStateIndicatorBackground->property("x"));
        QCOMPARE(currentAccountStateIndicator->property("x"), currentAccountStateIndicatorBackground->property("y"));
    }

    void testCurrentAccountUser()
    {
        QVERIFY(rootObj->findChild<QObject*>("currentAccountUser"));

        QObject *currentAccountUser = rootObj->findChild<QObject*>("currentAccountUser");

        /* verify property */
        QVERIFY(currentAccountUser);
        QCOMPARE(currentAccountUser->objectName(), "currentAccountUser");

        QCOMPARE(currentAccountUser->property("verticalAlignment"), Qt::AlignCenter);
        QCOMPARE(currentAccountUser->property("elide"), 1); //qnamespace.h:255 TextElideMode::ElideRight:1
        QCOMPARE(currentAccountUser->property("color"), "#191919"); //Style.qml::property color nmcTextColor:"#191919"

        QVariant varFont = currentAccountUser->property("font");
        QFont font = qvariant_cast<QFont>(varFont);
        QCOMPARE(font.family(), "Segoe UI");
        QCOMPARE(font.pixelSize(), 13); //Style.qml::property int topLinePixelSize: 13
    }

    void testOpenAccountServerButton()
    {
        QVERIFY(rootObj->findChild<QObject*>("openAccountServerButton"));

        QObject *openAccountServerButton = rootObj->findChild<QObject*>("openAccountServerButton");

        /* verify property */
        QVERIFY(openAccountServerButton);
        QCOMPARE(openAccountServerButton->objectName(), "openAccountServerButton");

        QCOMPARE(openAccountServerButton->property("spacing"), 0);
        QCOMPARE(openAccountServerButton->property("visible"), true);
        QCOMPARE(openAccountServerButton->property("text"), "Open website");

        QVariant varFont = openAccountServerButton->property("font");
        QFont font = qvariant_cast<QFont>(varFont);
        QCOMPARE(font.family(), "Segoe UI");
        QCOMPARE(font.pixelSize(), 8);
    }

    void testOpenLocalFolderButton()
    {
        QVERIFY(rootObj->findChild<QObject*>("openLocalFolderButton"));

        QObject *openLocalFolderButton = rootObj->findChild<QObject*>("openLocalFolderButton");

        /* verify property */
        QVERIFY(openLocalFolderButton);
        QCOMPARE(openLocalFolderButton->objectName(), "openLocalFolderButton");

        QCOMPARE(openLocalFolderButton->property("spacing"), 0);
        QCOMPARE(openLocalFolderButton->property("text"), "Local folder");
        QVariant varFont = openLocalFolderButton->property("font");
        QFont font = qvariant_cast<QFont>(varFont);
        QCOMPARE(font.family(), "Segoe UI");
        QCOMPARE(font.pixelSize(), 8);
    }

    void testTrayWindowGradientBarBackground()
    {
        QVERIFY(rootObj->findChild<QObject*>("trayWindowGradientBarBackground"));

        QObject *trayWindowGradientBarBackground = rootObj->findChild<QObject*>("trayWindowGradientBarBackground");

        /* verify property */
        QVERIFY(trayWindowGradientBarBackground);
        QCOMPARE(trayWindowGradientBarBackground->objectName(), "trayWindowGradientBarBackground");

        QCOMPARE(trayWindowGradientBarBackground->property("padding"), 0);
        QCOMPARE(trayWindowGradientBarBackground->property("topPadding"), 108);
        QCOMPARE(trayWindowGradientBarBackground->property("bottomPadding"), 8);
    }

    void cleanupTestCase()
    {
        delete rootObj;
    }
};

QTEST_MAIN(TestWindow)
#include "testwindow.moc"
