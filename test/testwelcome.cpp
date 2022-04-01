/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <QQuickView>
#include <qqmlengine.h>
#include <QQuickItem>
#include <QtTest>

#include "theme.h"
using namespace OCC;

#define TIMER_INTERVAL_BEFORE 5000
#define TIMER_INTERVAL_AFTER 6000

class TestWelcome: public QObject
{
    Q_OBJECT

public:
    bool cancelClicked = false;
    int timerInterval = 0;
    QQuickView view;
    QObject *rootObj = NULL;

public slots:
    void slotSwipeCancelClicked()
    {
        cancelClicked = true;
    }

    void slotTimerSlideShow()
    {
        QObject *timerSlideShowObj = rootObj->findChild<QObject*>("timerSlideShow");
        timerSlideShowObj->setProperty("interval", 6000);

        timerInterval = timerSlideShowObj->property("interval").toInt();
    }

private slots:

    void initTestCase()
    {
        qmlRegisterSingletonType<Theme>("com.nextcloud.desktopclient", 1, 0, "Theme",
            [](QQmlEngine *, QJSEngine *) -> QObject * {
                return Theme::instance();
            }
        );

        view.engine()->addImportPath("../../../theme");
        view.setSource(QStringLiteral("../../../src/gui/welcome/welcome.qml"));

        QVERIFY(view.rootObject());
        rootObj = view.rootObject();
    }

    void testText()
    {
        QVERIFY(rootObj->findChild<QObject*>("titleText"));

        QObject *text = rootObj->findChild<QObject*>("titleText");

        /* verify property */
        QVERIFY(text);
        QCOMPARE(text->objectName(), "titleText");
        QCOMPARE(text->property("text"), "MagentaCLOUD");

        QVariant varFont = text->property("font");
        QFont font = qvariant_cast<QFont>(varFont);
        QCOMPARE(font.family(), "Segoe UI");        //Style.qml::property string swipeFontFamily: "Segoe UI"
        QCOMPARE(font.pixelSize(), 13);             //Style.qml::property int topLinePixelSize: 13
        QCOMPARE(text->property("color"), "white"); //Style.qml::property color nmcTextColorLight: "white"

        delete text;
    }

    void testSwipeView()
    {
        QVERIFY(rootObj->findChild<QObject*>("swipeView"));

        QObject *SwipeView = rootObj->findChild<QObject*>("swipeView");

        /* verify property */
        QVERIFY(SwipeView);
        QCOMPARE(SwipeView->objectName(), "swipeView");
        QCOMPARE(SwipeView->property("currentIndex"), 0);

        delete SwipeView;
    }

    void testCancelButton()
    {
        QVERIFY(rootObj->findChild<QObject*>("cancelButton"));

        QObject *cancelButtonObj = rootObj->findChild<QObject*>("cancelButton");
        QVERIFY(cancelButtonObj);

        /* verify property */
        QCOMPARE(cancelButtonObj->objectName(), "cancelButton");
        QCOMPARE(cancelButtonObj->property("width"), 160); //Style.qml::property int skipButtonWidth: 160
        QCOMPARE(cancelButtonObj->property("height"), 32); //Style.qml::property int skipButtonHeight: 32
        QCOMPARE(cancelButtonObj->property("text"), "Skip introduction");

        QVariant var = cancelButtonObj->property("font");
        QFont font = qvariant_cast<QFont>(var);
        QCOMPARE(font.family(), "Segoe UI"); //Style.qml::property string swipeFontFamily: "Segoe UI"
        QCOMPARE(font.pixelSize(), 13);      //Style.qml::property int topLinePixelSize: 13

        /* verify SLOT data before SIGNAL emit */
        QCOMPARE(cancelClicked, false);

        /*to track the SIGNAL emit or not */
        QSignalSpy addFolderButtonSpy(cancelButtonObj, SIGNAL(cancelClicked()));

        /* this connect only for slot verification, slot is called or not after emiting signal */
        /* this slot 'slotSwipeCancelClicked' is temporary created for verification porpose only */
        /* origional slot Application::slotSwipeCancelClicked */
        connect(cancelButtonObj, SIGNAL(cancelClicked()), this, SLOT(slotSwipeCancelClicked()));

        /* generate event/emit signal */
        QMetaObject::invokeMethod( cancelButtonObj, "cancelClicked", Qt::DirectConnection );

        /* verify SIGNAL emit */
        QCOMPARE(addFolderButtonSpy.count(), 1);

        /* verify SLOT data */
        QCOMPARE(cancelClicked, true);

        delete cancelButtonObj;
    }

    void testTimerSlideShow()
    {
        QVERIFY(rootObj->findChild<QObject*>("timerSlideShow"));

        QObject *timerSlideShowObj = rootObj->findChild<QObject*>("timerSlideShow");
        QVERIFY(timerSlideShowObj);
        QCOMPARE(timerSlideShowObj->objectName(), "timerSlideShow");

        bool expectedRunning = false;
        bool expectedRepeat = true;
        int expectedInterval = TIMER_INTERVAL_BEFORE;
        QCOMPARE(timerSlideShowObj->property("running"), expectedRunning);
        QCOMPARE(timerSlideShowObj->property("repeat"), expectedRepeat);
        QCOMPARE(timerSlideShowObj->property("interval"), expectedInterval);

        timerInterval = timerSlideShowObj->property("interval").toInt();

        /* verify SLOT data before SIGNAL emit*/
        QCOMPARE(timerInterval, TIMER_INTERVAL_BEFORE);

        /*to track the SIGNAL emit or not */
        QSignalSpy timerSlideShowSpy(timerSlideShowObj, SIGNAL(triggered()));

        /* this connect only for logic verification, slot is called or not after emiting signal */
        /* this slot 'slotTimerSlideShow' is temporary created for verification porpose only */
        /* origional onTriggered logic will execute */
        connect(timerSlideShowObj, SIGNAL(triggered()), this, SLOT(slotTimerSlideShow()));

        /* generate event/emit signal */
        QMetaObject::invokeMethod( timerSlideShowObj, "triggered", Qt::DirectConnection );

        /* verify SIGNAL emit */
        QCOMPARE(timerSlideShowSpy.count(), 1);

        /* verify SLOT data */
        QCOMPARE(timerInterval, TIMER_INTERVAL_AFTER);

        delete timerSlideShowObj;
    }

    void cleanupTestCase()
    {
        delete rootObj;
    }
};

QTEST_MAIN(TestWelcome)
#include "testwelcome.moc"
