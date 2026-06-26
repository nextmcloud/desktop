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
#include <QGuiApplication>
#include <QHBoxLayout>
#include <QLabel>
#include <QPalette>
#include <QPushButton>
#include <QSpacerItem>
#include <QStyleHints>
#include <QVBoxLayout>
#include <QWidget>

namespace OCC {

namespace {

QString globalPanelBackgroundColor()
{
#ifdef Q_OS_WIN
    return QGuiApplication::palette().color(QPalette::AlternateBase).name();
#else
    return QGuiApplication::palette().color(QPalette::Light).name();
#endif
}

void applyNMCPanelStyle(QGroupBox *box, const QString &objectName)
{
    if (!box) {
        return;
    }

    box->setObjectName(objectName);
    box->setAttribute(Qt::WA_StyledBackground, true);
    box->setTitle({});
    box->setStyleSheet(QStringLiteral(
        "#%1 {"
        " background: %2;"
        " border-radius: 10px;"
        " border: none;"
        "}"
    ).arg(objectName, globalPanelBackgroundColor()));
}

QLabel *createTitleLabel(const QString &text, QWidget *parent)
{
    auto *label = new QLabel(text, parent);
    label->setStyleSheet(QStringLiteral("font-size: 15px; font-weight: 600;"));
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
    auto *generalSettingsLabel = createTitleLabel(
        QCoreApplication::translate("", "GENERAL_SETTINGS"),
        this);

    getUi()->generalGroupBoxTitle->hide();
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->generalGroupBoxTitle);
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->chatNotificationsCheckBox);
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->serverNotificationsCheckBox);
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->autostartCheckBox);
    getUi()->generalGroupBox->layout()->removeWidget(getUi()->quotaWarningNotificationsCheckBox);

    applyNMCPanelStyle(getUi()->generalGroupBox, QStringLiteral("nmcGeneralSettingsBox"));

    auto *generalLayout = static_cast<QGridLayout *>(getUi()->generalGroupBox->layout());
    generalLayout->addWidget(generalSettingsLabel, 0, 0);
    generalLayout->addWidget(getUi()->autostartCheckBox, 1, 0);
    generalLayout->addWidget(getUi()->serverNotificationsCheckBox, 2, 0);
    generalLayout->setContentsMargins(24, 24, 24, 24);
    generalLayout->setSpacing(8);

    getUi()->autostartCheckBox->setFocusPolicy(Qt::NoFocus);
    getUi()->serverNotificationsCheckBox->setFocusPolicy(Qt::NoFocus);

    auto *advancedSettingsLabel = createTitleLabel(
        QCoreApplication::translate("", "ADVANCED_SETTINGS"),
        this);

    auto *advancedSettingsBox = new QGroupBox(this);
    advancedSettingsBox->setLayout(new QVBoxLayout);
    advancedSettingsBox->layout()->setContentsMargins(24, 24, 24, 24);
    advancedSettingsBox->layout()->setSpacing(8);
    applyNMCPanelStyle(advancedSettingsBox, QStringLiteral("nmcAdvancedSettingsBox"));

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

    advancedSettingsBox->layout()->addWidget(advancedSettingsLabel);
    advancedSettingsBox->layout()->addWidget(newFolderLimitWidget);
    advancedSettingsBox->layout()->addWidget(getUi()->showInExplorerNavigationPaneCheckBox);
    advancedSettingsBox->layout()->addWidget(getUi()->moveFilesToTrashCheckBox);
    advancedSettingsBox->layout()->addItem(new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed));
    advancedSettingsBox->layout()->addWidget(getUi()->ignoredFilesButton);

    getUi()->showInExplorerNavigationPaneCheckBox->setFocusPolicy(Qt::NoFocus);
    getUi()->moveFilesToTrashCheckBox->setFocusPolicy(Qt::NoFocus);

    getUi()->gridLayout_3->addWidget(advancedSettingsBox, 2, 0);

    auto *updatesLabel = createTitleLabel(
        QCoreApplication::translate("", "UPDATES_SETTINGS"),
        this);

    auto *dataProtectionBox = new QGroupBox(this);
    dataProtectionBox->setLayout(new QVBoxLayout);
    dataProtectionBox->layout()->setContentsMargins(24, 24, 24, 24);
    dataProtectionBox->layout()->setSpacing(8);
    applyNMCPanelStyle(dataProtectionBox, QStringLiteral("nmcUpdatesInfoBox"));

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

    dataProtectionBox->layout()->addWidget(createLinkLabel(
        QCoreApplication::translate("", "IMPRESSUM"),
        QStringLiteral("https://www.telekom.de/impressum/"),
        this));

    dataProtectionBox->layout()->addWidget(createLinkLabel(
        QCoreApplication::translate("", "DATA_PROTECTION"),
        QStringLiteral("https://static.magentacloud.de/privacy/datenschutzhinweise_software.pdf"),
        this));

    dataProtectionBox->layout()->addWidget(createLinkLabel(
        QCoreApplication::translate("", "LICENCE"),
        QStringLiteral("https://static.magentacloud.de/licences/windowsdesktop.html"),
        this));

    dataProtectionBox->layout()->addWidget(createLinkLabel(
        QCoreApplication::translate("", "FURTHER_INFO"),
        QStringLiteral("https://cloud.telekom-dienste.de/hilfe"),
        this));

    dataProtectionBox->layout()->addItem(new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed));

    auto *currentVersion = new QLabel(this);
    currentVersion->setText(Theme::instance()->about());
    currentVersion->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataProtectionBox->layout()->addWidget(currentVersion);

    getUi()->gridLayout_3->addWidget(dataProtectionBox, 3, 0);

    connect(QGuiApplication::styleHints(), &QStyleHints::colorSchemeChanged, this,
        [this, advancedSettingsBox, dataProtectionBox]() {
            applyNMCPanelStyle(getUi()->generalGroupBox, QStringLiteral("nmcGeneralSettingsBox"));
            applyNMCPanelStyle(advancedSettingsBox, QStringLiteral("nmcAdvancedSettingsBox"));
            applyNMCPanelStyle(dataProtectionBox, QStringLiteral("nmcUpdatesInfoBox"));
        });

    auto *vExpandSpacer = new QSpacerItem(1, 1, QSizePolicy::Fixed, QSizePolicy::Expanding);
    getUi()->gridLayout_3->layout()->addItem(vExpandSpacer);
}

} // namespace OCC
