/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */
#include <QToolBar>
#include <QtTest>
#include <QMenu>

#include "gui/nextcloudCore_autogen/include_Release/ui_shareusermessagewidget.h"
#include "gui/nextcloudCore_autogen/include_Release/ui_shareuserline.h"
#include "shareusermessagewidget.h"
#include <QCalendarWidget>
#include "sharedialog.h"
#include "testhelper.h"
#include "folderman.h"
#include "account.h"
#include "sharee.h"
#include "networkjobs.h"
#define setNote(a,b) setNote(a)
#include "ocssharejob.h"
#include "gui/sharemanager.cpp"
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
        QCOMPARE(shareUserMessage->_ui->textEdit_MessageNote->toPlainText(), QString());

        delete shareUserMessage;
        delete parent;
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

        QCOMPARE(parent->isHidden(), true);
        QCOMPARE(shareUserMessage->_share->getNote(), note);
        QCOMPARE(shareUserMessage->_ui->textEdit_MessageNote->toPlainText(), QString());

        delete shareUserMessage;
        delete parent;
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

        delete shareUserMessage;
        delete parent;
    }

    void testslotCancelButtonClicked()
    {
        QWidget *parent = new QWidget();

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        ShareUserMessageWidget *shareUserMessage = new ShareUserMessageWidget(Account::create(), "sharePath", "localPath",
                                                   SharePermissionShare, sharee, parent);

        shareUserMessage->slotCancelButtonClicked();

        QCOMPARE(shareUserMessage->isHidden(), true);
        QCOMPARE(shareUserMessage->_ui->textEdit_MessageNote->toPlainText(), QString());

        delete shareUserMessage;
        delete parent;
    }

    void testtoggleNoteOptions_False()
    {
        QWidget *parent = new QWidget();

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        ShareUserMessageWidget *shareUserMessage = new ShareUserMessageWidget(Account::create(), "sharePath", "localPath",
                                                   SharePermissionShare, sharee, parent);

        shareUserMessage->toggleNoteOptions(false);

        QCOMPARE(shareUserMessage->_ui->textEdit_MessageNote->toPlainText(), QString());

        delete shareUserMessage;
        delete parent;
    }

    /* UI based test cases */
    void test_screen()
    {
        QWidget *parent = new QWidget();
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        ShareUserMessageWidget *shareUserMessage = new ShareUserMessageWidget(Account::create(), "sharePath", "localPath",
                                                   SharePermissionShare, sharee, parent);
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(),
                                                    "id", "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionRead, sharee, QDate(), "note"));

        shareUserMessage->_share = groupShare;

        /* verify UI screen labels */
        QCOMPARE(shareUserMessage->_ui->NoteLabel_2->text(), "Your Message");
        QCOMPARE(shareUserMessage->_ui->NoteLabel_3->text(), "You can attach a message to the share");

        delete shareUserMessage;
        delete parent;
    }

    /* UI based (event driven) test cases */
    void test_cancelButton()
    {
        QWidget *parent = new QWidget();

        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        ShareUserMessageWidget *shareUserMessage = new ShareUserMessageWidget(Account::create(), "sharePath", "localPath",
                                                   SharePermissionShare, sharee, parent);

        /*to track the SIGNAL emit or not */
        QSignalSpy cancelButtonSpy(shareUserMessage->_ui->cancelButton, SIGNAL(clicked(bool)));

        /* generate event/emit signal */
        QTest::mouseClick( shareUserMessage->_ui->cancelButton, Qt::LeftButton );

        /* verify SIGNAL emit */
        QCOMPARE(cancelButtonSpy.count(), 1);

        /* verify SLOT data */
        QCOMPARE(shareUserMessage->isHidden(), true);
        QCOMPARE(shareUserMessage->_ui->textEdit_MessageNote->toPlainText(), QString());

        delete shareUserMessage;
        delete parent;
    }

    void test_sendButton()
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

        /*to track the SIGNAL emit or not */
        QSignalSpy sendButtonSpy(shareUserMessage->_ui->sendButton, SIGNAL(clicked(bool)));

        /* generate event/emit signal */
        QTest::mouseClick( shareUserMessage->_ui->sendButton, Qt::LeftButton );

        /* verify SIGNAL emit */
        QCOMPARE(sendButtonSpy.count(), 1);

        /* verify SLOT data */
        QCOMPARE(parent->isHidden(), true);
        QCOMPARE(shareUserMessage->_share->getNote(), note);
        QCOMPARE(shareUserMessage->_ui->textEdit_MessageNote->toPlainText(), QString());

        delete shareUserMessage;
        delete parent;
    }

    void test_sendButton_shareNULL()
    {
        QWidget *parent = new QWidget();
        QSharedPointer<Sharee> sharee = QSharedPointer<Sharee>(new Sharee("shareWith", "displayName", Sharee::Type::User));
        ShareUserMessageWidget *shareUserMessage = new ShareUserMessageWidget(Account::create(), "sharePath", "localPath",
                                                   SharePermissionShare, sharee, parent);
        QSharedPointer<UserGroupShare> groupShare = QSharedPointer<UserGroupShare> (new UserGroupShare(Account::create(),
                                                    "id", "uidowner", "ownerDisplayName", "path", Share::TypeEmail,
                                                    true, SharePermissionRead, sharee, QDate(), "note"));

        /*to track the SIGNAL emit or not */
        QSignalSpy sendButtonSpy(shareUserMessage->_ui->sendButton, SIGNAL(clicked(bool)));
        QSignalSpy shareButtonCLickedSpy(shareUserMessage, SIGNAL(shareButtonCLicked(const QSharedPointer<Sharee>, const QString)));

        /* generate event/emit signal */
        QTest::mouseClick( shareUserMessage->_ui->sendButton, Qt::LeftButton );

        /* verify SIGNAL emit */
        QCOMPARE(sendButtonSpy.count(), 1);
        QCOMPARE(shareButtonCLickedSpy.count(), 1);

        /* verify SLOT data */
        QCOMPARE(shareUserMessage->_ui->textEdit_MessageNote->toPlainText(), QString());
        QCOMPARE(parent->isHidden(), true);

        delete shareUserMessage;
        delete parent;
    }
};

QTEST_MAIN(TestShareUserMessageWidget)
#include "testshareusermessagewidget.moc"
