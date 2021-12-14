/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <QToolBar>
#include <QtTest>

#include "gui/nextcloudCore_autogen/include_Debug/ui_shareusergrouppermissionwidget.h"
#include "shareusergrouppermissionwidget.h"
#include <QCalendarWidget>
#include "account.h"

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

class TestShareUserGroupPermissionWidget: public QObject
{
    Q_OBJECT

private slots:

    void test_ShareUserGroupPermissionWidget()
    {
        QWidget *parent = new QWidget();
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeLink, nullptr,false, parent);

        QCOMPARE(widget->_type, Share::TypeLink);
        QCOMPARE(widget->_userPermission, "userLinePermission");
        QCOMPARE(widget->_ui->readOnlyRadioButton->isChecked(), true);
    }

    void testslotCancelButtonClicked()
    {
        QWidget *parent = new QWidget();
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeLink, nullptr,false, parent);

        widget->slotCancelButtonClicked();

        QCOMPARE(widget->isHidden(), true);
    }

    void testsetupUI_Link()
    {
        QWidget *parent = new QWidget();
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeLink, nullptr,true, parent);

        widget->setupUI();

        QCOMPARE(widget->_ui->fileDropRadioButton->isHidden(), false);
        QCOMPARE(widget->_ui->FileDropInfo->isHidden(), true);
        QCOMPARE(widget->_userPermission, "userLinePermission");
        QCOMPARE(widget->_ui->editRadioButton->isEnabled(), true);
    }

    void testsetupUI_Email_isFile()
    {
        QWidget *parent = new QWidget();
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,true, parent);

        widget->_isFile = true;

        widget->setupUI();

        QCOMPARE(widget->_ui->fileDropRadioButton->isVisible(), false);
        QCOMPARE(widget->_ui->FileDropInfo->isHidden(), true);
        QCOMPARE(widget->_ui->editRadioButton->isEnabled(), false);
        QCOMPARE(widget->_ui->allowForwardingCheckbox->isVisible(), false);
    }

    void testsetupUI_Email_NotFile()
    {
        QWidget *parent = new QWidget();
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,true, parent);
        widget->_isFile = false;

        widget->setupUI();

        QCOMPARE(widget->_ui->FileDropInfo->isHidden(), true);
        QCOMPARE(widget->_ui->fileDropRadioButton->isHidden(), false);
        QCOMPARE(widget->_ui->allowForwardingCheckbox->isVisible(), false);
    }

    void testsetupUI_expirationDate()
    {
        QWidget *parent = new QWidget();
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,false, parent);
        widget->_isFile = true;

        widget->setupUI();

        QCOMPARE(widget->_ui->fileDropRadioButton->isVisible(), false);
        QCOMPARE(widget->_ui->FileDropInfo->isHidden(), true);
        QCOMPARE(widget->_ui->editRadioButton->isEnabled(), false);
        QCOMPARE(widget->_ui->expirationDateCheckbox->isChecked(), true);

        QMap<QDate, QTextCharFormat> dateTextFormat = widget->_ui->dateEdit->calendarWidget()->dateTextFormat();
        QDate expDate = QDate::currentDate().addDays(1);
        QTextCharFormat expFormat;
        expFormat.setFontWeight(QFont::Bold);
        QCOMPARE(widget->_ui->dateEdit->date(), expDate);
        QCOMPARE(widget->_ui->dateEdit->minimumDate(), expDate);
        QCOMPARE(dateTextFormat.firstKey(), expDate);
        QCOMPARE(dateTextFormat.first(), expFormat);

        QTextCharFormat expFmtDay;
        expFmtDay.setForeground(QBrush(qRgb(25, 25, 25)));
        QCOMPARE(widget->_ui->dateEdit->calendarWidget()->weekdayTextFormat(Qt::Saturday), expFmtDay);
        QCOMPARE(widget->_ui->dateEdit->calendarWidget()->weekdayTextFormat(Qt::Sunday), expFmtDay);
        QCOMPARE(widget->_ui->nextButton->text(), "Confirm");
    }

    void testsetupUI_Confirm()
    {
        QWidget *parent = new QWidget();
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeLink, nullptr,false, parent);
        widget->_isFile = true;

        widget->setupUI();

        QCOMPARE(widget->_ui->fileDropRadioButton->isHidden(), false);
        QCOMPARE(widget->_ui->FileDropInfo->isHidden(), true);
        QCOMPARE(widget->_ui->editRadioButton->isEnabled(), true);
        QCOMPARE(widget->_ui->nextButton->text(), "Confirm");
    }

    void testsetupUI_Next()
    {
        QWidget *parent = new QWidget();
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,true, parent);
        widget->_isFile = true;

        widget->setupUI();

        QCOMPARE(widget->_ui->fileDropRadioButton->isVisible(), false);
        QCOMPARE(widget->_ui->FileDropInfo->isHidden(), true);
        QCOMPARE(widget->_ui->editRadioButton->isEnabled(), false);
        QCOMPARE(widget->_ui->nextButton->text(), "Next");
    }

    void testslotPermissionChanged_ReadOnly()
    {
        QWidget *parent = new QWidget();
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeLink, nullptr,false, parent);

        widget->_ui->editRadioButton->setChecked(false);
        widget->_ui->readOnlyRadioButton->setChecked(true);
        widget->_ui->fileDropRadioButton->setChecked(false);

        Share::Permissions expPermissions = SharePermissionRead;

        widget->slotPermissionChanged();

        QCOMPARE(widget->_permissions, expPermissions);
        QCOMPARE(widget->_ui->FileDropInfo->isHidden(), true);
    }

    void testslotPermissionChanged_Edit()
    {
        QWidget *parent = new QWidget();
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeLink, nullptr,false, parent);

        widget->_ui->editRadioButton->setChecked(true);
        Share::Permissions expPermissions = SharePermissionRead;
        expPermissions |= SharePermissionUpdate;

        widget->slotPermissionChanged();

        QCOMPARE(widget->_permissions, expPermissions);
        QCOMPARE(widget->_ui->FileDropInfo->isHidden(), true);
    }

    void testslotPermissionChanged_FileDrop()
    {
        QWidget *parent = new QWidget();
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeLink, nullptr,false, parent);

        widget->_ui->fileDropRadioButton->setChecked(true);
        Share::Permissions expPermissions = SharePermissionCreate;

        widget->slotPermissionChanged();

        QCOMPARE(widget->_permissions, expPermissions);
        QCOMPARE(widget->_ui->FileDropInfo->isHidden(), false);
    }

    void testsetupUI_slotExpireDateCheckboxChecked_Checked()
    {
        QWidget *parent = new QWidget();
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,true, parent);

        widget->slotExpireDateCheckboxChecked(true);

        QDate expDate = QDate::currentDate().addDays(1);
        QCOMPARE(widget->_ui->dateEdit->date(), expDate);
        QCOMPARE(widget->_ui->dateEdit->minimumDate(), expDate);

    }

    void testsetupUI_slotExpireDateCheckboxChecked_UnChecked()
    {
        QWidget *parent = new QWidget();
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,true, parent);

        widget->slotExpireDateCheckboxChecked(false);

        QCOMPARE(widget->_ui->dateEdit->isVisible(), false);
    }

    void testsetupUI_ShareUserGroupPermissionWidget()
    {
        QWidget *parent = new QWidget();
        bool expCreateShare = true;
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,true, parent);

        QCOMPARE(widget->_createShare, expCreateShare);
        QCOMPARE(widget->_permissions, SharePermissionRead);
    }

    void testsetupUI_slotShowMessageBox()
    {
        QWidget *parent = new QWidget();
        bool createShare = false;
        QString expPer("userLinePermission");
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeLink, nullptr,createShare, parent);
        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, true, QUrl(), QDate() ));
        value.setValue((int)SharePermissionRead);
        widget->_linkShare = linkShare;

        widget->slotShowMessageBox();

        QCOMPARE(widget->_createShare, createShare);
        QCOMPARE(widget->_linkShare->getPermissions(), SharePermissionRead);
    }

    void testsetupUI_setPermission_ReadOnly()
    {
        QWidget *parent = new QWidget();
        bool expCreateShare = true;
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,true, parent);

        widget->setPermission("Read only");

        QCOMPARE(widget->_createShare, expCreateShare);
        QCOMPARE(widget->_ui->readOnlyRadioButton->isChecked(), true);
    }

    void testsetupUI_setPermission_CanEdit()
    {
        QWidget *parent = new QWidget();
        bool expCreateShare = true;
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,true, parent);

        widget->setPermission("Can edit");

        QCOMPARE(widget->_createShare, expCreateShare);
        QCOMPARE(widget->_ui->editRadioButton->isChecked(), true);
    }

    void testsetupUI_setPermission_FileDropOnly()
    {
        QWidget *parent = new QWidget();
        bool expCreateShare = true;
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,true, parent);

        widget->setPermission("File drop only");

        QCOMPARE(widget->_createShare, expCreateShare);
        QCOMPARE(widget->_ui->fileDropRadioButton->isChecked(), true);
    }

    void testsetupUI_setPermission_Other()
    {
        QWidget *parent = new QWidget();
        bool expCreateShare = true;
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,true, parent);

        widget->setPermission("Other");

        QCOMPARE(widget->_createShare, expCreateShare);
        QCOMPARE(widget->_ui->readOnlyRadioButton->isChecked(), true);
    }

    void testsetLinkAdvancePermission()
    {
        QWidget *parent = new QWidget();
        QSharedPointer<Sharee> sharee;
        bool createShare = true;
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,createShare, parent);

        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, createShare, QUrl(), QDate() ));

        widget->setLinkAdvancePermission(linkShare, Share::ShareType::TypeLink, sharee, createShare);

        QCOMPARE(widget->_linkShare , linkShare);
        QCOMPARE(widget->_createShare , createShare);
        QCOMPARE(widget->_type , Share::ShareType::TypeLink);
    }

    void testsetUserAdvancePermission()
    {
        QWidget *parent = new QWidget();
        bool createShare = true;
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,createShare, parent);
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> userGroupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id", "uidowner", "ownerDisplayName", "path",
                                                        Share::TypeEmail, true, SharePermissionRead, sharee, QDate(), "note"));

        widget->setUserAdvancePermission(userGroupShare, Share::ShareType::TypeLink, sharee, createShare);

        QCOMPARE(widget->_type , Share::ShareType::TypeLink);
        QCOMPARE(widget->_createShare , createShare);
        QCOMPARE(widget->_share , userGroupShare);
        QCOMPARE(widget->_sharee , sharee);
    }

    void testsetUserCreatePermission()
    {
        QWidget *parent = new QWidget();
        bool createShare = true;
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,createShare, parent);
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));

        widget->setUserCreatePermission(Share::ShareType::TypeLink, sharee, createShare);

        QCOMPARE(widget->_type , Share::ShareType::TypeLink);
        QCOMPARE(widget->_createShare , createShare);
        QCOMPARE(widget->_sharee , sharee);
    }

    void testsetSharePermission_TypeLink()
    {
        QWidget *parent = new QWidget();
        bool createShare = true;
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeLink, nullptr,createShare, parent);
        QSharedPointer<LinkShare> linkShare = QSharedPointer<LinkShare> (new LinkShare(Account::create(), "id",
                                              "uidowner", "ownerDisplayName", "path", "name", "token",
                                              SharePermissionRead, true, QUrl(), QDate() ));
        value.setValue((int)SharePermissionRead);
        widget->_linkShare = linkShare;

        widget->setSharePermission();

        QCOMPARE(widget->_type , Share::ShareType::TypeLink);
        QCOMPARE(widget->_linkShare->getPermissions(), SharePermissionRead);

    }

    void testsetSharePermission_TypeEmail()
    {
        QWidget *parent = new QWidget();
        bool createShare = true;
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,createShare, parent);
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> userGroupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id", "uidowner", "ownerDisplayName", "path",
                                                        Share::TypeEmail, true, SharePermissionRead, sharee, QDate(), "note"));

        value.setValue((int)SharePermissionRead);
        widget->_share = userGroupShare;

        widget->setSharePermission();

        QCOMPARE(widget->_type , Share::ShareType::TypeEmail);
        QCOMPARE(widget->_share->getPermissions(), SharePermissionRead);
    }

    void testsetSharePermission_TypeEmail_allowForwarding()
    {
        QWidget *parent = new QWidget();
        bool createShare = true;
        ShareUserGroupPermissionWidget *widget = new ShareUserGroupPermissionWidget(Account::create(), "sharePath",
                                                 "localPath", "userLinePermission", SharePermissionShare,
                                                 Share::TypeEmail, nullptr,createShare, parent);
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        QSharedPointer<UserGroupShare> userGroupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(), "id", "uidowner", "ownerDisplayName", "path",
                                                        Share::TypeEmail, true, SharePermissionRead, sharee, QDate(), "note"));

        value.setValue((int)SharePermissionShare);
        widget->_share = userGroupShare;
        widget->_ui->allowForwardingCheckbox->setChecked(true);

        widget->setSharePermission();

        QCOMPARE(widget->_type , Share::ShareType::TypeEmail);
        QCOMPARE(widget->_share->getPermissions(), SharePermissionShare);
    }

};

QTEST_MAIN(TestShareUserGroupPermissionWidget)
#include "testshareusergrouppermissionwidget.moc"
