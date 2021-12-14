/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */

#include <QtTest>

#define TEST_OWNCL_ADVANCE
#include "gui/nextcloudCore_autogen/include_Debug/ui_owncloudadvancedsetuppage.h"
#include "gui/wizard/owncloudadvancedsetuppage.h"
#include "gui/wizard/owncloudwizard.h"

using namespace OCC;

class TestOwncloudAdvancedSetupPage: public QWidget
{
    Q_OBJECT

private slots:
    void test_setupCustomization()
    {
        QWidget *parent = new QWidget();
        OwncloudWizard *ownCloud = new OwncloudWizard(parent);
        OwncloudAdvancedSetupPage *advanceSetup = new OwncloudAdvancedSetupPage(ownCloud);

        advanceSetup->setupCustomization();

        QString expStyleSheet("QPushButton {height : 35 ; width : 160px ; color: #ffffff; border: 0px solid #e20074; "
                                                "border-radius: 10px;border-style: outset; "
                                                "background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
                                                " stop: 0 #e20074, stop: 1 #e20074); "
                                                "padding: 5px }");

        QCOMPARE(advanceSetup->_ui.pbSelectLocalFolder->styleSheet(), expStyleSheet);

        delete advanceSetup;
        delete ownCloud;
    }

    void teststyleSyncLogo()
    {
        QWidget *parent = new QWidget();
        OwncloudWizard *ownCloud = new OwncloudWizard(parent);
        OwncloudAdvancedSetupPage *advanceSetup = new OwncloudAdvancedSetupPage(ownCloud);

        advanceSetup->styleSyncLogo();

        QLabel *expSyncLogoLabel = advanceSetup->_ui.syncLogoLabel;
        expSyncLogoLabel->setPixmap(QPixmap(":/client/theme/Combined Shape.svg"));

        QCOMPARE(advanceSetup->_ui.syncLogoLabel->pixmap(), expSyncLogoLabel->pixmap());

        delete advanceSetup;
        delete ownCloud;
     }
};

QTEST_MAIN(TestOwncloudAdvancedSetupPage)
#include "testowncloudadvancedsetuppage.moc"
