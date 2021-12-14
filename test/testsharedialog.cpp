/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <QToolBar>
#include <QtTest>
#include "gui/nextcloudCore_autogen/include_Debug/ui_shareusergrouppermissionwidget.h"
#include "gui/nextcloudCore_autogen/include_Debug/ui_sharedialog.h"
#define ShareDialog(a, b, c, d, e, f, g) ShareDialog()
#include "sharedialog.h"
#undef ShareDialog

#define private public
#include "shareusergrouppermissionwidget.h"
#include "shareusermessagewidget.h"
#include "shareusergroupwidget.h"
#include "sharelinkwidget.h"
#include "accountstate.h"
#include "theme.h"
#undef private

using namespace OCC;

ShareDialog::ShareDialog()
{
    _ui = (new Ui::ShareDialog);
    _ui->scrollArea = new QScrollArea();
    _ui->verticalLayout = new QVBoxLayout();
    _sharePath = "sharePath";
    _localPath = "localPath";
    _maxSharingPermissions = SharePermissionShare;
    _privateLinkUrl = ("privateLinkUrl");
    m_createShare = true;
    _userLinePermission = SharePermissionRead;

    _scrollAreaViewPort = new QWidget(_ui->scrollArea);
    _scrollAreaLayout = new QVBoxLayout(_scrollAreaViewPort);
    _scrollAreaLayout->setContentsMargins(0, 0, 0, 0);
    _ui->scrollArea->setWidget(_scrollAreaViewPort);

};

