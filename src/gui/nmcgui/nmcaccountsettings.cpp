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

#include "nmcgui/nmcaccountsettings.h"
#include "ui_accountsettings.h"
#include "../common/utility.h"
#include "guiutility.h"

#include <QDesktopServices>
#include <QUrl>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSpacerItem>
#include <QSizePolicy>

namespace OCC {

NMCAccountSettings::NMCAccountSettings(AccountState *accountState, QWidget *parent)
    : AccountSettings(accountState, parent)
    , m_liveAccountButton(new CustomButton(QCoreApplication::translate("", "ADD_LIVE_BACKUP"), QIcon(QLatin1String(":/client/theme/NMCIcons/action-add.svg")).pixmap(24,24)))
    , m_liveTitle(new QLabel(QCoreApplication::translate("", "LIVE_BACKUPS")))
    , m_liveDescription(new QLabel(QCoreApplication::translate("", "LIVE_DESCRIPTION")))
{
    setDefaultSettings();
    setLayout();
    connect(m_liveAccountButton, &CustomButton::clicked, this, &NMCAccountSettings::slotAddFolder);
}

void NMCAccountSettings::setDefaultSettings()
{
    getUi()->encryptionMessage->setCloseButtonVisible(true);
    getUi()->selectiveSyncStatus->setVisible(false);
    getUi()->selectiveSyncNotification->setVisible(false);
    getUi()->accountStatus->setVisible(false);
    getUi()->bigFolderUi->setVisible(false);
    getUi()->gridLayout->setSpacing(8);
}

void NMCAccountSettings::setLayout()
{
    // Entferne alte Quota-Widgets
    getUi()->storageGroupBox->removeWidget(getUi()->quotaInfoLabel);
    getUi()->storageGroupBox->removeWidget(getUi()->quotaProgressBar);
    getUi()->storageGroupBox->removeWidget(getUi()->quotaInfoText);

    getUi()->gridLayout->removeWidget(getUi()->encryptionMessage);
    getUi()->gridLayout->addWidget(getUi()->encryptionMessage, 0, 0);
    getUi()->gridLayout->addItem(
        new QSpacerItem(1, 8, QSizePolicy::Fixed, QSizePolicy::Fixed),
        1, 0
    );

    // --- Live-Backup-Bereich ---
    auto *liveHLayout = new QHBoxLayout();
    liveHLayout->setContentsMargins(8, 8, 8, 8);

    auto *liveVLayout = new QVBoxLayout();
    m_liveWidget = new QWidget(this);
    m_liveWidget->setStyleSheet("QWidget { border-radius: 4px; }");
    m_liveWidget->setLayout(liveHLayout);

    liveHLayout->addLayout(liveVLayout);
    liveHLayout->addStretch();

    const QString styleSheet = QStringLiteral(
        "QPushButton { font-size: %5px; border: %1px solid; border-color: black; "
        "border-radius: 4px; background-color: %2; color: %3; } "
        "QPushButton:hover { background-color: %4; }");

    m_liveAccountButton->setStyleSheet(styleSheet.arg("0", "#E20074", "white", "#c00063", "13"));
    m_liveAccountButton->setFixedSize(180, 32);
    m_liveAccountButton->setLeftIconMargin(4);

    liveHLayout->addWidget(m_liveAccountButton);

    liveVLayout->addWidget(m_liveTitle);
    m_liveTitle->setStyleSheet("font-size: 15px; font-weight: 600;");

    liveVLayout->addWidget(m_liveDescription);
    m_liveDescription->setStyleSheet("font-size: 13px;");
    m_liveDescription->setText(QCoreApplication::translate("", "LIVE_BACKUPS_DESCRIPTION"));
    m_liveDescription->setWordWrap(true);
    m_liveDescription->setFixedWidth(450);

    getUi()->gridLayout->addWidget(m_liveWidget, 4, 0);

    // --- Speicherbereich (Quota) ---
    auto *magentaHLayout = new QHBoxLayout();
    magentaHLayout->setSpacing(12);

    auto *quotaVLayout = new QVBoxLayout();
    quotaVLayout->setSpacing(4);

    quotaVLayout->addWidget(getUi()->quotaInfoLabel);
    getUi()->quotaInfoLabel->setStyleSheet("QLabel { font-size: 18px; padding: 4px; font-weight: 500; }");

    quotaVLayout->addWidget(getUi()->quotaProgressBar);
    getUi()->quotaProgressBar->setStyleSheet(
        "QProgressBar { background-color: #e5e5e5; color: black; border: 1px solid black; border-radius: 4px; margin-left: 8px; } "
        "QProgressBar::chunk { background-color: #E20074; }");
    getUi()->quotaProgressBar->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    quotaVLayout->addWidget(getUi()->quotaInfoText);
    getUi()->quotaInfoText->setStyleSheet("QLabel { font-size: 13px; padding: 4px; }");

    quotaVLayout->addSpacing(12);
    magentaHLayout->addLayout(quotaVLayout);

    auto *storageLinkButton = new QPushButton(QCoreApplication::translate("", "STORAGE_EXTENSION"), this);
    storageLinkButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    storageLinkButton->setStyleSheet(
        "QPushButton { height: 32px; width: 180px; border: 1px solid black; background-color: #ededed; "
        "color: black; font-size: 13px; border-radius: 4px; } "
        "QPushButton:hover { background-color: white; }");

    connect(storageLinkButton, &QPushButton::clicked, this, []() {
        QDesktopServices::openUrl(QUrl(QStringLiteral("https://cloud.telekom-dienste.de/tarife")));
    });

    magentaHLayout->addWidget(storageLinkButton);
    magentaHLayout->addSpacing(8);

    getUi()->gridLayout->addLayout(magentaHLayout, 5, 0);

    // --- Sichtbarkeit initial ausblenden ---
    getUi()->encryptionMessage->hide();
    checkClientSideEncryptionState();

    // --- Sichtbarkeit des Live-Backup-Bereichs je nach Tab ---
    auto *tabWidget = getUi()->tabWidget;
    auto *connectionSettingsTab = getUi()->connectionSettingsTab;

    if (tabWidget && connectionSettingsTab) {
        connect(tabWidget, &QTabWidget::currentChanged, this,
                [this, tabWidget, connectionSettingsTab](int index) {
                    QWidget *currentTab = tabWidget->widget(index);
                    bool hideLiveBackup = (currentTab == connectionSettingsTab);
                    m_liveWidget->setVisible(!hideLiveBackup);
                });

        // Initialzustand
        QWidget *currentTab = tabWidget->currentWidget();
        bool hideLiveBackup = (currentTab == connectionSettingsTab);
        m_liveWidget->setVisible(!hideLiveBackup);
    }
}

} // namespace OCC
