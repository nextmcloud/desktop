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

#include "nmcgui/nmcselectivesyncdialog.h"
#include <QApplication>
#include <QBoxLayout>
#include <QLabel>
#include <QIcon>
#include <QFrame>
#include <QShowEvent>

namespace OCC {

NMCSelectiveSyncWidget::NMCSelectiveSyncWidget(AccountPtr account, QWidget *parent)
    : SelectiveSyncWidget(account, parent)
{
    // Initialisierung verschoben in showEvent()
}

void NMCSelectiveSyncWidget::showEvent(QShowEvent *event)
{
    static bool initialized = false;
    if (!initialized) {
        initialized = true;

        // Sicher entfernen, wenn vorhanden
        if (_layout && _folderTree && _layout->indexOf(_folderTree) != -1) {
            _layout->removeWidget(_folderTree);
        }
        if (_layout && _header && _layout->indexOf(_header) != -1) {
            _layout->removeWidget(_header);
        }

        _header->setText(QCoreApplication::translate("", "ADD_LIVE_BACKUP_PAGE3_DESCRIPTION"));

        auto *hLayout = new QHBoxLayout();
        hLayout->setSpacing(8);
        hLayout->setContentsMargins(0, 0, 0, 0);

        auto *icon = new QLabel(this);
        icon->setFixedSize(18, 18);
        icon->setPixmap(QIcon(QStringLiteral(":/client/theme/NMCIcons/applicationLogo.svg")).pixmap(18, 18));
        hLayout->addWidget(icon);

        auto *stepLabel = new QLabel(this);
        stepLabel->setText(QCoreApplication::translate("", "ADD_LIVE_BACKUP_HEADLINE"));
        stepLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        stepLabel->setStyleSheet("QLabel { color: black; font-size: 13px; font-weight: bold; }");
        hLayout->addWidget(stepLabel);

        auto *hContainer = new QWidget(this);
        hContainer->setLayout(hLayout);
        _layout->addWidget(hContainer);

        auto *vLayout = new QVBoxLayout();
        vLayout->setSpacing(8);
        vLayout->addWidget(_header);
        vLayout->addWidget(_folderTree);

        _folderTree->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

        auto *vContainer = new QFrame(this);
        vContainer->setLayout(vLayout);
        vContainer->setObjectName(QStringLiteral("whiteBackgroundLayout"));
        vContainer->setStyleSheet(QStringLiteral("QFrame#whiteBackgroundLayout { background-color: white; border-radius: 4px; }"));

        _layout->addWidget(vContainer);
    }

    SelectiveSyncWidget::showEvent(event);
}

} // namespace OCC