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

#include "nmcgeneralsettings.h"
#include "generalsettings.h"
#include "nmclibsync/nmcconfigfile.h"
#include "ui_generalsettings.h"
#include "theme.h"


namespace OCC {

NMCGeneralSettings::NMCGeneralSettings(QWidget *parent)
    : GeneralSettings(parent)
{
    setDefaultSettings();
    setLayout();
}

void NMCGeneralSettings::setDefaultSettings()
{
    //Set default settings
    //General settings
    getUi()->autostartCheckBox->setCheckState(Qt::Checked);
    getUi()->monoIconsCheckBox->setCheckState(Qt::Unchecked);
    getUi()->serverNotificationsCheckBox->setCheckState(Qt::Unchecked);
    getUi()->callNotificationsCheckBox->setCheckState(Qt::Unchecked);
    //Advanced settings
    getUi()->newFolderLimitCheckBox->setCheckState(Qt::Unchecked);
    //Info settings
    getUi()->aboutAndUpdatesGroupBox->setTitle(tr("Update"));
    //Hide unsupported settings
    //General settings
    getUi()->monoIconsCheckBox->setVisible(false);
    getUi()->callNotificationsCheckBox->setVisible(false);
    //Advanced settings
    getUi()->groupBox->setVisible(false);
    //Info settings
    getUi()->aboutAndUpdatesGroupBox->setVisible(false);
}

void NMCGeneralSettings::setLayout()
{
    //Fix layout
    //General settings
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->serverNotificationsCheckBox);
    static_cast<QGridLayout *>(getUi()->generalGroupBox->layout())->addWidget(getUi()->serverNotificationsCheckBox, 1, 0);
    //Advanced settings
    getUi()->horizontalLayout_3->layout()->removeWidget(getUi()->newFolderLimitCheckBox);
    getUi()->horizontalLayout_3->layout()->removeWidget(getUi()->newFolderLimitSpinBox);
    getUi()->horizontalLayout_3->layout()->removeWidget(getUi()->label);

    QWidget *folderLimit = new QWidget(this);
    auto *folderHBoxLayout = new QHBoxLayout(this);
    folderLimit->setLayout(folderHBoxLayout);
    folderHBoxLayout->addWidget(getUi()->newFolderLimitCheckBox);
    folderHBoxLayout->addWidget(getUi()->newFolderLimitSpinBox);
    folderHBoxLayout->addWidget(getUi()->label);
    folderHBoxLayout->setContentsMargins(0,0,0,0);

    QGroupBox *advancedBox = new QGroupBox(this);
    advancedBox->setTitle(getUi()->groupBox->title());
    auto *advancedVBoxLayout = new QVBoxLayout(this);
    advancedBox->setLayout(advancedVBoxLayout);
    advancedVBoxLayout->addWidget(folderLimit);
    getUi()->gridLayout_3->addWidget(advancedBox, 2, 0);

    //Updates
    getUi()->updatesContainer->layout()->removeWidget(getUi()->autoCheckForUpdatesCheckBox);
    QGroupBox *aboutBox = new QGroupBox(this);
    aboutBox->setTitle(getUi()->aboutAndUpdatesGroupBox->title());
    aboutBox->setLayout(new QVBoxLayout);
    aboutBox->layout()->addWidget(getUi()->autoCheckForUpdatesCheckBox);
    getUi()->gridLayout_3->addWidget(aboutBox, 3, 0);

    //Datenschutz
    QGroupBox *dataProtectionBox = new QGroupBox(this);
    dataProtectionBox->setTitle(tr("DATA_PROTECTION"));
    dataProtectionBox->setLayout(new QVBoxLayout);
    dataProtectionBox->layout()->setContentsMargins(12,12,12,12); //Like in Nextcloud .ui file
    dataProtectionBox->layout()->setSpacing(5);

