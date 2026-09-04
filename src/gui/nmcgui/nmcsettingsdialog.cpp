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
#include "settingsdialog.h"

#include <QScrollArea>
#include <QToolBar>

namespace OCC {

NMCSettingsDialog::NMCSettingsDialog(ownCloudGui *gui, QWidget *parent)
    : SettingsDialog(gui, parent)
{
    fixAccountButton();
    fixNavigationBackground();
}

void NMCSettingsDialog::slotAccountAvatarChanged()
{
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

void NMCSettingsDialog::fixNavigationBackground() const
{
    auto *navigationScroll = findChild<QScrollArea *>(QStringLiteral("settings_navigation_scroll"));
    if (!navigationScroll) {
        return;
    }

    navigationScroll->setAttribute(Qt::WA_StyledBackground, true);
    navigationScroll->setStyleSheet(QStringLiteral(
        "QScrollArea#settings_navigation_scroll {"
        " background: palette(light);"
        " border-radius: 10px;"
        " border: none;"
        " padding: 4px;"
        "}"
        "QScrollArea#settings_navigation_scroll > QWidget > QWidget {"
        " background: transparent;"
        "}"
    ));

    if (navigationScroll->viewport()) {
        navigationScroll->viewport()->setAutoFillBackground(false);
        navigationScroll->viewport()->setStyleSheet(QStringLiteral("background: transparent;"));
    }
}

} // namespace OCC