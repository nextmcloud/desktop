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

#include <QLabel>
#include <QGridLayout>
#include <QSizePolicy>
#include <QCoreApplication>
#include <QWidget>

namespace OCC {

NMCFolderWizardSourcePage::NMCFolderWizardSourcePage(QWidget *parent)
    : QWizardPage(parent)
{
    _ui.setupUi(this);
}

void NMCFolderWizardSourcePage::setDefaultSettings()
{
    _ui.groupBox->setVisible(false);
}

void NMCFolderWizardSourcePage::changeLayout()
{
    _ui.gridLayout_2->setContentsMargins(0, 0, 0, 0);

    auto *stepLabel = new QLabel(QCoreApplication::translate("", "ADD_LIVE_BACKUP_HEADLINE"));
    stepLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    stepLabel->setStyleSheet("QLabel { color: black; font-size: 13px; font-weight: bold; }");
    _ui.gridLayout_2->addWidget(stepLabel, 0, 0, Qt::AlignTop | Qt::AlignLeft);

    auto *mainLayoutWidget = new QWidget();
    mainLayoutWidget->setObjectName("mainLayoutWidget");
    mainLayoutWidget->setStyleSheet("QWidget#mainLayoutWidget { background-color: white; border-radius: 4px; }");

    auto *whiteLayout = new QGridLayout(mainLayoutWidget);

    auto *textLabel = new QLabel(QCoreApplication::translate("", "ADD_LIVE_BACKUP_PAGE1_DESCRIPTION"));
    textLabel->setWordWrap(true);
    textLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    whiteLayout->addWidget(textLabel, 0, 0, 1, 2);

    _ui.gridLayout_2->removeWidget(_ui.localFolderLineEdit);
    _ui.localFolderLineEdit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    whiteLayout->addWidget(_ui.localFolderLineEdit, 1, 0);

    _ui.localFolderChooseBtn->setAutoDefault(true);
    _ui.localFolderChooseBtn->setDefault(true);
    _ui.localFolderChooseBtn->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    whiteLayout->addWidget(_ui.localFolderChooseBtn, 1, 1);

    _ui.gridLayout_2->addWidget(mainLayoutWidget, 1, 0, 1, 3);

    _ui.gridLayout_2->removeWidget(_ui.warnLabel);
    _ui.warnLabel->setStyleSheet("border: 0px; border-radius: 4px; background-color: #fee2d0;");
    _ui.gridLayout_2->addWidget(_ui.warnLabel, 2, 0, 1, 3);

    _ui.gridLayout_2->removeItem(_ui.verticalSpacer);
    _ui.gridLayout_2->addItem(_ui.verticalSpacer, 3, 0, 1, 3);
}

Ui::FolderWizardSourcePage *NMCFolderWizardSourcePage::getUi()
{
    return &_ui;
}

} // namespace OCC
 