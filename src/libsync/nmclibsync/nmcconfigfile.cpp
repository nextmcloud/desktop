/*
 * SPDX-FileCopyrightText: 2025
 * SPDX-License-Identifier: GPL-2.0-or-later
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
