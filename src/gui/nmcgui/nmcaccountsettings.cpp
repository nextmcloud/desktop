/*
 * Copyright (C) by Mauro Mura
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 */

#include "nmcgui/nmcaccountsettings.h"
#include "account.h"
#include "accountstate.h"
#include "common/utility.h"
#include "theme.h"
#include "ui_accountsettings.h"

#include <QCoreApplication>
#include <QDesktopServices>
#include <QGuiApplication>
#include <QHBoxLayout>
#include <QIcon>
#include <QLabel>
#include <QLayout>
#include <QList>
#include <QPalette>
#include <QProgressBar>
#include <QPushButton>
#include <QSize>
#include <QSizePolicy>
#include <QToolButton>
#include <QUrl>
#include <QVBoxLayout>
#include <cmath>

namespace OCC {

namespace {
constexpr int panelPadding = 24;
constexpr int contentWidth = 450;
constexpr int panelRadius = 10;
constexpr int panelSpacing = 32;

QColor settingsPanelColor()
{
#ifdef Q_OS_WIN
    return QGuiApplication::palette().color(QPalette::AlternateBase);
#else
    return Theme::settingsPanelColor(QGuiApplication::palette());
#endif
}

QString panelStyleSheet(const QString &objectName)
{
    return QStringLiteral(
               "#%1 {"
               " background: %2;"
               " border-radius: %3px;"
               "}")
        .arg(objectName, settingsPanelColor().name())
        .arg(panelRadius);
}

QWidget *createPanel(const QString &objectName, QWidget *parent)
{
    auto *panel = new QWidget(parent);
    panel->setObjectName(objectName);
    panel->setAttribute(Qt::WA_StyledBackground, true);
    panel->setStyleSheet(panelStyleSheet(objectName));
    return panel;
}

QString connectionSettingsStyleSheet()
{
    return QStringLiteral(
               "QFrame#connectionSettingsPanel,"
               "QWidget#connectionSettingsPanelContents {"
               " background: transparent;"
               " border: none;"
               "}"
               "NetworkSettings,"
               "NetworkSettings QWidget {"
               " background: transparent;"
               "}"
               "NetworkSettings QGroupBox {"
               " background: %1;"
               "}")
        .arg(settingsPanelColor().name());
}

QHBoxLayout *createPanelHorizontalLayout(QWidget *panel)
{
    auto *layout = new QHBoxLayout(panel);
    layout->setContentsMargins(panelPadding, panelPadding, panelPadding, panelPadding);
    layout->setSpacing(panelSpacing);
    return layout;
}

QVBoxLayout *createContentVerticalLayout(int spacing = 4)
{
    auto *layout = new QVBoxLayout();
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(spacing);
    return layout;
}

QIcon nmcCollapseIcon(const QString &path)
{
    return QIcon(Theme::createColorAwareIcon(path).pixmap(QSize(24, 24), QIcon::Normal, QIcon::Off));
}

void styleTitleLabel(QLabel *label)
{
    if (!label) {
        return;
    }

    label->setStyleSheet(QStringLiteral("font-size: 15px; font-weight: 600;"));
}

void setupContentLabel(QLabel *label)
{
    if (!label) {
        return;
    }

    label->setWordWrap(true);
    label->setFixedWidth(contentWidth);
}

void setupTransparentWidget(QWidget *widget)
{
    if (!widget) {
        return;
    }

    widget->setAutoFillBackground(false);
    widget->setAttribute(Qt::WA_StyledBackground, false);
    widget->setStyleSheet(
        QStringLiteral("background: transparent;"
                       "border: none;"
                       "padding: 0px;"
                       "margin: 0px;"));
}

void setupTransparentLayout(QLayout *layout, int spacing = 0)
{
    if (!layout) {
        return;
    }

    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(spacing);
}

void moveExpandingSpacersToEnd(QBoxLayout *layout)
{
    if (!layout) {
        return;
    }

    QList<QLayoutItem *> expandingSpacerItems;

    for (int i = layout->count() - 1; i >= 0; --i) {
        auto *item = layout->itemAt(i);
        auto *spacer = item ? item->spacerItem() : nullptr;

        if (!spacer) {
            continue;
        }

        const auto verticalPolicy = spacer->sizePolicy().verticalPolicy();

        if (verticalPolicy == QSizePolicy::Expanding || verticalPolicy == QSizePolicy::MinimumExpanding) {
            expandingSpacerItems.prepend(layout->takeAt(i));
        }
    }

    for (auto *item : expandingSpacerItems) {
        layout->addItem(item);
    }
}
}

NMCAccountSettings::NMCAccountSettings(AccountState *accountState, QWidget *parent)
    : AccountSettings(accountState, parent)
    , m_liveAccountButton(new CustomButton(QCoreApplication::translate("", "ADD_LIVE_BACKUP"), QIcon(), this))
    , m_liveTitle(new QLabel(QCoreApplication::translate("", "LIVE_BACKUPS"), this))
    , m_liveDescription(new QLabel(QCoreApplication::translate("", "LIVE_DESCRIPTION"), this))
    , m_quotaInfoLabel(new QLabel(this))
    , m_quotaProgressBar(new QProgressBar(this))
    , m_quotaInfoText(new QLabel(this))
{
    setDefaultSettings();
    setLayout();
    updatePanelStyles();
    connect(this, &AccountSettings::styleChanged, this, &NMCAccountSettings::updatePanelStyles);

    connect(m_liveAccountButton, &CustomButton::clicked, this, &NMCAccountSettings::slotAddFolder);
}

void NMCAccountSettings::setDefaultSettings()
{
    getUi()->selectiveSyncStatus->setVisible(false);
    getUi()->selectiveSyncNotification->setVisible(false);
    getUi()->accountStatus->setVisible(false);
    getUi()->bigFolderUi->setVisible(false);
    getUi()->verticalLayout_2->setSpacing(8);
}

void NMCAccountSettings::setLayout()
{
    getUi()->verticalLayout_2->removeWidget(getUi()->connectionSettingsPanel);
    getUi()->verticalLayout_2->removeWidget(getUi()->accountActionsPanel);

    styleTitleLabel(getUi()->syncFoldersPanelTitle);

    getUi()->syncFoldersPanel->setObjectName(QStringLiteral("nmcSyncFoldersPanel"));
    getUi()->syncFoldersPanel->setAttribute(Qt::WA_StyledBackground, true);
    getUi()->syncFoldersPanel->setStyleSheet(panelStyleSheet(QStringLiteral("nmcSyncFoldersPanel")));

    getUi()->syncFoldersPanelContents->setAutoFillBackground(false);
    getUi()->syncFoldersPanelContents->setAttribute(Qt::WA_StyledBackground, false);
    getUi()->syncFoldersPanelContents->setStyleSheet(
        QStringLiteral("QWidget#syncFoldersPanelContents {"
                       " background: transparent;"
                       " border: none;"
                       "}"));

    getUi()->_folderList->setAutoFillBackground(false);
    getUi()->_folderList->setAttribute(Qt::WA_StyledBackground, false);
    getUi()->_folderList->viewport()->setAutoFillBackground(false);
    getUi()->_folderList->viewport()->setAttribute(Qt::WA_StyledBackground, false);
    getUi()->_folderList->setStyleSheet(
        QStringLiteral("QTreeView,"
                       "QTreeView::viewport {"
                       " background: transparent;"
                       " border: none;"
                       "}"));

    if (auto *syncFoldersPanelLayout = getUi()->syncFoldersPanel->layout()) {
        syncFoldersPanelLayout->setContentsMargins(16, 16, 16, 16);
        syncFoldersPanelLayout->setSpacing(8);
    }

    if (auto *syncFoldersLayout = getUi()->syncFoldersLayout) {
        syncFoldersLayout->setContentsMargins(0, 0, 0, 0);
        syncFoldersLayout->setSpacing(0);
    }

    getUi()->syncFoldersPanelTitle->setContentsMargins(0, 0, 0, 0);

    getUi()->_folderList->setAutoFillBackground(false);
    getUi()->_folderList->setAttribute(Qt::WA_StyledBackground, false);
    getUi()->_folderList->viewport()->setAutoFillBackground(false);
    getUi()->_folderList->viewport()->setAttribute(Qt::WA_StyledBackground, false);

    // stable-35 creates a dedicated encryption panel in AccountSettings.
    // Reuse the existing panel and keep the upstream E2EE hierarchy intact.
    auto *e2eePanel = getUi()->encryptionMessage->parentWidget();

    if (e2eePanel) {
        e2eePanel->setObjectName(QStringLiteral("nmcE2eePanel"));
        e2eePanel->setAttribute(Qt::WA_StyledBackground, true);
        e2eePanel->setStyleSheet(panelStyleSheet(QStringLiteral("nmcE2eePanel")));

        if (auto *panelLayout = e2eePanel->layout()) {
            panelLayout->setContentsMargins(panelPadding, panelPadding, panelPadding, panelPadding);
            panelLayout->setSpacing(8);
        }

        getUi()->verticalLayout_2->removeWidget(e2eePanel);
        getUi()->verticalLayout_2->insertWidget(0, e2eePanel);
    }

    getUi()->verticalLayout_2->removeWidget(getUi()->accountShortcutsPanel);
    getUi()->verticalLayout_2->insertWidget(getUi()->verticalLayout_2->indexOf(getUi()->syncFoldersPanel) + 1, getUi()->accountShortcutsPanel);

    setupTransparentWidget(getUi()->encryptionMessage);
    setupTransparentLayout(getUi()->encryptionMessageLayout);
    setupTransparentLayout(getUi()->encryptionMessageHeaderLayout);

    getUi()->encryptionMessageIcon->clear();
    getUi()->encryptionMessageIcon->hide();

    setupContentLabel(getUi()->encryptionMessageLabel);
    setupTransparentWidget(getUi()->encryptionMessageLabel);

    getUi()->encryptionMessageButtonsLayout->setContentsMargins(0, 8, 0, 0);
    getUi()->encryptionMessageButtonsLayout->setSpacing(8);

    getUi()->accountStatusPanel->setVisible(false);

    auto *liveWidget = createPanel(QStringLiteral("nmcLiveBackupPanel"), this);
    auto *liveHLayout = createPanelHorizontalLayout(liveWidget);
    auto *liveVLayout = createContentVerticalLayout();

    liveHLayout->addLayout(liveVLayout);
    liveHLayout->addStretch();

    m_liveAccountButton->setObjectName(QStringLiteral("nmcLiveBackupButton"));

    liveHLayout->addWidget(m_liveAccountButton, 0, Qt::AlignRight | Qt::AlignVCenter);

    styleTitleLabel(m_liveTitle);
    liveVLayout->addWidget(m_liveTitle);

    m_liveDescription->setStyleSheet(QStringLiteral("font-size: 13px;"));
    m_liveDescription->setText(QCoreApplication::translate("", "LIVE_BACKUPS_DESCRIPTION"));
    setupContentLabel(m_liveDescription);
    liveVLayout->addWidget(m_liveDescription);

    getUi()->verticalLayout_2->addWidget(liveWidget);

    auto *quotaWidget = createPanel(QStringLiteral("nmcQuotaPanel"), this);
    auto *quotaHLayout = createPanelHorizontalLayout(quotaWidget);
    auto *quotaVLayout = createContentVerticalLayout();

    m_quotaInfoLabel->setFixedWidth(contentWidth);
    m_quotaInfoLabel->setStyleSheet(QStringLiteral("QLabel { font-size: 18px; font-weight: 500; padding: 0px; }"));
    quotaVLayout->addWidget(m_quotaInfoLabel);

    m_quotaProgressBar->setRange(0, 100);
    m_quotaProgressBar->setTextVisible(false);
    m_quotaProgressBar->setFixedWidth(contentWidth);
    m_quotaProgressBar->setFixedHeight(8);
    m_quotaProgressBar->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    m_quotaProgressBar->setStyleSheet(
        QStringLiteral("QProgressBar {"
                       " background-color: #e5e5e5;"
                       " color: black;"
                       " border: 1px solid black;"
                       " border-radius: 4px;"
                       " margin: 0px;"
                       " padding: 0px;"
                       "} "
                       "QProgressBar::chunk {"
                       " background-color: #E20074;"
                       " border-radius: 3px;"
                       "}"));
    quotaVLayout->addWidget(m_quotaProgressBar);

    m_quotaInfoText->setFixedWidth(contentWidth);
    m_quotaInfoText->setStyleSheet(QStringLiteral("QLabel { font-size: 13px; padding: 0px; }"));
    quotaVLayout->addWidget(m_quotaInfoText);

    quotaHLayout->addLayout(quotaVLayout);
    quotaHLayout->addStretch();

    auto *storageLinkButton = new QPushButton(QCoreApplication::translate("", "STORAGE_EXTENSION"), quotaWidget);
    storageLinkButton->setObjectName(QStringLiteral("nmcStorageExtensionButton"));

    connect(storageLinkButton, &QPushButton::clicked, this, []() {
        QDesktopServices::openUrl(QUrl(QStringLiteral("https://cloud.telekom-dienste.de/tarife")));
    });

    quotaHLayout->addWidget(storageLinkButton, 0, Qt::AlignRight | Qt::AlignVCenter);

    getUi()->verticalLayout_2->addWidget(quotaWidget);

    // Connection settings, moved below live backup and quota
    auto *connectionWrapper = createPanel(QStringLiteral("nmcConnectionSettingsPanel"), this);
    auto *connectionWrapperLayout = new QVBoxLayout(connectionWrapper);
    connectionWrapperLayout->setContentsMargins(panelPadding, panelPadding, panelPadding, panelPadding);
    connectionWrapperLayout->setSpacing(12);

    auto *connectionToggle = new QToolButton(connectionWrapper);
    connectionToggle->setText(QCoreApplication::translate("", "CONNECTION_SETTINGS"));
    connectionToggle->setCheckable(true);
    connectionToggle->setChecked(false);
    connectionToggle->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    connectionToggle->setArrowType(Qt::NoArrow);
    connectionToggle->setIcon(nmcCollapseIcon(QStringLiteral(":/client/theme/NMCIcons/collapse-right.svg")));
    connectionToggle->setIconSize(QSize(24, 24));
    connectionToggle->setStyleSheet(
        QStringLiteral("QToolButton {"
                       " border: none;"
                       " background: transparent;"
                       " font-size: 15px;"
                       " font-weight: 600;"
                       " padding: 0px;"
                       " text-align: left;"
                       "}"));

    getUi()->connectionSettingsPanel->setParent(connectionWrapper);

    getUi()->connectionSettingsPanelTitle->hide();
    getUi()->connectionSettingsPanelLayout->removeWidget(getUi()->connectionSettingsPanelTitle);

    getUi()->connectionSettingsPanel->setAutoFillBackground(false);
    getUi()->connectionSettingsPanel->setAttribute(Qt::WA_StyledBackground, false);
    getUi()->connectionSettingsPanel->setStyleSheet(QString());
    getUi()->connectionSettingsPanel->setVisible(false);

    getUi()->connectionSettingsPanel->setStyleSheet(connectionSettingsStyleSheet());

    if (auto *connectionPanelLayout = getUi()->connectionSettingsPanel->layout()) {
        connectionPanelLayout->setContentsMargins(0, 0, 0, 0);
        connectionPanelLayout->setSpacing(0);
    }

    connect(connectionToggle, &QToolButton::toggled, this, [this, connectionToggle](bool checked) {
        connectionToggle->setIcon(nmcCollapseIcon(checked ? QStringLiteral(":/client/theme/NMCIcons/collapse-down.svg")
                                                          : QStringLiteral(":/client/theme/NMCIcons/collapse-right.svg")));

        getUi()->connectionSettingsPanel->setVisible(checked);
    });

    connectionWrapperLayout->addWidget(connectionToggle);
    connectionWrapperLayout->addWidget(getUi()->connectionSettingsPanel);

    getUi()->verticalLayout_2->addWidget(connectionWrapper);
    getUi()->verticalLayout_2->addWidget(getUi()->accountActionsPanel);

    // Keep all account setting panels above the expanding spacer.
    // verticalLayout_2 contains an expanding spacer from the original UI.
    // Widgets added with addWidget() would otherwise end up below that spacer.
    moveExpandingSpacersToEnd(getUi()->verticalLayout_2);
    getUi()->verticalLayout_2->setAlignment(Qt::AlignTop);
}

void NMCAccountSettings::updatePanelStyles()
{
    const auto panelNames = {
        QStringLiteral("nmcSyncFoldersPanel"),
        QStringLiteral("nmcE2eePanel"),
        QStringLiteral("nmcLiveBackupPanel"),
        QStringLiteral("nmcQuotaPanel"),
        QStringLiteral("nmcConnectionSettingsPanel"),
    };

    for (const auto &panelName : panelNames) {
        if (auto *panel = findChild<QWidget *>(panelName)) {
            panel->setStyleSheet(panelStyleSheet(panelName));
        }
    }

    getUi()->connectionSettingsPanel->setStyleSheet(connectionSettingsStyleSheet());
}

void NMCAccountSettings::slotUpdateQuota(qint64 total, qint64 used)
{
    if (total > 0) {
        const auto usedStr = Utility::octetsToString(used);
        const auto totalStr = Utility::octetsToString(total);
        const auto percent = (double(used) / double(total)) * 100.0;
        const auto percentStr = Utility::compactFormatDouble(percent, 1);

        const auto toolTip = tr("%1 (%3%) of %2 in use. Some folders, including network mounted or shared folders, might have different limits.")
                                 .arg(usedStr, totalStr, percentStr);

        m_quotaInfoLabel->setText(QCoreApplication::translate("", "%1_OF_%2").arg(usedStr, totalStr));
        m_quotaInfoLabel->setToolTip(toolTip);

        m_quotaProgressBar->setValue(static_cast<int>(std::round(percent)));
        m_quotaProgressBar->setToolTip(toolTip);

        m_quotaInfoText->setText(QCoreApplication::translate("", "USED_STORAGE_%1").arg(percentStr));
    } else {
        m_quotaInfoLabel->setText({});
        m_quotaProgressBar->setValue(0);
        m_quotaInfoText->setText(QCoreApplication::translate("", "USED_STORAGE_%1").arg(QString::number(0)));
    }

    AccountSettings::slotUpdateQuota(total, used);
}

} // namespace OCC
