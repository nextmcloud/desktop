/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <qqmlengine.h>
#include <QQuickItem>
#include <QQuickView>
#include <QtTest>
#include "theme.h"

using namespace OCC;

class TestUserLine: public QObject
{
    Q_OBJECT

public:
    QQuickView view;
    QObject *rootObj = NULL;

private slots:

    void initTestCase()
    {
        qmlRegisterSingletonType<Theme>("com.nextcloud.desktopclient", 1, 0, "Theme",
                                        [](QQmlEngine *, QJSEngine *) -> QObject * {
            return Theme::instance();
        }
        );

        view.engine()->addImportPath("../../../theme");
        view.setSource(QStringLiteral("../../../src/gui/tray/UserLine.qml"));

        QVERIFY(view.rootObject());
        rootObj = view.rootObject();
    }

    void testUserLine_Root()
    {
        QCOMPARE(rootObj->property("height"), 48);
    }

    void testAccountUser()
    {
        QVERIFY(rootObj->findChild<QObject*>("accountUser"));

        QObject *accountUser = rootObj->findChild<QObject*>("accountUser");

        /* verify property */
        QVERIFY(accountUser);
        QCOMPARE(accountUser->objectName(), "accountUser");
        //Style.qml::property int accountMenuWidth 300 -
        //Style.qml::property int headerButtonIconSize: 24 -
        //Style.qml::property int accountMenuHalfPadding: 8
        //=268
        QCOMPARE(accountUser->property("width"), 268);
        QVariant varFont = accountUser->property("font");
        QFont font = qvariant_cast<QFont>(varFont);
        QCOMPARE(font.family(), "Segoe UI");                 //Style.qml::property string swipeFontFamily: "Segoe UI"
        QCOMPARE(font.pixelSize(), 13);                      //Style.qml::property int topLinePixelSize: 13
        QCOMPARE(accountUser->property("color"), "#191919"); //Style.qml:property color nmcTextColor:"#191919"

        delete accountUser;
    }

    void testAccountAvatar()
    {
        QVERIFY(rootObj->findChild<QObject*>("accountAvatar"));

        QObject *accountAvatar = rootObj->findChild<QObject*>("accountAvatar");

        /* verify property */
        QVERIFY(accountAvatar);
        QCOMPARE(accountAvatar->objectName(), "accountAvatar");
        QCOMPARE(accountAvatar->property("source"), "qrc:///client/theme/magenta/action/logout/default.png");
        QCOMPARE(accountAvatar->property("visible"), false);
        QCOMPARE(accountAvatar->property("cache"), false);

        delete accountAvatar;
    }

    void testAccountLabels()
    {
        QVERIFY(rootObj->findChild<QObject*>("accountLabels"));

        QObject *accountLabels = rootObj->findChild<QObject*>("accountLabels");

        /* verify property */
        QVERIFY(accountLabels);
        QCOMPARE(accountLabels->objectName(), "accountLabels");
        QCOMPARE(accountLabels->property("spacing"), 0);

        delete accountLabels;
    }

    void testUserLineLayout()
    {
        QVERIFY(rootObj->findChild<QObject*>("userLineLayout"));

        QObject *trayWindow = rootObj->findChild<QObject*>("userLineLayout");

        /* verify property */
        QVERIFY(trayWindow);
        QCOMPARE(trayWindow->objectName(), "userLineLayout");
        QCOMPARE(trayWindow->property("spacing"), 0);
        QCOMPARE(trayWindow->property("width"), 300);            //Style.qml::property int accountMenuWidth: 300
        QCOMPARE(trayWindow->parent()->property("height"), 48);  //Style.qml::property int accountMenuTopItemHeight: 48
        QCOMPARE(trayWindow->property("height"), trayWindow->parent()->property("height"));

        delete trayWindow;
    }

    void cleanupTestCase()
    {
        delete rootObj;
    }
};

QTEST_MAIN(TestUserLine)
#include "testuserline.moc"
