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

#ifndef MIRALL_NMCFOLDERWIZARDSOURCEPAGE_H
#define MIRALL_NMCFOLDERWIZARDSOURCEPAGE_H

#include "ui_folderwizardsourcepage.h"

namespace OCC {

/**
 * @brief The NMCFolderWizardSourcePage class represents a customized source page
 *        for the NMCFolderWizard used in the NMC application.
 *
 * This class extends the UI generated class FolderWizardSourcePage and allows for
 * layout and style modifications specific to the NMC branding.
 */
class NMCFolderWizardSourcePage : public ::Ui::FolderWizardSourcePage
{
public:
    /**
     * @brief Constructs an instance of NMCFolderWizardSourcePage.
     */
    explicit NMCFolderWizardSourcePage();

    /**
     * @brief Virtual destructor.
     */
    ~NMCFolderWizardSourcePage() override = default;

    /**
     * @brief Applies the default visibility and behavior settings.
     */
    void setDefaultSettings();

    /**
     * @brief Modifies the layout to match NMC design guidelines.
     */
    void changeLayout();
};

} // namespace OCC

#endif // MIRALL_NMCFOLDERWIZARDSOURCEPAGE_H 