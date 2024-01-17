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
 * @brief The NMCOwncloudAdvancedSetupPage class
 * @ingroup gui
 */
class NMCOwncloudAdvancedSetupPage : public OwncloudAdvancedSetupPage
{
    Q_OBJECT
public:
    NMCOwncloudAdvancedSetupPage(OwncloudWizard *wizard);
    ~NMCOwncloudAdvancedSetupPage() = default;
};

} // namespace OCC

#endif
