/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <QToolBar>
#include <QtTest>
#include <QMenu>

#include "gui/nextcloudCore_autogen/include_Release/ui_shareusergroupwidget.h"
#include "gui/nextcloudCore_autogen/include_Release/ui_shareuserline.h"
#include "shareusergroupwidget.h"
#include <QCalendarWidget>
#include "testhelper.h"
#include "folderman.h"
#include "account.h"
#include "sharee.h"
#include "networkjobs.h"
#define setPermissions(a, b) setPermissions(a)
#define setNote(a,b) setNote(a)
#include "ocssharejob.h"
#include "sharemanager.cpp"
#undef setNote
#undef setPermissions

static QVariant value;

using namespace OCC;
void OcsShareJob::setPermissions(const QString &shareId)
{
    QJsonDocument reply;
    emit shareJobFinished(reply, value);
};
void OcsShareJob::setNote(const QString &note)
{
    QJsonDocument reply;
    emit shareJobFinished(reply, value);
};
void AvatarJob::start()
{
};
class TestShareUserGroupWidget: public QObject
{
    Q_OBJECT

private slots:

    void test_ShareUserGroupWidget()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());
        QString expError("Personal sharing via email");

        ShareUserGroupWidget *widget = new ShareUserGroupWidget(Account::create(), "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);

        QCOMPARE(widget->_ui->errorLabel->text(), expError);
        QCOMPARE(widget->_ui->errorLabel->isHidden(), false);
        QCOMPARE(widget->_shareUserGroup->contentsMargins(), QMargins(0, 0, 0, 0));

        delete widget;
        delete parent;
    }

    void testshareUserGroupLayout()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());
        QString expError("Personal sharing via email");

        ShareUserGroupWidget *widget = new ShareUserGroupWidget(Account::create(), "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);


        QCOMPARE(widget->_shareUserGroup->contentsMargins(), QMargins(0, 0, 0, 0));
        QCOMPARE(widget->shareUserGroupLayout(), widget->_shareUserGroup);

        delete widget;
        delete parent;
    }

    void testshowNoShare()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());
        QString expError("Personal sharing via email");

        ShareUserGroupWidget *widget = new ShareUserGroupWidget(Account::create(), "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);

        widget->showNoShare();

        QCOMPARE(widget->_ui->shareInfo->isHidden(), false);
        widget->showShare();

        delete widget;
        delete parent;
    }

    void testshowShare()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());
        QString expError("Personal sharing via email");

        ShareUserGroupWidget *widget = new ShareUserGroupWidget(Account::create(), "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);

        widget->showShare();

        QCOMPARE(widget->_ui->shareInfo->isHidden(), true);

        delete widget;
        delete parent;
    }

    void testsearchForSharees()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());
        QString expError("Personal sharing via email");

        ShareUserGroupWidget *widget = new ShareUserGroupWidget(Account::create(), "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);

        widget->searchForSharees(ShareeModel::LookupMode::LocalSearch);

        QCOMPARE(widget->_ui->errorLabel->isHidden(), false);
        QCOMPARE(widget->_ui->errorLabel->text(), expError);

        delete widget;
        delete parent;
    }

    void testslotaddLinkSignal()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());

        ShareUserGroupWidget *widget = new ShareUserGroupWidget(Account::create(), "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);

        widget->slotaddLinkSignal();

//        QCOMPARE(widget->_ui->shareInfo->isHidden(), true);

        delete widget;
        delete parent;
    }

    void testslotLinkShareDeleted()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());

        ShareUserGroupWidget *widget = new ShareUserGroupWidget(Account::create(), "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);

        widget->slotLinkShareDeleted();

        QCOMPARE(widget->_linkShareDeleted, true);

        delete widget;
        delete parent;
    }

    void testonSetUserNote()
    {
        QWidget *parent = new QWidget();
        QString expError("Personal sharing via email");
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionRead, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare, SharePermissionShare,
                                       true, parent);

        QString note("Data Set");
        value.setValue(QVariant::fromValue<QString>(note));

        shareUserLine->onSetUserNote(note);

        QCOMPARE(shareUserLine->_share->getNote(), note);

        delete shareUserLine;
        delete parent;
    }

    void testslotAdvancedPermission()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());
        auto *cred = new HttpCredentialsTest("testuser", "secret");
        AccountPtr account = Account::create();
        account->setCredentials(cred);
        ShareUserGroupWidget *widget = new ShareUserGroupWidget(account, "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));

        QSharedPointer<Share> share = QSharedPointer<Share> (new Share(Account::create(), "id", "uidowner", "ownerDisplayName", "path",
                                      Share::TypeEmail, true, SharePermissionRead, sharee));

        QList<QSharedPointer<Share>> shares;
        shares.append(share);

        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id", "uidowner", "ownerDisplayName", "path",
                                                    Share::TypeEmail, true, SharePermissionRead, sharee, QDate(), "note"));

        QString permission = "Can edit";

        widget->slotAdvancedPermission(groupShare, Share::ShareType::TypeEmail, permission);

        delete widget;
        delete parent;
    }

    void testslotSendNewMail()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());
        auto *cred = new HttpCredentialsTest("testuser", "secret");
        AccountPtr account = Account::create();
        account->setCredentials(cred);
        ShareUserGroupWidget *widget = new ShareUserGroupWidget(account, "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(),
                                                    "id", "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionRead, sharee, QDate(), "note"));

        widget->slotSendNewMail(groupShare);

        delete widget;
        delete parent;
    }

    void testslotPermissionsChanged_UserGroup()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());
        auto *cred = new HttpCredentialsTest("testuser", "secret");
        AccountPtr account = Account::create();
        account->setCredentials(cred);
        ShareUserGroupWidget *widget = new ShareUserGroupWidget(account, "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);

        widget->slotPermissionsChanged(SharePermissionShare);

        delete widget;
        delete parent;
    }

    void testslotPermissionsChanged_UserLine_ReadOnly()
    {
        QWidget *parent = new QWidget();
        bool isFile = true;

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionUpdate, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionShare, isFile, parent);

        shareUserLine->_permissionRead->setChecked(true);
        Share::Permissions permissions = SharePermissionRead;
        value.setValue((int)permissions);

        shareUserLine->slotPermissionsChanged();

        QCOMPARE(shareUserLine->_ui->currentPermission->elideMode(), Qt::ElideRight);
        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "Read only");
        QCOMPARE(shareUserLine->_share->getPermissions(), permissions);
        QCOMPARE(shareUserLine->_permissionRead->text(), "Read only");
        QCOMPARE(shareUserLine->_permission, "Read only");

        delete shareUserLine;
        delete parent;
    }

    void testslotPermissionsChanged_UserLine_CanEdit()
    {
        QWidget *parent = new QWidget();
        bool isFile = false;

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeUser,
                                                    true, SharePermissionUpdate, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionShare, isFile, parent);

        shareUserLine->_permissionChange->setChecked(true);
        Share::Permissions permissions = SharePermissionUpdate;
        value.setValue((int)permissions);

        shareUserLine->slotPermissionsChanged();

        QCOMPARE(shareUserLine->_ui->currentPermission->elideMode(), Qt::ElideRight);
        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "Can edit");
        QCOMPARE(shareUserLine->_share->getPermissions(), permissions);
        QCOMPARE(shareUserLine->_permissionChange->text(), "Can edit");
