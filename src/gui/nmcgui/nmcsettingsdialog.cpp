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
#include <QBoxLayout>
#include <QLabel>
#include <QToolBar>
#include "settingsdialog.h"

namespace OCC {

NMCSettingsDialog::NMCSettingsDialog(ownCloudGui *gui, QWidget *parent)
    : SettingsDialog(gui, parent)
{
    getToolBar()->setIconSize(QSize(24, 24));
    fixAccountButton();
}

void NMCSettingsDialog::slotAccountAvatarChanged()
{
    //Intercept the base class slot, so the round avatar is not set. (dont pass to base class)
    //Fix Account button size, for ech new created account
    fixAccountButton();
}

void NMCSettingsDialog::fixAccountButton() const
{
    auto *toolbar = getToolBar();
    if (!toolbar) {
        return;
    }

    const auto actions = toolbar->actions();
    if (actions.isEmpty()) {
        return;
    }
}

} // namespace OCC
