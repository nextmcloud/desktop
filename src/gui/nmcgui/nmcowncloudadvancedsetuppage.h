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

#ifndef MIRALL_NMCOWNCLOUD_ADVANCED_SETUP_PAGE_H
#define MIRALL_NMCOWNCLOUD_ADVANCED_SETUP_PAGE_H

#include <QWizard>
#include <QLabel>
#include <QPushButton>

#include "wizard/owncloudadvancedsetuppage.h"

namespace OCC {

/**
 * @brief The NMCOwncloudAdvancedSetupPage class.
 * @ingroup gui
 * Subclass of OwncloudAdvancedSetupPage, representing the advanced setup page for NMC OwnCloud.
 */
class NMCOwncloudAdvancedSetupPage : public OwncloudAdvancedSetupPage
{
    Q_OBJECT

public:
    /**
     * @brief Constructs an NMCOwncloudAdvancedSetupPage object.
     * @param wizard Pointer to the parent OwncloudWizard.
     */
    explicit NMCOwncloudAdvancedSetupPage(OwncloudWizard *wizard);

    /**
     * @brief Destructor for NMCOwncloudAdvancedSetupPage.
     */
    ~NMCOwncloudAdvancedSetupPage() override = default;

protected:
    /**
     * @brief Initializes the page and updates the custom folder selection UI.
     */
    void initializePage() override;

private:
    /**
     * @brief Pointer to the QLabel for the custom logo.
     */
    QLabel *_tLogoLbl;

    /**
     * @brief Pointer to the QLabel containing the dynamic setup description.
     */
    QLabel *_detailLabel = nullptr;

    /**
     * @brief Pointer to the custom primary action button.
     */
    QPushButton *_loginBrowserButton = nullptr;

    /**
     * @brief Helper function to clean up elements.
     */
    void cleanUpElements();

    /**
     * @brief Updates texts and controls depending on whether a local folder was selected.
     */
    void updateFolderSelectionUi();
};

} // namespace OCC

#endif // MIRALL_NMCOWNCLOUD_ADVANCED_SETUP_PAGE_H
