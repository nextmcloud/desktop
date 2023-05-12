/********************************************************************************
** Form generated from reading UI file 'generalsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALSETTINGS_H
#define UI_GENERALSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_GeneralSettings
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *aboutGroupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *aboutLabel;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *legalNoticeButton;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *generalGroupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *monoIconsCheckBox;
    QCheckBox *autostartCheckBox;
    QCheckBox *serverNotificationsCheckBox;
    QCheckBox *callNotificationsCheckBox;
    QGroupBox *updatesGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *autoCheckForUpdatesCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *updateChannelLabel;
    QComboBox *updateChannel;
    QLabel *updateStateLabel;
    QPushButton *restartButton;
    QPushButton *updateButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *newFolderLimitCheckBox;
    QSpinBox *newFolderLimitSpinBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *newExternalStorage;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *showInExplorerNavigationPaneCheckBox;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *crashreporterCheckBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *ignoredFilesButton;
    QPushButton *debugArchiveButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *OCC__GeneralSettings)
    {
        if (OCC__GeneralSettings->objectName().isEmpty())
            OCC__GeneralSettings->setObjectName(QString::fromUtf8("OCC__GeneralSettings"));
        OCC__GeneralSettings->resize(556, 563);
        OCC__GeneralSettings->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_3 = new QGridLayout(OCC__GeneralSettings);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        aboutGroupBox = new QGroupBox(OCC__GeneralSettings);
        aboutGroupBox->setObjectName(QString::fromUtf8("aboutGroupBox"));
        verticalLayout_3 = new QVBoxLayout(aboutGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        aboutLabel = new QLabel(aboutGroupBox);
        aboutLabel->setObjectName(QString::fromUtf8("aboutLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aboutLabel->sizePolicy().hasHeightForWidth());
        aboutLabel->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(aboutLabel);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        legalNoticeButton = new QPushButton(aboutGroupBox);
        legalNoticeButton->setObjectName(QString::fromUtf8("legalNoticeButton"));

        horizontalLayout_6->addWidget(legalNoticeButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_6);


        gridLayout_3->addWidget(aboutGroupBox, 2, 0, 1, 1);

        generalGroupBox = new QGroupBox(OCC__GeneralSettings);
        generalGroupBox->setObjectName(QString::fromUtf8("generalGroupBox"));
        gridLayout_2 = new QGridLayout(generalGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        monoIconsCheckBox = new QCheckBox(generalGroupBox);
        monoIconsCheckBox->setObjectName(QString::fromUtf8("monoIconsCheckBox"));

        gridLayout_2->addWidget(monoIconsCheckBox, 1, 0, 1, 1);

        autostartCheckBox = new QCheckBox(generalGroupBox);
        autostartCheckBox->setObjectName(QString::fromUtf8("autostartCheckBox"));

        gridLayout_2->addWidget(autostartCheckBox, 0, 0, 1, 1);

        serverNotificationsCheckBox = new QCheckBox(generalGroupBox);
        serverNotificationsCheckBox->setObjectName(QString::fromUtf8("serverNotificationsCheckBox"));

        gridLayout_2->addWidget(serverNotificationsCheckBox, 0, 1, 1, 1);

        callNotificationsCheckBox = new QCheckBox(generalGroupBox);
        callNotificationsCheckBox->setObjectName(QString::fromUtf8("callNotificationsCheckBox"));

        gridLayout_2->addWidget(callNotificationsCheckBox, 1, 1, 1, 1);


        gridLayout_3->addWidget(generalGroupBox, 0, 0, 1, 1);

        updatesGroupBox = new QGroupBox(OCC__GeneralSettings);
        updatesGroupBox->setObjectName(QString::fromUtf8("updatesGroupBox"));
        verticalLayout_2 = new QVBoxLayout(updatesGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        autoCheckForUpdatesCheckBox = new QCheckBox(updatesGroupBox);
        autoCheckForUpdatesCheckBox->setObjectName(QString::fromUtf8("autoCheckForUpdatesCheckBox"));
        autoCheckForUpdatesCheckBox->setChecked(true);

        horizontalLayout_11->addWidget(autoCheckForUpdatesCheckBox);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        updateChannelLabel = new QLabel(updatesGroupBox);
        updateChannelLabel->setObjectName(QString::fromUtf8("updateChannelLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(updateChannelLabel->sizePolicy().hasHeightForWidth());
        updateChannelLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(updateChannelLabel);

        updateChannel = new QComboBox(updatesGroupBox);
        updateChannel->addItem(QString());
        updateChannel->addItem(QString());
        updateChannel->setObjectName(QString::fromUtf8("updateChannel"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(updateChannel->sizePolicy().hasHeightForWidth());
        updateChannel->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(updateChannel);

        updateStateLabel = new QLabel(updatesGroupBox);
        updateStateLabel->setObjectName(QString::fromUtf8("updateStateLabel"));
        updateStateLabel->setWordWrap(true);
        updateStateLabel->setOpenExternalLinks(true);

        horizontalLayout_2->addWidget(updateStateLabel);

        restartButton = new QPushButton(updatesGroupBox);
        restartButton->setObjectName(QString::fromUtf8("restartButton"));
        sizePolicy2.setHeightForWidth(restartButton->sizePolicy().hasHeightForWidth());
        restartButton->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(restartButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        updateButton = new QPushButton(updatesGroupBox);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        sizePolicy2.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(updateButton);


        gridLayout_3->addWidget(updatesGroupBox, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 0, 1, 1);

        groupBox = new QGroupBox(OCC__GeneralSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        newFolderLimitCheckBox = new QCheckBox(groupBox);
        newFolderLimitCheckBox->setObjectName(QString::fromUtf8("newFolderLimitCheckBox"));
        newFolderLimitCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(newFolderLimitCheckBox);

        newFolderLimitSpinBox = new QSpinBox(groupBox);
        newFolderLimitSpinBox->setObjectName(QString::fromUtf8("newFolderLimitSpinBox"));
        newFolderLimitSpinBox->setMaximum(999999);
        newFolderLimitSpinBox->setValue(99);

        horizontalLayout_3->addWidget(newFolderLimitSpinBox);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        newExternalStorage = new QCheckBox(groupBox);
        newExternalStorage->setObjectName(QString::fromUtf8("newExternalStorage"));

        horizontalLayout_8->addWidget(newExternalStorage);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        showInExplorerNavigationPaneCheckBox = new QCheckBox(groupBox);
        showInExplorerNavigationPaneCheckBox->setObjectName(QString::fromUtf8("showInExplorerNavigationPaneCheckBox"));

        horizontalLayout_10->addWidget(showInExplorerNavigationPaneCheckBox);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        crashreporterCheckBox = new QCheckBox(groupBox);
        crashreporterCheckBox->setObjectName(QString::fromUtf8("crashreporterCheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(crashreporterCheckBox->sizePolicy().hasHeightForWidth());
        crashreporterCheckBox->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(crashreporterCheckBox);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ignoredFilesButton = new QPushButton(groupBox);
        ignoredFilesButton->setObjectName(QString::fromUtf8("ignoredFilesButton"));

        horizontalLayout_4->addWidget(ignoredFilesButton);

        debugArchiveButton = new QPushButton(groupBox);
        debugArchiveButton->setObjectName(QString::fromUtf8("debugArchiveButton"));

        horizontalLayout_4->addWidget(debugArchiveButton);

        horizontalSpacer_4 = new QSpacerItem(555, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        updateChannelLabel->setBuddy(updateChannel);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(autostartCheckBox, serverNotificationsCheckBox);
        QWidget::setTabOrder(serverNotificationsCheckBox, monoIconsCheckBox);
        QWidget::setTabOrder(monoIconsCheckBox, ignoredFilesButton);
        QWidget::setTabOrder(ignoredFilesButton, newFolderLimitCheckBox);
        QWidget::setTabOrder(newFolderLimitCheckBox, newFolderLimitSpinBox);
        QWidget::setTabOrder(newFolderLimitSpinBox, crashreporterCheckBox);
        QWidget::setTabOrder(crashreporterCheckBox, autoCheckForUpdatesCheckBox);
        QWidget::setTabOrder(autoCheckForUpdatesCheckBox, restartButton);

        retranslateUi(OCC__GeneralSettings);
        QObject::connect(newFolderLimitCheckBox, SIGNAL(toggled(bool)), newFolderLimitSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(OCC__GeneralSettings);
    } // setupUi

    void retranslateUi(QWidget *OCC__GeneralSettings)
    {
        aboutGroupBox->setTitle(QCoreApplication::translate("OCC::GeneralSettings", "About", nullptr));
        aboutLabel->setText(QCoreApplication::translate("OCC::GeneralSettings", "About", nullptr));
        legalNoticeButton->setText(QCoreApplication::translate("OCC::GeneralSettings", "Legal notice", nullptr));
        generalGroupBox->setTitle(QCoreApplication::translate("OCC::GeneralSettings", "General Settings", nullptr));
#if QT_CONFIG(tooltip)
        monoIconsCheckBox->setToolTip(QCoreApplication::translate("OCC::GeneralSettings", "For System Tray", nullptr));
#endif // QT_CONFIG(tooltip)
        monoIconsCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "Use &Monochrome Icons", nullptr));
        autostartCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "&Launch on System Startup", nullptr));
        serverNotificationsCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "Show Server &Notifications", nullptr));
        callNotificationsCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "Show Call Notifications", nullptr));
        updatesGroupBox->setTitle(QCoreApplication::translate("OCC::GeneralSettings", "Updates", nullptr));
        autoCheckForUpdatesCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "&Automatically check for Updates", nullptr));
        updateChannelLabel->setText(QCoreApplication::translate("OCC::GeneralSettings", "&Channel", nullptr));
        updateChannel->setItemText(0, QCoreApplication::translate("OCC::GeneralSettings", "stable", nullptr));
        updateChannel->setItemText(1, QCoreApplication::translate("OCC::GeneralSettings", "beta", nullptr));

        updateStateLabel->setText(QString());
        restartButton->setText(QCoreApplication::translate("OCC::GeneralSettings", "&Restart && Update", nullptr));
        updateButton->setText(QCoreApplication::translate("OCC::GeneralSettings", "&Check for Update now", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OCC::GeneralSettings", "Advanced", nullptr));
        newFolderLimitCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "Ask for confirmation before synchronizing folders larger than", nullptr));
        label->setText(QCoreApplication::translate("OCC::GeneralSettings", "MB", nullptr));
        newExternalStorage->setText(QCoreApplication::translate("OCC::GeneralSettings", "Ask for confirmation before synchronizing external storages", nullptr));
        showInExplorerNavigationPaneCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "Show sync folders in &Explorer's Navigation Pane", nullptr));
        crashreporterCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "S&how crash reporter", nullptr));
        ignoredFilesButton->setText(QCoreApplication::translate("OCC::GeneralSettings", "Edit &Ignored Files", nullptr));
        debugArchiveButton->setText(QCoreApplication::translate("OCC::GeneralSettings", "Create Debug Archive", nullptr));
        (void)OCC__GeneralSettings;
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class GeneralSettings: public Ui_GeneralSettings {};
} // namespace Ui
} // namespace OCC

#endif // UI_GENERALSETTINGS_H
