/********************************************************************************
** Form generated from reading UI file 'owncloudconnectionmethoddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNCLOUDCONNECTIONMETHODDIALOG_H
#define UI_OWNCLOUDCONNECTIONMETHODDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

namespace OCC {

class Ui_OwncloudConnectionMethodDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *btnBack;
    QPushButton *btnNoTLS;
    QPushButton *btnClientSideTLS;

    void setupUi(QDialog *OCC__OwncloudConnectionMethodDialog)
    {
        if (OCC__OwncloudConnectionMethodDialog->objectName().isEmpty())
            OCC__OwncloudConnectionMethodDialog->setObjectName(QString::fromUtf8("OCC__OwncloudConnectionMethodDialog"));
        OCC__OwncloudConnectionMethodDialog->resize(367, 208);
        OCC__OwncloudConnectionMethodDialog->setModal(true);
        gridLayout_2 = new QGridLayout(OCC__OwncloudConnectionMethodDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(OCC__OwncloudConnectionMethodDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnBack = new QPushButton(OCC__OwncloudConnectionMethodDialog);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));

        verticalLayout->addWidget(btnBack);

        btnNoTLS = new QPushButton(OCC__OwncloudConnectionMethodDialog);
        btnNoTLS->setObjectName(QString::fromUtf8("btnNoTLS"));

        verticalLayout->addWidget(btnNoTLS);

        btnClientSideTLS = new QPushButton(OCC__OwncloudConnectionMethodDialog);
        btnClientSideTLS->setObjectName(QString::fromUtf8("btnClientSideTLS"));

        verticalLayout->addWidget(btnClientSideTLS);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(OCC__OwncloudConnectionMethodDialog);

        QMetaObject::connectSlotsByName(OCC__OwncloudConnectionMethodDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__OwncloudConnectionMethodDialog)
    {
        OCC__OwncloudConnectionMethodDialog->setWindowTitle(QCoreApplication::translate("OCC::OwncloudConnectionMethodDialog", "Connection failed", nullptr));
        label->setText(QCoreApplication::translate("OCC::OwncloudConnectionMethodDialog", "<html><head/><body><p>Failed to connect to the secure server address specified. How do you wish to proceed?</p></body></html>", nullptr));
        btnBack->setText(QCoreApplication::translate("OCC::OwncloudConnectionMethodDialog", "Select a different URL", nullptr));
        btnNoTLS->setText(QCoreApplication::translate("OCC::OwncloudConnectionMethodDialog", "Retry unencrypted over HTTP (insecure)", nullptr));
        btnClientSideTLS->setText(QCoreApplication::translate("OCC::OwncloudConnectionMethodDialog", "Configure client-side TLS certificate", nullptr));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class OwncloudConnectionMethodDialog: public Ui_OwncloudConnectionMethodDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_OWNCLOUDCONNECTIONMETHODDIALOG_H
