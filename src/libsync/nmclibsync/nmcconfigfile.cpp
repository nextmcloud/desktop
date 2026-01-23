/*
 * SPDX-FileCopyrightText: 2025
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "nmcconfigfile.h"

#include <QSettings>
#include <QString>
#include <QStringLiteral>

namespace OCC {

namespace {

static const QString DefaultConnection = QStringLiteral("default");

} // unnamed namespace

NMCConfigFile::NMCConfigFile(const QString &configFile)
    : _settings(configFile, QSettings::IniFormat)
{
}

QString NMCConfigFile::connectionId() const
{
    return _settings.value(QStringLiteral("Connection/id"),
                            DefaultConnection).toString();
}

void NMCConfigFile::setConnectionId(const QString &connectionId)
{
    _settings.setValue(QStringLiteral("Connection/id"),
                       connectionId);
}

QString NMCConfigFile::someOtherValue() const
{
    return _settings.value(QStringLiteral("Connection/other"),
                            DefaultConnection).toString();
}

} // namespace OCC
