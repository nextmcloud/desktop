/*
 * Copyright (C) by Eugen Fischer
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include "QtGui/qpainter.h"
#include "common/utility.h"
#include "wizard/owncloudwizard.h"
#include "wizard/owncloudadvancedsetuppage.h"
#include "nmcgui/nmcowncloudadvancedsetuppage.h"

namespace OCC {

void OCC::NMCOwncloudAdvancedSetupPage::cleanUpElements()
{
    getUi().locationsGridLayout->removeWidget(getUi().syncLogoLabel);
    getUi().syncLogoLabel->setFixedSize(0,0);
    getUi().syncLogoLabel->setVisible(false);

    getUi().horizontalLayout_6->removeWidget(getUi().confCheckBoxSize);
    getUi().confCheckBoxSize->setFixedSize(0,0);
    getUi().confCheckBoxSize->setVisible(false);

    getUi().horizontalLayout_6->removeWidget(getUi().confSpinBox);
    getUi().confSpinBox->setFixedSize(0,0);
    getUi().confSpinBox->setVisible(false);

    getUi().horizontalLayout_6->removeWidget(getUi().confTraillingSizeLabel);
    getUi().confTraillingSizeLabel->setFixedSize(0,0);
    getUi().confTraillingSizeLabel->setVisible(false);

    getUi().horizontalLayout_8->removeWidget(getUi().confCheckBoxExternal);
    getUi().confCheckBoxExternal->setFixedSize(0,0);
    getUi().confCheckBoxExternal->setVisible(false);

    getUi().lVirtualFileSync->removeWidget(getUi().rVirtualFileSync);
    getUi().rVirtualFileSync->setFixedSize(0,0);
    getUi().rVirtualFileSync->setVisible(false);
    getUi().rVirtualFileSync->setChecked(true);

    getUi().resolutionWidget->setVisible(false);

    getUi().verticalLayout->removeWidget(getUi().errorLabel);
    getUi().errorLabel->setFixedSize(0,0);
    getUi().errorLabel->setVisible(false);

    getUi().verticalLayout->removeWidget(getUi().bottomLabel);
    getUi().bottomLabel->setFixedSize(0,0);
    getUi().bottomLabel->setVisible(false);

    getUi().verticalLayout->removeWidget(getUi().topLabel);
    getUi().topLabel->setFixedSize(0,0);
    getUi().topLabel->setVisible(false);

    getUi().locationsGridLayout->removeWidget(getUi().syncLogoLabel);
    getUi().syncLogoLabel->setFixedSize(0,0);
    getUi().syncLogoLabel->setVisible(false);

    getUi().locationsGridLayout->removeWidget(getUi().lLocal);
    getUi().lLocal->setFixedSize(0,0);
    getUi().lLocal->setVisible(false);

    getUi().locationsGridLayout->removeWidget(getUi().localFolderDescriptionLabel);
    getUi().localFolderDescriptionLabel->setFixedSize(0,0);
    getUi().localFolderDescriptionLabel->setVisible(false);

    getUi().locationsGridLayout->removeWidget(getUi().lServerIcon);
    getUi().lServerIcon->setFixedSize(0,0);
    getUi().lServerIcon->setVisible(false);

    getUi().locationsGridLayout->removeWidget(getUi().userNameLabel);
    getUi().userNameLabel->setFixedSize(0,0);
    getUi().userNameLabel->setVisible(false);

    getUi().locationsGridLayout->removeWidget(getUi().serverAddressLabel);
    getUi().serverAddressLabel->setFixedSize(0,0);
    getUi().serverAddressLabel->setVisible(false);
}

NMCOwncloudAdvancedSetupPage::NMCOwncloudAdvancedSetupPage(OwncloudWizard *wizard)
    : OwncloudAdvancedSetupPage(wizard),
    _tLogoLbl(new QLabel(this))
{

    cleanUpElements();

    //Create and connect the push buttons to base slots
    auto loginBrowserButton = new QPushButton(QCoreApplication::translate("", "LOGIN"));
    connect(loginBrowserButton, &QPushButton::clicked, this, [this](){
        ocWizard()->successfulStep();
    });

    auto buttonLayout = new QHBoxLayout(this);
    buttonLayout->setSpacing(8);
    //Set login button size and style
    QSize buttonSize(130,32);
    const QString styleSheet("QPushButton{font-size: 15px; border: %1px solid; border-color: black; border-radius: 4px; background-color: %2; color: %3;} QPushButton:hover { background-color: %4; }" );
    loginBrowserButton->setStyleSheet(styleSheet.arg("0","#E20074","white", "#c00063"));
    loginBrowserButton->setFixedSize(buttonSize);

    getUi().locationsGridLayout->removeWidget(getUi().pbSelectLocalFolder);
    getUi().pbSelectLocalFolder->setFixedSize(180, 32);
    getUi().pbSelectLocalFolder->setStyleSheet(styleSheet.arg("1","white","black", "#ededed"));
    getUi().pbSelectLocalFolder->setText("Speicherort ändern");

    buttonLayout->addWidget(getUi().pbSelectLocalFolder);
    buttonLayout->addWidget(loginBrowserButton);
    buttonLayout->addSpacerItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));

    //Create needed layouts
    auto mainVerticalLayout = new QVBoxLayout(this);
    auto subMainHorizontalLayout = new QHBoxLayout(this);
    auto leftSideVerticalLayout = new QVBoxLayout(this);
    auto rightSideVerticalLayout = new QVBoxLayout(this);
    mainVerticalLayout->setSpacing(0);
    mainVerticalLayout->setContentsMargins(16,8,40,0);
    subMainHorizontalLayout->setSpacing(0);
    subMainHorizontalLayout->setContentsMargins(0,0,0,0);
    leftSideVerticalLayout->setSpacing(0);
    leftSideVerticalLayout->setContentsMargins(0,0,0,0);
    rightSideVerticalLayout->setSpacing(0);
    rightSideVerticalLayout->setContentsMargins(0,0,0,0);

    mainVerticalLayout->addLayout(subMainHorizontalLayout);

    subMainHorizontalLayout->addSpacerItem(new QSpacerItem(12,1, QSizePolicy::Fixed, QSizePolicy::Fixed));
    subMainHorizontalLayout->addLayout(leftSideVerticalLayout);
    subMainHorizontalLayout->addLayout(rightSideVerticalLayout);

    leftSideVerticalLayout->setSpacing(0);

    //Create a horizontal T-Logo and MagentaCLOUC-label layout
    auto hLogoAndLabelLayout = new QHBoxLayout(this);
    hLogoAndLabelLayout->setSpacing(0);
    hLogoAndLabelLayout->setContentsMargins(0,0,0,0);

    //T-Logo
    _tLogoLbl->setFixedSize(36,36);
    _tLogoLbl->setPixmap(QIcon(QLatin1String(":/client/theme/NMCIcons/tlogocarrier.svg")).pixmap(36,36));
    hLogoAndLabelLayout->addWidget(_tLogoLbl);

    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1,32, QSizePolicy::Fixed, QSizePolicy::Fixed));

    hLogoAndLabelLayout->addSpacerItem(new QSpacerItem(8,1, QSizePolicy::Fixed, QSizePolicy::Fixed));

    //MagentaCLOUD-label
    QLabel *magentaLabel = new QLabel("MagentaCLOUD");
    magentaLabel->setStyleSheet("QLabel{font-size: 15px; font-weight: bold;}");
    magentaLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    hLogoAndLabelLayout->addWidget(magentaLabel);
    leftSideVerticalLayout->addItem(hLogoAndLabelLayout);

    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1,24, QSizePolicy::Fixed, QSizePolicy::Fixed));

    //Headline
    QLabel *descriptionLabel = new QLabel(QCoreApplication::translate("", "SETUP_HEADER_TEXT_2"));
    descriptionLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    descriptionLabel->setStyleSheet("QLabel{font-size: 28px; font-weight: normal;}");
    descriptionLabel->setWordWrap(true);
    descriptionLabel->setMinimumSize(descriptionLabel->sizeHint());
    leftSideVerticalLayout->addWidget(descriptionLabel);

    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1,16, QSizePolicy::Fixed, QSizePolicy::Fixed));

    //Path to a local folder
    getUi().locationsGridLayout->removeWidget(getFilePathLabel().data());
    leftSideVerticalLayout->addWidget(getFilePathLabel().data());
    getFilePathLabel().data()->setAlignment(Qt::AlignLeft);
    getFilePathLabel().data()->setStyleSheet("QLabel{font-size: 15px; font-weight: normal; color: black}");

    //Free space available
    getUi().locationsGridLayout->removeWidget(getUi().lFreeSpace);
    leftSideVerticalLayout->addWidget(getUi().lFreeSpace);
    getUi().lFreeSpace->setAlignment(Qt::AlignLeft);
    getUi().lFreeSpace->setStyleSheet("QLabel{font-size: 15px; font-weight: normal; color: black}");

    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1,8, QSizePolicy::Fixed, QSizePolicy::Fixed));

    //Synch Radio button layout
    getUi().wSyncStrategy->removeItem(getUi().horizontalLayout_5);
    leftSideVerticalLayout->addLayout(getUi().horizontalLayout_5);

    //Disable Mac related UI fields
    if(Utility::isWindows())
    {
        getUi().lSyncEverythingSizeLabel->setVisible(false);
        getUi().rSyncEverything->setVisible(false);
        getUi().rSelectiveSync->setVisible(false);
        getUi().bSelectiveSync->setVisible(false);
        getUi().lSelectiveSyncSizeLabel->setVisible(false);
    }

    //Choose what to sync layout
    getUi().wSyncStrategy->removeItem(getUi().horizontalLayout_10);
    leftSideVerticalLayout->addLayout(getUi().horizontalLayout_10);
    getUi().horizontalLayout_10->removeWidget(getUi().lSelectiveSyncSizeLabel); //Remove text label, its not needed
    getUi().lSelectiveSyncSizeLabel->setVisible(false);

    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1,1, QSizePolicy::Fixed, QSizePolicy::Fixed));

    //Detail description
    QLabel *detailLabel = new QLabel(QCoreApplication::translate("","SETUP_DESCRIPTION_TEXT_2"));
    detailLabel->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
    detailLabel->setStyleSheet("QLabel{font-size: 15px; font-weight: normal;}");
    detailLabel->setWordWrap(true);
    detailLabel->setMinimumWidth(396);
    leftSideVerticalLayout->addWidget(detailLabel);

    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1,16, QSizePolicy::Fixed, QSizePolicy::Fixed));

    //Add buttons
    leftSideVerticalLayout->addItem(buttonLayout);

    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1,1, QSizePolicy::Fixed, QSizePolicy::Expanding));

    //Add items to the right side
    QLabel *bigMagetnaIcon = new QLabel("");
    bigMagetnaIcon->setFixedSize(175,175);
    bigMagetnaIcon->setPixmap(QIcon(QLatin1String(":/client/theme/NMCIcons/folderLogo.svg")).pixmap(175,175));

    rightSideVerticalLayout->addSpacerItem(new QSpacerItem(1,164, QSizePolicy::Fixed, QSizePolicy::Fixed));
    rightSideVerticalLayout->addWidget(bigMagetnaIcon);

    rightSideVerticalLayout->addSpacerItem(new QSpacerItem(1,1, QSizePolicy::Fixed, QSizePolicy::Expanding));
    subMainHorizontalLayout->addSpacerItem(new QSpacerItem(0,1, QSizePolicy::Fixed, QSizePolicy::Fixed));

    //Delete previous installed layout, or you can not apply the new one.
    QLayout* layout = this->layout ();
    if (layout != 0)
    {
        QLayoutItem *item;
        while ((item = layout->takeAt(0)) != 0)
            layout->removeItem (item);
        delete layout;
    }

    this->setLayout(mainVerticalLayout);
}

void NMCOwncloudAdvancedSetupPage::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.fillRect(rect(), Qt::white);
    painter.end();
    OwncloudAdvancedSetupPage::paintEvent(event);
}

} // namespace OCC
