/********************************************************************************
** Form generated from reading UI file 'conflictdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFLICTDIALOG_H
#define UI_CONFLICTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

namespace OCC {

class Ui_ConflictDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QLabel *conflictMessage;
    QVBoxLayout *verticalLayout_8;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *localVersionRadio;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QToolButton *localVersionButton;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *localVersionMtime;
    QLabel *localVersionSize;
    QLabel *localVersionLink;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *remoteVersionRadio;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QToolButton *remoteVersionButton;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout;
    QLabel *remoteVersionMtime;
    QLabel *remoteVersionSize;
    QLabel *remoteVersionLink;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OCC__ConflictDialog)
    {
        if (OCC__ConflictDialog->objectName().isEmpty())
            OCC__ConflictDialog->setObjectName(QString::fromUtf8("OCC__ConflictDialog"));
        OCC__ConflictDialog->resize(504, 407);
        verticalLayout_7 = new QVBoxLayout(OCC__ConflictDialog);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        conflictMessage = new QLabel(OCC__ConflictDialog);
        conflictMessage->setObjectName(QString::fromUtf8("conflictMessage"));

        verticalLayout_7->addWidget(conflictMessage);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(16);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label = new QLabel(OCC__ConflictDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_8->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(16);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        localVersionRadio = new QCheckBox(OCC__ConflictDialog);
        localVersionRadio->setObjectName(QString::fromUtf8("localVersionRadio"));

        verticalLayout_5->addWidget(localVersionRadio);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        localVersionButton = new QToolButton(OCC__ConflictDialog);
        localVersionButton->setObjectName(QString::fromUtf8("localVersionButton"));
        localVersionButton->setIconSize(QSize(64, 64));
        localVersionButton->setAutoRaise(true);

        verticalLayout_4->addWidget(localVersionButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        localVersionMtime = new QLabel(OCC__ConflictDialog);
        localVersionMtime->setObjectName(QString::fromUtf8("localVersionMtime"));

        verticalLayout_2->addWidget(localVersionMtime);

        localVersionSize = new QLabel(OCC__ConflictDialog);
        localVersionSize->setObjectName(QString::fromUtf8("localVersionSize"));

        verticalLayout_2->addWidget(localVersionSize);

        localVersionLink = new QLabel(OCC__ConflictDialog);
        localVersionLink->setObjectName(QString::fromUtf8("localVersionLink"));
        localVersionLink->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(localVersionLink);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_2->setStretch(3, 1);

        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        remoteVersionRadio = new QCheckBox(OCC__ConflictDialog);
        remoteVersionRadio->setObjectName(QString::fromUtf8("remoteVersionRadio"));

        verticalLayout_6->addWidget(remoteVersionRadio);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        remoteVersionButton = new QToolButton(OCC__ConflictDialog);
        remoteVersionButton->setObjectName(QString::fromUtf8("remoteVersionButton"));
        remoteVersionButton->setIconSize(QSize(64, 64));
        remoteVersionButton->setAutoRaise(true);

        verticalLayout_3->addWidget(remoteVersionButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        remoteVersionMtime = new QLabel(OCC__ConflictDialog);
        remoteVersionMtime->setObjectName(QString::fromUtf8("remoteVersionMtime"));

        verticalLayout->addWidget(remoteVersionMtime);

        remoteVersionSize = new QLabel(OCC__ConflictDialog);
        remoteVersionSize->setObjectName(QString::fromUtf8("remoteVersionSize"));

        verticalLayout->addWidget(remoteVersionSize);

        remoteVersionLink = new QLabel(OCC__ConflictDialog);
        remoteVersionLink->setObjectName(QString::fromUtf8("remoteVersionLink"));
        remoteVersionLink->setOpenExternalLinks(true);

        verticalLayout->addWidget(remoteVersionLink);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(3, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(horizontalLayout_3);


        verticalLayout_7->addLayout(verticalLayout_8);

        buttonBox = new QDialogButtonBox(OCC__ConflictDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_7->addWidget(buttonBox);


        retranslateUi(OCC__ConflictDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OCC__ConflictDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OCC__ConflictDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OCC__ConflictDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__ConflictDialog)
    {
        OCC__ConflictDialog->setWindowTitle(QCoreApplication::translate("OCC::ConflictDialog", "Sync Conflict", nullptr));
        conflictMessage->setText(QCoreApplication::translate("OCC::ConflictDialog", "Conflicting versions of %1.", nullptr));
        label->setText(QCoreApplication::translate("OCC::ConflictDialog", "Which version of the file do you want to keep?<br/>If you select both versions, the local file will have a number added to its name.", nullptr));
        localVersionRadio->setText(QCoreApplication::translate("OCC::ConflictDialog", "Local version", nullptr));
#if QT_CONFIG(tooltip)
        localVersionButton->setToolTip(QCoreApplication::translate("OCC::ConflictDialog", "Click to open the file", nullptr));
#endif // QT_CONFIG(tooltip)
        localVersionButton->setText(QString());
        localVersionMtime->setText(QCoreApplication::translate("OCC::ConflictDialog", "today", nullptr));
        localVersionSize->setText(QCoreApplication::translate("OCC::ConflictDialog", "0 byte", nullptr));
        localVersionLink->setText(QCoreApplication::translate("OCC::ConflictDialog", "<a href=\"%1\">Open local version</a>", nullptr));
        remoteVersionRadio->setText(QCoreApplication::translate("OCC::ConflictDialog", "Server version", nullptr));
#if QT_CONFIG(tooltip)
        remoteVersionButton->setToolTip(QCoreApplication::translate("OCC::ConflictDialog", "Click to open the file", nullptr));
#endif // QT_CONFIG(tooltip)
        remoteVersionButton->setText(QString());
        remoteVersionMtime->setText(QCoreApplication::translate("OCC::ConflictDialog", "today", nullptr));
        remoteVersionSize->setText(QCoreApplication::translate("OCC::ConflictDialog", "0 byte", nullptr));
        remoteVersionLink->setText(QCoreApplication::translate("OCC::ConflictDialog", "<a href=\"%1\">Open server version</a>", nullptr));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class ConflictDialog: public Ui_ConflictDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_CONFLICTDIALOG_H
