/********************************************************************************
** Form generated from reading UI file 'addcertificatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCERTIFICATEDIALOG_H
#define UI_ADDCERTIFICATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

namespace OCC {

class Ui_AddCertificateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelErrorMessage;
    QFormLayout *formLayout;
    QLabel *labelCertificateFile;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditCertificatePath;
    QPushButton *pushButtonBrowseCertificate;
    QLabel *labelPWDCertificate;
    QLineEdit *lineEditPWDCertificate;
    QLabel *label;
    QLabel *labelErrorCertif;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OCC__AddCertificateDialog)
    {
        if (OCC__AddCertificateDialog->objectName().isEmpty())
            OCC__AddCertificateDialog->setObjectName(QString::fromUtf8("OCC__AddCertificateDialog"));
        OCC__AddCertificateDialog->setWindowModality(Qt::ApplicationModal);
        OCC__AddCertificateDialog->resize(478, 225);
        verticalLayout = new QVBoxLayout(OCC__AddCertificateDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelErrorMessage = new QLabel(OCC__AddCertificateDialog);
        labelErrorMessage->setObjectName(QString::fromUtf8("labelErrorMessage"));
        labelErrorMessage->setWordWrap(true);

        verticalLayout->addWidget(labelErrorMessage);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelCertificateFile = new QLabel(OCC__AddCertificateDialog);
        labelCertificateFile->setObjectName(QString::fromUtf8("labelCertificateFile"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelCertificateFile);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditCertificatePath = new QLineEdit(OCC__AddCertificateDialog);
        lineEditCertificatePath->setObjectName(QString::fromUtf8("lineEditCertificatePath"));

        horizontalLayout->addWidget(lineEditCertificatePath);

        pushButtonBrowseCertificate = new QPushButton(OCC__AddCertificateDialog);
        pushButtonBrowseCertificate->setObjectName(QString::fromUtf8("pushButtonBrowseCertificate"));

        horizontalLayout->addWidget(pushButtonBrowseCertificate);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        labelPWDCertificate = new QLabel(OCC__AddCertificateDialog);
        labelPWDCertificate->setObjectName(QString::fromUtf8("labelPWDCertificate"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPWDCertificate);

        lineEditPWDCertificate = new QLineEdit(OCC__AddCertificateDialog);
        lineEditPWDCertificate->setObjectName(QString::fromUtf8("lineEditPWDCertificate"));
        lineEditPWDCertificate->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPWDCertificate);


        verticalLayout->addLayout(formLayout);

        label = new QLabel(OCC__AddCertificateDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        labelErrorCertif = new QLabel(OCC__AddCertificateDialog);
        labelErrorCertif->setObjectName(QString::fromUtf8("labelErrorCertif"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(231, 23, 12, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush2(QColor(119, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        QBrush brush3(QColor(127, 127, 127, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        labelErrorCertif->setPalette(palette);
        labelErrorCertif->setWordWrap(true);

        verticalLayout->addWidget(labelErrorCertif);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(OCC__AddCertificateDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OCC__AddCertificateDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OCC__AddCertificateDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OCC__AddCertificateDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OCC__AddCertificateDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__AddCertificateDialog)
    {
        OCC__AddCertificateDialog->setWindowTitle(QCoreApplication::translate("OCC::AddCertificateDialog", "SSL client certificate authentication", nullptr));
        labelErrorMessage->setText(QCoreApplication::translate("OCC::AddCertificateDialog", "This server probably requires a SSL client certificate.", nullptr));
        labelCertificateFile->setText(QCoreApplication::translate("OCC::AddCertificateDialog", "Certificate & Key (pkcs12):", nullptr));
        lineEditCertificatePath->setText(QString());
        pushButtonBrowseCertificate->setText(QCoreApplication::translate("OCC::AddCertificateDialog", "Browse \342\200\246", nullptr));
        labelPWDCertificate->setText(QCoreApplication::translate("OCC::AddCertificateDialog", "Certificate password:", nullptr));
        lineEditPWDCertificate->setText(QString());
        label->setText(QCoreApplication::translate("OCC::AddCertificateDialog", "An encrypted pkcs12 bundle is strongly recommended as a copy will be stored in the configuration file.", nullptr));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class AddCertificateDialog: public Ui_AddCertificateDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_ADDCERTIFICATEDIALOG_H
