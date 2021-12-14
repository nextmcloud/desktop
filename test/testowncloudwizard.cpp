/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */

#include <QtTest>
#include "gui/wizard/owncloudwizard.h"

using namespace OCC;

class TestOwncloudWizard: public QObject
{
    Q_OBJECT

private slots:
    void test_OwncloudWizard()
    {
        QWidget *parent = new QWidget();
        OwncloudWizard *ownCloud = new OwncloudWizard(parent);

        QCOMPARE(ownCloud != NULL, true);

        delete ownCloud;
     }
};

QTEST_MAIN(TestOwncloudWizard)
#include "testowncloudwizard.moc"
