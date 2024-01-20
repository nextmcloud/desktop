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
#include "wizard/owncloudwizard.h"
#include "wizard/owncloudadvancedsetuppage.h"
#include "nmcgui/nmcowncloudadvancedsetuppage.h"

namespace OCC {

NMCOwncloudAdvancedSetupPage::NMCOwncloudAdvancedSetupPage(OwncloudWizard *wizard)
    : OwncloudAdvancedSetupPage(wizard),
    _tLogoLbl(new QLabel(this))
{
    //Remove elements we dont need
    getUi().locationsGridLayout->removeWidget(getUi().syncLogoLabel);
    getUi().syncLogoLabel->setVisible(false);

    //Create and connect the push buttons to base slots
    auto loginBrowserButton = new QPushButton(tr("Login"));
    connect(loginBrowserButton, &QPushButton::clicked, this, [this](){
        //slotOpenBrowser();
    });

    //Set login button size and style
    QSize buttonSize(130,32);
    const QString styleSheetHoverPart = "QPushButton:hover { background-color: #c00063; }";
    const QString styleSheet("QPushButton{font-size: 15px; border: %1px solid; border-color: black; border-radius: 4px; background-color: %2; color: %3;}" + styleSheetHoverPart );
    loginBrowserButton->setStyleSheet(styleSheet.arg("0","#E20074","white"));
    loginBrowserButton->setFixedSize(buttonSize);

    //Create needed layouts
    auto mainVerticalLayout = new QVBoxLayout(this);
    auto subMainHorizontalLayout = new QHBoxLayout(this);
    auto leftSideVerticalLayout = new QVBoxLayout(this);
    auto rightSideVerticalLayout = new QVBoxLayout(this);

    mainVerticalLayout->addLayout(subMainHorizontalLayout);

    QSpacerItem *spacer4 = new QSpacerItem(1,1, QSizePolicy::Fixed, QSizePolicy::Fixed);
    subMainHorizontalLayout->addSpacerItem(spacer4);
    subMainHorizontalLayout->addLayout(leftSideVerticalLayout);
    subMainHorizontalLayout->addLayout(rightSideVerticalLayout);

    //Create a horizontal T-Logo and MagentaCLOUC-label layout
    auto hLogoAndLabelLayout = new QHBoxLayout(this);

    //T-Logo
    _tLogoLbl->setFixedSize(36,36);
    _tLogoLbl->setPixmap(QIcon(QLatin1String(":/client/theme/NMCIcons/tlogocarrier.svg")).pixmap(36,36));
    hLogoAndLabelLayout->addWidget(_tLogoLbl);

    QSpacerItem *spacer3 = new QSpacerItem(1,32, QSizePolicy::Fixed, QSizePolicy::Fixed);
    leftSideVerticalLayout->addSpacerItem(spacer3);

    QSpacerItem *spacer9 = new QSpacerItem(8,1, QSizePolicy::Fixed, QSizePolicy::Fixed);
    hLogoAndLabelLayout->addSpacerItem(spacer9);

    //MagentaCLOUC-label
    QLabel *magentaLabel = new QLabel("MagentaCLOUD");
    magentaLabel->setStyleSheet("QLabel{font-size: 15px; font-weight: bold;}");
    magentaLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    hLogoAndLabelLayout->addWidget(magentaLabel);
    leftSideVerticalLayout->addItem(hLogoAndLabelLayout);

    QSpacerItem *spacer7 = new QSpacerItem(1,24, QSizePolicy::Fixed, QSizePolicy::Fixed);
    leftSideVerticalLayout->addSpacerItem(spacer7);

    //Headline
    QLabel *descriptionLabel = new QLabel("Melden Sie sich an um direkt loszulegen");
    descriptionLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    descriptionLabel->setStyleSheet("QLabel{font-size: 28px; font-weight: normal;}");
    descriptionLabel->setWordWrap(true);
    descriptionLabel->setMinimumSize(descriptionLabel->sizeHint());
    leftSideVerticalLayout->addWidget(descriptionLabel);

    QSpacerItem *spacer13 = new QSpacerItem(1,16, QSizePolicy::Fixed, QSizePolicy::Fixed);
    leftSideVerticalLayout->addSpacerItem(spacer13);

    //_ui.locationsGridLayout->addWidget(getFilePathLabel().data(), 3, 3);

    //Path to a local folder
    getUi().locationsGridLayout->removeWidget(getFilePathLabel().data());
    leftSideVerticalLayout->addWidget(getFilePathLabel().data());
    getFilePathLabel().data()->setAlignment(Qt::AlignLeft);

    // QSpacerItem *spacer14 = new QSpacerItem(1,16, QSizePolicy::Fixed, QSizePolicy::Fixed);
    // leftSideVerticalLayout->addSpacerItem(spacer14);

    //Free space available
    getUi().locationsGridLayout->removeWidget(getUi().lFreeSpace);
    leftSideVerticalLayout->addWidget(getUi().lFreeSpace);
    getUi().lFreeSpace->setAlignment(Qt::AlignLeft);

    QSpacerItem *spacer15 = new QSpacerItem(1,16, QSizePolicy::Fixed, QSizePolicy::Fixed);
    leftSideVerticalLayout->addSpacerItem(spacer15);

    //Synch Radio button layout
    getUi().wSyncStrategy->removeItem(getUi().horizontalLayout_5);
    leftSideVerticalLayout->addLayout(getUi().horizontalLayout_5);

    QSpacerItem *spacer16 = new QSpacerItem(1,8, QSizePolicy::Fixed, QSizePolicy::Fixed);
    leftSideVerticalLayout->addSpacerItem(spacer16);

    //Choose what to sync layout
    getUi().wSyncStrategy->removeItem(getUi().horizontalLayout_10);
    leftSideVerticalLayout->addLayout(getUi().horizontalLayout_10);
    getUi().horizontalLayout_10->removeWidget(getUi().lSelectiveSyncSizeLabel); //Remove text label, its not needed
    getUi().lSelectiveSyncSizeLabel->setVisible(false);

    QSpacerItem *spacer5 = new QSpacerItem(1,16, QSizePolicy::Fixed, QSizePolicy::Fixed);
    leftSideVerticalLayout->addSpacerItem(spacer5);

    //Detail description
    QLabel *detailLabel = new QLabel("Überprüfen Sie den Speicherort und ändern Sie ihn, falls Sie schon einen bestehenden MagentaCLOUD Ordner aus einer früheren Installation wiederverwenden möchten.");
    detailLabel->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
    detailLabel->setStyleSheet("QLabel{font-size: 15px; font-weight: normal;}");
    detailLabel->setWordWrap(true);
    detailLabel->setMinimumWidth(396);
    leftSideVerticalLayout->addWidget(detailLabel);

    QSpacerItem *spacer6 = new QSpacerItem(1,16, QSizePolicy::Fixed, QSizePolicy::Fixed);
    leftSideVerticalLayout->addSpacerItem(spacer6);

           //Add buttons
    leftSideVerticalLayout->addWidget(loginBrowserButton);

    QSpacerItem *spacer11 = new QSpacerItem(1,1, QSizePolicy::Fixed, QSizePolicy::Expanding);
    leftSideVerticalLayout->addSpacerItem(spacer11);

           //Add items to the right side
    QLabel *bigMagetnaIcon = new QLabel("Test");
    bigMagetnaIcon->setFixedSize(175,175);
    bigMagetnaIcon->setPixmap(QIcon(QLatin1String(":/client/theme/NMCIcons/ApplicationLogo.svg")).pixmap(175,175));

    QSpacerItem *spacer1 = new QSpacerItem(1,176, QSizePolicy::Fixed, QSizePolicy::Fixed);
    rightSideVerticalLayout->addSpacerItem(spacer1);
    rightSideVerticalLayout->addWidget(bigMagetnaIcon);

    QSpacerItem *spacer10 = new QSpacerItem(1,1, QSizePolicy::Fixed, QSizePolicy::Expanding);
    rightSideVerticalLayout->addSpacerItem(spacer10);

    QSpacerItem *spacer2 = new QSpacerItem(0,1, QSizePolicy::Fixed, QSizePolicy::Fixed);
    subMainHorizontalLayout->addSpacerItem(spacer2);


    //getUi().verticalLayout_3->removeWidget(getUi().errorLabel);
    //mainVerticalLayout->addWidget(getUi().errorLabel);

    //getUi().verticalLayout_3->removeWidget(getUi().statusLabel);
    //getUi().statusLabel->setFixedSize(0,0);


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
