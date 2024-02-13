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

#ifndef MIRALL_GENERALSETTINGSMAGENTA_H
#define MIRALL_GENERALSETTINGSMAGENTA_H

#include "generalsettings.h"

namespace OCC {

/**
 * @brief The NMCGeneralSettings class
 *
 * This class represents the Magenta-specific implementation of general settings
 * for a graphical user interface. It inherits from the base class GeneralSettings.
 *
 * @ingroup gui
 */
class NMCGeneralSettings : public GeneralSettings
{
    Q_OBJECT

public:
    /**
     * @brief Constructor for NMCGeneralSettings
     *
     * Creates an instance of NMCGeneralSettings with the specified parent widget.
     *
     * @param parent The parent widget (default is nullptr).
     */
    explicit NMCGeneralSettings(QWidget *parent = nullptr);

    /**
     * @brief Destructor for NMCGeneralSettings
     */
    ~NMCGeneralSettings() = default;

protected:
    /**
     * @brief Set default settings
     *
     * Sets the default values for Magenta-specific general settings.
     */
    void setDefaultSettings();

    /**
     * @brief Set layout
     *
     * Sets the layout for the Magenta-specific general settings user interface.
     */
    void setNMCLayout();
};

} // namespace OCC
#endif // MIRALL_GENERALSETTINGSMAGENTA_H
