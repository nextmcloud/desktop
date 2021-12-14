/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <QToolBar>
#include <QtTest>
#include <QMenu>

#include "gui/nextcloudCore_autogen/include_Debug/ui_shareusermessagewidget.h"
#include "gui/nextcloudCore_autogen/include_Debug/ui_shareuserline.h"
#include "shareusermessagewidget.h"
#include <QCalendarWidget>
#include "testhelper.h"
#include "folderman.h"
#include "account.h"
#include "sharee.h"
#include "networkjobs.h"
#define setNote(a,b) setNote(a)
#include "ocssharejob.h"
#include "sharemanager.cpp"
#undef setNote

static QVariant value;

using namespace OCC;
void OcsShareJob::setNote(const QString &note)
{
    QJsonDocument reply;
    emit shareJobFinished(reply, value);
};

class TestShareUserMessageWidget: public QObject
{
    Q_OBJECT

private slots:

    void test_ShareUserMessageWidget()
    {
        QWidget *parent = new QWidget();

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        ShareUserMessageWidget *shareUserMessage = new ShareUserMessageWidget(Account::create(), "sharePath", "localPath",
                                                   SharePermissionShare, sharee, parent);

        QString expStyleSheet("border: 2px solid #191919;");
        QCOMPARE(shareUserMessage->_ui->textEdit_MessageNote->styleSheet(), expStyleSheet);
    }

    void testslotShareMessage()
    {
        QWidget *parent = new QWidget();
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        ShareUserMessageWidget *shareUserMessage = new ShareUserMessageWidget(Account::create(), "sharePath", "localPath",
                                                   SharePermissionShare, sharee, parent);
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(),
                                                    "id", "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionRead, sharee, QDate(), "note"));

        QString note("Message");
        shareUserMessage->_share = groupShare;
        value.setValue(QVariant::fromValue<QString>(note));
        shareUserMessage->_ui->textEdit_MessageNote->setPlainText(note);

        shareUserMessage->slotShareMessage();

        QCOMPARE(shareUserMessage->_share->getNote(), note);
    }

    void testsetMessageBox()
    {
        bool createShare = true;
        QWidget *parent = new QWidget();

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        ShareUserMessageWidget *shareUserMessage = new ShareUserMessageWidget(Account::create(), "sharePath", "localPath",
                                                   SharePermissionShare, sharee, parent);
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(),
                                                    "id", "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionRead, sharee, QDate(), "note"));

        shareUserMessage->setMessageBox(groupShare, createShare);

        QCOMPARE(shareUserMessage->_share , groupShare);
    }

    void testslotCancelButtonClicked()
    {
        QWidget *parent = new QWidget();

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        ShareUserMessageWidget *shareUserMessage = new ShareUserMessageWidget(Account::create(), "sharePath", "localPath",
                                                   SharePermissionShare, sharee, parent);

        shareUserMessage->slotCancelButtonClicked();

        QCOMPARE(shareUserMessage->isHidden(), true);
    }
};

QTEST_MAIN(TestShareUserMessageWidget)
#include "testshareusermessagewidget.moc"
