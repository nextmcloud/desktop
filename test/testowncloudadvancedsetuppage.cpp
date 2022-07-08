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

        QString expStyleSheet("QPushButton {height : 28 ; width : 160px ; font: 13px; font-style: Segoe UI; color: #191919; border: 1px solid #191919; "
                                             "border-radius: 15px;border-style: outset; "
                                             "background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
                                             " stop: 0 #ffffff, stop: 1 #ffffff); "
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
