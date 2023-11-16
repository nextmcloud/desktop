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

#include "accountsettingsmagenta.h"
#include "accountsettings.h"
#include "ui_accountsettings.h"
#include "qdesktopservices.h"


namespace OCC {

AccountSettingsMagenta::AccountSettingsMagenta(AccountState *accountState, QWidget *parent)
    : AccountSettings(accountState, parent)
{
    setDefaultSettings();
    setLayout();
    setLogic();
}

void AccountSettingsMagenta::setDefaultSettings()
{
    //Set default settings
    _ui->encryptionMessage->setCloseButtonVisible(true);
    _ui->selectiveSyncStatus->setVisible(false);
    _ui->selectiveSyncNotification->setVisible(false);
    _ui->accountStatus->setVisible(false);
    _ui->bigFolderUi->setVisible(false);
}

void AccountSettingsMagenta::setLayout()
{
    //Fix layout
    _ui->storageGroupBox->removeWidget(_ui->quotaInfoLabel);
    _ui->storageGroupBox->removeWidget(_ui->quotaProgressBar);

    auto *quotaVLayout = new QVBoxLayout(this);
    //auto *storage = new QLabel("test"); //Todo? Später zusammenbauen?
    auto *quota = new QLabel("quota");
    quota->setText(tr("Speicherplatz zu ") + QString::number(_ui->quotaProgressBar->value() > 0 ? _ui->quotaProgressBar->value() : 0) + " %" + tr(" belegt")); //Todo
    quotaVLayout->addWidget(_ui->quotaInfoLabel);
    quotaVLayout->addWidget(_ui->quotaProgressBar);
    quotaVLayout->addWidget(quota);

    auto *magentaHLayout = new QHBoxLayout(this);
    magentaHLayout->addLayout(quotaVLayout);
    auto *storageLinkButton = new QPushButton(this);
    storageLinkButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    storageLinkButton->setFixedHeight(50);
    connect(storageLinkButton, &QPushButton::clicked, this, [](){
        QDesktopServices::openUrl(QUrl("https://cloud.telekom-dienste.de/tarife"));
    });
    storageLinkButton->setText(tr("Speicher erweitern"));
    magentaHLayout->addWidget(storageLinkButton);

    _ui->gridLayout->addLayout(magentaHLayout, 0, 0);
}

void AccountSettingsMagenta::setLogic()
{

}




} // namespace OCC
