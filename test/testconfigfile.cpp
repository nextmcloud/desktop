/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
/* MagentaCustomizationV25 */

#include <QtTest>
#include "configfile.h"

using namespace OCC;

class TestConfigFile: public QObject
{
    Q_OBJECT

private slots:
    void testOptionalServerNotifications()
    {
        ConfigFile cfgFile;
        bool retValue = cfgFile.optionalServerNotifications();

        QCOMPARE(retValue, false);
    }

    void testUseNewBigFolderSizeLimit()
    {
        ConfigFile cfgFile;
        bool retValue = cfgFile.useNewBigFolderSizeLimit();

        QCOMPARE(retValue, false);
    }

    void testTransferUsageData_False()
    {
        ConfigFile cfgFile;
        cfgFile.setTransferUsageData(false, QString());

        bool retValue = cfgFile.transferUsageData(QString());

        QCOMPARE(retValue, false);
    }

    void testTransferUsageData_True()
    {
        ConfigFile cfgFile;
        cfgFile.setTransferUsageData(true, QString());

        bool retValue = cfgFile.transferUsageData(QString());

        QCOMPARE(retValue, true);
    }

    void testSetTransferUsageData_False()
    {
        ConfigFile cfgFile;

        cfgFile.setTransferUsageData(false, QString());

        QCOMPARE(cfgFile.transferUsageData(), false);
    }

    void testSetTransferUsageData_True()
    {
        ConfigFile cfgFile;

        cfgFile.setTransferUsageData(true, QString());

        QCOMPARE(cfgFile.transferUsageData(), true);
    }

};

QTEST_MAIN(TestConfigFile)
#include "testconfigfile.moc"
