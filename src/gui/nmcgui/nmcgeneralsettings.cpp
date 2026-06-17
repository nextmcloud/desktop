/*
 * Copyright (C) by Mauro Mura
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#include "nmcgeneralsettings.h"
#include "generalsettings.h"
#include "configfile.h"
#include "ignorelisteditor.h"
#include "nmclibsync/nmcconfigfile.h"
#include "settingspanelstyle.h"
#include "theme.h"
#include "ui_generalsettings.h"

#include <QAbstractButton>
#include <QCheckBox>
#include <QCoreApplication>
#include <QFrame>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QPointer>
#include <QPushButton>
#include <QSignalBlocker>
#include <QSizePolicy>
#include <QSpinBox>
#include <QSpacerItem>
#include <QVBoxLayout>
#include <QWidget>

#ifdef Q_OS_WIN
#define BACKGROUND_PALETTE "alternate-base"
#else
#define BACKGROUND_PALETTE "light"
#endif

namespace OCC {

namespace {

void applyNMCBoxStyle(QGroupBox *box, const QString &objectName)
{
    box->setObjectName(objectName);
    box->setAttribute(Qt::WA_StyledBackground, true);
    box->setTitle({});
    box->setStyleSheet(QStringLiteral(
        "#%1 {"
        " background: palette(" BACKGROUND_PALETTE ");"
        " border-radius: 4px;"
        " border: none;"
        "}"
    ).arg(objectName));
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

QFrame *createSeparator(QWidget *parent)
{
    auto *separator = new QFrame(parent);
    separator->setFrameShape(QFrame::HLine);
    separator->setFrameShadow(QFrame::Plain);
    return separator;
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
    // These options are still present in the new upstream UI, but should not be shown in NMC.
    getUi()->monoIconsCheckBox->setVisible(false);
    getUi()->monoIconsLabel->setVisible(false);
    getUi()->monoIconsRowWidget->setVisible(false);
    getUi()->startupSeparator->setVisible(false);

    getUi()->chatNotificationsCheckBox->setVisible(false);
    getUi()->chatNotificationsLabel->setVisible(false);
    getUi()->chatNotificationsSeparator->setVisible(false);

    getUi()->callNotificationsCheckBox->setVisible(false);
    getUi()->callNotificationsLabel->setVisible(false);
    getUi()->callNotificationsSeparator->setVisible(false);

    getUi()->quotaWarningNotificationsCheckBox->setVisible(false);
    getUi()->quotaWarningNotificationsLabel->setVisible(false);
}

void NMCGeneralSettings::setNMCLayout()
{
    SettingsPanelStyle::apply(this);

    /*
     * General settings
     */
    auto *generalSettingsLabel = createSectionLabel(
        QCoreApplication::translate("", "GENERAL_SETTINGS"),
        this);

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

    auto *generalLayout = qobject_cast<QVBoxLayout *>(getUi()->generalGroupBox->layout());
    if (generalLayout) {
        generalLayout->insertWidget(0, generalSettingsLabel);
        generalLayout->setContentsMargins(16, 16, 16, 16);
        generalLayout->setSpacing(8);
    }

    getUi()->autostartCheckBox->setFocusPolicy(Qt::NoFocus);
    getUi()->serverNotificationsCheckBox->setFocusPolicy(Qt::NoFocus);

    /*
     * Hide notification group if only hidden options would remain.
     * Server notifications are moved/kept in the new notification group.
     */
    getUi()->notificationsGroupBox->setObjectName(QStringLiteral("nmcNotificationsSettingsBox"));
    getUi()->notificationsGroupBox->setAttribute(Qt::WA_StyledBackground, true);
    getUi()->notificationsGroupBox->setStyleSheet(QStringLiteral(
        "#nmcNotificationsSettingsBox {"
        " background: palette(" BACKGROUND_PALETTE ");"
        " border-radius: 4px;"
        " border: none;"
        "}"
    ));

    if (auto *notificationsLayout = qobject_cast<QVBoxLayout *>(getUi()->notificationsGroupBox->layout())) {
        notificationsLayout->setContentsMargins(16, 16, 16, 16);
        notificationsLayout->setSpacing(8);
    }

    /*
     * Advanced settings
     * These widgets no longer exist in upstream generalsettings.ui, so we create them ourselves.
     */
    auto *advancedSettingsBox = new QGroupBox(this);
    applyNMCBoxStyle(advancedSettingsBox, QStringLiteral("nmcAdvancedSettingsBox"));

    auto *advancedLayout = new QVBoxLayout(advancedSettingsBox);
    advancedLayout->setContentsMargins(16, 16, 16, 16);
    advancedLayout->setSpacing(8);

    auto *advancedSettingsLabel = createSectionLabel(
        QCoreApplication::translate("", "ADVANCED_SETTINGS"),
        advancedSettingsBox);

    ConfigFile cfgFile;

    auto *newFolderLimitCheckBox = new QCheckBox(
        tr("Ask for confirmation before synchronizing new folders larger than"),
        advancedSettingsBox);
    newFolderLimitCheckBox->setFocusPolicy(Qt::NoFocus);

    auto *newFolderLimitSpinBox = new QSpinBox(advancedSettingsBox);
    newFolderLimitSpinBox->setMaximum(999999);
    newFolderLimitSpinBox->setFocusPolicy(Qt::ClickFocus);
    newFolderLimitSpinBox->setKeyboardTracking(true);

    auto *newFolderLimitLabel = new QLabel(tr("MB"), advancedSettingsBox);

    const auto newFolderLimit = cfgFile.newBigFolderSizeLimit();
    newFolderLimitCheckBox->setChecked(newFolderLimit.first);
    newFolderLimitSpinBox->setValue(newFolderLimit.second);
    newFolderLimitSpinBox->setEnabled(newFolderLimit.first);

    auto *newFolderLimitWidget = new QWidget(advancedSettingsBox);
    auto *newFolderLimitLayout = new QHBoxLayout(newFolderLimitWidget);
    newFolderLimitLayout->setContentsMargins(0, 0, 0, 0);
    newFolderLimitLayout->setSpacing(8);
    newFolderLimitLayout->addWidget(newFolderLimitCheckBox);
    newFolderLimitLayout->addWidget(newFolderLimitSpinBox);
    newFolderLimitLayout->addWidget(newFolderLimitLabel);
    newFolderLimitLayout->addStretch();

    connect(newFolderLimitCheckBox, &QAbstractButton::toggled,
            newFolderLimitSpinBox, &QWidget::setEnabled);

    connect(newFolderLimitCheckBox, &QAbstractButton::toggled, this,
        [newFolderLimitSpinBox](bool enabled) {
            ConfigFile().setNewBigFolderSizeLimit(enabled, newFolderLimitSpinBox->value());
        });

    connect(newFolderLimitSpinBox, &QSpinBox::valueChanged, this,
        [newFolderLimitCheckBox](int value) {
            ConfigFile().setNewBigFolderSizeLimit(newFolderLimitCheckBox->isChecked(), value);
        });

    auto *moveFilesToTrashCheckBox = new QCheckBox(
        tr("Move removed files to trash"),
        advancedSettingsBox);
    moveFilesToTrashCheckBox->setFocusPolicy(Qt::NoFocus);
    moveFilesToTrashCheckBox->setChecked(cfgFile.moveToTrash());

    connect(moveFilesToTrashCheckBox, &QAbstractButton::toggled, this,
        [](bool enabled) {
            ConfigFile().setMoveToTrash(enabled);
        });

