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

#include "nmcfolderwizardsourcepage.h"
#include "theme.h"

namespace OCC {

NMCFolderWizardSourcePage::NMCFolderWizardSourcePage()
    :FolderWizardSourcePage()
{

}

void NMCFolderWizardSourcePage::setDefaultSettings()
{
    groupBox->setVisible(false);
}

void NMCFolderWizardSourcePage::setLayout()
{
    QLabel *stepLabel = new QLabel();
    stepLabel->setText(QObject::tr("Step 1 from 2: Local Folder"));
    stepLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    stepLabel->setStyleSheet("QLabel{color: #E20074}");
    gridLayout_2->setMargin(0);
    gridLayout_2->addWidget(stepLabel, 0,0);
    QLabel *textLabel = new QLabel();
    textLabel->setText(QObject::tr("Select a folder on your hard drive, that will be connected to your %1 and permanently connected. All files and sub-folders are automatically uploaded and "
                                   "synchronized.").arg(Theme::instance()->appNameGUI()));
    textLabel->setWordWrap(true);
    textLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    gridLayout_2->addWidget(textLabel, 1,0);

    gridLayout_2->removeWidget(localFolderLineEdit);
    localFolderLineEdit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    gridLayout_2->addWidget(localFolderLineEdit, 2,0);

    gridLayout_2->removeWidget(localFolderChooseBtn);
    localFolderChooseBtn->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    gridLayout_2->addWidget(localFolderChooseBtn, 3,0);

    gridLayout_2->removeWidget(warnLabel);
    gridLayout_2->addWidget(warnLabel, 4,0);

    gridLayout_2->removeItem(verticalSpacer);
    gridLayout_2->addItem(verticalSpacer, 5,0);
}

void NMCFolderWizardSourcePage::setLogic()
{
}

} // end namespace



