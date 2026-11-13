/*
 * Copyright (C) by Mauro Mura
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 */

#include "nmcgeneralsettings.h"
#include "generalsettings.h"
#include "nmclibsync/nmcconfigfile.h"
#include "ui_generalsettings.h"
#include "theme.h"

#include <QAbstractButton>
#include <QCheckBox>
#include <QCoreApplication>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QSpacerItem>
#include <QVBoxLayout>
#include <QWidget>

#define BACKGROUND_PALETTE "light"

namespace OCC {

NMCGeneralSettings::NMCGeneralSettings(QWidget *parent)
    : GeneralSettings(parent)
{
    setDefaultSettings();
    setNMCLayout();
}

void NMCGeneralSettings::setDefaultSettings()
{
    getUi()->monoIconsCheckBox->setVisible(false);
    getUi()->chatNotificationsCheckBox->setVisible(false);
    getUi()->callNotificationsCheckBox->setVisible(false);
    getUi()->quotaWarningNotificationsCheckBox->setVisible(false);
}

void NMCGeneralSettings::setNMCLayout()
{
    // General settings
    auto *generalSettingsLabel = new QLabel(QCoreApplication::translate("", "GENERAL_SETTINGS"), this);
    generalSettingsLabel->setStyleSheet(QStringLiteral("font-size: 15px; font-weight: 600;"));

    getUi()->monoIconsRowWidget->setVisible(false);
    getUi()->startupSeparator->setVisible(false);

    getUi()->serverNotificationsRow->removeWidget(getUi()->serverNotificationsLabel);
    getUi()->serverNotificationsRow->removeWidget(getUi()->serverNotificationsCheckBox);
    getUi()->serverNotificationsLabel->setParent(getUi()->generalGroupBox);
    getUi()->serverNotificationsCheckBox->setParent(getUi()->generalGroupBox);

    auto *serverNotificationsRow = new QHBoxLayout;
    serverNotificationsRow->setContentsMargins(0, 0, 0, 0);
    serverNotificationsRow->addWidget(getUi()->serverNotificationsLabel);
    serverNotificationsRow->addStretch();
    serverNotificationsRow->addWidget(getUi()->serverNotificationsCheckBox);

    getUi()->generalGroupBox->setTitle({});
    getUi()->generalGroupBox->setAttribute(Qt::WA_StyledBackground, true);

    getUi()->generalSettingsLayout->insertWidget(0, generalSettingsLabel);
    getUi()->generalSettingsLayout->addLayout(serverNotificationsRow);
    getUi()->generalSettingsLayout->setContentsMargins(24, 24, 24, 24);
    getUi()->generalSettingsLayout->setSpacing(8);

    getUi()->autostartCheckBox->setFocusPolicy(Qt::NoFocus);
    getUi()->serverNotificationsCheckBox->setFocusPolicy(Qt::NoFocus);
    getUi()->serverNotificationsLabel->setVisible(true);
    getUi()->serverNotificationsCheckBox->setVisible(true);
    getUi()->notificationsGroupBox->setVisible(false);

    // Updates & Info
    auto *updatesLabel = new QLabel(QCoreApplication::translate("", "UPDATES_SETTINGS"), this);
    updatesLabel->setStyleSheet(QStringLiteral("font-size: 15px; font-weight: 600;"));

    auto *dataProtectionBox = new QGroupBox(this);
    dataProtectionBox->setObjectName(QStringLiteral("nmcUpdatesInfoBox"));
    dataProtectionBox->setAttribute(Qt::WA_StyledBackground, true);
    dataProtectionBox->setTitle({});

    auto *dataProtectionLayout = new QVBoxLayout(dataProtectionBox);
    dataProtectionLayout->setContentsMargins(24, 24, 24, 24);
    dataProtectionLayout->setSpacing(8);

    dataProtectionBox->setStyleSheet(QStringLiteral(
        "#nmcUpdatesInfoBox {"
        " background: palette(" BACKGROUND_PALETTE ");"
        " border-radius: 10px;"
        " border: none;"
        "}"
    ));

    auto *dataAnalysisCheckBox = new QCheckBox(dataProtectionBox);
    dataAnalysisCheckBox->setText(QCoreApplication::translate("", "DATA_ANALYSIS"));
    dataAnalysisCheckBox->setFocusPolicy(Qt::NoFocus);

    dataProtectionLayout->addWidget(updatesLabel);
    dataProtectionLayout->addWidget(dataAnalysisCheckBox);

    connect(dataAnalysisCheckBox, &QAbstractButton::toggled, this, [](bool toggle) {
        NMCConfigFile cfgFile;
        cfgFile.setTransferUsageData(toggle, QString());
    });

    NMCConfigFile cfgFile;
    dataAnalysisCheckBox->setChecked(cfgFile.transferUsageData());

    dataProtectionLayout->addItem(new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed));

