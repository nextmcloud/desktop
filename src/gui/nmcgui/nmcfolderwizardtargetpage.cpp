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

#include <QLabel>
#include <QWidget>
#include <QGridLayout>
#include <QSizePolicy>
#include <QCoreApplication>

namespace OCC {

NMCFolderWizardTargetPage::NMCFolderWizardTargetPage(QWidget *parent)
    : QWizardPage(parent)
{
    _ui.setupUi(this);
}

void NMCFolderWizardTargetPage::setDefaultSettings()
{
    _ui.warnFrame->setVisible(false);
    _ui.groupBox->setVisible(false);
}

void NMCFolderWizardTargetPage::setLayout()
{
    _ui.gridLayout_6->setContentsMargins(0, 0, 0, 0);

    auto *stepLabel = new QLabel(QCoreApplication::translate("", "ADD_LIVE_BACKUP_HEADLINE"));
    stepLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    stepLabel->setStyleSheet("QLabel { color: black; font-size: 13px; font-weight: bold; }");
    _ui.gridLayout_6->addWidget(stepLabel, 0, 0, Qt::AlignTop | Qt::AlignLeft);

    auto *hLayout = new QGridLayout();
    auto *hLayoutWidget = new QWidget();
    hLayoutWidget->setObjectName("whiteBackgroundLayout");
    hLayoutWidget->setStyleSheet("QWidget#whiteBackgroundLayout { background-color: white; border-radius: 4px; }");
    hLayoutWidget->setLayout(hLayout);

    auto *textLabel2 = new QLabel(QCoreApplication::translate("", "ADD_LIVE_BACKUP_PAGE2_DESCRIPTION"));
    textLabel2->setWordWrap(true);
    textLabel2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    hLayout->addWidget(textLabel2, 0, 0, 1, 3);

    _ui.gridLayout_6->removeWidget(_ui.folderTreeWidget);
    _ui.gridLayout_6->removeWidget(_ui.refreshButton);
    _ui.gridLayout_6->removeWidget(_ui.addFolderButton);

    hLayout->addWidget(_ui.folderTreeWidget, 1, 0, 3, 1);

    _ui.addFolderButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    hLayout->addWidget(_ui.addFolderButton, 1, 1);

    _ui.refreshButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    _ui.refreshButton->setFixedSize(_ui.addFolderButton->sizeHint());
    hLayout->addWidget(_ui.refreshButton, 2, 1);

    _ui.folderEntry->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    hLayout->addWidget(_ui.folderEntry, 4, 0, 1, 3);

    _ui.gridLayout_6->addWidget(hLayoutWidget, 4, 0, 1, 3);

    _ui.gridLayout_6->addWidget(_ui.warnFrame, 5, 0, 1, 3);
    _ui.warnFrame->setStyleSheet("border: 0px; border-radius: 4px; background-color: #fee2d0");
}

Ui::FolderWizardTargetPage *NMCFolderWizardTargetPage::getUi()
{
    return &_ui;
}

} // namespace OCC