/********************************************************************************
** Form generated from reading UI file 'welcomepage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEPAGE_H
#define UI_WELCOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "wizard/linklabel.h"
#include "wizard/slideshow.h"

namespace OCC {

class Ui_WelcomePage
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *slideShowPreviousButton;
    OCC::SlideShow *slideShow;
    QPushButton *slideShowNextButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *loginButton;
    QPushButton *createAccountButton;
    OCC::LinkLabel *hostYourOwnServerLabel;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *OCC__WelcomePage)
    {
        if (OCC__WelcomePage->objectName().isEmpty())
            OCC__WelcomePage->setObjectName(QString::fromUtf8("OCC__WelcomePage"));
        OCC__WelcomePage->resize(500, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OCC__WelcomePage->sizePolicy().hasHeightForWidth());
        OCC__WelcomePage->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(OCC__WelcomePage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        slideShowPreviousButton = new QPushButton(OCC__WelcomePage);
        slideShowPreviousButton->setObjectName(QString::fromUtf8("slideShowPreviousButton"));
        slideShowPreviousButton->setMaximumSize(QSize(40, 16777215));
        slideShowPreviousButton->setAutoDefault(false);
        slideShowPreviousButton->setFlat(true);

        horizontalLayout_2->addWidget(slideShowPreviousButton);

        slideShow = new OCC::SlideShow(OCC__WelcomePage);
        slideShow->setObjectName(QString::fromUtf8("slideShow"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        slideShow->setFont(font);

        horizontalLayout_2->addWidget(slideShow);

        slideShowNextButton = new QPushButton(OCC__WelcomePage);
        slideShowNextButton->setObjectName(QString::fromUtf8("slideShowNextButton"));
        slideShowNextButton->setMaximumSize(QSize(40, 16777215));
        slideShowNextButton->setAutoDefault(false);
        slideShowNextButton->setFlat(true);

        horizontalLayout_2->addWidget(slideShowNextButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        loginButton = new QPushButton(OCC__WelcomePage);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setAutoDefault(true);

        verticalLayout->addWidget(loginButton);

        createAccountButton = new QPushButton(OCC__WelcomePage);
        createAccountButton->setObjectName(QString::fromUtf8("createAccountButton"));
        createAccountButton->setAutoDefault(true);

        verticalLayout->addWidget(createAccountButton);

        hostYourOwnServerLabel = new OCC::LinkLabel(OCC__WelcomePage);
        hostYourOwnServerLabel->setObjectName(QString::fromUtf8("hostYourOwnServerLabel"));

        verticalLayout->addWidget(hostYourOwnServerLabel);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        retranslateUi(OCC__WelcomePage);

        slideShowPreviousButton->setDefault(false);
        slideShowNextButton->setDefault(false);
        loginButton->setDefault(true);
        createAccountButton->setDefault(false);


        QMetaObject::connectSlotsByName(OCC__WelcomePage);
    } // setupUi

    void retranslateUi(QWidget *OCC__WelcomePage)
    {
        OCC__WelcomePage->setWindowTitle(QCoreApplication::translate("OCC::WelcomePage", "Form", nullptr));
        slideShowPreviousButton->setText(QString());
        slideShowNextButton->setText(QString());
        loginButton->setText(QCoreApplication::translate("OCC::WelcomePage", "Log in", nullptr));
        createAccountButton->setText(QCoreApplication::translate("OCC::WelcomePage", "Sign up with provider", nullptr));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class WelcomePage: public Ui_WelcomePage {};
} // namespace Ui
} // namespace OCC

#endif // UI_WELCOMEPAGE_H
