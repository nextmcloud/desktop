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

#include "nmcfolderwizardsourcepage.h"
#include "theme.h"

#include <QCoreApplication>
#include <QLabel>
#include <QSizePolicy>
#include <QGridLayout>
#include <QSpacerItem>

namespace OCC {

NMCFolderWizardSourcePage::NMCFolderWizardSourcePage(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

void NMCFolderWizardSourcePage::setDefaultSettings()
{
    ui.groupBox->setVisible(false);
}

void NMCFolderWizardSourcePage::changeLayout()
{
    ui.gridLayout_2->setContentsMargins(0, 0, 0, 0);

    auto *stepLabel = new QLabel(this);
    stepLabel->setText(QCoreApplication::translate("", "ADD_LIVE_BACKUP_HEADLINE"));
    stepLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    stepLabel->setStyleSheet("QLabel{color: black; font-size: 13px; font-weight: bold;}");

    ui.gridLayout_2->addWidget(stepLabel, 0, 0, Qt::AlignTop | Qt::AlignLeft);

    auto *mainLayoutWidget = new QWidget(this);
    mainLayoutWidget->setObjectName("mainLayoutWidget");
    mainLayoutWidget->setStyleSheet("QWidget#mainLayoutWidget { background-color: white; border-radius: 4px;}");

    auto *whiteLayout = new QGridLayout(mainLayoutWidget);
    mainLayoutWidget->setLayout(whiteLayout);

    auto *textLabel = new QLabel(this);
    textLabel->setText(QCoreApplication::translate("", "ADD_LIVE_BACKUP_PAGE1_DESCRIPTION"));
    textLabel->setWordWrap(true);
    textLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    whiteLayout->addWidget(textLabel, 0, 0);

    ui.gridLayout_2->removeWidget(ui.localFolderLineEdit);
    ui.localFolderLineEdit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    whiteLayout->addWidget(ui.localFolderLineEdit, 1, 0);

    ui.localFolderChooseBtn->setAutoDefault(true);
    ui.localFolderChooseBtn->setDefault(true);
    ui.localFolderChooseBtn->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    whiteLayout->addWidget(ui.localFolderChooseBtn, 1, 1);

    ui.gridLayout_2->addWidget(mainLayoutWidget, 1, 0, 1, 3);

    ui.gridLayout_2->removeWidget(ui.warnLabel);
    ui.gridLayout_2->addWidget(ui.warnLabel, 2, 0, 1, 3);
    ui.warnLabel->setStyleSheet("border: 0px; border-radius: 4px; background-color: #fee2d0");

    ui.gridLayout_2->removeItem(ui.verticalSpacer);
    ui.gridLayout_2->addItem(ui.verticalSpacer, 3, 0, 1, 3);
}

} // namespace OCC