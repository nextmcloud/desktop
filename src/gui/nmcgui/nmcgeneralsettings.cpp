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
#include <QGridLayout>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QSpacerItem>
#include <QVBoxLayout>
#include <QWidget>

#ifdef Q_OS_WIN
#define BACKGROUND_PALETTE "alternate-base"
#else
#define BACKGROUND_PALETTE "light"
#endif

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

    getUi()->advancedGroupBox->setVisible(false);
    getUi()->aboutAndUpdatesGroupBox->setVisible(false);
}

void NMCGeneralSettings::setNMCLayout()
{
    // General settings
    auto *generalSettingsLabel = new QLabel(QCoreApplication::translate("", "GENERAL_SETTINGS"), this);
    generalSettingsLabel->setStyleSheet(QStringLiteral("font-size: 12px; font-weight: bold;"));

    getUi()->generalGroupBoxTitle->hide();
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->generalGroupBoxTitle);
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->chatNotificationsCheckBox);
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->serverNotificationsCheckBox);
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->autostartCheckBox);
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->quotaWarningNotificationsCheckBox);

    getUi()->generalGroupBox->setTitle({});
    getUi()->generalGroupBox->setObjectName(QStringLiteral("nmcGeneralSettingsBox"));
    getUi()->generalGroupBox->setAttribute(Qt::WA_StyledBackground, true);
    getUi()->generalGroupBox->setStyleSheet(QStringLiteral(
        "#nmcGeneralSettingsBox {"
        " background: palette(" BACKGROUND_PALETTE ");"
        " border-radius: 4px;"
        " border: none;"
        "}"
    ));

    auto *generalLayout = static_cast<QGridLayout *>(getUi()->generalGroupBox->layout());
    generalLayout->addWidget(generalSettingsLabel, 0, 0);
    generalLayout->addWidget(getUi()->autostartCheckBox, 1, 0);
    generalLayout->addWidget(getUi()->serverNotificationsCheckBox, 2, 0);
    generalLayout->setContentsMargins(16, 16, 16, 16);
    generalLayout->setSpacing(8);

    getUi()->autostartCheckBox->setFocusPolicy(Qt::NoFocus);
    getUi()->serverNotificationsCheckBox->setFocusPolicy(Qt::NoFocus);

    // Advanced settings
    auto *advancedSettingsLabel = new QLabel(QCoreApplication::translate("", "ADVANCED_SETTINGS"), this);
    advancedSettingsLabel->setStyleSheet(QStringLiteral("font-size: 12px; font-weight: bold;"));

    auto *advancedSettingsBox = new QGroupBox(this);
    advancedSettingsBox->setObjectName(QStringLiteral("nmcAdvancedSettingsBox"));
    advancedSettingsBox->setAttribute(Qt::WA_StyledBackground, true);
    advancedSettingsBox->setTitle({});
    advancedSettingsBox->setLayout(new QVBoxLayout);
    advancedSettingsBox->layout()->setContentsMargins(16, 16, 16, 16);
    advancedSettingsBox->layout()->setSpacing(8);
    advancedSettingsBox->setStyleSheet(QStringLiteral(
        "#nmcAdvancedSettingsBox {"
        " background: palette(" BACKGROUND_PALETTE ");"
        " border-radius: 4px;"
        " border: none;"
        "}"
    ));

    getUi()->horizontalLayout_10->removeWidget(getUi()->showInExplorerNavigationPaneCheckBox);
    getUi()->horizontalLayout_trash->removeWidget(getUi()->moveFilesToTrashCheckBox);
    getUi()->horizontalLayout_4->removeWidget(getUi()->ignoredFilesButton);

    getUi()->horizontalLayout_3->removeWidget(getUi()->newFolderLimitCheckBox);
    getUi()->horizontalLayout_3->removeWidget(getUi()->newFolderLimitSpinBox);
    getUi()->horizontalLayout_3->removeWidget(getUi()->label);

    auto *newFolderLimitWidget = new QWidget(advancedSettingsBox);
    newFolderLimitWidget->setContentsMargins(0, 0, 0, 0);
    auto *newFolderLimitLayout = new QHBoxLayout(newFolderLimitWidget);
    newFolderLimitLayout->setContentsMargins(0, 0, 0, 0);
    newFolderLimitLayout->setSpacing(8);

    newFolderLimitLayout->addWidget(getUi()->newFolderLimitCheckBox);
    newFolderLimitLayout->addWidget(getUi()->newFolderLimitSpinBox);
    newFolderLimitLayout->addWidget(getUi()->label);
    newFolderLimitLayout->addStretch();

    getUi()->newFolderLimitCheckBox->setVisible(true);
    getUi()->newFolderLimitSpinBox->setVisible(true);
    getUi()->label->setVisible(true);

    getUi()->newFolderLimitCheckBox->setFocusPolicy(Qt::NoFocus);
    getUi()->newFolderLimitSpinBox->setFocusPolicy(Qt::ClickFocus);
    getUi()->newFolderLimitSpinBox->setKeyboardTracking(true);
    getUi()->newFolderLimitSpinBox->setEnabled(getUi()->newFolderLimitCheckBox->isChecked());

    connect(getUi()->newFolderLimitCheckBox, &QAbstractButton::toggled,
            getUi()->newFolderLimitSpinBox, &QWidget::setEnabled);

    newFolderLimitWidget->setVisible(true);

    getUi()->ignoredFilesButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    getUi()->ignoredFilesButton->setFocusPolicy(Qt::NoFocus);
    getUi()->ignoredFilesButton->setStyleSheet(QStringLiteral(
        "QPushButton {"
        " min-height: 32px;"
        " min-width: 200px;"
        " border: 1px solid black;"
        " color: black;"
        " background-color: #ededed;"
        " font-size: 13px;"
        " border-radius: 4px;"
        "}"
        "QPushButton:hover {"
        " background-color: white;"
        "}"
    ));

    advancedSettingsBox->layout()->addWidget(advancedSettingsLabel);
    advancedSettingsBox->layout()->addWidget(newFolderLimitWidget);
    advancedSettingsBox->layout()->addWidget(getUi()->showInExplorerNavigationPaneCheckBox);
    advancedSettingsBox->layout()->addWidget(getUi()->moveFilesToTrashCheckBox);
    advancedSettingsBox->layout()->addItem(new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed));
    advancedSettingsBox->layout()->addWidget(getUi()->ignoredFilesButton);

    getUi()->showInExplorerNavigationPaneCheckBox->setFocusPolicy(Qt::NoFocus);
    getUi()->moveFilesToTrashCheckBox->setFocusPolicy(Qt::NoFocus);

    getUi()->gridLayout_3->addWidget(advancedSettingsBox, 2, 0);

    // Updates & Info
    auto *updatesLabel = new QLabel(QCoreApplication::translate("", "UPDATES_SETTINGS"), this);
    updatesLabel->setStyleSheet(QStringLiteral("font-size: 12px; font-weight: bold;"));

    auto *dataProtectionBox = new QGroupBox(this);
    dataProtectionBox->setObjectName(QStringLiteral("nmcUpdatesInfoBox"));
    dataProtectionBox->setAttribute(Qt::WA_StyledBackground, true);
    dataProtectionBox->setTitle({});
    dataProtectionBox->setLayout(new QVBoxLayout);
    dataProtectionBox->layout()->setContentsMargins(16, 16, 16, 16);
    dataProtectionBox->layout()->setSpacing(8);
    dataProtectionBox->setStyleSheet(QStringLiteral(
        "#nmcUpdatesInfoBox {"
        " background: palette(" BACKGROUND_PALETTE ");"
        " border-radius: 4px;"
        " border: none;"
        "}"
    ));

    auto *dataAnalysisCheckBox = new QCheckBox(this);
    dataAnalysisCheckBox->setText(QCoreApplication::translate("", "DATA_ANALYSIS"));
    dataAnalysisCheckBox->setFocusPolicy(Qt::NoFocus);

    getUi()->autoCheckForUpdatesCheckBox->setFocusPolicy(Qt::NoFocus);

    dataProtectionBox->layout()->addWidget(updatesLabel);
    dataProtectionBox->layout()->addWidget(getUi()->autoCheckForUpdatesCheckBox);
    dataProtectionBox->layout()->addWidget(dataAnalysisCheckBox);

    connect(dataAnalysisCheckBox, &QAbstractButton::toggled, this, [](bool toggle) {
        NMCConfigFile cfgFile;
        cfgFile.setTransferUsageData(toggle, QString());
    });

    NMCConfigFile cfgFile;
    dataAnalysisCheckBox->setChecked(cfgFile.transferUsageData());

    dataProtectionBox->layout()->addItem(new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed));

    auto *dataAnalysisImpressum = new QLabel(this);
    dataAnalysisImpressum->setText(QStringLiteral("<a href=\"https://www.telekom.de/impressum/\"><span style=\"color:#2238df\">%1</span></a>")
        .arg(QCoreApplication::translate("", "IMPRESSUM")));
    dataAnalysisImpressum->setTextFormat(Qt::RichText);
    dataAnalysisImpressum->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisImpressum->setOpenExternalLinks(true);
    dataAnalysisImpressum->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataAnalysisImpressum->setStyleSheet(QStringLiteral("font-size: 13px"));
    dataProtectionBox->layout()->addWidget(dataAnalysisImpressum);

    auto *dataAnalysisData = new QLabel(this);
    dataAnalysisData->setText(QStringLiteral("<a href=\"https://static.magentacloud.de/privacy/datenschutzhinweise_software.pdf\"><span style=\"color:#2238df\">%1</span></a>")
        .arg(QCoreApplication::translate("", "DATA_PROTECTION")));
    dataAnalysisData->setTextFormat(Qt::RichText);
    dataAnalysisData->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisData->setOpenExternalLinks(true);
    dataAnalysisData->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataAnalysisData->setStyleSheet(QStringLiteral("font-size: 13px"));
    dataProtectionBox->layout()->addWidget(dataAnalysisData);

    auto *dataAnalysisOpenSource = new QLabel(this);
    dataAnalysisOpenSource->setText(QStringLiteral("<a href=\"https://static.magentacloud.de/licences/windowsdesktop.html\"><span style=\"color:#2238df\">%1</span></a>")
        .arg(QCoreApplication::translate("", "LICENCE")));
    dataAnalysisOpenSource->setTextFormat(Qt::RichText);
    dataAnalysisOpenSource->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisOpenSource->setOpenExternalLinks(true);
    dataAnalysisOpenSource->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataAnalysisOpenSource->setStyleSheet(QStringLiteral("font-size: 13px"));
    dataProtectionBox->layout()->addWidget(dataAnalysisOpenSource);

    auto *dataAnalysisFurtherInfo = new QLabel(this);
    dataAnalysisFurtherInfo->setText(QStringLiteral("<a href=\"https://cloud.telekom-dienste.de/hilfe\"><span style=\"color:#2238df\">%1</span></a>")
        .arg(QCoreApplication::translate("", "FURTHER_INFO")));
    dataAnalysisFurtherInfo->setTextFormat(Qt::RichText);
    dataAnalysisFurtherInfo->setTextInteractionFlags(Qt::TextBrowserInteraction);
    dataAnalysisFurtherInfo->setOpenExternalLinks(true);
    dataAnalysisFurtherInfo->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataAnalysisFurtherInfo->setStyleSheet(QStringLiteral("font-size: 13px"));
    dataProtectionBox->layout()->addWidget(dataAnalysisFurtherInfo);

    dataProtectionBox->layout()->addItem(new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed));

    auto *currentVersion = new QLabel(this);
    currentVersion->setText(Theme::instance()->about());
    currentVersion->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataProtectionBox->layout()->addWidget(currentVersion);

    getUi()->gridLayout_3->addWidget(dataProtectionBox, 3, 0);

    auto *vExpandSpacer = new QSpacerItem(1, 1, QSizePolicy::Fixed, QSizePolicy::Expanding);
    getUi()->gridLayout_3->layout()->addItem(vExpandSpacer);
}

} // namespace OCC
