/*
 * SPDX-FileCopyrightText: 2026 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#ifndef NMCINFOSETTINGS_H
#define NMCINFOSETTINGS_H

#include "infosettings.h"

namespace OCC
{

class NMCInfoSettings : public InfoSettings
{
    Q_OBJECT

public:
    explicit NMCInfoSettings(QWidget *parent = nullptr);

protected:
    [[nodiscard]] QString customizeUpdateStatus(const QString &status) const override;
};

} // namespace OCC

#endif // NMCINFOSETTINGS_H
