/*    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <qqmlengine.h>
#include <QQuickItem>
#include <QQuickView>
#include <QtTest>
#include <QUrl>
#include "theme.h"
#include "tray/usermodel.h"
#include "gui/systray.h"


using namespace OCC;

class TestUserLine: public QObject
{
    Q_OBJECT

public:
    QQuickView view;
    QObject *rootObj = nullptr;

private slots:

    void initTestCase()
    {
         qmlRegisterSingletonType<Theme>("com.nextcloud.desktopclient", 1, 0, "Theme",
                                        [](QQmlEngine *, QJSEngine *) -> QObject * {
            return Theme::instance();
        }
        );
         qmlRegisterSingletonType<UserModel>("com.nextcloud.desktopclient", 1, 0, "UserModel",
                                             [](QQmlEngine *, QJSEngine *) -> QObject * {
             return UserModel::instance();
         }
         );
         qmlRegisterSingletonType<Systray>("com.nextcloud.desktopclient", 1, 0, "Systray",
                                           [](QQmlEngine *, QJSEngine *) -> QObject * {
             return Systray::instance();
         }
         );

         // Second, register the QML singleton type by calling this function in an initialization function.
    //    qmlRegisterSingletonType(QUrl("qrc:/qml/theme/Style/Style.qml"), "Style", 1, 0, "Style");

        view.engine()->addImportPath("../../../theme");
        view.setSource(QStringLiteral("../../../src/gui/tray/UserLine.qml"));

        QVERIFY(view.rootObject());
        rootObj = view.rootObject();
    }

    void testUserLine_Root()
    {
        QCOMPARE(rootObj->property("height"), 66);
    }

    void testAccountUser()
    {
        QVERIFY(rootObj->findChild<QObject*>("accountUser"));

        auto *accountUser = rootObj->findChild<QObject*>("accountUser");

        /* verify property */
        QVERIFY(accountUser);
        QCOMPARE(accountUser->objectName(), "accountUser");
        //Style.qml::property int accountMenuWidth 300 -
        //Style.qml::property int headerButtonIconSize: 24 -
        //Style.qml::property int accountMenuHalfPadding: 8
        //=268
       // QCOMPARE(accountUser->property("width"), 268);
        QVariant varFont = accountUser->property("font");
        auto font = qvariant_cast<QFont>(varFont);
        QCOMPARE(font.family(), "MS Shell Dlg 2");                 //Style.qml::property string swipeFontFamily: "Segoe UI"
        QCOMPARE(font.pixelSize(), 10);                      //Style.qml::property int topLinePixelSize: 13
        QCOMPARE(accountUser->property("color"), "#000000"); //Style.qml:property color nmcTextColor:"#191919"

        delete accountUser;
    }

    void testAccountAvatar()
    {
        QVERIFY(rootObj->findChild<QObject*>("accountAvatar"));

        auto *accountAvatar = rootObj->findChild<QObject*>("accountAvatar");

        /* verify property */
        QVERIFY(accountAvatar);
        QCOMPARE(accountAvatar->objectName(), "accountAvatar");
        QCOMPARE(accountAvatar->property("source"), "qrc:///client/theme/magenta/accountAvatarIcon.svg");
        QCOMPARE(accountAvatar->property("cache"), false);

        delete accountAvatar;
    }


    void testUserLineLayout()
    {
        QVERIFY(rootObj->findChild<QObject*>("userLineLayout"));

        auto *trayWindow = rootObj->findChild<QObject*>("userLineLayout");

        /* verify property */
        QVERIFY(trayWindow);
        QCOMPARE(trayWindow->objectName(), "userLineLayout");
        QCOMPARE(trayWindow->property("spacing"), 10);
       // QCOMPARE(trayWindow->property("width"), 300);            //Style.qml::property int accountMenuWidth: 300
        //QCOMPARE(trayWindow->parent()->property("height"), 48);  //Style.qml::property int accountMenuTopItemHeight: 48
     //   QCOMPARE(trayWindow->property("height"), trayWindow->parent()->property("height"));

        delete trayWindow;
    }

    void cleanupTestCase()
    {
        delete rootObj;
    }
};

QTEST_MAIN(TestUserLine)
#include "testuserline.moc"
