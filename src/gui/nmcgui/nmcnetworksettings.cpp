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

#include "nmcnetworksettings.h"
#include "NetworkSettings.h"
#include "ui_networksettings.h"


namespace OCC {

NMCNetworkSettings::NMCNetworkSettings(QWidget *parent)
    : NetworkSettings(parent)
{
    setDefaultSettings();
    setLayout();
    setLogic();
}

void NMCNetworkSettings::setDefaultSettings()
{
    //Set default settings
    _ui->manualSettings->setVisible(true);
    _ui->manualSettings->setEnabled(false);
    _ui->downloadSpinBox->setVisible(true);
    if(_ui->downloadLimitRadioButton->isChecked())
    {
        _ui->downloadSpinBox->setEnabled(true);
    }
    else{
        _ui->downloadSpinBox->setEnabled(false);
    }
    _ui->downloadSpinBoxLabel->setVisible(true);
    _ui->uploadSpinBox->setVisible(true);
    if(_ui->uploadLimitRadioButton->isChecked())
    {
        _ui->uploadSpinBox->setEnabled(true);
    }
    else{
        _ui->uploadSpinBox->setEnabled(false);
    }
    _ui->uploadSpinBoxLabel->setVisible(true);
}

void NMCNetworkSettings::setLayout()
{
    //Fix Layouts
    //Proxy settings
    _ui->manualSettings->layout()->removeItem(_ui->horizontalLayout_8);
    auto *spinBoxWidget = new QWidget(this);
    spinBoxWidget->setEnabled(false);
    spinBoxWidget->setLayout(_ui->horizontalLayout_8);
    _ui->horizontalLayout_8->setContentsMargins(0,0,0,0);
    static_cast<QGridLayout *>(_ui->proxyGroupBox->layout())->addWidget(spinBoxWidget, 2, 1);
    disconnect(_ui->manualProxyRadioButton, &QAbstractButton::toggled, _ui->manualSettings, &QWidget::setVisible);
    connect(_ui->manualProxyRadioButton, &QAbstractButton::toggled, this, [this, spinBoxWidget](bool checked){
        _ui->manualSettings->setEnabled(checked);
        spinBoxWidget->setEnabled(checked);
    });

    _ui->manualSettings->setContentsMargins(0,0,0,0);
    _ui->manualSettings->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    _ui->horizontalSpacer_2->changeSize(0,0, QSizePolicy::Fixed, QSizePolicy::Fixed);

    //Remove spacer, so the elements can expand.
    _ui->horizontalSpacer->changeSize(0,0, QSizePolicy::Fixed, QSizePolicy::Fixed);

    //DonwloadBox
    _ui->downloadBox->layout()->removeItem(_ui->horizontalLayout_3);
    static_cast<QGridLayout *>(_ui->downloadBox->layout())->addItem(_ui->horizontalLayout_3, 3, 1);
    _ui->verticalSpacer_2->changeSize(0,0, QSizePolicy::Fixed, QSizePolicy::Fixed);
    _ui->downloadBox->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    _ui->horizontalLayout_3->setSpacing(5);
    //UploadBox
    _ui->uploadBox->layout()->removeItem(_ui->horizontalLayout_4);
    static_cast<QGridLayout *>(_ui->uploadBox->layout())->addItem(_ui->horizontalLayout_4, 2, 1);
    _ui->verticalSpacer_3->changeSize(0,0, QSizePolicy::Fixed, QSizePolicy::Fixed);
    _ui->uploadBox->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    _ui->horizontalLayout_4->setSpacing(5);

    //Fix widgets visibility
    //Download settings
    connect(_ui->noDownloadLimitRadioButton, &QAbstractButton::clicked, this, [this](){
        _ui->downloadSpinBox->setVisible(true);
        _ui->downloadSpinBoxLabel->setVisible(true);
        _ui->downloadSpinBox->setEnabled(false);
    });
    connect(_ui->autoDownloadLimitRadioButton, &QAbstractButton::clicked, this, [this](){
        _ui->downloadSpinBox->setVisible(true);
        _ui->downloadSpinBoxLabel->setVisible(true);
        _ui->downloadSpinBox->setEnabled(false);
    });
    connect(_ui->downloadLimitRadioButton, &QAbstractButton::clicked, this, [this](){
        _ui->downloadSpinBox->setVisible(true);
        _ui->downloadSpinBoxLabel->setVisible(true);
        _ui->downloadSpinBox->setEnabled(true);
    });


    //Upload settings
    connect(_ui->noUploadLimitRadioButton, &QAbstractButton::clicked, this, [this](){
        _ui->uploadSpinBox->setVisible(true);
        _ui->uploadSpinBoxLabel->setVisible(true);
        _ui->uploadSpinBox->setEnabled(false);
    });
    connect(_ui->autoUploadLimitRadioButton, &QAbstractButton::clicked, this, [this](){
        _ui->uploadSpinBox->setVisible(true);
        _ui->uploadSpinBoxLabel->setVisible(true);
        _ui->uploadSpinBox->setEnabled(false);
    });
    connect(_ui->uploadLimitRadioButton, &QAbstractButton::clicked, this, [this](){
        _ui->uploadSpinBox->setVisible(true);
        _ui->uploadSpinBoxLabel->setVisible(true);
        _ui->uploadSpinBox->setEnabled(true);
    });

    //Fix initial proxy warning, it shows a red border at initial state whenever the widget becomes visible
    //Override the nextcloud stylesheet
    _ui->hostLineEdit->setStyleSheet(QString());
}

void NMCNetworkSettings::setLogic()
{

}


} // namespace OCC
