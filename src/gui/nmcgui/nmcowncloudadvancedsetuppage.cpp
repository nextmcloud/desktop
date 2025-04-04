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

 #include <QPainter>
 #include "common/utility.h"
 #include "wizard/owncloudwizard.h"
 #include "wizard/owncloudadvancedsetuppage.h"
 #include "nmcgui/nmcowncloudadvancedsetuppage.h"
 
 namespace OCC {
 
 void OCC::NMCOwncloudAdvancedSetupPage::cleanUpElements()
 {
     auto &ui = getUi();
     ui.locationsGridLayout->removeWidget(ui.syncLogoLabel);
     ui.syncLogoLabel->setFixedSize(0,0);
     ui.syncLogoLabel->setVisible(false);
 
     ui.horizontalLayout_6->removeWidget(ui.confCheckBoxSize);
     ui.confCheckBoxSize->setFixedSize(0,0);
     ui.confCheckBoxSize->setVisible(false);
 
     ui.horizontalLayout_6->removeWidget(ui.confSpinBox);
     ui.confSpinBox->setFixedSize(0,0);
     ui.confSpinBox->setVisible(false);
 
     ui.horizontalLayout_6->removeWidget(ui.confTraillingSizeLabel);
     ui.confTraillingSizeLabel->setFixedSize(0,0);
     ui.confTraillingSizeLabel->setVisible(false);
 
     ui.horizontalLayout_8->removeWidget(ui.confCheckBoxExternal);
     ui.confCheckBoxExternal->setFixedSize(0,0);
     ui.confCheckBoxExternal->setVisible(false);
 
     ui.lVirtualFileSync->removeWidget(ui.rVirtualFileSync);
     ui.rVirtualFileSync->setFixedSize(0,0);
     ui.rVirtualFileSync->setVisible(false);
     ui.rVirtualFileSync->setChecked(true);
 
     ui.resolutionWidget->setVisible(false);
 
     ui.verticalLayout->removeWidget(ui.errorLabel);
     ui.errorLabel->setFixedSize(0,0);
     ui.errorLabel->setVisible(false);
 }
 
 NMCOwncloudAdvancedSetupPage::NMCOwncloudAdvancedSetupPage(OwncloudWizard *wizard)
     : OwncloudAdvancedSetupPage(wizard),
     _tLogoLbl(new QLabel(this))
 {
     cleanUpElements();
     
     auto loginBrowserButton = new QPushButton(tr("LOGIN"));
     connect(loginBrowserButton, &QPushButton::clicked, this, [this](){
         validatePage();
     });
     
     auto buttonLayout = new QHBoxLayout;
     buttonLayout->setSpacing(8);
     loginBrowserButton->setFixedSize(130,32);
     loginBrowserButton->setStyleSheet("QPushButton{font-size: 15px; border: 0px solid; border-radius: 4px; background-color: #E20074; color: white;} QPushButton:hover { background-color: #c00063; }");
     
     getUi().pbSelectLocalFolder->setFixedSize(180, 32);
     getUi().pbSelectLocalFolder->setStyleSheet("QPushButton{border: 1px solid; border-color: black; border-radius: 4px; background-color: white; color: black;} QPushButton:hover { background-color: #ededed; }");
     getUi().pbSelectLocalFolder->setText(tr("Speicherort ändern"));
     
     buttonLayout->addWidget(getUi().pbSelectLocalFolder);
     buttonLayout->addWidget(loginBrowserButton);
     buttonLayout->addSpacerItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
 
     auto mainVerticalLayout = new QVBoxLayout(this);
     mainVerticalLayout->setSpacing(0);
     mainVerticalLayout->setContentsMargins(16,8,40,0);
 
     auto leftSideVerticalLayout = new QVBoxLayout;
     leftSideVerticalLayout->setSpacing(0);
     
     QLabel *magentaLabel = new QLabel(tr("MagentaCLOUD"));
     magentaLabel->setStyleSheet("QLabel{font-size: 15px; font-weight: bold;}");
     
     QLabel *descriptionLabel = new QLabel(tr("SETUP_HEADER_TEXT_2"));
     descriptionLabel->setStyleSheet("QLabel{font-size: 28px;}");
     descriptionLabel->setWordWrap(true);
     
     leftSideVerticalLayout->addWidget(magentaLabel);
     leftSideVerticalLayout->addWidget(descriptionLabel);
     leftSideVerticalLayout->addLayout(buttonLayout);
     
     mainVerticalLayout->addLayout(leftSideVerticalLayout);
     setLayout(mainVerticalLayout);
 }
 
 void NMCOwncloudAdvancedSetupPage::paintEvent(QPaintEvent *event)
 {
     QPainter painter(this);
     painter.fillRect(rect(), Qt::white);
     OwncloudAdvancedSetupPage::paintEvent(event);
 }
 
 } // namespace OCC
 