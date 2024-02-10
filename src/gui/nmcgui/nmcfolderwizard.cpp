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
#include "nmcfolderwizard.h"

/**
 * Folder wizard itself
 */

namespace OCC {

NMCFolderWizard::NMCFolderWizard(AccountPtr account, QWidget *parent)
    :FolderWizard(account, parent)
{
    setWizardStyle(QWizard::ClassicStyle);
    setButtonText(QWizard::FinishButton, tr("ADD_SYNCHRONIZATION"));

    //Source page
    auto sourceUi = _folderWizardSourcePage->getUi();
    sourceUi.localFolderLineEdit->clear();
    sourceUi.localFolderLineEdit->setPlaceholderText(tr("Please select a folder"));
    sourceUi.setDefaultSettings();
    sourceUi.changeLayout();

    //Target page
    auto targetUi = _folderWizardTargetPage->getUi();
    targetUi.setDefaultSettings();
    targetUi.setLayout();
}



} // end namespace
