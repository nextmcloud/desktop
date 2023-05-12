/********************************************************************************
** Form generated from reading UI file 'caseclashfilenamedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASECLASHFILENAMEDIALOG_H
#define UI_CASECLASHFILENAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

namespace OCC {

class Ui_CaseClashFilenameDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *descriptionLabel;
    QLabel *explanationLabel;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *localVersionFilename;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QToolButton *localVersionButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QLabel *localVersionMtime;
    QLabel *localVersionSize;
    QLabel *localVersionLink;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLabel *remoteVersionFilename;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QToolButton *remoteVersionButton;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *remoteVersionMtime;
    QLabel *remoteVersionSize;
    QLabel *remoteVersionLink;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *filenameLineEdit;
    QLabel *errorLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OCC__CaseClashFilenameDialog)
    {
        if (OCC__CaseClashFilenameDialog->objectName().isEmpty())
            OCC__CaseClashFilenameDialog->setObjectName(QString::fromUtf8("OCC__CaseClashFilenameDialog"));
        OCC__CaseClashFilenameDialog->resize(451, 349);
        verticalLayout = new QVBoxLayout(OCC__CaseClashFilenameDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        descriptionLabel = new QLabel(OCC__CaseClashFilenameDialog);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        descriptionLabel->setWordWrap(true);

        verticalLayout->addWidget(descriptionLabel);

        explanationLabel = new QLabel(OCC__CaseClashFilenameDialog);
        explanationLabel->setObjectName(QString::fromUtf8("explanationLabel"));
        explanationLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        explanationLabel->setWordWrap(false);

        verticalLayout->addWidget(explanationLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(OCC__CaseClashFilenameDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        localVersionFilename = new QLabel(OCC__CaseClashFilenameDialog);
        localVersionFilename->setObjectName(QString::fromUtf8("localVersionFilename"));

        verticalLayout_3->addWidget(localVersionFilename);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        localVersionButton = new QToolButton(OCC__CaseClashFilenameDialog);
        localVersionButton->setObjectName(QString::fromUtf8("localVersionButton"));
        localVersionButton->setIconSize(QSize(64, 64));

        verticalLayout_4->addWidget(localVersionButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        localVersionMtime = new QLabel(OCC__CaseClashFilenameDialog);
        localVersionMtime->setObjectName(QString::fromUtf8("localVersionMtime"));

        verticalLayout_5->addWidget(localVersionMtime);

        localVersionSize = new QLabel(OCC__CaseClashFilenameDialog);
        localVersionSize->setObjectName(QString::fromUtf8("localVersionSize"));

        verticalLayout_5->addWidget(localVersionSize);

        localVersionLink = new QLabel(OCC__CaseClashFilenameDialog);
        localVersionLink->setObjectName(QString::fromUtf8("localVersionLink"));

        verticalLayout_5->addWidget(localVersionLink);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        verticalLayout_5->setStretch(3, 1);

        horizontalLayout_3->addLayout(verticalLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_5 = new QLabel(OCC__CaseClashFilenameDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_6->addWidget(label_5);

        remoteVersionFilename = new QLabel(OCC__CaseClashFilenameDialog);
        remoteVersionFilename->setObjectName(QString::fromUtf8("remoteVersionFilename"));

        verticalLayout_6->addWidget(remoteVersionFilename);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        remoteVersionButton = new QToolButton(OCC__CaseClashFilenameDialog);
        remoteVersionButton->setObjectName(QString::fromUtf8("remoteVersionButton"));
        remoteVersionButton->setIconSize(QSize(64, 64));

        verticalLayout_7->addWidget(remoteVersionButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        remoteVersionMtime = new QLabel(OCC__CaseClashFilenameDialog);
        remoteVersionMtime->setObjectName(QString::fromUtf8("remoteVersionMtime"));

        verticalLayout_8->addWidget(remoteVersionMtime);

        remoteVersionSize = new QLabel(OCC__CaseClashFilenameDialog);
        remoteVersionSize->setObjectName(QString::fromUtf8("remoteVersionSize"));

        verticalLayout_8->addWidget(remoteVersionSize);

        remoteVersionLink = new QLabel(OCC__CaseClashFilenameDialog);
        remoteVersionLink->setObjectName(QString::fromUtf8("remoteVersionLink"));

        verticalLayout_8->addWidget(remoteVersionLink);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);

        verticalLayout_8->setStretch(3, 1);

        horizontalLayout_4->addLayout(verticalLayout_8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(OCC__CaseClashFilenameDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(false);

        verticalLayout->addWidget(label);

        filenameLineEdit = new QLineEdit(OCC__CaseClashFilenameDialog);
        filenameLineEdit->setObjectName(QString::fromUtf8("filenameLineEdit"));

        verticalLayout->addWidget(filenameLineEdit);

        errorLabel = new QLabel(OCC__CaseClashFilenameDialog);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 200));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 115));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        errorLabel->setPalette(palette);

        verticalLayout->addWidget(errorLabel);

        buttonBox = new QDialogButtonBox(OCC__CaseClashFilenameDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OCC__CaseClashFilenameDialog);

        QMetaObject::connectSlotsByName(OCC__CaseClashFilenameDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__CaseClashFilenameDialog)
    {
        OCC__CaseClashFilenameDialog->setWindowTitle(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "Case Clash Conflict", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "The file could not be synced because it generates a case clash conflict with an existing file on this system.", nullptr));
        explanationLabel->setText(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "Error", nullptr));
        label_2->setText(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "Existing file", nullptr));
        localVersionFilename->setText(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "file A", nullptr));
        localVersionButton->setText(QString());
        localVersionMtime->setText(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "today", nullptr));
        localVersionSize->setText(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "0 byte", nullptr));
        localVersionLink->setText(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "Open existing file", nullptr));
        label_5->setText(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "Case clashing file", nullptr));
        remoteVersionFilename->setText(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "file B", nullptr));
        remoteVersionButton->setText(QString());
        remoteVersionMtime->setText(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "today", nullptr));
        remoteVersionSize->setText(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "0 byte", nullptr));
        remoteVersionLink->setText(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "Open clashing file", nullptr));
        label->setText(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "Please enter a new name for the clashing file:", nullptr));
        filenameLineEdit->setPlaceholderText(QCoreApplication::translate("OCC::CaseClashFilenameDialog", "New filename", nullptr));
        errorLabel->setText(QString());
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class CaseClashFilenameDialog: public Ui_CaseClashFilenameDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_CASECLASHFILENAMEDIALOG_H
