/*
 * Copyright (C) by Mauro Mura
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 */

#include "nmcgeneralsettings.h"
#include "generalsettings.h"
#include "ui_generalsettings.h"

#include <QAbstractButton>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>

namespace OCC
{

NMCGeneralSettings::NMCGeneralSettings(QWidget *parent)
    : GeneralSettings(parent)
{
    setDefaultSettings();
    setNMCLayout();
}

void NMCGeneralSettings::setDefaultSettings()
{
    getUi()->monoIconsCheckBox->setVisible(false);
    getUi()->chatNotificationsCheckBox->setVisible(false);
    getUi()->callNotificationsCheckBox->setVisible(false);
    getUi()->quotaWarningNotificationsCheckBox->setVisible(false);
}

void NMCGeneralSettings::setNMCLayout()
{
    getUi()->monoIconsRowWidget->setVisible(false);
    getUi()->startupSeparator->setVisible(true);

    getUi()->serverNotificationsRow->removeWidget(getUi()->serverNotificationsLabel);
    getUi()->serverNotificationsRow->removeWidget(getUi()->serverNotificationsCheckBox);
    getUi()->serverNotificationsLabel->setParent(getUi()->generalGroupBox);
    getUi()->serverNotificationsCheckBox->setParent(getUi()->generalGroupBox);

    auto *serverNotificationsRow = new QHBoxLayout;
    serverNotificationsRow->setContentsMargins(0, 0, 0, 0);
    serverNotificationsRow->addWidget(getUi()->serverNotificationsLabel);
    serverNotificationsRow->addStretch();
    serverNotificationsRow->addWidget(getUi()->serverNotificationsCheckBox);

    getUi()->generalGroupBox->setTitle({});
    getUi()->generalGroupBox->setAttribute(Qt::WA_StyledBackground, true);

    getUi()->generalSettingsLayout->addLayout(serverNotificationsRow);
    getUi()->generalSettingsLayout->setContentsMargins(24, 24, 24, 24);
    getUi()->generalSettingsLayout->setSpacing(8);

    getUi()->autostartCheckBox->setFocusPolicy(Qt::NoFocus);
    getUi()->serverNotificationsCheckBox->setFocusPolicy(Qt::NoFocus);
    getUi()->serverNotificationsLabel->setVisible(true);
    getUi()->serverNotificationsCheckBox->setVisible(true);
    getUi()->notificationsGroupBox->setVisible(false);
}

} // namespace OCC
