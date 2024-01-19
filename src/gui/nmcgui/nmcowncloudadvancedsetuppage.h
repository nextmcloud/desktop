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
    NMCOwncloudAdvancedSetupPage(OwncloudWizard *wizard);

    /**
     * @brief Destructor for NMCOwncloudAdvancedSetupPage.
     */
    ~NMCOwncloudAdvancedSetupPage() = default;

protected:
    void paintEvent(QPaintEvent *event) override;
};

} // namespace OCC

#endif // MIRALL_NMCOWNCLOUD_ADVANCED_SETUP_PAGE_H
