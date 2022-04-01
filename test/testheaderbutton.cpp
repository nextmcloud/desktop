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

class TestHeaderButton: public QObject
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
        view.setSource(QStringLiteral("../../../src/gui/tray/HeaderButton.qml"));

        QVERIFY(view.rootObject());
        rootObj = view.rootObject();
    }

    void testButton_Root()
    {
        /* verify property */
        QVERIFY(rootObj);
        QCOMPARE(rootObj->property("display"), 3); //qnamespace.h:1455 ToolButtonStyle::ToolButtonTextUnderIcon:3
        QCOMPARE(rootObj->property("flat"), true);
        QCOMPARE(rootObj->property("padding"), 0);
        QCOMPARE(rootObj->property("hoverEnabled"), true); //Style.qml::property bool hoverEffectsEnabled: true
        QVariant varFont = rootObj->property("font");
        QFont font = qvariant_cast<QFont>(varFont);
        QCOMPARE(font.family(), "Segoe UI");
        QCOMPARE(font.pixelSize(), 9);
    }

    void cleanupTestCase()
    {
        delete rootObj;
    }
};

QTEST_MAIN(TestHeaderButton)
#include "testheaderbutton.moc"
