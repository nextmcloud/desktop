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

#include "nmcgui/nmcaccountsettings.h"
#include "ui_accountsettings.h"
#include "qdesktopservices.h"


namespace OCC {

NMCAccountSettings::NMCAccountSettings(AccountState *accountState, QWidget *parent)
    : AccountSettings(accountState, parent)
{
    setDefaultSettings();
    setLayout();
}

void NMCAccountSettings::setDefaultSettings()
{
    //Set default settings
    getUi()->encryptionMessage->setCloseButtonVisible(true);
    getUi()->selectiveSyncStatus->setVisible(false);
    getUi()->selectiveSyncNotification->setVisible(false);
    getUi()->accountStatus->setVisible(false);
    getUi()->bigFolderUi->setVisible(false);
}

void NMCAccountSettings::setLayout()
{
    //Fix layout
    getUi()->storageGroupBox->removeWidget(getUi()->quotaInfoLabel);
    getUi()->storageGroupBox->removeWidget(getUi()->quotaProgressBar);

    auto *magentaHLayout = new QHBoxLayout(this);
    magentaHLayout->setSpacing(32);

    auto *quotaVLayout = new QVBoxLayout(this);
    quotaVLayout->setSpacing(4);
    auto *quota = new QLabel(this);
    quota->setText(tr("USED_STORAGE_%1").arg(QString::number(getUi()->quotaProgressBar->value() > 0 ? getUi()->quotaProgressBar->value() : 0)));

    quotaVLayout->addSpacerItem(new QSpacerItem(1,20, QSizePolicy::Fixed, QSizePolicy::Fixed));
    quotaVLayout->addWidget(getUi()->quotaInfoLabel);
    getUi()->quotaInfoLabel->setStyleSheet("QLabel{font-size: 18px;}");
    quotaVLayout->addWidget(getUi()->quotaProgressBar);
    getUi()->quotaProgressBar->setStyleSheet("QProgressBar {"
        "    background-color: #e5e5e5;"
        "    color: black;"
        "    border-width: 1px;"
        "    border-color: black;"
        "    border-radius: 4px;"
        "}"

        "QProgressBar::chunk {"
        "    background-color: #ea0a8e; }");
    getUi()->quotaProgressBar->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    quotaVLayout->addWidget(quota);
    quota->setStyleSheet("font-size: 13px;");
    quotaVLayout->addSpacerItem(new QSpacerItem(1,20, QSizePolicy::Fixed, QSizePolicy::Fixed));

    magentaHLayout->addLayout(quotaVLayout);

    auto *storageLinkButton = new QPushButton(tr("STORAGE_EXTENSION"), this);
    storageLinkButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    storageLinkButton->setStyleSheet("QPushButton {"
        "    height: 32px;"
        "    width: 180px;"
        "    border: 1px solid black;"
        "    background-color: #ededed;"
        "    font-size: 13px;"
        "    border-radius: 4px;"
        "} QPushButton::hover {"
        "    background-color: white;"
        "}");
    connect(storageLinkButton, &QPushButton::clicked, this, [](){
        QDesktopServices::openUrl(QUrl("https://cloud.telekom-dienste.de/tarife"));
    });
    magentaHLayout->addWidget(storageLinkButton);
    magentaHLayout->addSpacerItem(new QSpacerItem(8,1, QSizePolicy::Fixed, QSizePolicy::Fixed));

    getUi()->gridLayout->addLayout(magentaHLayout, 4, 0);
}

} // namespace OCC