//        QCOMPARE(shareUserLine->_permission, "Can edit");

        delete shareUserLine;
        delete parent;
    }

    void testslotPermissionsChanged_UserLine_FileDropOnly()
    {
        QWidget *parent = new QWidget();
        bool isFile = false;

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionUpdate, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionShare, isFile, parent);

        shareUserLine->_permissionUpload->setChecked(true);
        Share::Permissions permissions = SharePermissionCreate;
        value.setValue((int)permissions);

        shareUserLine->slotPermissionsChanged();

        QCOMPARE(shareUserLine->_ui->currentPermission->elideMode(), Qt::ElideRight);
        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "File drop only");
        QCOMPARE(shareUserLine->_permissionUpload->text(), "File drop only");
        QCOMPARE(shareUserLine->_share->getPermissions(), permissions);
        QCOMPARE(shareUserLine->_permission, "File drop only");

        delete shareUserLine;
        delete parent;
    }

    void testslotPermissionsChangedOutside_ReadOnly()
    {
        QWidget *parent = new QWidget();
        bool isFile = false;

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionRead, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare, SharePermissionShare,
                                                          isFile, parent);

        shareUserLine->slotPermissionsChangedOutside(SharePermissionRead);

        QCOMPARE(shareUserLine->_permissionRead->isChecked(), true);
        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "Read only");

        delete shareUserLine;
        delete parent;
    }

    void testslotPermissionsChangedOutside_CanEdit()
    {
        QWidget *parent = new QWidget();
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionUpdate, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionShare, false, parent);

        shareUserLine->slotPermissionsChangedOutside(SharePermissionUpdate);

        QCOMPARE(shareUserLine->_permissionChange->isChecked(), true);
        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "Can edit");

        delete shareUserLine;
        delete parent;
    }

    void testslotPermissionsChangedOutside_FileDropOnly()
    {
        QWidget *parent = new QWidget();
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionCreate, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionShare, false, parent);

        shareUserLine->slotPermissionsChangedOutside(SharePermissionCreate);

        QCOMPARE(shareUserLine->_permissionUpload->isChecked(), true);
        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "File drop only");

        delete shareUserLine;
        delete parent;
    }

    void test_ShareUserLine_isNotFile()
    {
        QWidget *parent = new QWidget();
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionRead, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionRead, false, parent);

        QString  expMenuStyle("QMenu::item:checked{color: #e20074;}");
        QCOMPARE(shareUserLine->_ui->permissionMenu->menu()->styleSheet(), expMenuStyle);
        QCOMPARE(shareUserLine->_ui->permissionMenu->styleSheet(),
                 "QToolButton::menu-indicator { image: none; }");

        QList<QAction*> permissionMenus = shareUserLine->_ui->permissionMenu->menu()->actions();
        QCOMPARE(permissionMenus.empty(), false);
        QCOMPARE(permissionMenus.at(0)->text(), "Read only");
        QCOMPARE(permissionMenus.at(1)->text(), "Can edit");
        QCOMPARE(permissionMenus.at(2)->text(), "File drop only");

        QCOMPARE(shareUserLine->_permission, "Read only");
        QCOMPARE(shareUserLine->_ui->permissionMenu->popupMode(), QToolButton::InstantPopup);
        QCOMPARE(shareUserLine->_permissionRead->isEnabled(), true);
        QCOMPARE(shareUserLine->_permissionRead->isCheckable(), true);
        QCOMPARE(shareUserLine->_permissionRead->text(), "Read only");
        QCOMPARE(shareUserLine->_permissionChange->isEnabled(), false);
        QCOMPARE(shareUserLine->_permissionChange->isCheckable(), true);
        QCOMPARE(shareUserLine->_permissionChange->text(), "Can edit");
        QCOMPARE(shareUserLine->_permissionUpload->isEnabled(), false);
        QCOMPARE(shareUserLine->_permissionUpload->isCheckable(), true);
        QCOMPARE(shareUserLine->_permissionUpload->text(), "File drop only");
        QCOMPARE(shareUserLine->_advancedPermission->text(), "Advanced Permission");
        QCOMPARE(shareUserLine->_sendNewMail->text(), "Send new mail");
        QCOMPARE(shareUserLine->_deleteShareButton->text(), "Unshare");
        QCOMPARE(shareUserLine->_ui->permissionToolButton->styleSheet(),
                 "QToolButton::menu-indicator { image: none; }");

        QList<QAction*> permissions = shareUserLine->_ui->permissionToolButton->menu()->actions();
        QCOMPARE(permissions.empty(), false);
        QCOMPARE(permissions.at(0)->text(), "Advanced Permission");
        QCOMPARE(permissions.at(1)->text(), "Send new mail");
        QCOMPARE(permissions.at(2)->text(), "Unshare");

        delete shareUserLine;
        delete parent;
    }

    void testdisplayPermissions_ReadOnly_isFile()
    {
        QWidget *parent = new QWidget();
        bool isFile = true;
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionRead, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionRead, isFile, parent);

        shareUserLine->displayPermissions();

        QCOMPARE(shareUserLine->_share->getPermissions(), SharePermissionRead);
        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "Read only");
        QCOMPARE(shareUserLine->_ui->currentPermission->isEnabled(), false);
        QCOMPARE(shareUserLine->_permission, "Read only");

        delete shareUserLine;
        delete parent;
    }

    void testdisplayPermissions_ReadOnly_isNotFile()
    {
        QWidget *parent = new QWidget();
        bool isFile = false;

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionRead, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionRead, isFile, parent);

        shareUserLine->displayPermissions();

        QCOMPARE(shareUserLine->_permissionRead->isChecked(), true);
        QCOMPARE(shareUserLine->_ui->currentPermission->isEnabled(), true);
        QCOMPARE(shareUserLine->_share->getPermissions(), SharePermissionRead);
        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "Read only");
        QCOMPARE(shareUserLine->_permission, "Read only");

        delete shareUserLine;
        delete parent;
    }

    void testdisplayPermissions_CanEdit()
    {
        QWidget *parent = new QWidget();
        bool isFile = false;

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeUser,
                                                    true, SharePermissionUpdate, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionShare, isFile, parent);

        Share::Permissions permissions = SharePermissionUpdate;
        value.setValue((int)permissions);

        shareUserLine->displayPermissions();

        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "Can edit");
        QCOMPARE(shareUserLine->_share->getPermissions(), permissions);
        QCOMPARE(shareUserLine->_permissionChange->text(), "Can edit");
        QCOMPARE(shareUserLine->_permissionChange->isChecked(), true);
        QCOMPARE(shareUserLine->_permission, "Can edit");

        delete shareUserLine;
        delete parent;
    }

    void testdisplayPermissions_FileDropOnly()
    {
        QWidget *parent = new QWidget();
        bool isFile = false;
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionCreate, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionShare, isFile, parent);

        Share::Permissions permissions = SharePermissionCreate;
        value.setValue((int)permissions);

        shareUserLine->displayPermissions();

        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "File drop only");
        QCOMPARE(shareUserLine->_share->getPermissions(), permissions);
        QCOMPARE(shareUserLine->_permissionUpload->text(), "File drop only");
        QCOMPARE(shareUserLine->_permissionUpload->isChecked(), true);

        delete shareUserLine;
        delete parent;
    }

    void testcreateUserShare()
    {
        bool createShare = true;
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());
        AccountPtr account = Account::create();
        QVariantMap enforcedMap;
        enforcedMap["enforced"] = 0;

        QVariantMap passwordMap;
        passwordMap["password"] = enforcedMap;

        QVariantMap sharebymailMap;
        sharebymailMap["sharebymail"] = passwordMap;

        QVariantMap files_sharingMap;
        files_sharingMap["files_sharing"] = sharebymailMap;

        account->setCapabilities(files_sharingMap);
        auto *cred = new HttpCredentialsTest("testuser", "secret");
        account->setCredentials(cred);
        ShareUserGroupWidget *widget = new ShareUserGroupWidget(account, "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName",
                                        Sharee::Type::Email));

        widget->_sharee = sharee;

        widget->createUserShare(sharee, createShare);

        QCOMPARE(widget->_lastCreatedShareId , QString());

        delete widget;
        delete parent;
    }

    /* UI based test cases */
    void test_ShareUserGroupWidget_screen()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());

        ShareUserGroupWidget *widget = new ShareUserGroupWidget(Account::create(), "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);
        /* verify UI screen labels */
        QCOMPARE(widget->_ui->shareInfolabel->text(), "You can create links or send shares by mail. If you invite MagentaCLOUD users, you have more opportunities for collaboration.");
        QCOMPARE(widget->_ui->errorLabel->text(), "Personal sharing via email");
        QCOMPARE(widget->_ui->shareHeading->text(), "Your Shares");
        QCOMPARE(widget->_ui->shareInfo->text(), "No shares created yet");

        delete widget;
        delete parent;
    }

    void test_ShareUserLine_screen()
    {
        QWidget *parent = new QWidget();
        bool isFile = false;

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "Username", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeUser,
                                                    true, SharePermissionUpdate, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionShare, isFile, parent);

        /* verify UI screen labels */
        QCOMPARE(shareUserLine->_ui->sharedWith->text(), "Username");
        QCOMPARE(shareUserLine->_ui->errorLabel->text(), "Placeholder for Error text");

        delete shareUserLine;
        delete parent;
    }

    /* UI based (event driven) test cases */
    void test_addLinkButton()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());

        ShareUserGroupWidget *widget = new ShareUserGroupWidget(Account::create(), "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);

        /*to track the SIGNAL emit or not */
        QSignalSpy addLinkButtonSpy(widget->_ui->addLinkButton, SIGNAL(clicked(bool)));

        connect(widget->_ui->addLinkButton, &QPushButton::clicked, widget,
                &ShareUserGroupWidget::slotaddLinkSignal);

        /* generate event/emit signal */
        QTest::mouseClick( widget->_ui->addLinkButton, Qt::LeftButton );

        /* verify SIGNAL emit */
        QCOMPARE(addLinkButtonSpy.count(), 1);

        delete widget;
        delete parent;
    }

    void test_shareeLineEdit()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());

        ShareUserGroupWidget *widget = new ShareUserGroupWidget(Account::create(), "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);

        /*to track the SIGNAL emit or not */
        QSignalSpy addFolderButtonSpy(widget->_ui->shareeLineEdit, SIGNAL(returnPressed()));

        /* generate event/emit signal */
        QTest::keyPress( widget->_ui->shareeLineEdit, Qt::Key_Return );

        /* verify SIGNAL emit */
        QCOMPARE(addFolderButtonSpy.count(), 1);

        /* verify SLOT data */
        QCOMPARE(widget->_disableCompleterActivated, false);

        delete widget;
        delete parent;
    }
};

QTEST_MAIN(TestShareUserGroupWidget)
#include "testshareusergroupwidget.moc"
