/********************************************************************************
** Form generated from reading UI file 'owncloudadvancedsetuppage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNCLOUDADVANCEDSETUPPAGE_H
#define UI_OWNCLOUDADVANCEDSETUPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OwncloudAdvancedSetupPage
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *resultLayout;
    QLabel *topLabel;
    QGridLayout *locationsGridLayout;
    QLabel *lServerIcon;
    QLabel *lLocal;
    QLabel *userNameLabel;
    QLabel *localFolderDescriptionLabel;
    QPushButton *pbSelectLocalFolder;
    QLabel *lFreeSpace;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_12;
    QLabel *serverAddressLabel;
    QLabel *syncLogoLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *wSyncStrategy;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *rSyncEverything;
    QLabel *lSyncEverythingSizeLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *confCheckBoxSize;
    QSpinBox *confSpinBox;
    QLabel *confTraillingSizeLabel;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_9;
    QCheckBox *confCheckBoxExternal;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *rSelectiveSync;
    QPushButton *bSelectiveSync;
    QLabel *lSelectiveSyncSizeLabel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *lVirtualFileSync;
    QRadioButton *rVirtualFileSync;
    QSpacerItem *horizontalSpacer_5;
    QWidget *resolutionWidget;
    QVBoxLayout *resolutionWidgetLayout;
    QLabel *syncModeLabel;
    QRadioButton *rKeepLocal;
    QRadioButton *cbSyncFromScratch;
    QSpacerItem *horizontalSpacer_15;
    QLabel *errorLabel;
    QLabel *bottomLabel;

    void setupUi(QWidget *OwncloudAdvancedSetupPage)
    {
        if (OwncloudAdvancedSetupPage->objectName().isEmpty())
            OwncloudAdvancedSetupPage->setObjectName(QString::fromUtf8("OwncloudAdvancedSetupPage"));
        OwncloudAdvancedSetupPage->resize(912, 633);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OwncloudAdvancedSetupPage->sizePolicy().hasHeightForWidth());
        OwncloudAdvancedSetupPage->setSizePolicy(sizePolicy);
        OwncloudAdvancedSetupPage->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(OwncloudAdvancedSetupPage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        resultLayout = new QHBoxLayout();
        resultLayout->setObjectName(QString::fromUtf8("resultLayout"));

        verticalLayout->addLayout(resultLayout);

        topLabel = new QLabel(OwncloudAdvancedSetupPage);
        topLabel->setObjectName(QString::fromUtf8("topLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topLabel->sizePolicy().hasHeightForWidth());
        topLabel->setSizePolicy(sizePolicy1);
        topLabel->setText(QString::fromUtf8("TextLabel"));
        topLabel->setTextFormat(Qt::PlainText);
        topLabel->setAlignment(Qt::AlignCenter);
        topLabel->setWordWrap(true);

        verticalLayout->addWidget(topLabel);

        locationsGridLayout = new QGridLayout();
        locationsGridLayout->setObjectName(QString::fromUtf8("locationsGridLayout"));
        locationsGridLayout->setSizeConstraint(QLayout::SetFixedSize);
        lServerIcon = new QLabel(OwncloudAdvancedSetupPage);
        lServerIcon->setObjectName(QString::fromUtf8("lServerIcon"));
        lServerIcon->setText(QString::fromUtf8("Avatar"));
        lServerIcon->setTextFormat(Qt::PlainText);
        lServerIcon->setAlignment(Qt::AlignCenter);

        locationsGridLayout->addWidget(lServerIcon, 1, 1, 1, 1);

        lLocal = new QLabel(OwncloudAdvancedSetupPage);
        lLocal->setObjectName(QString::fromUtf8("lLocal"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lLocal->sizePolicy().hasHeightForWidth());
        lLocal->setSizePolicy(sizePolicy2);
        lLocal->setTextFormat(Qt::PlainText);
        lLocal->setAlignment(Qt::AlignCenter);

        locationsGridLayout->addWidget(lLocal, 1, 3, 1, 1);

        userNameLabel = new QLabel(OwncloudAdvancedSetupPage);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        QFont font;
        font.setBold(true);
        userNameLabel->setFont(font);
        userNameLabel->setTextFormat(Qt::PlainText);
        userNameLabel->setAlignment(Qt::AlignCenter);

        locationsGridLayout->addWidget(userNameLabel, 2, 1, 1, 1);

        localFolderDescriptionLabel = new QLabel(OwncloudAdvancedSetupPage);
        localFolderDescriptionLabel->setObjectName(QString::fromUtf8("localFolderDescriptionLabel"));
        localFolderDescriptionLabel->setFont(font);
        localFolderDescriptionLabel->setTextFormat(Qt::PlainText);
        localFolderDescriptionLabel->setAlignment(Qt::AlignCenter);

        locationsGridLayout->addWidget(localFolderDescriptionLabel, 2, 3, 1, 1);

        pbSelectLocalFolder = new QPushButton(OwncloudAdvancedSetupPage);
        pbSelectLocalFolder->setObjectName(QString::fromUtf8("pbSelectLocalFolder"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pbSelectLocalFolder->sizePolicy().hasHeightForWidth());
        pbSelectLocalFolder->setSizePolicy(sizePolicy3);
        pbSelectLocalFolder->setAutoDefault(true);

        locationsGridLayout->addWidget(pbSelectLocalFolder, 5, 3, 1, 1);

        lFreeSpace = new QLabel(OwncloudAdvancedSetupPage);
        lFreeSpace->setObjectName(QString::fromUtf8("lFreeSpace"));
        sizePolicy3.setHeightForWidth(lFreeSpace->sizePolicy().hasHeightForWidth());
        lFreeSpace->setSizePolicy(sizePolicy3);
        lFreeSpace->setText(QString::fromUtf8("Free space"));
        lFreeSpace->setTextFormat(Qt::PlainText);
        lFreeSpace->setAlignment(Qt::AlignCenter);
        lFreeSpace->setWordWrap(true);

        locationsGridLayout->addWidget(lFreeSpace, 4, 3, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        locationsGridLayout->addItem(horizontalSpacer_13, 0, 4, 7, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        locationsGridLayout->addItem(verticalSpacer_3, 0, 1, 1, 3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        locationsGridLayout->addItem(verticalSpacer_5, 6, 1, 1, 3);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        locationsGridLayout->addItem(horizontalSpacer_12, 0, 0, 7, 1);

        serverAddressLabel = new QLabel(OwncloudAdvancedSetupPage);
        serverAddressLabel->setObjectName(QString::fromUtf8("serverAddressLabel"));
        serverAddressLabel->setTextFormat(Qt::PlainText);
        serverAddressLabel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        serverAddressLabel->setWordWrap(true);

        locationsGridLayout->addWidget(serverAddressLabel, 3, 1, 2, 1);

        syncLogoLabel = new QLabel(OwncloudAdvancedSetupPage);
        syncLogoLabel->setObjectName(QString::fromUtf8("syncLogoLabel"));
        syncLogoLabel->setTextFormat(Qt::PlainText);
        syncLogoLabel->setAlignment(Qt::AlignCenter);

        locationsGridLayout->addWidget(syncLogoLabel, 1, 2, 1, 1);

        locationsGridLayout->setColumnStretch(1, 2);
        locationsGridLayout->setColumnStretch(2, 1);
        locationsGridLayout->setColumnStretch(3, 2);

        verticalLayout->addLayout(locationsGridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, -1, 0, 0);
        wSyncStrategy = new QVBoxLayout();
        wSyncStrategy->setObjectName(QString::fromUtf8("wSyncStrategy"));
        wSyncStrategy->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        rSyncEverything = new QRadioButton(OwncloudAdvancedSetupPage);
        rSyncEverything->setObjectName(QString::fromUtf8("rSyncEverything"));
        rSyncEverything->setChecked(true);

        horizontalLayout_5->addWidget(rSyncEverything);

        lSyncEverythingSizeLabel = new QLabel(OwncloudAdvancedSetupPage);
        lSyncEverythingSizeLabel->setObjectName(QString::fromUtf8("lSyncEverythingSizeLabel"));
        lSyncEverythingSizeLabel->setText(QString::fromUtf8("Size"));
        lSyncEverythingSizeLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_5->addWidget(lSyncEverythingSizeLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        wSyncStrategy->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        confCheckBoxSize = new QCheckBox(OwncloudAdvancedSetupPage);
        confCheckBoxSize->setObjectName(QString::fromUtf8("confCheckBoxSize"));

        horizontalLayout_6->addWidget(confCheckBoxSize);

        confSpinBox = new QSpinBox(OwncloudAdvancedSetupPage);
        confSpinBox->setObjectName(QString::fromUtf8("confSpinBox"));
        sizePolicy1.setHeightForWidth(confSpinBox->sizePolicy().hasHeightForWidth());
        confSpinBox->setSizePolicy(sizePolicy1);
        confSpinBox->setFocusPolicy(Qt::StrongFocus);
        confSpinBox->setMaximum(999999);
        confSpinBox->setValue(99);

        horizontalLayout_6->addWidget(confSpinBox);

        confTraillingSizeLabel = new QLabel(OwncloudAdvancedSetupPage);
        confTraillingSizeLabel->setObjectName(QString::fromUtf8("confTraillingSizeLabel"));
        confTraillingSizeLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_6->addWidget(confTraillingSizeLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        wSyncStrategy->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        confCheckBoxExternal = new QCheckBox(OwncloudAdvancedSetupPage);
        confCheckBoxExternal->setObjectName(QString::fromUtf8("confCheckBoxExternal"));

        horizontalLayout_8->addWidget(confCheckBoxExternal);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);


        wSyncStrategy->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 0, -1, -1);
        rSelectiveSync = new QRadioButton(OwncloudAdvancedSetupPage);
        rSelectiveSync->setObjectName(QString::fromUtf8("rSelectiveSync"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(rSelectiveSync->sizePolicy().hasHeightForWidth());
        rSelectiveSync->setSizePolicy(sizePolicy4);
        rSelectiveSync->setCheckable(false);

        horizontalLayout_10->addWidget(rSelectiveSync);

        bSelectiveSync = new QPushButton(OwncloudAdvancedSetupPage);
        bSelectiveSync->setObjectName(QString::fromUtf8("bSelectiveSync"));
        bSelectiveSync->setAutoDefault(true);

        horizontalLayout_10->addWidget(bSelectiveSync);

        lSelectiveSyncSizeLabel = new QLabel(OwncloudAdvancedSetupPage);
        lSelectiveSyncSizeLabel->setObjectName(QString::fromUtf8("lSelectiveSyncSizeLabel"));
        lSelectiveSyncSizeLabel->setText(QString::fromUtf8("TextLabel"));
        lSelectiveSyncSizeLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_10->addWidget(lSelectiveSyncSizeLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);


        wSyncStrategy->addLayout(horizontalLayout_10);

        lVirtualFileSync = new QHBoxLayout();
        lVirtualFileSync->setObjectName(QString::fromUtf8("lVirtualFileSync"));
        rVirtualFileSync = new QRadioButton(OwncloudAdvancedSetupPage);
        rVirtualFileSync->setObjectName(QString::fromUtf8("rVirtualFileSync"));
        sizePolicy4.setHeightForWidth(rVirtualFileSync->sizePolicy().hasHeightForWidth());
        rVirtualFileSync->setSizePolicy(sizePolicy4);
        rVirtualFileSync->setText(QString::fromUtf8("Use virtual files !PLACEHOLDER!"));
        rVirtualFileSync->setCheckable(false);

        lVirtualFileSync->addWidget(rVirtualFileSync);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        lVirtualFileSync->addItem(horizontalSpacer_5);


        wSyncStrategy->addLayout(lVirtualFileSync);


        verticalLayout_7->addLayout(wSyncStrategy);

        resolutionWidget = new QWidget(OwncloudAdvancedSetupPage);
        resolutionWidget->setObjectName(QString::fromUtf8("resolutionWidget"));
        sizePolicy4.setHeightForWidth(resolutionWidget->sizePolicy().hasHeightForWidth());
        resolutionWidget->setSizePolicy(sizePolicy4);
        resolutionWidgetLayout = new QVBoxLayout(resolutionWidget);
        resolutionWidgetLayout->setSpacing(6);
        resolutionWidgetLayout->setObjectName(QString::fromUtf8("resolutionWidgetLayout"));
        resolutionWidgetLayout->setSizeConstraint(QLayout::SetMinimumSize);
        resolutionWidgetLayout->setContentsMargins(0, 2, 0, 0);
        syncModeLabel = new QLabel(resolutionWidget);
        syncModeLabel->setObjectName(QString::fromUtf8("syncModeLabel"));
        sizePolicy1.setHeightForWidth(syncModeLabel->sizePolicy().hasHeightForWidth());
        syncModeLabel->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        syncModeLabel->setFont(font1);
        syncModeLabel->setLineWidth(1);
        syncModeLabel->setText(QString::fromUtf8("Status message"));
        syncModeLabel->setTextFormat(Qt::AutoText);
        syncModeLabel->setAlignment(Qt::AlignCenter);
        syncModeLabel->setWordWrap(false);

        resolutionWidgetLayout->addWidget(syncModeLabel);

        rKeepLocal = new QRadioButton(resolutionWidget);
        rKeepLocal->setObjectName(QString::fromUtf8("rKeepLocal"));
        sizePolicy1.setHeightForWidth(rKeepLocal->sizePolicy().hasHeightForWidth());
        rKeepLocal->setSizePolicy(sizePolicy1);
        rKeepLocal->setChecked(true);

        resolutionWidgetLayout->addWidget(rKeepLocal);

        cbSyncFromScratch = new QRadioButton(resolutionWidget);
        cbSyncFromScratch->setObjectName(QString::fromUtf8("cbSyncFromScratch"));
        sizePolicy1.setHeightForWidth(cbSyncFromScratch->sizePolicy().hasHeightForWidth());
        cbSyncFromScratch->setSizePolicy(sizePolicy1);
        cbSyncFromScratch->setCheckable(true);

        resolutionWidgetLayout->addWidget(cbSyncFromScratch);


        verticalLayout_7->addWidget(resolutionWidget);


        horizontalLayout_2->addLayout(verticalLayout_7);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_15);


        verticalLayout->addLayout(horizontalLayout_2);

        errorLabel = new QLabel(OwncloudAdvancedSetupPage);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setText(QString::fromUtf8("TextLabel"));
        errorLabel->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(errorLabel);

        bottomLabel = new QLabel(OwncloudAdvancedSetupPage);
        bottomLabel->setObjectName(QString::fromUtf8("bottomLabel"));
        bottomLabel->setText(QString::fromUtf8("TextLabel"));
        bottomLabel->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(bottomLabel);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        lLocal->setBuddy(pbSelectLocalFolder);
#endif // QT_CONFIG(shortcut)

        retranslateUi(OwncloudAdvancedSetupPage);
        QObject::connect(rSyncEverything, SIGNAL(toggled(bool)), confCheckBoxSize, SLOT(setEnabled(bool)));
        QObject::connect(rSyncEverything, SIGNAL(toggled(bool)), confSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(rSyncEverything, SIGNAL(toggled(bool)), confTraillingSizeLabel, SLOT(setEnabled(bool)));
        QObject::connect(rSyncEverything, SIGNAL(toggled(bool)), confCheckBoxExternal, SLOT(setEnabled(bool)));

        pbSelectLocalFolder->setDefault(false);
        bSelectiveSync->setDefault(false);


        QMetaObject::connectSlotsByName(OwncloudAdvancedSetupPage);
    } // setupUi

    void retranslateUi(QWidget *OwncloudAdvancedSetupPage)
    {
        lLocal->setText(QCoreApplication::translate("OwncloudAdvancedSetupPage", "&Local Folder", nullptr));
        userNameLabel->setText(QCoreApplication::translate("OwncloudAdvancedSetupPage", "Username", nullptr));
        localFolderDescriptionLabel->setText(QCoreApplication::translate("OwncloudAdvancedSetupPage", "Local Folder", nullptr));
        pbSelectLocalFolder->setText(QCoreApplication::translate("OwncloudAdvancedSetupPage", "Choose different folder", nullptr));
        serverAddressLabel->setText(QCoreApplication::translate("OwncloudAdvancedSetupPage", "Server address", nullptr));
        syncLogoLabel->setText(QCoreApplication::translate("OwncloudAdvancedSetupPage", "Sync Logo", nullptr));
        rSyncEverything->setText(QCoreApplication::translate("OwncloudAdvancedSetupPage", "Synchronize everything from server", nullptr));
        confCheckBoxSize->setText(QCoreApplication::translate("OwncloudAdvancedSetupPage", "Ask before syncing folders larger than", nullptr));
        confTraillingSizeLabel->setText(QCoreApplication::translate("OwncloudAdvancedSetupPage", "MB", nullptr));
        confCheckBoxExternal->setText(QCoreApplication::translate("OwncloudAdvancedSetupPage", "Ask before syncing external storages", nullptr));
        rSelectiveSync->setText(QString());
        bSelectiveSync->setText(QCoreApplication::translate("OwncloudAdvancedSetupPage", "Choose what to sync", nullptr));
        rKeepLocal->setText(QCoreApplication::translate("OwncloudAdvancedSetupPage", "Keep local data", nullptr));
#if QT_CONFIG(tooltip)
        cbSyncFromScratch->setToolTip(QCoreApplication::translate("OwncloudAdvancedSetupPage", "<html><head/><body><p>If this box is checked, existing content in the local folder will be erased to start a clean sync from the server.</p><p>Do not check this if the local content should be uploaded to the servers folder.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbSyncFromScratch->setText(QCoreApplication::translate("OwncloudAdvancedSetupPage", "Erase local folder and start a clean sync", nullptr));
        (void)OwncloudAdvancedSetupPage;
    } // retranslateUi

};

namespace Ui {
    class OwncloudAdvancedSetupPage: public Ui_OwncloudAdvancedSetupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNCLOUDADVANCEDSETUPPAGE_H
