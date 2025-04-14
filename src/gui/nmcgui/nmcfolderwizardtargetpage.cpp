/*
 * Copyright (C) by Mauro Mura
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

 #include "nmcfolderwizardtargetpage.h"
 #include "theme.h"
 
 #include <QCoreApplication>
 #include <QLabel>
 #include <QGridLayout>
 #include <QSizePolicy>
 #include <QWidget>
 
 namespace OCC {
 
 NMCFolderWizardTargetPage::NMCFolderWizardTargetPage(QWidget *parent)
     : QWidget(parent)
 {
     ui.setupUi(this);
 }
 
 void NMCFolderWizardTargetPage::setDefaultSettings()
 {
     ui.warnFrame->setVisible(false);
     ui.groupBox->setVisible(false);
 }
 
 void NMCFolderWizardTargetPage::setLayout()
 {
     ui.gridLayout_6->setContentsMargins(0, 0, 0, 0);
 
     auto *stepLabel = new QLabel(this);
     stepLabel->setText(QCoreApplication::translate("", "ADD_LIVE_BACKUP_HEADLINE"));
     stepLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
     stepLabel->setStyleSheet("QLabel{color: black; font-size: 13px; font-weight: bold;}");
 
     ui.gridLayout_6->addWidget(stepLabel, 0, 0, Qt::AlignTop | Qt::AlignLeft);
 
     auto *hLayout = new QGridLayout();
 
     auto *hLayoutWidget = new QWidget(this);
     hLayoutWidget->setObjectName("whiteBackgroundLayout");
     hLayoutWidget->setStyleSheet("QWidget#whiteBackgroundLayout { background-color: white; border-radius: 4px;}");
     hLayoutWidget->setLayout(hLayout);
 
     ui.gridLayout_6->removeWidget(ui.folderTreeWidget);
     ui.gridLayout_6->removeWidget(ui.refreshButton);
     ui.gridLayout_6->removeWidget(ui.addFolderButton);
 
     auto *textLabel2 = new QLabel(this);
     textLabel2->setText(QCoreApplication::translate("", "ADD_LIVE_BACKUP_PAGE2_DESCRIPTION"));
     textLabel2->setWordWrap(true);
     textLabel2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
     hLayout->addWidget(textLabel2, 0, 0, 1, 3);
 
     hLayout->addWidget(ui.folderTreeWidget, 1, 0, 3, 1);
 
     ui.addFolderButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
     hLayout->addWidget(ui.addFolderButton, 1, 1, 1, 1);
 
     ui.refreshButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
     ui.refreshButton->setFixedSize(ui.addFolderButton->sizeHint());
     hLayout->addWidget(ui.refreshButton, 2, 1, 1, 1);
 
     ui.folderEntry->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
     hLayout->addWidget(ui.folderEntry, 4, 0, 1, 3);
 
     ui.gridLayout_6->addWidget(hLayoutWidget, 4, 0, 1, 3);
     ui.gridLayout_6->addWidget(ui.warnFrame, 5, 0, 1, 3);
     ui.warnFrame->setStyleSheet("border: 0px; border-radius: 4px; background-color: #fee2d0");
 }
 
 } // namespace OCC 