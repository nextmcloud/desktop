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

#include "nmcgui/nmcaccountsettings.h"
#include "ui_accountsettings.h"
#include "common/utility.h"
#include "accountstate.h"
#include "account.h"
#include "theme.h"

#include <cmath>
#include <QCoreApplication>
#include <QDesktopServices>
#include <QHBoxLayout>
#include <QIcon>
#include <QLabel>
#include <QLayout>
#include <QProgressBar>
#include <QPushButton>
#include <QSizePolicy>
#include <QTimer>
#include <QUrl>
#include <QVBoxLayout>

#ifdef Q_OS_WIN
#define BACKGROUND_PALETTE "alternate-base"
#else
#define BACKGROUND_PALETTE "light"
#endif

namespace OCC {

namespace {
constexpr int panelPadding = 24;
constexpr int contentWidth = 450;
constexpr int actionButtonWidth = 180;
constexpr int actionButtonHeight = 32;
constexpr int panelRadius = 10;
constexpr int panelSpacing = 32;

QString panelStyleSheet(const QString &objectName)
{
    return QStringLiteral(
        "#%1 {"
        " background: palette(" BACKGROUND_PALETTE ");"
        " border-radius: %2px;"
        "}"
    ).arg(objectName).arg(panelRadius);
}

QWidget *createPanel(const QString &objectName, QWidget *parent)
{
    auto *panel = new QWidget(parent);
    panel->setObjectName(objectName);
    panel->setAttribute(Qt::WA_StyledBackground, true);
    panel->setStyleSheet(panelStyleSheet(objectName));
    return panel;
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

void styleSecondaryButton(QPushButton *button)
{
    if (!button) {
        return;
    }

    button->setFixedSize(actionButtonWidth, actionButtonHeight);
    button->setStyleSheet(QStringLiteral(
        "QPushButton {"
        " border: 1px solid black;"
        " background-color: #ededed;"
        " color: black;"
        " font-size: 13px;"
        " border-radius: 4px;"
        "}"
        "QPushButton:hover {"
        " background-color: white;"
        "}"
    ));
}

void clearLayout(QLayout *layout)
{
    if (!layout) {
        return;
    }

    while (auto *item = layout->takeAt(0)) {
        if (auto *widget = item->widget()) {
            widget->setParent(nullptr);
            widget->deleteLater();
        }
        delete item;
    }
}

void setupTransparentWidget(QWidget *widget)
{
    if (!widget) {
        return;
    }

    widget->setAutoFillBackground(false);
    widget->setAttribute(Qt::WA_StyledBackground, false);
    widget->setStyleSheet(QStringLiteral(
        "background: transparent;"
        "border: none;"
        "padding: 0px;"
        "margin: 0px;"
    ));
}

void setupTransparentLayout(QLayout *layout, int spacing = 0)
{
    if (!layout) {
        return;
    }

    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(spacing);
}

bool layoutContainsPushButton(QLayout *layout)
{
    if (!layout) {
        return false;
    }

    for (int i = 0; i < layout->count(); ++i) {
        if (qobject_cast<QPushButton *>(layout->itemAt(i)->widget())) {
            return true;
        }
    }

    return false;
}
}

NMCAccountSettings::NMCAccountSettings(AccountState *accountState, QWidget *parent)
    : AccountSettings(accountState, parent)
    , m_liveAccountButton(new CustomButton(
        QCoreApplication::translate("", "ADD_LIVE_BACKUP"),
        QIcon(),
        this))
    , m_liveTitle(new QLabel(QCoreApplication::translate("", "LIVE_BACKUPS"), this))
    , m_liveDescription(new QLabel(QCoreApplication::translate("", "LIVE_DESCRIPTION"), this))
    , m_quotaInfoLabel(new QLabel(this))
    , m_quotaProgressBar(new QProgressBar(this))
    , m_quotaInfoText(new QLabel(this))
{
    setDefaultSettings();
    setLayout();

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
    auto *e2eePanel = createPanel(QStringLiteral("nmcE2eePanel"), this);
    auto *e2eeHLayout = createPanelHorizontalLayout(e2eePanel);
    auto *e2eeVLayout = createContentVerticalLayout(8);

    auto *e2eeTitle = new QLabel(QCoreApplication::translate("", "E2E_ENCRYPTION"), e2eePanel);
    styleTitleLabel(e2eeTitle);

    auto *e2eeTitleIcon = new QLabel(e2eePanel);
    e2eeTitleIcon->setFixedSize(24, 24);
    e2eeTitleIcon->setPixmap(
        Theme::createColorAwareIcon(QStringLiteral(":/client/theme/NMCIcons/cloud-security.svg"))
            .pixmap(24, 24));
    e2eeTitleIcon->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    auto *e2eeTitleLayout = new QHBoxLayout();
    setupTransparentLayout(e2eeTitleLayout, 8);
    e2eeTitleLayout->addWidget(e2eeTitleIcon);
    e2eeTitleLayout->addWidget(e2eeTitle);
    e2eeTitleLayout->addStretch();

    getUi()->accountStatusLayout->removeWidget(getUi()->encryptionMessage);
    getUi()->encryptionMessageLayout->removeItem(getUi()->encryptionMessageButtonsLayout);

    setupTransparentWidget(getUi()->encryptionMessage);
    setupTransparentLayout(getUi()->encryptionMessageLayout);
    setupTransparentLayout(getUi()->encryptionMessageHeaderLayout);

    getUi()->encryptionMessageIcon->clear();
    getUi()->encryptionMessageIcon->hide();

    setupContentLabel(getUi()->encryptionMessageLabel);
    setupTransparentWidget(getUi()->encryptionMessageLabel);

    e2eeVLayout->addLayout(e2eeTitleLayout);
    e2eeVLayout->addWidget(getUi()->encryptionMessage);

    auto *e2eeButtonContainer = new QWidget(e2eePanel);
    setupTransparentWidget(e2eeButtonContainer);

    auto *e2eeButtonContainerLayout = new QVBoxLayout(e2eeButtonContainer);
    setupTransparentLayout(e2eeButtonContainerLayout, 8);

    auto updateE2eePanelVisibility = [this, e2eePanel]() {
        const auto accountState = accountsState();
        const auto account = accountState ? accountState->account() : nullptr;

        const bool visible = account
            && account->capabilities().clientSideEncryptionAvailable();

        e2eePanel->setVisible(visible);
        return visible;
    };

    auto normalizeEncryptionLayout = [this, e2eeButtonContainerLayout, updateE2eePanelVisibility]() {
        if (!updateE2eePanelVisibility()) {
            return;
        }

        getUi()->encryptionMessageIcon->clear();
        getUi()->encryptionMessageIcon->hide();

        setupTransparentWidget(getUi()->encryptionMessage);
        setupTransparentLayout(getUi()->encryptionMessageLayout);
        setupTransparentLayout(getUi()->encryptionMessageHeaderLayout);

        setupContentLabel(getUi()->encryptionMessageLabel);
        setupTransparentWidget(getUi()->encryptionMessageLabel);

        auto *sourceLayout = getUi()->encryptionMessageButtonsLayout;
        const bool hasNewSourceButtons = layoutContainsPushButton(sourceLayout);

        if (hasNewSourceButtons) {
            clearLayout(e2eeButtonContainerLayout);

            while (auto *item = sourceLayout->takeAt(0)) {
                if (auto *button = qobject_cast<QPushButton *>(item->widget())) {
                    styleSecondaryButton(button);
                    e2eeButtonContainerLayout->addWidget(button, 0, Qt::AlignRight);
                }
                delete item;
            }

            e2eeButtonContainerLayout->addStretch();
        } else {
            for (int i = 0; i < e2eeButtonContainerLayout->count(); ++i) {
                if (auto *button = qobject_cast<QPushButton *>(e2eeButtonContainerLayout->itemAt(i)->widget())) {
                    styleSecondaryButton(button);
                }
            }
        }

        getUi()->encryptionMessage->updateGeometry();

        if (auto *panel = getUi()->encryptionMessage->parentWidget()) {
            panel->updateGeometry();
        }

        updateGeometry();
    };

    e2eeHLayout->addLayout(e2eeVLayout);
    e2eeHLayout->addStretch();
    e2eeHLayout->addWidget(e2eeButtonContainer, 0, Qt::AlignRight | Qt::AlignVCenter);

    getUi()->accountStatusPanel->setVisible(false);
    getUi()->verticalLayout_2->insertWidget(0, e2eePanel);

    if (auto *accountState = accountsState()) {
        connect(accountState, &AccountState::stateChanged, this, [this, normalizeEncryptionLayout]() {
            QTimer::singleShot(0, this, normalizeEncryptionLayout);
        });

        if (accountState->account() && accountState->account()->e2e()) {
            connect(accountState->account()->e2e(), &ClientSideEncryption::initializationFinished, this, [this, normalizeEncryptionLayout]() {
                QTimer::singleShot(0, this, normalizeEncryptionLayout);
            });

            connect(accountState->account()->e2e(), &ClientSideEncryption::sensitiveDataForgotten, this, [this, normalizeEncryptionLayout]() {
                QTimer::singleShot(0, this, normalizeEncryptionLayout);
            });
        }
    }

    QTimer::singleShot(0, this, normalizeEncryptionLayout);

    auto *liveWidget = createPanel(QStringLiteral("nmcLiveBackupPanel"), this);
    auto *liveHLayout = createPanelHorizontalLayout(liveWidget);
    auto *liveVLayout = createContentVerticalLayout();

    liveHLayout->addLayout(liveVLayout);
    liveHLayout->addStretch();

    const QString primaryButtonStyle = QStringLiteral(
        "QPushButton { font-size: %5px; border: %1px solid; border-color: black; "
        "border-radius: 4px; background-color: %2; color: %3; } "
        "QPushButton:hover { background-color: %4; }");

    m_liveAccountButton->setStyleSheet(primaryButtonStyle.arg("0", "#E20074", "white", "#c00063", "13"));
    m_liveAccountButton->setFixedSize(actionButtonWidth, actionButtonHeight);
    m_liveAccountButton->setIcon(QIcon());

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
    m_quotaProgressBar->setStyleSheet(QStringLiteral(
        "QProgressBar {"
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
        "}"
    ));
    quotaVLayout->addWidget(m_quotaProgressBar);

    m_quotaInfoText->setFixedWidth(contentWidth);
    m_quotaInfoText->setStyleSheet(QStringLiteral("QLabel { font-size: 13px; padding: 0px; }"));
    quotaVLayout->addWidget(m_quotaInfoText);

    quotaHLayout->addLayout(quotaVLayout);
    quotaHLayout->addStretch();

    auto *storageLinkButton = new QPushButton(QCoreApplication::translate("", "STORAGE_EXTENSION"), quotaWidget);
    styleSecondaryButton(storageLinkButton);

    connect(storageLinkButton, &QPushButton::clicked, this, []() {
        QDesktopServices::openUrl(QUrl(QStringLiteral("https://cloud.telekom-dienste.de/tarife")));
    });

    quotaHLayout->addWidget(storageLinkButton, 0, Qt::AlignRight | Qt::AlignVCenter);

    getUi()->verticalLayout_2->addWidget(quotaWidget);

    getUi()->encryptionMessage->hide();
    checkClientSideEncryptionState();
    updateE2eePanelVisibility();

    QTimer::singleShot(0, this, normalizeEncryptionLayout);
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
