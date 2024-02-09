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
#include "nmcfolderwizardtargetpage.h"
#include "theme.h"


namespace OCC {

NMCFolderWizardTargetPage::NMCFolderWizardTargetPage()
    :Ui::FolderWizardTargetPage()
{
}

void NMCFolderWizardTargetPage::setDefaultSettings()
{
    folderEntry->setVisible(false);
    warnFrame->setVisible(false);
    groupBox->setVisible(false);
}

void NMCFolderWizardTargetPage::setLayout()
{
    gridLayout_6->setMargin(0);

    QLabel *stepLabel = new QLabel();
    stepLabel->setText(QObject::tr("Step 2 from 2: Directory in your CLOUD"));
    stepLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    stepLabel->setStyleSheet("QLabel{color: #E20074}");

    gridLayout_6->addWidget(stepLabel, 0,0);

    QLabel *textLabel1 = new QLabel();
    textLabel1->setText(QObject::tr("Both folders are permanently linked, the respective contents are automatically compared and updated.")
                            .arg(Theme::instance()->appNameGUI()));
    textLabel1->setWordWrap(true);
    textLabel1->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    gridLayout_6->addWidget(textLabel1, 1,0);

    QLabel *textLabel2 = new QLabel();
    textLabel2->setText(QObject::tr("Please select or create a target folder in your %1, where the content will be uploaded and synchronized.")
                           .arg(Theme::instance()->appNameGUI()));
    textLabel2->setWordWrap(true);
    textLabel2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    gridLayout_6->addWidget(textLabel2, 2,0);

    gridLayout_6->removeWidget(folderTreeWidget);
    gridLayout_6->addWidget(folderTreeWidget, 3,0);

    QHBoxLayout *hLayout = new QHBoxLayout();
    gridLayout_6->removeWidget(refreshButton);
    gridLayout_6->removeWidget(addFolderButton);
    refreshButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    hLayout->addWidget(refreshButton);
    addFolderButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    hLayout->addWidget(addFolderButton);
    QSpacerItem *spacer = new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed);
    hLayout->addSpacerItem(spacer);
    gridLayout_6->addLayout(hLayout, 4,0);

    gridLayout_6->removeWidget(warnFrame);
    gridLayout_6->addWidget(warnFrame, 5,0);
}

void NMCFolderWizardTargetPage::setLogic()
{
}


} // end namespace
