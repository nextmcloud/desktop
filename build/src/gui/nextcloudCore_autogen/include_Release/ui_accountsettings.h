/********************************************************************************
** Form generated from reading UI file 'accountsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTSETTINGS_H
#define UI_ACCOUNTSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "folderstatusview.h"
#include "kmessagewidget.h"

namespace OCC {

class Ui_AccountSettings
{
public:
    QGridLayout *gridLayout_2;
    QWidget *accountStatus;
    QGridLayout *gridLayout;
    QLabel *quotaInfoLabel;
    QPushButton *moreMemoryButton;
    QProgressBar *quotaProgressBar;
    QLabel *quotaProgressLabel;
    QSpacerItem *horizontalSpacer_2;
    KMessageWidget *encryptionMessage;
    OCC::FolderStatusView *_folderList;
    QWidget *selectiveSyncStatus;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *selectiveSyncLabel;
    QWidget *selectiveSyncButtons;
    QHBoxLayout *horizontalLayout;
    QPushButton *selectiveSyncCancel;
    QPushButton *selectiveSyncApply;
    QWidget *bigFolderUi;
    QVBoxLayout *verticalLayout;
    QLabel *selectiveSyncNotification;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *bigFolderSyncAll;
    QPushButton *bigFolderSyncNone;
    QPushButton *bigFolderApply;

    void setupUi(QWidget *OCC__AccountSettings)
    {
        if (OCC__AccountSettings->objectName().isEmpty())
            OCC__AccountSettings->setObjectName(QString::fromUtf8("OCC__AccountSettings"));
        OCC__AccountSettings->resize(614, 569);
        OCC__AccountSettings->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(OCC__AccountSettings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        accountStatus = new QWidget(OCC__AccountSettings);
        accountStatus->setObjectName(QString::fromUtf8("accountStatus"));
        gridLayout = new QGridLayout(accountStatus);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(4, -1, 0, -1);
        quotaInfoLabel = new QLabel(accountStatus);
        quotaInfoLabel->setObjectName(QString::fromUtf8("quotaInfoLabel"));
        quotaInfoLabel->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(quotaInfoLabel->sizePolicy().hasHeightForWidth());
        quotaInfoLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        font.setKerning(true);
        quotaInfoLabel->setFont(font);
        quotaInfoLabel->setAutoFillBackground(false);
        quotaInfoLabel->setTextFormat(Qt::RichText);
        quotaInfoLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        quotaInfoLabel->setWordWrap(false);

        gridLayout->addWidget(quotaInfoLabel, 0, 0, 1, 1);

        moreMemoryButton = new QPushButton(accountStatus);
        moreMemoryButton->setObjectName(QString::fromUtf8("moreMemoryButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(moreMemoryButton->sizePolicy().hasHeightForWidth());
        moreMemoryButton->setSizePolicy(sizePolicy1);
        moreMemoryButton->setMinimumSize(QSize(160, 40));
        moreMemoryButton->setMaximumSize(QSize(160, 16777215));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(225, 225, 225, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        moreMemoryButton->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(11);
        moreMemoryButton->setFont(font1);

        gridLayout->addWidget(moreMemoryButton, 0, 2, 3, 1);

        quotaProgressBar = new QProgressBar(accountStatus);
        quotaProgressBar->setObjectName(QString::fromUtf8("quotaProgressBar"));
        quotaProgressBar->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(quotaProgressBar->sizePolicy().hasHeightForWidth());
        quotaProgressBar->setSizePolicy(sizePolicy2);
        quotaProgressBar->setMinimumSize(QSize(408, 7));
        quotaProgressBar->setMaximumSize(QSize(16777215, 7));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush3(QColor(204, 204, 204, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        QBrush brush4(QColor(255, 255, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush4);
        QBrush brush5(QColor(229, 229, 229, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        QBrush brush6(QColor(102, 102, 102, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush6);
        QBrush brush7(QColor(136, 136, 136, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush9(QColor(0, 120, 215, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        quotaProgressBar->setPalette(palette1);
        quotaProgressBar->setMaximum(408);
        quotaProgressBar->setValue(2);
        quotaProgressBar->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        quotaProgressBar->setTextVisible(false);

        gridLayout->addWidget(quotaProgressBar, 1, 0, 1, 1);

        quotaProgressLabel = new QLabel(accountStatus);
        quotaProgressLabel->setObjectName(QString::fromUtf8("quotaProgressLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(quotaProgressLabel->sizePolicy().hasHeightForWidth());
        quotaProgressLabel->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(true);
        quotaProgressLabel->setFont(font2);
        quotaProgressLabel->setAutoFillBackground(false);
        quotaProgressLabel->setLineWidth(0);
        quotaProgressLabel->setTextFormat(Qt::RichText);
        quotaProgressLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        quotaProgressLabel->setWordWrap(false);
        quotaProgressLabel->setMargin(0);
        quotaProgressLabel->setIndent(-3);

        gridLayout->addWidget(quotaProgressLabel, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);


        gridLayout_2->addWidget(accountStatus, 0, 0, 1, 1);

        encryptionMessage = new KMessageWidget(OCC__AccountSettings);
        encryptionMessage->setObjectName(QString::fromUtf8("encryptionMessage"));

        gridLayout_2->addWidget(encryptionMessage, 1, 0, 1, 1);

        _folderList = new OCC::FolderStatusView(OCC__AccountSettings);
        _folderList->setObjectName(QString::fromUtf8("_folderList"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(5);
        sizePolicy4.setHeightForWidth(_folderList->sizePolicy().hasHeightForWidth());
        _folderList->setSizePolicy(sizePolicy4);
        _folderList->setContextMenuPolicy(Qt::CustomContextMenu);
        _folderList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        _folderList->setAnimated(true);

        gridLayout_2->addWidget(_folderList, 2, 0, 1, 1);

        selectiveSyncStatus = new QWidget(OCC__AccountSettings);
        selectiveSyncStatus->setObjectName(QString::fromUtf8("selectiveSyncStatus"));
        horizontalLayout_3 = new QHBoxLayout(selectiveSyncStatus);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        selectiveSyncLabel = new QLabel(selectiveSyncStatus);
        selectiveSyncLabel->setObjectName(QString::fromUtf8("selectiveSyncLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(selectiveSyncLabel->sizePolicy().hasHeightForWidth());
        selectiveSyncLabel->setSizePolicy(sizePolicy5);
        selectiveSyncLabel->setTextFormat(Qt::RichText);
        selectiveSyncLabel->setWordWrap(true);
        selectiveSyncLabel->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(selectiveSyncLabel);


        horizontalLayout_3->addLayout(verticalLayout_3);

        selectiveSyncButtons = new QWidget(selectiveSyncStatus);
        selectiveSyncButtons->setObjectName(QString::fromUtf8("selectiveSyncButtons"));
        horizontalLayout = new QHBoxLayout(selectiveSyncButtons);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        selectiveSyncCancel = new QPushButton(selectiveSyncButtons);
        selectiveSyncCancel->setObjectName(QString::fromUtf8("selectiveSyncCancel"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(selectiveSyncCancel->sizePolicy().hasHeightForWidth());
        selectiveSyncCancel->setSizePolicy(sizePolicy6);

        horizontalLayout->addWidget(selectiveSyncCancel);

        selectiveSyncApply = new QPushButton(selectiveSyncButtons);
        selectiveSyncApply->setObjectName(QString::fromUtf8("selectiveSyncApply"));
        sizePolicy6.setHeightForWidth(selectiveSyncApply->sizePolicy().hasHeightForWidth());
        selectiveSyncApply->setSizePolicy(sizePolicy6);

        horizontalLayout->addWidget(selectiveSyncApply);


        horizontalLayout_3->addWidget(selectiveSyncButtons);


        gridLayout_2->addWidget(selectiveSyncStatus, 3, 0, 1, 1);

        bigFolderUi = new QWidget(OCC__AccountSettings);
        bigFolderUi->setObjectName(QString::fromUtf8("bigFolderUi"));
        verticalLayout = new QVBoxLayout(bigFolderUi);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        selectiveSyncNotification = new QLabel(bigFolderUi);
        selectiveSyncNotification->setObjectName(QString::fromUtf8("selectiveSyncNotification"));
        selectiveSyncNotification->setStyleSheet(QString::fromUtf8("color: red"));
        selectiveSyncNotification->setWordWrap(true);

        verticalLayout->addWidget(selectiveSyncNotification);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        bigFolderSyncAll = new QPushButton(bigFolderUi);
        bigFolderSyncAll->setObjectName(QString::fromUtf8("bigFolderSyncAll"));

        horizontalLayout_2->addWidget(bigFolderSyncAll);

        bigFolderSyncNone = new QPushButton(bigFolderUi);
        bigFolderSyncNone->setObjectName(QString::fromUtf8("bigFolderSyncNone"));

        horizontalLayout_2->addWidget(bigFolderSyncNone);

        bigFolderApply = new QPushButton(bigFolderUi);
        bigFolderApply->setObjectName(QString::fromUtf8("bigFolderApply"));

        horizontalLayout_2->addWidget(bigFolderApply);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addWidget(bigFolderUi, 4, 0, 1, 1);


        retranslateUi(OCC__AccountSettings);

        QMetaObject::connectSlotsByName(OCC__AccountSettings);
    } // setupUi

    void retranslateUi(QWidget *OCC__AccountSettings)
    {
#if QT_CONFIG(tooltip)
        quotaInfoLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        quotaInfoLabel->setText(QCoreApplication::translate("OCC::AccountSettings", "<html><head/><body><p><span style=\" color:#191919;\">Storage space: \342\200\246</span></p></body></html>", nullptr));
        moreMemoryButton->setText(QCoreApplication::translate("OCC::AccountSettings", "More Memory", nullptr));
#if QT_CONFIG(tooltip)
        quotaProgressLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        quotaProgressLabel->setText(QCoreApplication::translate("OCC::AccountSettings", "<html><head/><body><p><span style=\" color:#191919;\">Storage</span></p></body></html>", nullptr));
        selectiveSyncLabel->setText(QCoreApplication::translate("OCC::AccountSettings", "Unchecked folders will be <b>removed</b> from your local file system and will not be synchronized to this computer anymore", nullptr));
        selectiveSyncCancel->setText(QCoreApplication::translate("OCC::AccountSettings", "Cancel", nullptr));
        selectiveSyncApply->setText(QCoreApplication::translate("OCC::AccountSettings", "Apply", nullptr));
        selectiveSyncNotification->setText(QString());
        bigFolderSyncAll->setText(QCoreApplication::translate("OCC::AccountSettings", "Synchronize all", nullptr));
        bigFolderSyncNone->setText(QCoreApplication::translate("OCC::AccountSettings", "Synchronize none", nullptr));
        bigFolderApply->setText(QCoreApplication::translate("OCC::AccountSettings", "Apply manual changes", nullptr));
        (void)OCC__AccountSettings;
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class AccountSettings: public Ui_AccountSettings {};
} // namespace Ui
} // namespace OCC

#endif // UI_ACCOUNTSETTINGS_H
