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

#ifndef MIRALL_ACCOUNTSETTINGSMAGENTA_H
#define MIRALL_ACCOUNTSETTINGSMAGENTA_H

#include <accountsettings.h>

namespace OCC {

/**
 * @brief The NMCAccountSettingsMagenta class
 * @ingroup gui
 */
class NMCAccountSettings : public AccountSettings
{
    Q_OBJECT

public:
    explicit NMCAccountSettings(AccountState *accountState, QWidget *parent = nullptr);
    ~NMCAccountSettings() = default;

protected:
    void setDefaultSettings();
    void setLayout();
};


} // namespace OCC
#endif // MIRALL_ACCOUNTSETTINGSMAGENTA_H
