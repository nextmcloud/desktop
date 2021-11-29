/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <QToolBar>
#include <QtTest>

#include "gui/nextcloudCore_autogen/include_Debug/ui_settingsdialog.h"
#define SettingsDialog(a, b) SettingsDialog()
#include "settingsdialog.h"
#undef SettingsDialog

using namespace OCC;

SettingsDialog::SettingsDialog() : _ui(new Ui::SettingsDialog)
{
    _ui->stack= new QStackedWidget();
    _actionGroup = new QActionGroup(this);
    _toolBar = new QToolBar;
};

class TestSettingsDialog: public QObject
{
    Q_OBJECT

private slots:
    void testcreateColorAwareAction()
    {
        QPointer<SettingsDialog> setDialog;
        QString iconPath(":/client/theme/white/folder.svg");

        QAction *retAct = setDialog->createColorAwareAction(iconPath, "Test");
        QCOMPARE(retAct->property("iconPath"), iconPath);
    }

    void testslotSwitchPage_Sync()
    {
        SettingsDialog *setDialog = new SettingsDialog();
        QAction *action = new QAction(QIcon(), "text", this);
        action->setText("Synchronization");
        QIcon expectedOpenIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/folder_magenta.svg"));

        setDialog->slotSwitchPage(action);

        QCOMPARE(action->icon().Active, expectedOpenIcon.Active);
        delete action;
    }

    void testslotSwitchPage_General()
    {
        SettingsDialog *setDialog = new SettingsDialog();
        QAction *action = new QAction(QIcon(), "text", this);
        action->setText("General");
        QIcon expectedOpenIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/settings_magenta.svg"));

        setDialog->slotSwitchPage(action);

        QCOMPARE(action->icon().Active, expectedOpenIcon.Active);
        delete action;
    }

    void testslotSwitchPage_Network()
    {
        SettingsDialog *setDialog = new SettingsDialog();
        QAction *action = new QAction(QIcon(), "text", this);
        action->setText("Network");
        QIcon expectedOpenIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/network_magenta.svg"));

        setDialog->slotSwitchPage(action);

        QCOMPARE(action->icon().Active, expectedOpenIcon.Active);
        delete action;
    }
};

QTEST_MAIN(TestSettingsDialog)
#include "testsettingsdialog.moc"
