/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <QToolBar>
#include <QtTest>
#include "theme.h"

#include "gui/nextcloudCore_autogen/include/ui_settingsdialog.h"
#define SettingsDialog(a, b) SettingsDialog(a)
#include "settingsdialog.h"
#undef SettingsDialog

using namespace OCC;

SettingsDialog::SettingsDialog(ownCloudGui *gui) : _gui(gui),_ui(new Ui::SettingsDialog)
{
    _ui->stack= new QStackedWidget();
    _actionGroup = new QActionGroup(this);
    _toolBar = new QToolBar;
    _toolBar->setIconSize(QSize(32, 32));
    _toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
};

class TestSettingsDialog: public QDialog
{
    Q_OBJECT

private slots:

    void testcustomizeStyle()
    {
        auto *gui = new ownCloudGui();
        auto *setDialog = new SettingsDialog(gui);

        setDialog->customizeStyle();

        QString expToolbarStyleSheet("QToolBar { background: %1; margin: 0; padding: 8px; padding-left: 0px; border: none; border-bottom: 1px solid %2; spacing: 8px; } "
                                     "QToolBar QToolButton { background: %1;font: 14px; border: none; border-bottom: 1px solid %2; margin: 0; padding: 13px; } "
                                     "QToolBar QToolBarExtension { padding:0; } "
                                     "QToolBar QToolButton:checked { background: %1; color: %4; }");
        auto *toolBar = new QToolBar();
        QString highlightColor(palette().highlight().color().name());
        const auto highlightTextColor = Theme::defaultColor().name();
        QString dark(palette().dark().color().name());
        QString background(palette().base().color().name());
        toolBar->setStyleSheet(expToolbarStyleSheet.arg(background, dark, highlightColor, highlightTextColor));

        QCOMPARE(setDialog->_toolBar->styleSheet(), toolBar->styleSheet());

        delete gui;
    }

    void testslotSwitchPage_Sync()
    {
        auto *gui = new ownCloudGui();
        auto *setDialog = new SettingsDialog(gui);
        auto *action = new QAction(QIcon(), "text", this);
        action->setText("Synchronization");
        QIcon expectedOpenIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/localFolder_magenta.svg"));

        setDialog->slotSwitchPage(action);

        QCOMPARE(action->icon().Active, expectedOpenIcon.Active);

        delete action;
        delete gui;
    }

    void testslotSwitchPage_General()
    {
        auto *gui = new ownCloudGui();
        auto *setDialog = new SettingsDialog(gui);
        auto *action = new QAction(QIcon(), "text", this);
        action->setText("General");
        QIcon expectedOpenIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/service_magenta.svg"));

        setDialog->slotSwitchPage(action);

        QCOMPARE(action->icon().Active, expectedOpenIcon.Active);
        delete action;
        delete gui;
    }

    void testslotSwitchPage_Network()
    {
        auto *gui = new ownCloudGui();
        auto *setDialog = new SettingsDialog(gui);
        auto *action = new QAction(QIcon(), "text", this);
        action->setText("Network");
        QIcon expectedOpenIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/network_magenta32x32.svg"));

        setDialog->slotSwitchPage(action);

        QCOMPARE(action->icon().Active, expectedOpenIcon.Active);
        delete action;
        delete gui;
    }

    void testaccountAdded()
    {
        FolderMan folderMan(new QObject());
        AccountPtr account = Account::create();
        auto *accountSt = new AccountState(account);

        auto *gui = new ownCloudGui();
        auto *setDialog = new SettingsDialog(gui);
        QString expectedText = account->prettyName();

        setDialog->accountAdded(accountSt);

        QList<QAction*> accountAction = setDialog->_toolBar->actions();
        QCOMPARE(accountAction.empty(), false);
        QCOMPARE(accountAction.at(0)->text(), expectedText);

        delete gui;
        delete accountSt;
    }

};

QTEST_MAIN(TestSettingsDialog)
#include "testsettingsdialog.moc"
