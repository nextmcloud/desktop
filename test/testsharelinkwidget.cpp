/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <QToolBar>
#include <QtTest>
#include <QMenu>

#include "gui/nextcloudCore_autogen/include_Debug/ui_sharelinkwidget.h"
#include "sharelinkwidget.h"
#include "sharemanager.h"
#include "account.h"
#include "theme.h"

#define setPermissions(a, b) setPermissions(a)
#include "ocssharejob.h"
#include "sharemanager.cpp"
#undef setPermissions

static QVariant value;

using namespace OCC;
void OcsShareJob::setPermissions(const QString &shareId)
{
    QJsonDocument reply;
    emit shareJobFinished(reply, value);
};

class TestShareLinkWidget: public QObject
{
    Q_OBJECT

private slots:

    void testsetupUiOptions_isFile()
    {
        QWidget *parent = new QWidget();
        ShareLinkWidget *widget = new ShareLinkWidget(Account::create(), "sharePath",
                                  "localPath", SharePermissionShare, parent);
        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, true, QUrl(), QDate() ));
        widget->_isFile = true;
        widget->_linkShare = linkShare;
        value.setValue((int)SharePermissionRead);

        widget->setupUiOptions();

        QCOMPARE(widget->_ui->shareLinkLabel->text(), "Link to file");
//        QCOMPARE(widget->_noteLinkAction->text(), "Note to recipient");
//        QCOMPARE(widget->_passwordProtectLinkAction->text(), "Password protect");
        QCOMPARE(widget->_advancedPermission->text(), "Advanced Permission");
        QCOMPARE(widget->_unshareLinkAction ->text(), "Unshare");
        QCOMPARE(widget->_addAnotherLinkAction ->text(), "Add another link");
        QCOMPARE(widget->_ui->permissionsMenu_3->isEnabled(), false);
        QCOMPARE(widget->_ui->shareLinkToolButton->styleSheet(),
                 "QToolButton::menu-indicator { image: none; }");

    }

    void testsetupUiOptions_IsNotFile()
    {
        QWidget *parent = new QWidget();
        ShareLinkWidget *widget = new ShareLinkWidget(Account::create(), "sharePath",
                                  "localPath", SharePermissionShare, parent);
        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, true, QUrl(), QDate() ));
        widget->_isFile = false;
        widget->_linkShare = linkShare;
        value.setValue((int)SharePermissionRead);

        widget->setupUiOptions();

        QCOMPARE(widget->_allowUploadLinkAction->text(), "File drop only");
        QCOMPARE(widget->_ui->shareLinkLabel->text(), "Link to folder");