    auto *dataAnalysisImpressum = new QLabel(dataProtectionBox);
    dataAnalysisImpressum->setText(QStringLiteral("<a href=\"https://www.telekom.de/impressum/\"><span style=\"color:#2238df\">%1</span></a>")
        .arg(QCoreApplication::translate("", "IMPRESSUM")));
    dataAnalysisImpressum->setTextFormat(Qt::RichText);
    dataAnalysisImpressum->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisImpressum->setOpenExternalLinks(true);
    dataAnalysisImpressum->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataAnalysisImpressum->setStyleSheet(QStringLiteral("font-size: 13px"));
    dataProtectionLayout->addWidget(dataAnalysisImpressum);

    auto *dataAnalysisData = new QLabel(dataProtectionBox);
    dataAnalysisData->setText(QStringLiteral("<a href=\"https://static.magentacloud.de/privacy/datenschutzhinweise_software.pdf\"><span style=\"color:#2238df\">%1</span></a>")
        .arg(QCoreApplication::translate("", "DATA_PROTECTION")));
    dataAnalysisData->setTextFormat(Qt::RichText);
    dataAnalysisData->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisData->setOpenExternalLinks(true);
    dataAnalysisData->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataAnalysisData->setStyleSheet(QStringLiteral("font-size: 13px"));
    dataProtectionLayout->addWidget(dataAnalysisData);

    auto *dataAnalysisOpenSource = new QLabel(dataProtectionBox);
    dataAnalysisOpenSource->setText(QStringLiteral("<a href=\"https://static.magentacloud.de/licences/windowsdesktop.html\"><span style=\"color:#2238df\">%1</span></a>")
        .arg(QCoreApplication::translate("", "LICENCE")));
    dataAnalysisOpenSource->setTextFormat(Qt::RichText);
    dataAnalysisOpenSource->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisOpenSource->setOpenExternalLinks(true);
    dataAnalysisOpenSource->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataAnalysisOpenSource->setStyleSheet(QStringLiteral("font-size: 13px"));
    dataProtectionLayout->addWidget(dataAnalysisOpenSource);

    auto *dataAnalysisFurtherInfo = new QLabel(dataProtectionBox);
    dataAnalysisFurtherInfo->setText(QStringLiteral("<a href=\"https://cloud.telekom-dienste.de/hilfe\"><span style=\"color:#2238df\">%1</span></a>")
        .arg(QCoreApplication::translate("", "FURTHER_INFO")));
    dataAnalysisFurtherInfo->setTextFormat(Qt::RichText);
    dataAnalysisFurtherInfo->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisFurtherInfo->setOpenExternalLinks(true);
    dataAnalysisFurtherInfo->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataAnalysisFurtherInfo->setStyleSheet(QStringLiteral("font-size: 13px"));
    dataProtectionLayout->addWidget(dataAnalysisFurtherInfo);

    dataProtectionLayout->addItem(new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed));

    auto *currentVersion = new QLabel(dataProtectionBox);
    currentVersion->setText(Theme::instance()->about());
    currentVersion->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataProtectionLayout->addWidget(currentVersion);

    getUi()->pageLayout->insertWidget(getUi()->pageLayout->count() - 1, dataProtectionBox);
}

} // namespace OCC
