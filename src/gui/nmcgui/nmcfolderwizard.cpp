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

namespace OCC {

NMCFolderWizard::NMCFolderWizard(OCC::AccountPtr account, QWidget *parent)
    : FolderWizard(account, parent), // Basisklasse initialisieren
      _folderWizardSourcePage(new NMCFolderWizardSourcePage()),
      _folderWizardTargetPage(new NMCFolderWizardTargetPage())
{
    setWizardStyle(QWizard::ClassicStyle);
    setButtonText(QWizard::FinishButton, QCoreApplication::translate("", "ADD_SYNCHRONIZATION"));

    auto *sourceUi = _folderWizardSourcePage;
    sourceUi->localFolderLineEdit->clear();
    sourceUi->localFolderLineEdit->setPlaceholderText(QCoreApplication::translate("", "ADD_LIVE_BACKUP_PLACEHOLDER_TEXT"));
    sourceUi->setDefaultSettings();
    sourceUi->changeLayout();
    
    auto *targetUi = _folderWizardTargetPage;
    targetUi->setDefaultSettings();
    targetUi->setLayout();
}

} // namespace OCC 