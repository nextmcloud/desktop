/*
 * Copyright (C) by Daniel Molkentin <danimo@owncloud.com>
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

#ifndef MIRALL_NMCCONFIGFILE_H
#define MIRALL_NMCCONFIGFILE_H

#include "configfile.h"

namespace OCC {

/**
 * @brief The NMCConfigFile class
 * @ingroup lib
 */
class NMCConfigFile : public ConfigFile
{

public:
    explicit NMCConfigFile() = default;
    ~NMCConfigFile() = default;

    // MagentaCustomization
    [[nodiscard]] bool transferUsageData(const QString &connection = QString()) const;
    void setTransferUsageData(bool usageData, const QString &connection);
};


} // namespace OCC
#endif // MIRALL_NMCCONFIGFILE_H