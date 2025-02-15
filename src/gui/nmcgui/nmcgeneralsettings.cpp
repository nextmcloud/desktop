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
    setNMCLayout();
}

void NMCGeneralSettings::setDefaultSettings()
{
    //Set default settings
    //General settings
    //getUi()->autostartCheckBox->setCheckState(Qt::Checked);
    getUi()->monoIconsCheckBox->setCheckState(Qt::Unchecked);
    //getUi()->serverNotificationsCheckBox->setCheckState(Qt::Unchecked);
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

void NMCGeneralSettings::setNMCLayout()
{
    //General settings
    auto generalSettingsLabel = new QLabel(QCoreApplication::translate("", "GENERAL_SETTINGS"));
    generalSettingsLabel->setStyleSheet("QLabel{font-size: 12px; font-weight: bold;}");
    getUi()->generalGroupBox->setTitle("");
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->serverNotificationsCheckBox);
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->autostartCheckBox);
    static_cast<QGridLayout *>(getUi()->generalGroupBox->layout())->addWidget(generalSettingsLabel, 0, 0);
    static_cast<QGridLayout *>(getUi()->generalGroupBox->layout())->addWidget(getUi()->autostartCheckBox, 1, 0);
    static_cast<QGridLayout *>(getUi()->generalGroupBox->layout())->addWidget(getUi()->serverNotificationsCheckBox, 2, 0);
    getUi()->generalGroupBox->setStyleSheet("QGroupBox { background-color: white; border-radius: 4px; }");
    getUi()->autostartCheckBox->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    getUi()->serverNotificationsCheckBox->setFocusPolicy(Qt::FocusPolicy::NoFocus);

    //Advanced settings
    auto advancedSettingsLabel = new QLabel(QCoreApplication::translate("", "ADVANCED_SETTINGS"));
    advancedSettingsLabel->setStyleSheet("QLabel{font-size: 12px; font-weight: bold;}");
    QGroupBox *advancedSettingsBox = new QGroupBox(this);
    advancedSettingsBox->setTitle("");
    advancedSettingsBox->setLayout(new QVBoxLayout);
    advancedSettingsBox->layout()->setContentsMargins(12,12,12,12); //Like in Nextcloud .ui file
    advancedSettingsBox->layout()->setSpacing(8);
    advancedSettingsBox->setStyleSheet("QGroupBox { background-color: white; border-radius: 4px; }");

    getUi()->horizontalLayout_10->removeWidget(getUi()->showInExplorerNavigationPaneCheckBox);
    getUi()->horizontalLayout->removeWidget(getUi()->moveFilesToTrashCheckBox);
    getUi()->horizontalLayout_4->removeWidget(getUi()->ignoredFilesButton);

    getUi()->ignoredFilesButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    getUi()->ignoredFilesButton->setFocusPolicy(Qt::NoFocus);

    advancedSettingsBox->layout()->addWidget(advancedSettingsLabel);
    advancedSettingsBox->layout()->addWidget(getUi()->showInExplorerNavigationPaneCheckBox);
    advancedSettingsBox->layout()->addWidget(getUi()->moveFilesToTrashCheckBox);
    advancedSettingsBox->layout()->addWidget(getUi()->ignoredFilesButton);
    getUi()->showInExplorerNavigationPaneCheckBox->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    getUi()->moveFilesToTrashCheckBox->setFocusPolicy(Qt::FocusPolicy::NoFocus);

    getUi()->gridLayout_3->addWidget(advancedSettingsBox, 2, 0);

    //Datenschutz
    auto updatesLabel = new QLabel(QCoreApplication::translate("", "UPDATES_SETTINGS"));
    updatesLabel->setStyleSheet("QLabel{font-size: 12px; font-weight: bold;}");

    QGroupBox *dataProtectionBox = new QGroupBox(this);
    dataProtectionBox->setTitle("");
    dataProtectionBox->setLayout(new QVBoxLayout);
    dataProtectionBox->layout()->setContentsMargins(12,12,12,12); //Like in Nextcloud .ui file
    dataProtectionBox->layout()->setSpacing(8);
    dataProtectionBox->setStyleSheet("QGroupBox { background-color: white; border-radius: 4px; }");

    auto *dataAnalysisCheckBox = new QCheckBox(this);
    dataAnalysisCheckBox->setText(QCoreApplication::translate("", "DATA_ANALYSIS"));
    dataAnalysisCheckBox->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    getUi()->autoCheckForUpdatesCheckBox->setFocusPolicy(Qt::FocusPolicy::NoFocus);

    dataProtectionBox->layout()->addWidget(updatesLabel);
    dataProtectionBox->layout()->addWidget(getUi()->autoCheckForUpdatesCheckBox);
    dataProtectionBox->layout()->addWidget(dataAnalysisCheckBox);

    connect(dataAnalysisCheckBox, &QAbstractButton::toggled, this, [](bool toggle){
        NMCConfigFile cfgFile;
        cfgFile.setTransferUsageData(toggle, QString());
    });
    NMCConfigFile cfgFile;
    dataAnalysisCheckBox->setChecked(cfgFile.transferUsageData());

    dataProtectionBox->layout()->addItem(new QSpacerItem(1,8,QSizePolicy::Fixed,QSizePolicy::Fixed));

    auto *dataAnalysisImpressum = new QLabel(this);
    dataAnalysisImpressum->setText(QString("<a href=\"https://www.telekom.de/impressum/\"><span style=\"color:#ea0a8e\">%1</span></a>").arg(QCoreApplication::translate("", "IMPRESSUM")));
    dataAnalysisImpressum->setTextFormat(Qt::RichText);
    dataAnalysisImpressum->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisImpressum->setOpenExternalLinks(true);
    dataAnalysisImpressum->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataAnalysisImpressum->setStyleSheet("font-size: 13px");
    dataProtectionBox->layout()->addWidget(dataAnalysisImpressum);

    auto *dataAnalysisData = new QLabel(this);
    dataAnalysisData->setText(QString("<a href=\"https://static.magentacloud.de/privacy/datenschutzhinweise_software.pdf\"><span style=\"color:#ea0a8e\">%1</span></a>").arg(QCoreApplication::translate("", "DATA_PROTECTION")));
    dataAnalysisData->setTextFormat(Qt::RichText);
    dataAnalysisData->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisData->setOpenExternalLinks(true);
    dataAnalysisData->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataAnalysisData->setStyleSheet("font-size: 13px");
    dataProtectionBox->layout()->addWidget(dataAnalysisData);

    auto *dataAnalysisOpenSource = new QLabel(this);
    dataAnalysisOpenSource->setText(QString("<a href=\"https://static.magentacloud.de/licences/windowsdesktop.html\"><span style=\"color:#ea0a8e\">%1</span></a>").arg(QCoreApplication::translate("", "LICENCE")));
    dataAnalysisOpenSource->setTextFormat(Qt::RichText);
    dataAnalysisOpenSource->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisOpenSource->setOpenExternalLinks(true);
    dataAnalysisOpenSource->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataAnalysisOpenSource->setStyleSheet("font-size: 13px");
    dataProtectionBox->layout()->addWidget(dataAnalysisOpenSource);

    auto *dataAnalysisFurtherInfo = new QLabel(this);
    dataAnalysisFurtherInfo->setText(QString("<a href=\"https://cloud.telekom-dienste.de/hilfe\"><span style=\"color:#ea0a8e\">%1</span></a>").arg(QCoreApplication::translate("", "FURTHER_INFO")));
    dataAnalysisFurtherInfo->setTextFormat(Qt::RichText);
    dataAnalysisFurtherInfo->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisFurtherInfo->setOpenExternalLinks(true);
    dataAnalysisFurtherInfo->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataAnalysisFurtherInfo->setStyleSheet("font-size: 13px");
    dataProtectionBox->layout()->addWidget(dataAnalysisFurtherInfo);

    dataProtectionBox->layout()->addItem(new QSpacerItem(1,8,QSizePolicy::Fixed,QSizePolicy::Fixed));

    auto *currentVersion = new QLabel(this);
    currentVersion->setText(Theme::instance()->about());
    currentVersion->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    //Todo, set current version
    dataProtectionBox->layout()->addWidget(currentVersion);

    getUi()->gridLayout_3->addWidget(dataProtectionBox, 3, 0);

    auto *vExpandSpacer = new QSpacerItem(1,1,QSizePolicy::Fixed,QSizePolicy::Expanding);
    getUi()->gridLayout_3->layout()->addItem(vExpandSpacer);
}

} // namespace OCC