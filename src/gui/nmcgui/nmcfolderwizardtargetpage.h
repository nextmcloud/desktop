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

#ifndef MIRALL_NMCFOLDERWIZARDTARGETPAGE_H
#define MIRALL_NMCFOLDERWIZARDTARGETPAGE_H

#include "ui_folderwizardtargetpage.h"

/**
 * @brief The NMCFolderWizardTargetPage class represents a target page for the NMCFolderWizard.
 * @ingroup gui
 *
 * The NMCFolderWizardTargetPage class is derived from Ui::FolderWizardTargetPage and provides
 * layout and behavior customizations specific to the NMCFolderWizard in the NMC application.
 */

namespace OCC {

class NMCFolderWizardTargetPage : public ::Ui::FolderWizardTargetPage
{
public:
    /**
     * @brief Constructs an instance of NMCFolderWizardTargetPage.
     */
    explicit NMCFolderWizardTargetPage();

    /**
     * @brief Destructor.
     */
    ~NMCFolderWizardTargetPage() = default;

    /**
     * @brief Sets default visibility or behavior settings.
     */
    void setDefaultSettings();

    /**
     * @brief Applies the custom layout and styling to the target page.
     */
    void setLayout();
};

} // namespace OCC

#endif // MIRALL_NMCFOLDERWIZARDTARGETPAGE_H 