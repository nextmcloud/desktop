/*
 * Copyright (C) by Mauro Mura
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
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
#include <QSizePolicy>
#include <QSpacerItem>
#include <QVBoxLayout>
#include <QWidget>

#define BACKGROUND_PALETTE "light"

namespace OCC {

namespace {

constexpr int panelPadding = 24;
constexpr int panelRadius = 10;

void applyNMCBoxStyle(QGroupBox *box, const QString &objectName)
{
    if (!box) {
        return;
    }

    box->setObjectName(objectName);
    box->setAttribute(Qt::WA_StyledBackground, true);
    box->setTitle({});
    box->setStyleSheet(QStringLiteral(
        "#%1 {"
        " background: palette(" BACKGROUND_PALETTE ");"
        " border-radius: %2px;"
        " border: none;"
        "}"
    ).arg(objectName).arg(panelRadius));
}

QLabel *createSectionLabel(const QString &text, QWidget *parent)
{
    auto *label = new QLabel(text, parent);
    label->setStyleSheet(QStringLiteral("font-size: 12px; font-weight: bold;"));
    return label;
}

QLabel *createLinkLabel(const QString &text, const QString &url, QWidget *parent)
{
    auto *label = new QLabel(parent);
    label->setText(QStringLiteral("<a href=\"%1\"><span style=\"color:#2238df\">%2</span></a>").arg(url, text));
    label->setTextFormat(Qt::RichText);
    label->setTextInteractionFlags(Qt::TextBrowserInteraction);
    label->setOpenExternalLinks(true);
    label->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    label->setStyleSheet(QStringLiteral("font-size: 13px"));
    return label;
}

} // namespace

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
    /*
     * General settings
     */
    auto *generalSettingsLabel = createSectionLabel(
        QCoreApplication::translate("", "GENERAL_SETTINGS"),
        this);

    getUi()->generalGroupBoxTitle->hide();
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->generalGroupBoxTitle);
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->chatNotificationsCheckBox);
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->serverNotificationsCheckBox);
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->autostartCheckBox);
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->quotaWarningNotificationsCheckBox);

    applyNMCBoxStyle(getUi()->generalGroupBox, QStringLiteral("nmcGeneralSettingsBox"));

    auto *generalLayout = static_cast<QGridLayout *>(getUi()->generalGroupBox->layout());
    generalLayout->addWidget(generalSettingsLabel, 0, 0);
    generalLayout->addWidget(getUi()->autostartCheckBox, 1, 0);
    generalLayout->addWidget(getUi()->serverNotificationsCheckBox, 2, 0);
    generalLayout->setContentsMargins(panelPadding, panelPadding, panelPadding, panelPadding);
    generalLayout->setSpacing(8);

    getUi()->autostartCheckBox->setFocusPolicy(Qt::NoFocus);
    getUi()->serverNotificationsCheckBox->setFocusPolicy(Qt::NoFocus);

    /*
     * Advanced settings
     */
    auto *advancedSettingsBox = new QGroupBox(this);
    applyNMCBoxStyle(advancedSettingsBox, QStringLiteral("nmcAdvancedSettingsBox"));

    auto *advancedLayout = new QVBoxLayout(advancedSettingsBox);
    advancedLayout->setContentsMargins(panelPadding, panelPadding, panelPadding, panelPadding);
    advancedLayout->setSpacing(8);

    auto *advancedSettingsLabel = createSectionLabel(
        QCoreApplication::translate("", "ADVANCED_SETTINGS"),
        advancedSettingsBox);

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

    getUi()->showInExplorerNavigationPaneCheckBox->setFocusPolicy(Qt::NoFocus);
    getUi()->moveFilesToTrashCheckBox->setFocusPolicy(Qt::NoFocus);

    advancedLayout->addWidget(advancedSettingsLabel);
    advancedLayout->addWidget(newFolderLimitWidget);
    advancedLayout->addWidget(getUi()->showInExplorerNavigationPaneCheckBox);
    advancedLayout->addWidget(getUi()->moveFilesToTrashCheckBox);
    advancedLayout->addItem(new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed));
    advancedLayout->addWidget(getUi()->ignoredFilesButton);

    getUi()->gridLayout_3->addWidget(advancedSettingsBox, 2, 0);

    /*
     * Updates, data protection and info
     */
    auto *dataProtectionBox = new QGroupBox(this);
    applyNMCBoxStyle(dataProtectionBox, QStringLiteral("nmcUpdatesInfoBox"));

    auto *dataProtectionLayout = new QVBoxLayout(dataProtectionBox);
    dataProtectionLayout->setContentsMargins(panelPadding, panelPadding, panelPadding, panelPadding);
    dataProtectionLayout->setSpacing(8);

    auto *updatesLabel = createSectionLabel(
        QCoreApplication::translate("", "UPDATES_SETTINGS"),
        dataProtectionBox);

    auto *dataAnalysisCheckBox = new QCheckBox(dataProtectionBox);
    dataAnalysisCheckBox->setText(QCoreApplication::translate("", "DATA_ANALYSIS"));
    dataAnalysisCheckBox->setFocusPolicy(Qt::NoFocus);

    getUi()->autoCheckForUpdatesCheckBox->setFocusPolicy(Qt::NoFocus);

    NMCConfigFile cfgFile;
    dataAnalysisCheckBox->setChecked(cfgFile.transferUsageData());

    connect(dataAnalysisCheckBox, &QAbstractButton::toggled, this, [](bool enabled) {
        NMCConfigFile cfgFile;
        cfgFile.setTransferUsageData(enabled, QString());
    });

    dataProtectionLayout->addWidget(updatesLabel);
    dataProtectionLayout->addWidget(getUi()->autoCheckForUpdatesCheckBox);
    dataProtectionLayout->addWidget(dataAnalysisCheckBox);
    dataProtectionLayout->addItem(new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed));

    dataProtectionLayout->addWidget(createLinkLabel(
        QCoreApplication::translate("", "IMPRESSUM"),
        QStringLiteral("https://www.telekom.de/impressum/"),
        dataProtectionBox));

    dataProtectionLayout->addWidget(createLinkLabel(
        QCoreApplication::translate("", "DATA_PROTECTION"),
        QStringLiteral("https://static.magentacloud.de/privacy/datenschutzhinweise_software.pdf"),
        dataProtectionBox));

    dataProtectionLayout->addWidget(createLinkLabel(
        QCoreApplication::translate("", "LICENCE"),
        QStringLiteral("https://static.magentacloud.de/licences/windowsdesktop.html"),
        dataProtectionBox));

    dataProtectionLayout->addWidget(createLinkLabel(
        QCoreApplication::translate("", "FURTHER_INFO"),
        QStringLiteral("https://cloud.telekom-dienste.de/hilfe"),
        dataProtectionBox));

    dataProtectionLayout->addItem(new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed));

    auto *currentVersion = new QLabel(dataProtectionBox);
    currentVersion->setText(Theme::instance()->about());
    currentVersion->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataProtectionLayout->addWidget(currentVersion);

    getUi()->gridLayout_3->addWidget(dataProtectionBox, 3, 0);

    auto *vExpandSpacer = new QSpacerItem(1, 1, QSizePolicy::Fixed, QSizePolicy::Expanding);
    getUi()->gridLayout_3->addItem(vExpandSpacer, 4, 0);
}

} // namespace OCC
