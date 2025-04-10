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

#include "nmcgui/nmcnetworksettings.h"
#include "networksettings.h"
#include "ui_networksettings.h"

#include <QLabel>
#include <QSpacerItem>
#include <QGridLayout>
#include <QSizePolicy>
#include <QCoreApplication>

namespace OCC {

NMCNetworkSettings::NMCNetworkSettings(const AccountPtr &account, QWidget *parent)
    : NetworkSettings(account, parent)
{
    setLayout();
}

    void NMCNetworkSettings::setLayout()
    {
        // Proxy Settings
        auto *ui = getUi();

        ui->proxyGroupBox->setTitle({});
        ui->proxyGroupBox->layout()->removeWidget(ui->manualProxyRadioButton);
        ui->proxyGroupBox->layout()->removeWidget(ui->noProxyRadioButton);
        ui->proxyGroupBox->layout()->removeWidget(ui->systemProxyRadioButton);
        ui->proxyGroupBox->layout()->removeItem(ui->horizontalLayout_7);
        ui->proxyGroupBox->layout()->removeItem(ui->horizontalSpacer_2);
        ui->proxyGroupBox->layout()->setContentsMargins(16, 16, 16, 16);
        ui->proxyGroupBox->setStyleSheet("QGroupBox { background-color: white; border-radius: 4px; }");

        auto *proxyLayout = qobject_cast<QGridLayout *>(ui->proxyGroupBox->layout());
        auto proxyLabel = new QLabel(QCoreApplication::translate("", "PROXY_SETTINGS"));
        proxyLabel->setStyleSheet("QLabel { font-size: 12px; font-weight: bold; }");

        proxyLayout->addWidget(proxyLabel, 0, 0);
        proxyLayout->addItem(new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed), 1, 0);
        proxyLayout->addWidget(ui->noProxyRadioButton, 2, 0);
        proxyLayout->addWidget(ui->systemProxyRadioButton, 3, 0);
        proxyLayout->addWidget(ui->manualProxyRadioButton, 4, 0);
        proxyLayout->addLayout(ui->horizontalLayout_7, 5, 0);

        ui->horizontalSpacer->changeSize(0, 0, QSizePolicy::Fixed, QSizePolicy::Fixed);

        // Download Box
        ui->verticalSpacer_2->changeSize(0, 0, QSizePolicy::Fixed, QSizePolicy::Fixed);
        ui->downloadBox->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        ui->horizontalLayout_3->setSpacing(8);
        ui->downloadBox->setTitle({});
        ui->downloadBox->layout()->removeWidget(ui->noDownloadLimitRadioButton);
        ui->downloadBox->layout()->removeWidget(ui->autoDownloadLimitRadioButton);
        ui->downloadBox->layout()->removeWidget(ui->downloadLimitRadioButton);
        ui->downloadBox->layout()->removeItem(ui->horizontalLayout_3);
        ui->downloadBox->layout()->setContentsMargins(16, 16, 16, 16);
        ui->downloadBox->setStyleSheet("QGroupBox { background-color: white; border-radius: 4px; }");

        auto *downLayout = qobject_cast<QGridLayout *>(ui->downloadBox->layout());
        auto downLabel = new QLabel(QCoreApplication::translate("", "DOWNLOAD_BANDWIDTH"));
        downLabel->setStyleSheet("QLabel { font-size: 12px; font-weight: bold; }");

        downLayout->addWidget(downLabel, 0, 0);
        downLayout->addItem(new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed), 1, 0);
        downLayout->addWidget(ui->noDownloadLimitRadioButton, 2, 0);
        downLayout->addWidget(ui->autoDownloadLimitRadioButton, 3, 0);
        downLayout->addWidget(ui->downloadLimitRadioButton, 4, 0);
        downLayout->addItem(ui->horizontalLayout_3, 4, 1);

        ui->downloadLimitRadioButton->setFixedHeight(ui->downloadSpinBox->height());

        // Upload Box
        ui->uploadBox->layout()->removeItem(ui->horizontalLayout_4);
        qobject_cast<QGridLayout *>(ui->uploadBox->layout())->addItem(ui->horizontalLayout_4, 2, 1);

        ui->verticalSpacer_3->changeSize(0, 0, QSizePolicy::Fixed, QSizePolicy::Fixed);
        ui->uploadBox->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        ui->horizontalLayout_4->setSpacing(8);
        ui->uploadBox->setTitle({});
        ui->uploadBox->layout()->removeWidget(ui->noUploadLimitRadioButton);
        ui->uploadBox->layout()->removeWidget(ui->autoUploadLimitRadioButton);
        ui->uploadBox->layout()->removeWidget(ui->uploadLimitRadioButton);
        ui->uploadBox->layout()->removeItem(ui->horizontalLayout_4);
        ui->uploadBox->layout()->setContentsMargins(16, 16, 16, 16);
        ui->uploadBox->setStyleSheet("QGroupBox { background-color: white; border-radius: 4px; }");

        auto *upLayout = qobject_cast<QGridLayout *>(ui->uploadBox->layout());
        auto upLabel = new QLabel(QCoreApplication::translate("", "DOWNLOAD_BANDWIDTH"));
        upLabel->setStyleSheet("QLabel { font-size: 12px; font-weight: bold; }");

        upLayout->addWidget(upLabel, 0, 0);
        upLayout->addItem(new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed), 1, 0);
        upLayout->addWidget(ui->noUploadLimitRadioButton, 2, 0);
        upLayout->addWidget(ui->autoUploadLimitRadioButton, 3, 0);
        upLayout->addWidget(ui->uploadLimitRadioButton, 4, 0);
        upLayout->addItem(ui->horizontalLayout_4, 4, 1);

        ui->uploadLimitRadioButton->setFixedHeight(ui->uploadSpinBox->height());
    }

} // namespace OCC 