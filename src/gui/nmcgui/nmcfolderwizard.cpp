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

NMCFolderWizard::NMCFolderWizard(AccountPtr account, QWidget *parent)
    : FolderWizard(account, parent)
{
    // Klassischen Stil beibehalten (Qt 6-kompatibel)
    setWizardStyle(QWizard::ClassicStyle);

    // Übersetzungstext setzen für den Fertigstellen-Button
    setButtonText(QWizard::FinishButton, QCoreApplication::translate("", "ADD_SYNCHRONIZATION"));

    // === Source Page Einstellungen ===
    if (auto sourceUi = _folderWizardSourcePage->getUi()) {
        sourceUi.localFolderLineEdit->clear();
        sourceUi.localFolderLineEdit->setPlaceholderText(QCoreApplication::translate("", "ADD_LIVE_BACKUP_PLACEHOLDER_TEXT"));

        // Methoden sicher aufrufen, falls vorhanden
        sourceUi.setDefaultSettings();
        sourceUi.changeLayout();
    }

    // === Target Page Einstellungen ===
    if (auto targetUi = _folderWizardTargetPage->getUi()) {
        targetUi.setDefaultSettings();
        targetUi.setLayout();
    }
}

} // namespace OCC