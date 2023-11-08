/*
 * Copyright (C) by Eugen Fischer <danimo@owncloud.com>
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

#include "generalsettingsmagenta.h"
#include "generalsettings.h"
#include "ui_generalsettings.h"


namespace OCC {

GeneralSettingsMagenta::GeneralSettingsMagenta(QWidget *parent)
    : GeneralSettings(parent)
{
    _ui->callNotificationsCheckBox->setVisible(false);
    _ui->newExternalStorage->setVisible(false);
    _ui->showInExplorerNavigationPaneCheckBox->setVisible(false);
    _ui->ignoredFilesButton->setVisible(false);
    _ui->debugArchiveButton->setVisible(false);
    _ui->aboutAndUpdatesGroupBox->setVisible(false);
    _ui->updateChannelLabel->setVisible(false);
    _ui->updateChannel->setVisible(false);
    _ui->updateStateLabel->setVisible(false);
    _ui->restartButton->setVisible(false);
    _ui->updateButton->setVisible(false);
}

} // namespace OCC
