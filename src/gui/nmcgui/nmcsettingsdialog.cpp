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
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include "nmcsettingsdialog.h"

#include <QScrollArea>
#include <QScrollBar>

namespace OCC {

namespace
{
constexpr auto settingsNavigationWidth = 280;
}

NMCSettingsDialog::NMCSettingsDialog(ownCloudGui *gui, QWidget *parent)
    : SettingsDialog(gui, parent)
{
    if (auto *navigationScroll = findChild<QScrollArea *>(QStringLiteral("settings_navigation_scroll"))) {
        navigationScroll->setFixedWidth(settingsNavigationWidth);
    }

    styleContentScrollBar();
}

bool NMCSettingsDialog::accountAvatarInNavigationEnabled() const
{
    return false;
}

void NMCSettingsDialog::styleContentScrollBar() const
{
    auto *contentScroll = findChild<QScrollArea *>(QStringLiteral("settings_content_scroll"));

    if (!contentScroll) {
        return;
    }

    contentScroll->verticalScrollBar()->setStyleSheet(
        QStringLiteral("QScrollBar:vertical {"
                       "    background: transparent;"
                       "    width: 8px;"
                       "    margin: 4px 2px 4px 2px;"
                       "}"
                       "QScrollBar::handle:vertical {"
                       "    background: palette(mid);"
                       "    min-height: 28px;"
                       "    border-radius: 3px;"
                       "}"
                       "QScrollBar::handle:vertical:hover {"
                       "    background: palette(midlight);"
                       "}"
                       "QScrollBar::add-line:vertical,"
                       "QScrollBar::sub-line:vertical {"
                       "    height: 0px;"
                       "    background: transparent;"
                       "    border: none;"
                       "}"
                       "QScrollBar::add-page:vertical,"
                       "QScrollBar::sub-page:vertical {"
                       "    background: transparent;"
                       "}"));
}

} // namespace OCC
