/********************************************************************************
** Form generated from reading UI file 'folderwizardsourcepage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLDERWIZARDSOURCEPAGE_H
#define UI_FOLDERWIZARDSOURCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FolderWizardSourcePage
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *localFolderLineEdit;
    QPushButton *localFolderChooseBtn;
    QLabel *warnLabel;

    void setupUi(QWidget *FolderWizardSourcePage)
    {
        if (FolderWizardSourcePage->objectName().isEmpty())
            FolderWizardSourcePage->setObjectName(QString::fromUtf8("FolderWizardSourcePage"));
        FolderWizardSourcePage->resize(423, 174);
        FolderWizardSourcePage->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(FolderWizardSourcePage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(349, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        groupBox = new QGroupBox(FolderWizardSourcePage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        localFolderLineEdit = new QLineEdit(groupBox);
        localFolderLineEdit->setObjectName(QString::fromUtf8("localFolderLineEdit"));

        horizontalLayout_2->addWidget(localFolderLineEdit);

        localFolderChooseBtn = new QPushButton(groupBox);
        localFolderChooseBtn->setObjectName(QString::fromUtf8("localFolderChooseBtn"));

        horizontalLayout_2->addWidget(localFolderChooseBtn);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        warnLabel = new QLabel(FolderWizardSourcePage);
        warnLabel->setObjectName(QString::fromUtf8("warnLabel"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 192, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        warnLabel->setPalette(palette);
        warnLabel->setAutoFillBackground(true);
        warnLabel->setFrameShape(QFrame::StyledPanel);
        warnLabel->setTextFormat(Qt::RichText);
        warnLabel->setMargin(3);

        gridLayout_2->addWidget(warnLabel, 1, 0, 1, 1);


        retranslateUi(FolderWizardSourcePage);

        QMetaObject::connectSlotsByName(FolderWizardSourcePage);
    } // setupUi

    void retranslateUi(QWidget *FolderWizardSourcePage)
    {
        groupBox->setTitle(QCoreApplication::translate("FolderWizardSourcePage", "Pick a local folder on your computer to sync", nullptr));
        localFolderChooseBtn->setText(QCoreApplication::translate("FolderWizardSourcePage", "&Choose \342\200\246", nullptr));
        warnLabel->setText(QString());
        (void)FolderWizardSourcePage;
    } // retranslateUi

};

namespace Ui {
    class FolderWizardSourcePage: public Ui_FolderWizardSourcePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLDERWIZARDSOURCEPAGE_H
