/********************************************************************************
** Form generated from reading UI file 'legalnotice.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEGALNOTICE_H
#define UI_LEGALNOTICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

namespace OCC {

class Ui_LegalNotice
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *header;
    QLabel *notice;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *OCC__LegalNotice)
    {
        if (OCC__LegalNotice->objectName().isEmpty())
            OCC__LegalNotice->setObjectName(QString::fromUtf8("OCC__LegalNotice"));
        OCC__LegalNotice->resize(591, 360);
        verticalLayout = new QVBoxLayout(OCC__LegalNotice);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        header = new QLabel(OCC__LegalNotice);
        header->setObjectName(QString::fromUtf8("header"));
        QFont font;
        font.setPointSize(13);
        header->setFont(font);
        header->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(header);

        notice = new QLabel(OCC__LegalNotice);
        notice->setObjectName(QString::fromUtf8("notice"));
        notice->setText(QString::fromUtf8("TextLabel"));

        verticalLayout->addWidget(notice);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(OCC__LegalNotice);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(OCC__LegalNotice);

        QMetaObject::connectSlotsByName(OCC__LegalNotice);
    } // setupUi

    void retranslateUi(QDialog *OCC__LegalNotice)
    {
        OCC__LegalNotice->setWindowTitle(QCoreApplication::translate("OCC::LegalNotice", "Legal notice", nullptr));
        header->setText(QCoreApplication::translate("OCC::LegalNotice", "Legal notice", nullptr));
        closeButton->setText(QCoreApplication::translate("OCC::LegalNotice", "Close", nullptr));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class LegalNotice: public Ui_LegalNotice {};
} // namespace Ui
} // namespace OCC

#endif // UI_LEGALNOTICE_H
