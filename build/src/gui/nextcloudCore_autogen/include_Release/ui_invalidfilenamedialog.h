/********************************************************************************
** Form generated from reading UI file 'invalidfilenamedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVALIDFILENAMEDIALOG_H
#define UI_INVALIDFILENAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

namespace OCC {

class Ui_InvalidFilenameDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *descriptionLabel;
    QLabel *explanationLabel;
    QLabel *label;
    QLineEdit *filenameLineEdit;
    QLabel *errorLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OCC__InvalidFilenameDialog)
    {
        if (OCC__InvalidFilenameDialog->objectName().isEmpty())
            OCC__InvalidFilenameDialog->setObjectName(QString::fromUtf8("OCC__InvalidFilenameDialog"));
        OCC__InvalidFilenameDialog->resize(607, 192);
        verticalLayout = new QVBoxLayout(OCC__InvalidFilenameDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        descriptionLabel = new QLabel(OCC__InvalidFilenameDialog);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setTextFormat(Qt::PlainText);
        descriptionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        descriptionLabel->setWordWrap(false);

        verticalLayout->addWidget(descriptionLabel);

        explanationLabel = new QLabel(OCC__InvalidFilenameDialog);
        explanationLabel->setObjectName(QString::fromUtf8("explanationLabel"));
        explanationLabel->setTextFormat(Qt::PlainText);
        explanationLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        explanationLabel->setWordWrap(false);

        verticalLayout->addWidget(explanationLabel);

        label = new QLabel(OCC__InvalidFilenameDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(false);

        verticalLayout->addWidget(label);

        filenameLineEdit = new QLineEdit(OCC__InvalidFilenameDialog);
        filenameLineEdit->setObjectName(QString::fromUtf8("filenameLineEdit"));

        verticalLayout->addWidget(filenameLineEdit);

        errorLabel = new QLabel(OCC__InvalidFilenameDialog);
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
        errorLabel->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(errorLabel);

        buttonBox = new QDialogButtonBox(OCC__InvalidFilenameDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OCC__InvalidFilenameDialog);

        QMetaObject::connectSlotsByName(OCC__InvalidFilenameDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__InvalidFilenameDialog)
    {
        OCC__InvalidFilenameDialog->setWindowTitle(QCoreApplication::translate("OCC::InvalidFilenameDialog", "Invalid filename", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("OCC::InvalidFilenameDialog", "The file could not be synced because it contains characters which are not allowed on this system.", nullptr));
        explanationLabel->setText(QCoreApplication::translate("OCC::InvalidFilenameDialog", "Error", nullptr));
        label->setText(QCoreApplication::translate("OCC::InvalidFilenameDialog", "Please enter a new name for the file:", nullptr));
        filenameLineEdit->setPlaceholderText(QCoreApplication::translate("OCC::InvalidFilenameDialog", "New filename", nullptr));
        errorLabel->setText(QString());
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class InvalidFilenameDialog: public Ui_InvalidFilenameDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_INVALIDFILENAMEDIALOG_H
