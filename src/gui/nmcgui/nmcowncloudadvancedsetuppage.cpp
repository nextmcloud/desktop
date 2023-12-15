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

#include "nmcgui/nmcowncloudadvancedsetuppage.h"
#include "QtGui/qpainter.h"

namespace OCC {

NMCOwncloudAdvancedSetupPage::NMCOwncloudAdvancedSetupPage(OwncloudWizard *wizard)
    : OwncloudAdvancedSetupPage(wizard)

{
    _ui.confCheckBoxSize->setVisible(false);
    _ui.confSpinBox->setVisible(false);
    _ui.confTraillingSizeLabel->setVisible(false);
    _ui.confCheckBoxSize->setFixedSize(0,0);
    _ui.confSpinBox->setFixedSize(0,0);
    _ui.confTraillingSizeLabel->setFixedSize(0,0);
    _ui.wSyncStrategy->removeItem(_ui.horizontalLayout_6);

    _ui.confCheckBoxExternal->setVisible(false);
    _ui.confCheckBoxExternal->setFixedSize(0,0);
    _ui.wSyncStrategy->removeItem(_ui.horizontalLayout_8);

    _ui.verticalLayout->removeWidget(_ui.errorLabel);
    _ui.wSyncStrategy->insertWidget(0, _ui.errorLabel);
}

void NMCOwncloudAdvancedSetupPage::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.fillRect(rect(), Qt::white);
    painter.end();
    OwncloudAdvancedSetupPage::paintEvent(event);
}

} // namespace OCC