class TestShareDialog: public QObject
{
    Q_OBJECT

private slots:
    void testslotSendMessage()
    {
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        FolderMan folderMan(new QObject());

        ShareDialog shareDialog;
        shareDialog._accountState = accountSt;

        QSharedPointer<Sharee> sharee;
        shareDialog._shareUserMessage = new ShareUserMessageWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                        shareDialog._localPath, shareDialog._maxSharingPermissions, sharee, &shareDialog);
        shareDialog._userGroupWidget = new ShareUserGroupWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                       shareDialog._localPath, shareDialog._maxSharingPermissions, "privateLinkUrl", &shareDialog);

        shareDialog.slotSendMessage(sharee, "UserMessage");

        QCOMPARE(shareDialog.m_createShare , true);
        QCOMPARE(shareDialog._ui->scrollArea->isHidden() , false);
        QCOMPARE(shareDialog._userLinePermission , SharePermissionRead);
        QCOMPARE(shareDialog._shareUserMessage->isHidden() , true);
        QCOMPARE(shareDialog._shareUserMessage->_sharePath , shareDialog._sharePath);
        QCOMPARE(shareDialog._shareUserMessage->_localPath , shareDialog._localPath);
        QCOMPARE(shareDialog._userGroupWidget->isHidden() , false);
        QCOMPARE(shareDialog._userGroupWidget->_sharePath , shareDialog._sharePath);
        QCOMPARE(shareDialog._userGroupWidget->_localPath , shareDialog._localPath);
    }

    void testslotCancelShare()
    {
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        FolderMan folderMan(new QObject());

        ShareDialog shareDialog;
        shareDialog._accountState = accountSt;

        QSharedPointer<Sharee> sharee;
        shareDialog._userGroupWidget = new ShareUserGroupWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                       shareDialog._localPath, shareDialog._maxSharingPermissions, "privateLinkUrl", &shareDialog);

        shareDialog.slotCancelShare(sharee);

        QCOMPARE(shareDialog.m_createShare , true);
        QCOMPARE(shareDialog._ui->scrollArea->isHidden() , false);
        QCOMPARE(shareDialog._userGroupWidget->isHidden() , false);
        QCOMPARE(shareDialog._userGroupWidget->_sharePath , shareDialog._sharePath);
        QCOMPARE(shareDialog._userGroupWidget->_localPath , shareDialog._localPath);
    }

    void testslotLinkAdvancePermissionWidget()
    {
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        FolderMan folderMan(new QObject());

        ShareDialog shareDialog;
        shareDialog._accountState = accountSt;

        QSharedPointer<Sharee> sharee;
        bool createShare = true;

        shareDialog._sharePermissionGroup = new ShareUserGroupPermissionWidget(shareDialog._accountState->account(),
                                            shareDialog._sharePath, shareDialog._localPath, shareDialog._userLinePermission,
                                            shareDialog._maxSharingPermissions, Share::TypeLink, nullptr,false, &shareDialog);
        shareDialog._userGroupWidget = new ShareUserGroupWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                       shareDialog._localPath, shareDialog._maxSharingPermissions, "privateLinkUrl", &shareDialog);
        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, true, QUrl(), QDate() ));
        shareDialog._userGroupWidget->setVisible(true);

        shareDialog.slotLinkAdvancePermissionWidget(linkShare, Share::ShareType::TypeLink, sharee, createShare);

        QCOMPARE(shareDialog.m_createShare , createShare);
        QCOMPARE(shareDialog._ui->scrollArea->isVisible() , false);
        QCOMPARE(shareDialog._userGroupWidget->isVisible() , false);
        QCOMPARE(shareDialog._sharePermissionGroup->isHidden() , false);
        QCOMPARE(shareDialog._sharePermissionGroup->_linkShare , linkShare);
        QCOMPARE(shareDialog._sharePermissionGroup->_type , Share::ShareType::TypeLink);
        QCOMPARE(shareDialog._sharePermissionGroup->_createShare , createShare);
    }

    void testslotUserAdvancePermissionWidget()
    {
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        FolderMan folderMan(new QObject());

        ShareDialog shareDialog;
        shareDialog._accountState = accountSt;

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        bool createShare = true;

        shareDialog._sharePermissionGroup = new ShareUserGroupPermissionWidget(shareDialog._accountState->account(),
                                            shareDialog._sharePath, shareDialog._localPath, shareDialog._userLinePermission,
                                            shareDialog._maxSharingPermissions, Share::TypeLink, nullptr,false, &shareDialog);
        shareDialog._userGroupWidget = new ShareUserGroupWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                       shareDialog._localPath, shareDialog._maxSharingPermissions, "privateLinkUrl", &shareDialog);
        QSharedPointer<UserGroupShare> userGroupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id", "uidowner", "ownerDisplayName", "path",
                                                        Share::TypeEmail, true, SharePermissionRead, sharee, QDate(), "note"));

        shareDialog._userGroupWidget->setVisible(true);

        shareDialog.slotUserAdvancePermissionWidget(userGroupShare, Share::ShareType::TypeLink, sharee, createShare);

        QCOMPARE(shareDialog.m_createShare , createShare);
        QCOMPARE(shareDialog._ui->scrollArea->isVisible() , false);
        QCOMPARE(shareDialog._userGroupWidget->isVisible() , false);
        QCOMPARE(shareDialog._sharePermissionGroup->isHidden() , false);
        QCOMPARE(shareDialog._sharePermissionGroup->_share , userGroupShare);
        QCOMPARE(shareDialog._sharePermissionGroup->_type , Share::ShareType::TypeLink);
        QCOMPARE(shareDialog._sharePermissionGroup->_createShare , createShare);
        QCOMPARE(shareDialog._sharePermissionGroup->_sharee , sharee);
    }

    void testslotSendNewMail()
    {
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        FolderMan folderMan(new QObject());

        ShareDialog shareDialog;
        shareDialog._accountState = accountSt;

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        bool createShare = true;

        shareDialog._shareUserMessage = new ShareUserMessageWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                        shareDialog._localPath, shareDialog._maxSharingPermissions, sharee, &shareDialog);

        shareDialog._userGroupWidget = new ShareUserGroupWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                       shareDialog._localPath, shareDialog._maxSharingPermissions, "privateLinkUrl", &shareDialog);
        QSharedPointer<UserGroupShare> userGroupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id", "uidowner", "ownerDisplayName", "path",
                                                        Share::TypeEmail, true, SharePermissionRead, sharee, QDate(), "note"));

        shareDialog._userGroupWidget->setVisible(true);

        shareDialog.slotSendNewMail(userGroupShare, createShare);

        QCOMPARE(shareDialog.m_createShare , createShare);
        QCOMPARE(shareDialog._ui->scrollArea->isVisible() , false);
        QCOMPARE(shareDialog._userGroupWidget->isVisible() , false);
        QCOMPARE(shareDialog._shareUserMessage->isHidden() , false);
        QCOMPARE(shareDialog._shareUserMessage->_share , userGroupShare);
    }

    void testslotAdvancePermissionWidget()
    {
        FolderMan folderMan(new QObject());
        AccountPtr account = Account::create();
        AccountState *accountState = new AccountState(account);

        ShareDialog shareDialog;
        shareDialog._accountState = accountState;
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        bool createShare = true;

        shareDialog._sharePermissionGroup = new ShareUserGroupPermissionWidget(shareDialog._accountState->account(),
                                            shareDialog._sharePath, shareDialog._localPath, shareDialog._userLinePermission,
                                            shareDialog._maxSharingPermissions, Share::TypeLink, nullptr,false, &shareDialog);
        shareDialog._userGroupWidget = new ShareUserGroupWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                       shareDialog._localPath, shareDialog._maxSharingPermissions, "privateLinkUrl", &shareDialog);
        ShareLinkWidget *widget = new ShareLinkWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                  shareDialog._localPath, shareDialog._maxSharingPermissions, &shareDialog);
        shareDialog._linkWidgetList.append(widget);

        shareDialog.slotAdvancePermissionWidget(Share::TypeLink, sharee, createShare);

        QCOMPARE(shareDialog.m_createShare , createShare);
        QCOMPARE(shareDialog._ui->scrollArea->isVisible() , false);
        QCOMPARE(shareDialog._userGroupWidget->isVisible() , false);
        QCOMPARE(shareDialog._sharePermissionGroup->isHidden() , false);
        QCOMPARE(shareDialog._sharePermissionGroup->_type , Share::TypeLink);
        QCOMPARE(shareDialog._sharePermissionGroup->_createShare , createShare);
        QCOMPARE(shareDialog._sharePermissionGroup->_sharePath , shareDialog._sharePath);
        QCOMPARE(shareDialog._sharePermissionGroup->_localPath , shareDialog._localPath);
        QCOMPARE(shareDialog._sharePermissionGroup->_sharee->_shareWith , "shareWith");
        QCOMPARE(shareDialog._sharePermissionGroup->_sharee->_displayName , "displayName");
        QCOMPARE(shareDialog._sharePermissionGroup->_sharee->_type , Sharee::Type::User);
        QCOMPARE(shareDialog._userGroupWidget->_sharePath , shareDialog._sharePath);
        QCOMPARE(shareDialog._userGroupWidget->_localPath , shareDialog._localPath);
    }

    void testslotShowMessageBox()
    {
        FolderMan folderMan(new QObject());
        AccountPtr account = Account::create();
        AccountState *accountState = new AccountState(account);

        ShareDialog shareDialog;
        shareDialog._accountState = accountState;
        shareDialog._linkWidgetList.clear();
        QSharedPointer<Sharee> sharee;
        bool createShare = true;
        shareDialog._shareUserMessage = new ShareUserMessageWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                        shareDialog._localPath, shareDialog._maxSharingPermissions, sharee, &shareDialog);
        shareDialog._userGroupWidget = new ShareUserGroupWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                       shareDialog._localPath, shareDialog._maxSharingPermissions, "privateLinkUrl", &shareDialog);

        shareDialog.slotShowMessageBox(sharee, createShare);

        QCOMPARE(shareDialog.m_createShare , createShare);
        QCOMPARE(shareDialog._shareUserMessage->isHidden() , false);
        QCOMPARE(shareDialog._userGroupWidget->isVisible() , false);
        QCOMPARE(shareDialog._shareUserMessage->_sharePath , shareDialog._sharePath);
        QCOMPARE(shareDialog._shareUserMessage->_localPath , shareDialog._localPath);
        QCOMPARE(shareDialog._userGroupWidget->_sharePath , shareDialog._sharePath);
        QCOMPARE(shareDialog._userGroupWidget->_localPath , shareDialog._localPath);
    }

    void testaddLinkShareWidget()
    {
        AccountPtr account = Account::create();
        AccountState *accountState = new AccountState(account);

        ShareDialog shareDialog;
        shareDialog._accountState = accountState;

        ShareLinkWidget *widget = new ShareLinkWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                  shareDialog._localPath, shareDialog._maxSharingPermissions, &shareDialog);
        shareDialog._linkWidgetList.append(widget);
        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, true, QUrl(), QDate() ));


        shareDialog.addLinkShareWidget(linkShare);

        QCOMPARE(shareDialog._ui->verticalLayout->isEmpty() , true);
        QCOMPARE(shareDialog._scrollAreaLayout->isEmpty() , false);
        ShareLinkWidget *linkShareWidget = shareDialog._linkWidgetList.at(shareDialog._linkWidgetList.size() -1);
        QCOMPARE(linkShareWidget->_account , shareDialog._accountState->account());
        QCOMPARE(linkShareWidget->_sharePath , shareDialog._sharePath);
        QCOMPARE(linkShareWidget->_localPath , shareDialog._localPath);
    }

    void testslotAdjustScrollWidgetSize()
    {
        AccountPtr account = Account::create();
        AccountState *accountSt = new AccountState(account);
        FolderMan folderMan(new QObject());

        ShareDialog shareDialog;
        shareDialog._accountState = accountSt;

        ShareLinkWidget *widget = new ShareLinkWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                  shareDialog._localPath, shareDialog._maxSharingPermissions, &shareDialog);
        shareDialog._linkWidgetList.append(widget);
        shareDialog._userGroupWidget = new ShareUserGroupWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                       shareDialog._localPath, shareDialog._maxSharingPermissions, "privateLinkUrl", &shareDialog);

        shareDialog.slotAdjustScrollWidgetSize();

        QCOMPARE(shareDialog._ui->scrollArea->isHidden() , true);
        QCOMPARE(shareDialog._ui->scrollArea->frameShape() , QFrame::NoFrame);
        QCOMPARE(shareDialog._ui->scrollArea->width() , shareDialog._ui->verticalLayout->sizeHint().width());

        ShareLinkWidget *linkShareWidget = shareDialog._linkWidgetList.at(shareDialog._linkWidgetList.size() -1);
        QCOMPARE(linkShareWidget->_account , shareDialog._accountState->account());
        QCOMPARE(linkShareWidget->_sharePath , shareDialog._sharePath);
        QCOMPARE(linkShareWidget->_localPath , shareDialog._localPath);
    }

    void testslotUserLinePermissionChanged_ReadOnly()
    {
        QWidget *parent = new QWidget();
        AccountPtr account = Account::create();
        AccountState *accountState = new AccountState(account);

        ShareDialog shareDialog;
        shareDialog._accountState = accountState;
        shareDialog._linkWidgetList.clear();

        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, true, QUrl(), QDate() ));
        shareDialog._sharePermissionGroup = new ShareUserGroupPermissionWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                            shareDialog._localPath, shareDialog._userLinePermission, shareDialog._maxSharingPermissions,
                                            Share::TypeLink, nullptr,false, parent);

        shareDialog.slotUserLinePermissionChanged("Read only");

        QCOMPARE(shareDialog._sharePermissionGroup->_ui->readOnlyRadioButton->isChecked() , true);
    }

    void testslotUserLinePermissionChanged_CanEdit()
    {
        QWidget *parent = new QWidget();
        AccountPtr account = Account::create();
        AccountState *accountState = new AccountState(account);

        ShareDialog shareDialog;
        shareDialog._accountState = accountState;
        shareDialog._linkWidgetList.clear();

        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, true, QUrl(), QDate() ));
        shareDialog._sharePermissionGroup = new ShareUserGroupPermissionWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                            shareDialog._localPath, shareDialog._userLinePermission, shareDialog._maxSharingPermissions,
                                            Share::TypeLink, nullptr,false, parent);

        shareDialog.slotUserLinePermissionChanged("Can edit");

        QCOMPARE(shareDialog._sharePermissionGroup->_ui->editRadioButton->isChecked() , true);
    }

    void testslotUserLinePermissionChanged_FileDrop()
    {
        QWidget *parent = new QWidget();
        AccountPtr account = Account::create();
        AccountState *accountState = new AccountState(account);

        ShareDialog shareDialog;
        shareDialog._accountState = accountState;
        shareDialog._linkWidgetList.clear();

        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, true, QUrl(), QDate() ));
        shareDialog._sharePermissionGroup = new ShareUserGroupPermissionWidget(shareDialog._accountState->account(), shareDialog._sharePath,
                                            shareDialog._localPath, shareDialog._userLinePermission, shareDialog._maxSharingPermissions,
                                            Share::TypeLink, nullptr,false, parent);

        shareDialog.slotUserLinePermissionChanged("File drop only");

        QCOMPARE(shareDialog._sharePermissionGroup->_ui->fileDropRadioButton->isChecked() , true);
    }

};

QTEST_MAIN(TestShareDialog)
#include "testsharedialog.moc"
