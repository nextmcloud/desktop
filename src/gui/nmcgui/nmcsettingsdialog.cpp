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
#include "QtWidgets/qboxlayout.h"
#include "QtWidgets/qlabel.h"
#include "QtWidgets/qtoolbar.h"
#include "settingsdialog.h"

namespace OCC {

NMCSettingsDialog::NMCSettingsDialog(ownCloudGui *gui, QWidget *parent)
    : SettingsDialog(gui, parent)
{
    setLayout();

    //The window has no background widget, use palette
    QPalette palette;
    palette.setColor(QPalette::Window, QColor("#F3f3f3"));
    setPalette(palette);

    setFixedSize(750,760);

    getToolBar()->setFixedHeight(91); ///75px button height + 8 + 8 margin top and bottom
    getToolBar()->setStyleSheet("QToolBar{background: #f3f3f3; background-color: #f3f3f3; border-width: 0px; border-color: none;}");
    getToolBar()->setContentsMargins(8,0,8,0); //Left margin not accepted, Qt bug?
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
                widget->setFixedSize(75, 75);
                widget->setStyleSheet(
                    "QToolButton { border: none; background-color: #f3f3f3; border-radius: 4px; font-size: 13px; padding: 8px;}"
                    "QToolButton:hover { background-color: #e5e5e5; }"
                    );
            }
        }
    }

    //Fix initial account button size and stylesheet
    fixAccountButton();
}

void NMCSettingsDialog::fixAccountButton() const
{
    auto action = getToolBar()->actions().at(0);
    auto *widget = getToolBar()->widgetForAction(action);
    if(widget)
    {
        widget->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        widget->setFixedSize(128, 75);
        widget->setStyleSheet(
            "QToolButton { border: none; background-color: #f3f3f3; border-radius: 4px; font-size: 13px; padding: 8px;}"
            "QToolButton:hover { background-color: #e5e5e5; }"
            );
    }
}

} // namespace OCC
