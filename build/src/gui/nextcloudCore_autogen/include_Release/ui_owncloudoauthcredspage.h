/********************************************************************************
** Form generated from reading UI file 'owncloudoauthcredspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNCLOUDOAUTHCREDSPAGE_H
#define UI_OWNCLOUDOAUTHCREDSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OwncloudOAuthCredsPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *topLabel;
    QLabel *label;
    QLabel *errorLabel;
    QCommandLinkButton *openLinkButton;
    QCommandLinkButton *copyLinkButton;
    QSpacerItem *verticalSpacer;
    QLabel *bottomLabel;

    void setupUi(QWidget *OwncloudOAuthCredsPage)
    {
        if (OwncloudOAuthCredsPage->objectName().isEmpty())
            OwncloudOAuthCredsPage->setObjectName(QString::fromUtf8("OwncloudOAuthCredsPage"));
        OwncloudOAuthCredsPage->resize(424, 373);
        OwncloudOAuthCredsPage->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(OwncloudOAuthCredsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topLabel = new QLabel(OwncloudOAuthCredsPage);
        topLabel->setObjectName(QString::fromUtf8("topLabel"));
        topLabel->setText(QString::fromUtf8("TextLabel"));
        topLabel->setTextFormat(Qt::RichText);
        topLabel->setAlignment(Qt::AlignCenter);
        topLabel->setWordWrap(true);

        verticalLayout->addWidget(topLabel);

        label = new QLabel(OwncloudOAuthCredsPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        errorLabel = new QLabel(OwncloudOAuthCredsPage);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(errorLabel);

        openLinkButton = new QCommandLinkButton(OwncloudOAuthCredsPage);
        openLinkButton->setObjectName(QString::fromUtf8("openLinkButton"));

        verticalLayout->addWidget(openLinkButton);

        copyLinkButton = new QCommandLinkButton(OwncloudOAuthCredsPage);
        copyLinkButton->setObjectName(QString::fromUtf8("copyLinkButton"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        copyLinkButton->setFont(font);

        verticalLayout->addWidget(copyLinkButton);

        verticalSpacer = new QSpacerItem(20, 127, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        bottomLabel = new QLabel(OwncloudOAuthCredsPage);
        bottomLabel->setObjectName(QString::fromUtf8("bottomLabel"));
        bottomLabel->setText(QString::fromUtf8("TextLabel"));
        bottomLabel->setTextFormat(Qt::RichText);

        verticalLayout->addWidget(bottomLabel);


        retranslateUi(OwncloudOAuthCredsPage);

        QMetaObject::connectSlotsByName(OwncloudOAuthCredsPage);
    } // setupUi

    void retranslateUi(QWidget *OwncloudOAuthCredsPage)
    {
        label->setText(QCoreApplication::translate("OwncloudOAuthCredsPage", "Please switch to your browser to proceed.", nullptr));
        errorLabel->setText(QCoreApplication::translate("OwncloudOAuthCredsPage", "An error occurred while connecting. Please try again.", nullptr));
        openLinkButton->setText(QCoreApplication::translate("OwncloudOAuthCredsPage", "Re-open Browser", nullptr));
        copyLinkButton->setText(QCoreApplication::translate("OwncloudOAuthCredsPage", "Copy link", nullptr));
        (void)OwncloudOAuthCredsPage;
    } // retranslateUi

};

namespace Ui {
    class OwncloudOAuthCredsPage: public Ui_OwncloudOAuthCredsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNCLOUDOAUTHCREDSPAGE_H
