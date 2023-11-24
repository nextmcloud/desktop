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

#include "nmcsettingsdialog.h"
#include "QtWidgets/qtoolbar.h"
#include "settingsdialog.h"

namespace OCC {

NMCSettingsDialog::NMCSettingsDialog(ownCloudGui *gui, QWidget *parent)
    : SettingsDialog(gui, parent)
{


}

void NMCSettingsDialog::slotSwitchPage(QAction *action)
{
    SettingsDialog::slotSwitchPage(action);

    customizeStyle();
    if(action->text() == QCoreApplication::translate("OCC::SettingsDialog","General"))
    {
        const QIcon openIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/NMCIcons/settings_magenta.svg"));
        action->setIcon(openIcon);
    }
    else if(action->text() == QCoreApplication::translate("OCC::SettingsDialog","Network"))
    {
        const QIcon openIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/NMCIcons/network_magenta.svg"));
        action->setIcon(openIcon);
    }
    else
    {
        const QIcon openIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/NMCIcons/account_magenta.svg"));
        action->setIcon(openIcon);
    }
}


} // namespace OCC
