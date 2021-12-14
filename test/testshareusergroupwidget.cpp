/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <QToolBar>
#include <QtTest>
#include <QMenu>

#include "gui/nextcloudCore_autogen/include_Debug/ui_shareusergroupwidget.h"
#include "gui/nextcloudCore_autogen/include_Debug/ui_shareuserline.h"
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
    }

    void testslotaddLinkSignal()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());

        ShareUserGroupWidget *widget = new ShareUserGroupWidget(Account::create(), "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);

        widget->slotaddLinkSignal();

//        QCOMPARE(widget->_ui->shareInfo->isHidden(), true);
    }

    void testslotLinkShareDeleted()
    {
        QWidget *parent = new QWidget();
        FolderMan folderMan(new QObject());

        ShareUserGroupWidget *widget = new ShareUserGroupWidget(Account::create(), "sharePath", "localPath",
                                       SharePermissionShare, "privateLinkUrl", parent);

        widget->slotLinkShareDeleted();

        QCOMPARE(widget->_linkShareDeleted, true);
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

        widget->slotAdvancedPermission(groupShare, Share::ShareType::TypeEmail);
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
                                       SharePermissionShare, false, parent);

        shareUserLine->_permissionRead->setChecked(true);
        Share::Permissions permissions = SharePermissionRead;
        value.setValue((int)permissions);

        shareUserLine->slotPermissionsChanged();

        QCOMPARE(shareUserLine->_ui->currentPermission->elideMode(), Qt::ElideRight);
        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "Read only");
        QCOMPARE(shareUserLine->_share->getPermissions(), permissions);
        QCOMPARE(shareUserLine->_permissionRead->text(), "Read only");
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

        value.setValue((int)SharePermissionRead);

        shareUserLine->slotPermissionsChangedOutside(SharePermissionRead);

        QCOMPARE(shareUserLine->_ui->currentPermission->elideMode(), Qt::ElideRight);
        QCOMPARE(shareUserLine->_share->getPermissions(), SharePermissionRead);
        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "Read only");
        QCOMPARE(shareUserLine->_permissionRead->isChecked(), true);
    }

    void testslotPermissionsChangedOutside_CanEdit()
    {
        QWidget *parent = new QWidget();
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionUpdate, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionShare, true, parent);

        Share::Permissions permissions = SharePermissionRead;
        permissions |= SharePermissionUpdate;
        value.setValue((int)permissions);
        auto *permissionsGroup = new QActionGroup(this);
        shareUserLine->_permissionChange = permissionsGroup->addAction(tr("Can edit"));

        shareUserLine->slotPermissionsChangedOutside(SharePermissionUpdate);

        QCOMPARE(shareUserLine->_ui->currentPermission->elideMode(), Qt::ElideRight);
        QCOMPARE(shareUserLine->_share->getPermissions(), permissions);
        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "Can edit");
    }

    void testslotPermissionsChangedOutside_FileDropOnly()
    {
        QWidget *parent = new QWidget();
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionCreate, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionShare, true, parent);

        Share::Permissions permissions = SharePermissionRead;
        permissions |= SharePermissionCreate;
        value.setValue((int)permissions);
        auto *permissionsGroup = new QActionGroup(this);
        shareUserLine->_permissionUpload = permissionsGroup->addAction(tr("File drop only"));

        shareUserLine->slotPermissionsChangedOutside(SharePermissionCreate);

        QCOMPARE(shareUserLine->_ui->currentPermission->elideMode(), Qt::ElideRight);
        QCOMPARE(shareUserLine->_share->getPermissions(), permissions);
        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "File drop only");
    }

    void test_ShareUserLine_isNotFile()
    {
        QWidget *parent = new QWidget();
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionCreate, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionCreate, false, parent);

        QString  expMenuStyle("QMenu::item:checked{color: #e20074;}");
        QCOMPARE(shareUserLine->_ui->permissionMenu->menu()->styleSheet(), expMenuStyle);
        QCOMPARE(shareUserLine->_ui->permissionMenu->styleSheet(),
                 "QToolButton::menu-indicator { image: none; }");

        QList<QAction*> permissionMenus = shareUserLine->_ui->permissionMenu->menu()->actions();
        QCOMPARE(permissionMenus.empty(), false);
        QCOMPARE(permissionMenus.at(0)->text(), "Read only");
        QCOMPARE(permissionMenus.at(1)->text(), "Can edit");
        QCOMPARE(permissionMenus.at(2)->text(), "File drop only");

        QCOMPARE(shareUserLine->_permissionRead->isEnabled(), false);
        QCOMPARE(shareUserLine->_permissionRead->isCheckable(), true);
        QCOMPARE(shareUserLine->_permissionRead->text(), "Read only");
        QCOMPARE(shareUserLine->_permissionChange->isEnabled(), false);
        QCOMPARE(shareUserLine->_permissionChange->isCheckable(), true);
        QCOMPARE(shareUserLine->_permissionChange->text(), "Can edit");
        QCOMPARE(shareUserLine->_permissionUpload->isEnabled(), true);
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
    }

    void testdisplayPermissions_ReadOnly()
    {
        QWidget *parent = new QWidget();
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id",
                                                    "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionRead, sharee, QDate(), "note"));
        ShareUserLine *shareUserLine = new  ShareUserLine(Account::create(), groupShare,
                                       SharePermissionRead, true, parent);

        shareUserLine->displayPermissions();

        QCOMPARE(shareUserLine->_permissionRead->isChecked(), true);
        QCOMPARE(shareUserLine->_share->getPermissions(), SharePermissionRead);
        QCOMPARE(shareUserLine->_ui->currentPermission->text(), "Read only");
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
    }
};

QTEST_MAIN(TestShareUserGroupWidget)
#include "testshareusergroupwidget.moc"