//        QCOMPARE(widget->_noteLinkAction->text(), "Note to recipient");
//        QCOMPARE(widget->_passwordProtectLinkAction->text(), "Password protect");
        QCOMPARE(widget->_advancedPermission->text(), "Advanced Permission");
        QCOMPARE(widget->_unshareLinkAction ->text(), "Unshare");
        QCOMPARE(widget->_addAnotherLinkAction ->text(), "Add another link");

        QCOMPARE(widget->_ui->permissionsMenu_3->isEnabled(), true);
        QCOMPARE(widget->_ui->permissionsMenu_3->popupMode(), QToolButton::InstantPopup);
        QList<QAction*> permissionMenus = widget->_ui->permissionsMenu_3->menu()->actions();
        QCOMPARE(permissionMenus.empty(), false);
        QCOMPARE(permissionMenus.at(0)->text(), "Read only");
        QCOMPARE(permissionMenus.at(1)->text(), "Can edit");
        QCOMPARE(permissionMenus.at(2)->text(), "File drop only");

        QString  expMenuStyle("QMenu::item:checked{color: #e20074;}");
        QCOMPARE(widget->_ui->permissionsMenu_3->menu()->styleSheet(), expMenuStyle);
        QCOMPARE(widget->_ui->permissionsMenu_3->styleSheet(),
                 "QToolButton::menu-indicator { image: none; }");
        QCOMPARE(widget->_ui->shareLinkToolButton->styleSheet(),
                 "QToolButton::menu-indicator { image: none; }");
    }

    void testslotLinkContextMenuActionTriggered_readOnlyLinkAction_isFile()
    {
        QWidget *parent = new QWidget();
        ShareLinkWidget *widget = new ShareLinkWidget(Account::create(), "sharePath",
                                  "localPath", SharePermissionShare, parent);
        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, true, QUrl(), QDate() ));
        widget->_isFile = true;
        widget->_linkShare = linkShare;

        auto *permissionsGroup = new QActionGroup(this);
        widget->_readOnlyLinkAction = permissionsGroup->addAction(tr("Read only"));
        widget->_readOnlyLinkAction->setCheckable(true);
        widget->_readOnlyLinkAction->setChecked(true);
        widget->_readOnlyLinkAction->setText("Read only");
        value.setValue((int)SharePermissionRead);

        widget->slotLinkContextMenuActionTriggered(widget->_readOnlyLinkAction);

        QCOMPARE(widget->_ui->currentPermissions_3->elideMode(), Qt::ElideRight);
        QCOMPARE(widget->_linkShare->getPermissions(), SharePermissionRead);
        QCOMPARE(widget->_ui->currentPermissions_3->text(), "Read only");
        QCOMPARE(widget->_ui->currentPermissions_3->isEnabled(), false);
    }

    void testslotLinkContextMenuActionTriggered_readOnlyLinkAction_isNotFile()
    {
        QWidget *parent = new QWidget();
        ShareLinkWidget *widget = new ShareLinkWidget(Account::create(), "sharePath",
                                  "localPath", SharePermissionShare, parent);
        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, true, QUrl(), QDate() ));
        widget->_isFile = false;
        widget->_linkShare = linkShare;

        auto *permissionsGroup = new QActionGroup(this);
        widget->_readOnlyLinkAction = permissionsGroup->addAction(tr("Read only"));
        widget->_readOnlyLinkAction->setCheckable(true);
        widget->_readOnlyLinkAction->setChecked(true);
        widget->_readOnlyLinkAction->setText("Read only");
        value.setValue((int)SharePermissionRead);

        widget->slotLinkContextMenuActionTriggered(widget->_readOnlyLinkAction);

        QCOMPARE(widget->_ui->currentPermissions_3->elideMode(), Qt::ElideRight);
        QCOMPARE(widget->_linkShare->getPermissions(), SharePermissionRead);
        QCOMPARE(widget->_ui->currentPermissions_3->text(), "Read only");
        QCOMPARE(widget->_ui->currentPermissions_3->isEnabled(), true);
    }

    void testslotLinkContextMenuActionTriggered_allowEditingLinkAction()
    {
        QWidget *parent = new QWidget();
        ShareLinkWidget *widget = new ShareLinkWidget(Account::create(), "sharePath",
                                  "localPath", SharePermissionShare, parent);
        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, true, QUrl(), QDate() ));
        widget->_linkShare = linkShare;

        auto *permissionsGroup = new QActionGroup(this);
        widget->_allowEditingLinkAction = permissionsGroup->addAction(tr("Can edit"));
        widget->_allowEditingLinkAction->setCheckable(true);
        widget->_allowEditingLinkAction->setChecked(true);
        widget->_allowEditingLinkAction->setText("Can edit");
        value.setValue((int)SharePermissionUpdate);

        widget->slotLinkContextMenuActionTriggered(widget->_allowEditingLinkAction);

        QCOMPARE(widget->_ui->currentPermissions_3->elideMode(), Qt::ElideRight);
        QCOMPARE(widget->_linkShare->getPermissions(), SharePermissionUpdate);
        QCOMPARE(widget->_ui->currentPermissions_3->text(), "Can edit");
    }

    void testslotLinkContextMenuActionTriggered_allowUploadLinkAction()
    {
        QWidget *parent = new QWidget();
        ShareLinkWidget *widget = new ShareLinkWidget(Account::create(), "sharePath",
                                  "localPath", SharePermissionShare, parent);
        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, true, QUrl(), QDate() ));
        widget->_linkShare = linkShare;

        auto *permissionsGroup = new QActionGroup(this);
        widget->_allowUploadLinkAction = permissionsGroup->addAction(tr("File drop only"));
        widget->_allowUploadLinkAction->setCheckable(true);
        widget->_allowUploadLinkAction->setChecked(true);
        widget->_allowUploadLinkAction->setText("File drop only");
        value.setValue((int)SharePermissionDelete);

        widget->slotLinkContextMenuActionTriggered(widget->_allowUploadLinkAction);

        QCOMPARE(widget->_ui->currentPermissions_3->elideMode(), Qt::ElideRight);
        QCOMPARE(widget->_linkShare->getPermissions(), SharePermissionDelete);
        QCOMPARE(widget->_ui->currentPermissions_3->text(), "File drop only");

    }

    void testslotLinkContextMenuActionTriggered_unshareLinkAction()
    {
        QWidget *parent = new QWidget();
        ShareLinkWidget *widget = new ShareLinkWidget(Account::create(), "sharePath",
                                  "localPath", SharePermissionShare, parent);
        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, true, QUrl(), QDate() ));
        widget->_linkShare = linkShare;

        widget->_unshareLinkAction = new QAction(tr("Unshare Link"));
        widget->_unshareLinkAction->setCheckable(true);
        widget->_unshareLinkAction->setChecked(true);

        widget->slotLinkContextMenuActionTriggered(widget->_unshareLinkAction);

        QCOMPARE(widget->_ui->currentPermissions_3->elideMode(), Qt::ElideRight);
    }
};

QTEST_MAIN(TestShareLinkWidget)
#include "testsharelinkwidget.moc"
