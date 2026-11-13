/*
 * SPDX-FileCopyrightText: 2026 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#ifndef NMCADVANCEDSETTINGS_H
#define NMCADVANCEDSETTINGS_H

#include "advancedsettings.h"

namespace OCC
{

class NMCAdvancedSettings : public AdvancedSettings
{
    Q_OBJECT

public:
    explicit NMCAdvancedSettings(QWidget *parent = nullptr);
};

} // namespace OCC

#endif // NMCADVANCEDSETTINGS_H
