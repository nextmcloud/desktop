/********************************************************************************
** Form generated from reading UI file 'sslerrordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SSLERRORDIALOG_H
#define UI_SSLERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_SslErrorDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *_cbTrustConnect;
    QDialogButtonBox *_dialogButtonBox;
    QTextBrowser *_tbErrors;

    void setupUi(QWidget *OCC__SslErrorDialog)
    {
        if (OCC__SslErrorDialog->objectName().isEmpty())
            OCC__SslErrorDialog->setObjectName(QString::fromUtf8("OCC__SslErrorDialog"));
        OCC__SslErrorDialog->resize(640, 560);
        OCC__SslErrorDialog->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(OCC__SslErrorDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        _cbTrustConnect = new QCheckBox(OCC__SslErrorDialog);
        _cbTrustConnect->setObjectName(QString::fromUtf8("_cbTrustConnect"));
        QFont font;
        font.setPointSize(11);
        _cbTrustConnect->setFont(font);

        gridLayout->addWidget(_cbTrustConnect, 1, 0, 1, 1);

        _dialogButtonBox = new QDialogButtonBox(OCC__SslErrorDialog);
        _dialogButtonBox->setObjectName(QString::fromUtf8("_dialogButtonBox"));
        _dialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(_dialogButtonBox, 2, 0, 1, 1);

        _tbErrors = new QTextBrowser(OCC__SslErrorDialog);
        _tbErrors->setObjectName(QString::fromUtf8("_tbErrors"));
        _tbErrors->setOpenExternalLinks(true);

        gridLayout->addWidget(_tbErrors, 0, 0, 1, 1);


        retranslateUi(OCC__SslErrorDialog);

        QMetaObject::connectSlotsByName(OCC__SslErrorDialog);
    } // setupUi

    void retranslateUi(QWidget *OCC__SslErrorDialog)
    {
        _cbTrustConnect->setText(QCoreApplication::translate("OCC::SslErrorDialog", "Trust this certificate anyway", nullptr));
        (void)OCC__SslErrorDialog;
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class SslErrorDialog: public Ui_SslErrorDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_SSLERRORDIALOG_H
