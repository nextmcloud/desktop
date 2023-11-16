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

#ifndef MIRALL_GENERALSETTINGSMAGENTA_H
#define MIRALL_GENERALSETTINGSMAGENTA_H

#include "nmcguiinterface.h"
#include <GeneralSettings.h>

namespace OCC {

/**
 * @brief The GeneralSettingsMagenta class
 * @ingroup gui
 */
class GeneralSettingsMagenta : public GeneralSettings, public NMCGuiInterface
{
    Q_OBJECT

public:
    explicit GeneralSettingsMagenta(QWidget *parent = nullptr);
    ~GeneralSettingsMagenta() = default;

// NMCGuiInterface interface
protected:
    void setDefaultSettings() override final;
    void setLayout() override final;
    void setLogic() override final;
};


} // namespace OCC
#endif // MIRALL_GENERALSETTINGSMAGENTA_H
