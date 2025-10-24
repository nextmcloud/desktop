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

#ifndef MIRALL_SETTINGSDIALOGMAGENTA_H
#define MIRALL_SETTINGSDIALOGMAGENTA_H

#include <settingsdialog.h>

namespace OCC {

/**
 * @brief The NMCSettingsDialog class
 *
 * This class represents the settings dialog specific to the Magenta theme.
 * It inherits from SettingsDialog and provides additional functionalities
 * or customizations related to the Magenta theme.
 *
 * @ingroup gui
 */
class NMCSettingsDialog : public SettingsDialog
{
    Q_OBJECT

public:
    /**
     * @brief Constructor for NMCSettingsDialog
     *
     * @param gui Pointer to the ownCloudGui instance.
     * @param parent Pointer to the parent QWidget (default is nullptr).
     */
    explicit NMCSettingsDialog(ownCloudGui *gui, QWidget *parent = nullptr);

    /**
     * @brief Destructor for NMCSettingsDialog
     */
    ~NMCSettingsDialog() = default;

public slots:
    /**
     * @brief Slot for handling changes in the account avatar
     */
    void slotAccountAvatarChanged();

    // NMCGuiInterface interface
protected:
    /**
     * @brief Sets the layout for the NMCSettingsDialog
     */
    void setLayout() const;

private:
    /**
     * @brief Fixes the appearance of the account button
     */
    void fixAccountButton() const;
};

} // namespace OCC
#endif // MIRALL_SETTINGSDIALOGMAGENTA_H
