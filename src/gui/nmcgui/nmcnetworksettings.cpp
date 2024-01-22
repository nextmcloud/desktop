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
    getUi()->manualSettings->setVisible(true);
    getUi()->manualSettings->setEnabled(false);
    getUi()->downloadSpinBox->setVisible(true);
    if(getUi()->downloadLimitRadioButton->isChecked())
    {
        getUi()->downloadSpinBox->setEnabled(true);
    }
    else{
        getUi()->downloadSpinBox->setEnabled(false);
    }
    getUi()->downloadSpinBoxLabel->setVisible(true);
    getUi()->uploadSpinBox->setVisible(true);
    if(getUi()->uploadLimitRadioButton->isChecked())
    {
        getUi()->uploadSpinBox->setEnabled(true);
    }
    else{
        getUi()->uploadSpinBox->setEnabled(false);
    }
    getUi()->uploadSpinBoxLabel->setVisible(true);
}

void NMCNetworkSettings::setLayout()
{
    //Fix Layouts
    //Proxy settings
    // getUi()->manualSettings->layout()->removeItem(getUi()->horizontalLayout_8);
    // auto *spinBoxWidget = new QWidget(this);
    // spinBoxWidget->setEnabled(false);
    // spinBoxWidget->setLayout(getUi()->horizontalLayout_8);
    // getUi()->horizontalLayout_8->setContentsMargins(0,0,0,0);
    // static_cast<QGridLayout *>(getUi()->proxyGroupBox->layout())->addWidget(spinBoxWidget, 2, 1);
    // disconnect(getUi()->manualProxyRadioButton, &QAbstractButton::toggled, getUi()->manualSettings, &QWidget::setVisible);
    // connect(getUi()->manualProxyRadioButton, &QAbstractButton::toggled, this, [this, spinBoxWidget](bool checked){
    //     getUi()->manualSettings->setEnabled(checked);
    //     spinBoxWidget->setEnabled(checked);
    // });

    // getUi()->manualSettings->setContentsMargins(0,0,0,0);
    // getUi()->manualSettings->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    // getUi()->horizontalSpacer_2->changeSize(0,0, QSizePolicy::Fixed, QSizePolicy::Fixed);

    //Remove spacer, so the elements can expand.
    getUi()->horizontalSpacer->changeSize(0,0, QSizePolicy::Fixed, QSizePolicy::Fixed);

    //DonwloadBox
    getUi()->downloadBox->layout()->removeItem(getUi()->horizontalLayout_3);
    static_cast<QGridLayout *>(getUi()->downloadBox->layout())->addItem(getUi()->horizontalLayout_3, 3, 1);
    getUi()->verticalSpacer_2->changeSize(0,0, QSizePolicy::Fixed, QSizePolicy::Fixed);
    getUi()->downloadBox->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    getUi()->horizontalLayout_3->setSpacing(5);
    //UploadBox
    getUi()->uploadBox->layout()->removeItem(getUi()->horizontalLayout_4);
    static_cast<QGridLayout *>(getUi()->uploadBox->layout())->addItem(getUi()->horizontalLayout_4, 2, 1);
    getUi()->verticalSpacer_3->changeSize(0,0, QSizePolicy::Fixed, QSizePolicy::Fixed);
    getUi()->uploadBox->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    getUi()->horizontalLayout_4->setSpacing(5);

    //Fix widgets visibility
    //Download settings
    connect(getUi()->noDownloadLimitRadioButton, &QAbstractButton::clicked, this, [this](){
        getUi()->downloadSpinBox->setVisible(true);
        getUi()->downloadSpinBoxLabel->setVisible(true);
        getUi()->downloadSpinBox->setEnabled(false);
    });
    connect(getUi()->autoDownloadLimitRadioButton, &QAbstractButton::clicked, this, [this](){
        getUi()->downloadSpinBox->setVisible(true);
        getUi()->downloadSpinBoxLabel->setVisible(true);
        getUi()->downloadSpinBox->setEnabled(false);
    });
    connect(getUi()->downloadLimitRadioButton, &QAbstractButton::clicked, this, [this](){
        getUi()->downloadSpinBox->setVisible(true);
        getUi()->downloadSpinBoxLabel->setVisible(true);
        getUi()->downloadSpinBox->setEnabled(true);
    });


    //Upload settings
    connect(getUi()->noUploadLimitRadioButton, &QAbstractButton::clicked, this, [this](){
        getUi()->uploadSpinBox->setVisible(true);
        getUi()->uploadSpinBoxLabel->setVisible(true);
        getUi()->uploadSpinBox->setEnabled(false);
    });
    connect(getUi()->autoUploadLimitRadioButton, &QAbstractButton::clicked, this, [this](){
        getUi()->uploadSpinBox->setVisible(true);
        getUi()->uploadSpinBoxLabel->setVisible(true);
        getUi()->uploadSpinBox->setEnabled(false);
    });
    connect(getUi()->uploadLimitRadioButton, &QAbstractButton::clicked, this, [this](){
        getUi()->uploadSpinBox->setVisible(true);
        getUi()->uploadSpinBoxLabel->setVisible(true);
        getUi()->uploadSpinBox->setEnabled(true);
    });

    //Fix initial proxy warning, it shows a red border at initial state whenever the widget becomes visible
    //Override the nextcloud stylesheet
    getUi()->hostLineEdit->setStyleSheet(QString());
}

void NMCNetworkSettings::setLogic()
{

}


} // namespace OCC
