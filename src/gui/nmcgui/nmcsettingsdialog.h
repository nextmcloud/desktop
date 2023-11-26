/*
 * Copyright (C) by Daniel Molkentin <danimo@owncloud.com>
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

#ifndef MIRALL_SETTINGSDIALOGMAGENTA_H
#define MIRALL_SETTINGSDIALOGMAGENTA_H

#include "nmcgui/nmcguiinterface.h"
#include <settingsdialog.h>

namespace OCC {

/**
 * @brief The SettingsDialogMagenta class
 * @ingroup gui
 */
class NMCSettingsDialog : public SettingsDialog, public NMCGuiInterface
{
    Q_OBJECT

public:
    explicit NMCSettingsDialog(ownCloudGui *gui, QWidget *parent = nullptr);
    ~NMCSettingsDialog() = default;

public slots:
    void slotSwitchPage(QAction *action) override final;
    void slotAccountAvatarChanged() override final;

// NMCGuiInterface interface
protected:
    void setDefaultSettings() override final;
    void setLayout() override final;
    void setLogic() override final;

private:
    void fixAccountButton();
};


} // namespace OCC
#endif // MIRALL_SETTINGSDIALOGMAGENTA_H
