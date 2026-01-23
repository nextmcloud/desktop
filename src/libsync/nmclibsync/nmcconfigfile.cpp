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
#include "accountmanager.h"

namespace OCC {

static QString defaultConnectionId()
{
    const auto account = AccountManager::instance()->defaultAccount();
    return account ? account->accountId() : QString();
}

bool NMCConfigFile::transferUsageData(const QString &connection) const
{
    QString con(connection);
    if (con.isEmpty()) {
        con = defaultConnectionId();
    }

    QVariant fallback = getValue(m_transferUsageData, con, false);
    fallback = getValue(m_transferUsageData, QString(), fallback);

    QVariant value = getPolicySetting(m_transferUsageData, fallback);
    return value.toBool();
}

void NMCConfigFile::setTransferUsageData(bool usageData, const QString &connection)
{
    QString con(connection);
    if (con.isEmpty()) {
        con = defaultConnectionId();
    }

    QSettings settings(configFile(), QSettings::IniFormat);
    settings.beginGroup(con);
    settings.setValue(m_transferUsageData, usageData);
    settings.sync();
}

} // namespace OCC
