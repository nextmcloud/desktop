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

#ifndef MIRALL_NMCCONFIGFILE_H
#define MIRALL_NMCCONFIGFILE_H

#include "configfile.h"

namespace OCC {

/**
 * @brief The NMCConfigFile class.
 * @ingroup lib
 *
 * Subclass of ConfigFile representing the configuration file for NMC (MagentaCustomization) in the OwnCloud Sync library.
 */
class OWNCLOUDSYNC_EXPORT NMCConfigFile : public ConfigFile
{
public:
    /**
     * @brief Default constructor for NMCConfigFile.
     */
    explicit NMCConfigFile() = default;

    /**
     * @brief Default destructor for NMCConfigFile.
     */
    ~NMCConfigFile() = default;

    /**
     * @brief Check if transferring usage data is enabled.
     *
     * @param connection Optional parameter specifying the connection; default is an empty string.
     * @return True if transferring usage data is enabled, false otherwise.
     */
    [[nodiscard]] bool transferUsageData(const QString &connection = QString()) const;

    /**
     * @brief Set the status of transferring usage data.
     *
     * @param usageData True to enable transferring usage data, false to disable.
     * @param connection Optional parameter specifying the connection; default is an empty string.
     */
    void setTransferUsageData(bool usageData, const QString &connection);

private:
    QString m_transferUsageData = "TransferUsageData"; ///< Configuration key for storing the status of transferring usage data.
};



} // namespace OCC
#endif // MIRALL_NMCCONFIGFILE_H