    auto *dataAnalysisCheckBox = new QCheckBox(this);
    dataAnalysisCheckBox->setText(tr("DATA_ANALYSIS"));
    dataProtectionBox->layout()->addWidget(dataAnalysisCheckBox);
    dataProtectionBox->layout()->addItem(new QSpacerItem(1,5,QSizePolicy::Fixed,QSizePolicy::Fixed));
    connect(dataAnalysisCheckBox, &QAbstractButton::toggled, this, [](bool toggle){
        NMCConfigFile cfgFile;
        cfgFile.setTransferUsageData(toggle, QString());
    });
    NMCConfigFile cfgFile;
    dataAnalysisCheckBox->setChecked(cfgFile.transferUsageData());

    auto *dataAnalysisImpressum = new QLabel(this);
    dataAnalysisImpressum->setText(QString("<a href=\"https://www.telekom.de/impressum/\"><span style=\"color:#ea0a8e\">%1</span></a>").arg(tr("IMPRESSUM")));
    dataAnalysisImpressum->setTextFormat(Qt::RichText);
    dataAnalysisImpressum->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisImpressum->setOpenExternalLinks(true);
    dataAnalysisImpressum->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataProtectionBox->layout()->addWidget(dataAnalysisImpressum);

    auto *dataAnalysisData = new QLabel(this);
    dataAnalysisData->setText(QString("<a href=\"https://www.telekom.de/impressum/\"><span style=\"color:#ea0a8e\">%1</span></a>").arg(tr("DATA_PROTECTION")));
    dataAnalysisData->setTextFormat(Qt::RichText);
    dataAnalysisData->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisData->setOpenExternalLinks(true);
    dataAnalysisData->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataProtectionBox->layout()->addWidget(dataAnalysisData);

    auto *dataAnalysisOpenSource = new QLabel(this);
    dataAnalysisOpenSource->setText(QString("<a href=\"https://static.magentacloud.de/licences/windowsdesktop.html\"><span style=\"color:#ea0a8e\">%1</span></a>").arg(tr("LICENCE")));
    dataAnalysisOpenSource->setTextFormat(Qt::RichText);
    dataAnalysisOpenSource->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisOpenSource->setOpenExternalLinks(true);
    dataAnalysisOpenSource->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataProtectionBox->layout()->addWidget(dataAnalysisOpenSource);

    QWidget *versionLabel = new QWidget(this);
    auto *versionLabelLayout = new QHBoxLayout(this);
    versionLabel->setLayout(versionLabelLayout);
    versionLabelLayout->setContentsMargins(0,0,0,0);
    versionLabel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    auto *currentVersion = new QLabel(this);
    currentVersion->setText(Theme::instance()->about());
    currentVersion->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    //Todo, set current version
    versionLabelLayout->addWidget(currentVersion);

    auto *dataAnalysisFurtherInfo = new QLabel(this);
    dataAnalysisFurtherInfo->setText(QString("<a href=\"https://cloud.telekom-dienste.de/hilfe\"><span style=\"color:#ea0a8e\">%1</span></a>").arg(tr("FURTHER_INFO")));
    dataAnalysisFurtherInfo->setTextFormat(Qt::RichText);
    dataAnalysisFurtherInfo->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisFurtherInfo->setOpenExternalLinks(true);
    dataAnalysisFurtherInfo->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    versionLabelLayout->addWidget(dataAnalysisFurtherInfo);
    versionLabelLayout->layout()->addItem(new QSpacerItem(1,1,QSizePolicy::Expanding,QSizePolicy::Fixed));

    dataProtectionBox->layout()->addWidget(versionLabel);

    getUi()->gridLayout_3->addWidget(dataProtectionBox, 4, 0);

    auto *vExpandSpacer = new QSpacerItem(1,1,QSizePolicy::Fixed,QSizePolicy::Expanding);
    getUi()->gridLayout_3->layout()->addItem(vExpandSpacer);
}

} // namespace OCC
