/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */

#include <QtTest>

#define TEST_OWNCL_PAGE
#include "gui/nextcloudCore_autogen/include_Debug/ui_owncloudsetupnocredspage.h"
#define OwncloudSetupPage(a) OwncloudSetupPage()
#include "gui/wizard/owncloudsetuppage.h"
#undef OwncloudSetupPage

using namespace OCC;
OwncloudSetupPage::OwncloudSetupPage()
{
   _ui.setupUi(this);
   _ui.serverAddressLabel->hide();
   _ui.leUrl->hide();
   _ui.serverAddressDescriptionLabel->hide();
   _ui.errorLabel->hide();

};

class TestOwncloudSetupPage: public QWidget
{
    Q_OBJECT

private slots:
    void test_OwncloudSetupPage()
    {
        OwncloudSetupPage *flow2Auth = new OwncloudSetupPage();

        QCOMPARE(flow2Auth != NULL, true);
        QCOMPARE(flow2Auth->_ui.serverAddressLabel->isHidden(), true);
        QCOMPARE(flow2Auth->_ui.leUrl->isHidden(), true);
        QCOMPARE(flow2Auth->_ui.serverAddressDescriptionLabel->isHidden(), true);
        QCOMPARE(flow2Auth->_ui.errorLabel->isHidden(), true);
     }
};

QTEST_MAIN(TestOwncloudSetupPage)
#include "testowncloudsetuppage.moc"
