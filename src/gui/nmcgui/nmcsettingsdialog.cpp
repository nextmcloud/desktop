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
    setLayout();

    // The window has no background widget, use palette
    // QPalette palette;
    // palette.setColor(QPalette::Window, QColor("#F3f3f3"));
    // setPalette(palette);

    setFixedSize(760,760);

    getToolBar()->setFixedHeight(92); // 76px button height + 8 + 8 margin top and bottom
    getToolBar()->setContentsMargins(8, 0, 8, 0); // Left margin not accepted, Qt bug?
}

void NMCSettingsDialog::slotAccountAvatarChanged()
{
    //Intercept the base class slot, so the round avatar is not set. (dont pass to base class)
    //Fix Account button size, for ech new created account
    fixAccountButton();
}

void OCC::NMCSettingsDialog::setLayout() const
{
    //Fix network and general settings button size
    const auto actions = getToolBar()->actions();
    for(auto *action : actions)
    {
        if((action->text() == QCoreApplication::translate("OCC::SettingsDialog","General") || action->text() == QCoreApplication::tr("General")) ||
            (action->text() == QCoreApplication::translate("OCC::SettingsDialog","Network") || action->text() == QCoreApplication::tr("Network")) ||
            (action->text() == QCoreApplication::translate("OCC::SettingsDialog","Account") || action->text() == QCoreApplication::tr("Account")))
        {
            auto *widget = getToolBar()->widgetForAction(action);
            if(widget)
            {
                widget->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
                widget->setFixedSize(76, 76);
            }
        }
    }

    //Fix initial account button size and stylesheet
    fixAccountButton();
}

void NMCSettingsDialog::fixAccountButton() const
{
    auto toolbar = getToolBar();

    // Sicher prüfen, ob ein Spacer schon existiert
    auto *firstAction = toolbar->actions().at(0);
    auto *firstWidget = toolbar->widgetForAction(firstAction);
    if (!firstWidget || !firstWidget->objectName().startsWith("spacer_left")) {
        auto *spacer = new QWidget(toolbar);
        spacer->setFixedWidth(16);
        spacer->setObjectName("spacer_left");
        spacer->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        toolbar->insertWidget(firstAction, spacer);
    }

    // Account-Button anpassen
    if (toolbar->actions().size() > 1) {
        auto action = toolbar->actions().at(1); // Index 1, da davor Spacer
        auto *widget = toolbar->widgetForAction(action);
        if(widget)
        {
            widget->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
            widget->setFixedSize(152, 76);
        }
    }
}

} // namespace OCC