#ifdef Q_OS_WIN
    auto *showInExplorerNavigationPaneCheckBox = new QCheckBox(
        tr("Show sync folders in &Explorer's navigation pane"),
        advancedSettingsBox);
    showInExplorerNavigationPaneCheckBox->setFocusPolicy(Qt::NoFocus);
    showInExplorerNavigationPaneCheckBox->setChecked(cfgFile.showInExplorerNavigationPane());

    connect(showInExplorerNavigationPaneCheckBox, &QAbstractButton::toggled, this,
        [](bool enabled) {
            ConfigFile().setShowInExplorerNavigationPane(enabled);
        });
#endif

    auto *ignoredFilesButton = new QPushButton(
        tr("Edit &Ignored Files"),
        advancedSettingsBox);
    ignoredFilesButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    ignoredFilesButton->setFocusPolicy(Qt::NoFocus);
    ignoredFilesButton->setStyleSheet(QStringLiteral(
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

    connect(ignoredFilesButton, &QAbstractButton::clicked, this, [this]() {
        auto *ignoreEditor = new IgnoreListEditor(this);
        ignoreEditor->setAttribute(Qt::WA_DeleteOnClose, true);
        ignoreEditor->open();
    });

    advancedLayout->addWidget(advancedSettingsLabel);
    advancedLayout->addWidget(newFolderLimitWidget);
#ifdef Q_OS_WIN
    advancedLayout->addWidget(showInExplorerNavigationPaneCheckBox);
#endif
    advancedLayout->addWidget(moveFilesToTrashCheckBox);
    advancedLayout->addItem(new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed));
    advancedLayout->addWidget(ignoredFilesButton);

    /*
     * Updates, data protection and info
     */
    auto *dataProtectionBox = new QGroupBox(this);
    applyNMCBoxStyle(dataProtectionBox, QStringLiteral("nmcUpdatesInfoBox"));

    auto *dataProtectionLayout = new QVBoxLayout(dataProtectionBox);
    dataProtectionLayout->setContentsMargins(16, 16, 16, 16);
    dataProtectionLayout->setSpacing(8);

    auto *updatesLabel = createSectionLabel(
        QCoreApplication::translate("", "UPDATES_SETTINGS"),
        dataProtectionBox);

    auto *dataAnalysisCheckBox = new QCheckBox(dataProtectionBox);
    dataAnalysisCheckBox->setText(QCoreApplication::translate("", "DATA_ANALYSIS"));
    dataAnalysisCheckBox->setFocusPolicy(Qt::NoFocus);

    NMCConfigFile nmcCfgFile;
    dataAnalysisCheckBox->setChecked(nmcCfgFile.transferUsageData());

    connect(dataAnalysisCheckBox, &QAbstractButton::toggled, this, [](bool enabled) {
        NMCConfigFile cfgFile;
        cfgFile.setTransferUsageData(enabled, QString());
    });

    dataProtectionLayout->addWidget(updatesLabel);
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
    currentVersion->setTextInteractionFlags(Qt::TextSelectableByMouse | Qt::TextBrowserInteraction);
    currentVersion->setOpenExternalLinks(true);
    currentVersion->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    dataProtectionLayout->addWidget(currentVersion);

    /*
     * Insert custom boxes into the new upstream layout.
     * New layout structure:
     * pageLayout
     *  - generalGroupBox
     *  - notificationsGroupBox
     *  - verticalSpacer
     */
    auto *pageLayout = getUi()->pageLayout;
    const auto insertIndex = qMax(0, pageLayout->count() - 1);

    pageLayout->insertWidget(insertIndex, advancedSettingsBox);
    pageLayout->insertWidget(insertIndex + 1, dataProtectionBox);
}

} // namespace OCC
