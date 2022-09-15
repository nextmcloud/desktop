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
    _gui = new ownCloudGui();
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
    void testcreateColorAwareAction()
    {
        QPointer<SettingsDialog> setDialog;
        QString iconPath(":/client/theme/white/folder.svg");

        QAction *retAct = setDialog->createColorAwareAction(iconPath, "Test");
        QCOMPARE(retAct->property("iconPath"), iconPath);
    }

    void testcustomizeStyle()
    {
        SettingsDialog *setDialog = new SettingsDialog();

        setDialog->customizeStyle();

        QString expToolbarStyleSheet("QToolBar { background: %1; margin: 0; padding: 8px; padding-left: 0px; border: none; border-bottom: 1px solid %2; spacing: 16px; } "
                                     "QToolBar QToolButton { background: %1; font: 14px; border: none; border-bottom: 1px solid %2; margin: 0px; padding: 13px; } "
                                     "QToolBar QToolBarExtension { padding:0; } "
                                     "QToolBar QToolButton:checked { background: %1; color: #e20074; }");
        QToolBar *toolBar = new QToolBar();
        QString highlightColor(palette().highlight().color().name());
        QString highlightTextColor(palette().highlightedText().color().name());
        QString dark(palette().dark().color().name());
        QString background(palette().base().color().name());
        toolBar->setStyleSheet(expToolbarStyleSheet.arg(background, dark, highlightColor, highlightTextColor));

        QCOMPARE(setDialog->_toolBar->styleSheet(), toolBar->styleSheet());
    }

    void testslotSwitchPage_Sync()
    {
        SettingsDialog *setDialog = new SettingsDialog();
        QAction *action = new QAction(QIcon(), "text", this);
        action->setText("Synchronization");
        QIcon expectedOpenIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/localFolder_magenta.svg"));

        setDialog->slotSwitchPage(action);

        QCOMPARE(action->icon().Active, expectedOpenIcon.Active);

        delete action;
    }

    void testslotSwitchPage_General()
    {
        SettingsDialog *setDialog = new SettingsDialog();
        QAction *action = new QAction(QIcon(), "text", this);
        action->setText("General");
        QIcon expectedOpenIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/service_magenta.svg"));

        setDialog->slotSwitchPage(action);

        QCOMPARE(action->icon().Active, expectedOpenIcon.Active);
        delete action;
    }

    void testslotSwitchPage_Network()
    {
        SettingsDialog *setDialog = new SettingsDialog();
        QAction *action = new QAction(QIcon(), "text", this);
        action->setText("Network");
        QIcon expectedOpenIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/network_magenta32x32.svg"));

        setDialog->slotSwitchPage(action);

        QCOMPARE(action->icon().Active, expectedOpenIcon.Active);
        delete action;
    }

    void testaccountAdded()
    {
        FolderMan folderMan(new QObject());
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);

        SettingsDialog *setDialog = new SettingsDialog();
        QString expectedText("Synchronization");

        setDialog->accountAdded(accountSt);

        QList<QAction*> accountAction = setDialog->_toolBar->actions();
        QCOMPARE(accountAction.empty(), false);
        QCOMPARE(accountAction.at(0)->text(), expectedText);
    }

    /* if hover added then remove below commented code else remove below code
    void testslotHoverEffect_Sync()
    {
        SettingsDialog *setDialog = new SettingsDialog();
        QAction *action = new QAction(QIcon(), "text", this);
        action->setText("Synchronization");
        QIcon expectedOpenIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/localFolder_magenta.svg"));

        setDialog->slotHoverEffect(action);

        QCOMPARE(action->icon().Active, expectedOpenIcon.Active);
        delete action;
    }

    void testslotHoverEffect_General()
    {
        SettingsDialog *setDialog = new SettingsDialog();
        QAction *action = new QAction(QIcon(), "text", this);
        action->setText("General");
        QIcon expectedOpenIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/service_magenta.svg"));

        setDialog->slotHoverEffect(action);

        QCOMPARE(action->icon().Active, expectedOpenIcon.Active);
        delete action;
    }

    void testslotHoverEffect_Network()
    {
        SettingsDialog *setDialog = new SettingsDialog();
        QAction *action = new QAction(QIcon(), "text", this);
        action->setText("Network");
        QIcon expectedOpenIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/network_magenta32x32.svg"));

        setDialog->slotHoverEffect(action);

        QCOMPARE(action->icon().Active, expectedOpenIcon.Active);
        delete action;
    }
    */
};

QTEST_MAIN(TestSettingsDialog)
#include "testsettingsdialog.moc"
