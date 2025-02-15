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

#include "nmcconfigfile.h"

namespace{
    static constexpr char TransferUsageDataC[] = "TransferUsageData";
}

namespace OCC {

bool NMCConfigFile::transferUsageData(const QString &connection) const
{
    QString con(connection);
    if (connection.isEmpty())
        con = defaultConnection();

    QVariant fallback = getValue(QLatin1String(TransferUsageDataC), con, false);
    fallback = getValue(QLatin1String(TransferUsageDataC), QString(), fallback);

    QVariant value = getPolicySetting(QLatin1String(TransferUsageDataC), fallback);
    return value.toBool();
}

void NMCConfigFile::setTransferUsageData(bool usageData, const QString &connection)
{
    QString con(connection);
    if (connection.isEmpty())
        con = defaultConnection();

    QSettings settings(configFile(), QSettings::IniFormat);
    settings.beginGroup(con);

    settings.setValue(QLatin1String(TransferUsageDataC), QVariant(usageData));
    settings.sync();
}

} // namespace OCC
