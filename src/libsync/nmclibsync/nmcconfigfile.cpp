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
#include "theme.h"
#include <QSettings>

namespace OCC {

const QString NMCConfigFile::m_transferUsageData =
    QStringLiteral("TransferUsageData");

bool NMCConfigFile::transferUsageData(const QString &connection) const
{
    const QString group =
        connection.isEmpty()
            ? Theme::instance()->appName()
            : connection;

    QVariant fallback = getValue(m_transferUsageData, group, false);
    fallback = getValue(m_transferUsageData, QString(), fallback);

    const QVariant value = getPolicySetting(m_transferUsageData, fallback);
    return value.toBool();
}

void NMCConfigFile::setTransferUsageData(bool usageData, const QString &connection)
{
    const QString group =
        connection.isEmpty()
            ? Theme::instance()->appName()
            : connection;

    QSettings settings(configFile(), QSettings::IniFormat);
    settings.beginGroup(group);

    settings.setValue(m_transferUsageData, usageData);
    settings.sync();
}

} // namespace OCC
