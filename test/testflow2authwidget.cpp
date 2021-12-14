/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */

#include <QtTest>
#define TEST_FLOW_AUTH
#include "gui/nextcloudCore_autogen/include_Debug/ui_flow2authwidget.h"
#include "gui/wizard/flow2authwidget.h"

using namespace OCC;

class TestFlow2AuthWidget: public QObject
{
    Q_OBJECT

private slots:
    void testcustomizeStyle()
    {
        QWidget *parent = new QWidget();
        Flow2AuthWidget *flow2Auth = new Flow2AuthWidget(parent);

        flow2Auth->customizeStyle();

        QString expOpenLinkLabel("Reopen Browser");
        QString expCopyLinkLabel("Copy Link");
        QString expReopenStyleSheet("QPushButton {height : 35 ; width : 150px ; color: #ffffff; border: 0px solid #e20074; "
                                      "border-radius: 10px;border-style: outset; "
                                      "background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
                                      " stop: 0 #e20074, stop: 1 #e20074); padding: 5px }");
        QString expCopyStyleSheet("QPushButton {height : 33 ; width : 150px ; color: #191919; border: 1px solid #191919; "
                                      "border-radius: 10px;border-style: outset; "
                                      "background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
                                      " stop: 0 #ffffff, stop: 1 #ffffff); padding: 5px }");

        QCOMPARE(flow2Auth->_ui.openLinkLabel->text(), expOpenLinkLabel);
        QCOMPARE(flow2Auth->_ui.openLinkLabel->styleSheet(), expReopenStyleSheet);
        QCOMPARE(flow2Auth->_ui.copyLinkLabel->text(), expCopyLinkLabel);
        QCOMPARE(flow2Auth->_ui.copyLinkLabel->styleSheet(), expCopyStyleSheet);
    }
};

QTEST_MAIN(TestFlow2AuthWidget)
#include "testflow2authwidget.moc"
