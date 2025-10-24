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

#ifndef MIRALL_NETWORKSETTINGSMAGENTA_H
#define MIRALL_NETWORKSETTINGSMAGENTA_H

#include "networksettings.h"

QT_BEGIN_NAMESPACE
class QWidget;
QT_END_NAMESPACE

namespace OCC {

/**
 * @class NMCNetworkSettings
 * @ingroup gui
 * @brief Derived class for network settings specific to NMC (Magenta) in the ownCloud client.
 */
class NMCNetworkSettings : public NetworkSettings
{
    Q_OBJECT

    public:
        /**
         * @brief Constructor
         * @param account Account pointer used to configure settings
         * @param parent Parent widget
         */
        explicit NMCNetworkSettings(const AccountPtr &account = {}, QWidget *parent = nullptr);

        /**
         * @brief Destructor
         */
        ~NMCNetworkSettings() override = default;

    private:
        /**
         * @brief Initializes and sets the custom layout
         */
        void setLayout();
    };

} // namespace OCC

#endif // MIRALL_NETWORKSETTINGSMAGENTA_H