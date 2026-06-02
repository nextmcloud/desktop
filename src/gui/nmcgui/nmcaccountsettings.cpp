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
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include "nmcgui/nmcaccountsettings.h"
#include "ui_accountsettings.h"
#include "common/utility.h"

#include <cmath>
#include <QAction>
#include <QCoreApplication>
#include <QDesktopServices>
#include <QHBoxLayout>
#include <QIcon>
#include <QLabel>
#include <QProgressBar>
#include <QPushButton>
#include <QSizePolicy>
#include <QTimer>
#include <QUrl>
#include <QVBoxLayout>

namespace OCC {

namespace {
constexpr int panelPadding = 24;
constexpr int contentWidth = 450;
constexpr int actionButtonWidth = 180;
constexpr int actionButtonHeight = 32;

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
}

#ifdef Q_OS_WIN
    #define BACKGROUND_PALETTE "alternate-base"
#else
    #define BACKGROUND_PALETTE "light"
#endif

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
    auto *e2eePanel = new QWidget(this);
    e2eePanel->setObjectName(QStringLiteral("nmcE2eePanel"));
    e2eePanel->setAttribute(Qt::WA_StyledBackground, true);
    e2eePanel->setStyleSheet(QStringLiteral(
        "#nmcE2eePanel {"
        " background: palette(" BACKGROUND_PALETTE ");"
        " border-radius: 6px;"
        "}"
    ));

    auto *e2eeHLayout = new QHBoxLayout(e2eePanel);
    e2eeHLayout->setContentsMargins(panelPadding, panelPadding, panelPadding, panelPadding);
    e2eeHLayout->setSpacing(32);

    auto *e2eeVLayout = new QVBoxLayout();
    e2eeVLayout->setSpacing(4);

    auto *e2eeTitle = new QLabel(QCoreApplication::translate("", "E2E_ENCRYPTION"), e2eePanel);
    e2eeTitle->setStyleSheet(QStringLiteral("font-size: 15px; font-weight: 600;"));

    auto *e2eeTitleIcon = new QLabel(e2eePanel);
    e2eeTitleIcon->setFixedSize(24, 24);
    e2eeTitleIcon->setPixmap(QIcon(QStringLiteral(":/client/theme/NMCIcons/cloud-security.svg")).pixmap(24, 24));
    e2eeTitleIcon->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    auto *e2eeTitleLayout = new QHBoxLayout();
    e2eeTitleLayout->setContentsMargins(0, 0, 0, 0);
    e2eeTitleLayout->setSpacing(8);
    e2eeTitleLayout->addWidget(e2eeTitleIcon);
    e2eeTitleLayout->addWidget(e2eeTitle);
    e2eeTitleLayout->addStretch();

    getUi()->accountStatusLayout->removeWidget(getUi()->encryptionMessage);
    getUi()->encryptionMessageLayout->removeItem(getUi()->encryptionMessageButtonsLayout);

    getUi()->encryptionMessage->setStyleSheet(QStringLiteral(
        "QWidget {"
        " background: transparent;"
        " border: none;"
        "}"
    ));

    getUi()->encryptionMessageLabel->setFixedWidth(contentWidth);
    getUi()->encryptionMessageLabel->setWordWrap(true);

    e2eeVLayout->addLayout(e2eeTitleLayout);
    e2eeVLayout->addWidget(getUi()->encryptionMessage);

    auto *e2eeButtonContainer = new QWidget(e2eePanel);
    auto *e2eeButtonContainerLayout = new QVBoxLayout(e2eeButtonContainer);
    e2eeButtonContainerLayout->setContentsMargins(0, 0, 0, 0);
    e2eeButtonContainerLayout->setSpacing(8);

    auto syncEncryptionButtons = [this, e2eeButtonContainerLayout]() {
        auto *sourceLayout = getUi()->encryptionMessageButtonsLayout;
        if (!sourceLayout) {
            return;
        }

        bool hasSourceButtons = false;
        for (int i = 0; i < sourceLayout->count(); ++i) {
            if (qobject_cast<QPushButton *>(sourceLayout->itemAt(i)->widget())) {
                hasSourceButtons = true;
                break;
            }
        }

        if (!hasSourceButtons) {
            return;
        }

        while (auto *item = e2eeButtonContainerLayout->takeAt(0)) {
            if (auto *widget = item->widget()) {
                widget->deleteLater();
            }
            delete item;
        }

        while (auto *item = sourceLayout->takeAt(0)) {
            if (auto *button = qobject_cast<QPushButton *>(item->widget())) {
                styleSecondaryButton(button);
                e2eeButtonContainerLayout->addWidget(button, 0, Qt::AlignRight);
            }
            delete item;
        }

        e2eeButtonContainerLayout->addStretch();
    };

    e2eeHLayout->addLayout(e2eeVLayout);
    e2eeHLayout->addStretch();
    e2eeHLayout->addWidget(e2eeButtonContainer, 0, Qt::AlignRight | Qt::AlignVCenter);

    getUi()->accountStatusLayout->addWidget(e2eePanel);

    QTimer::singleShot(0, this, syncEncryptionButtons);

    auto *liveWidget = new QWidget(this);
    liveWidget->setObjectName(QStringLiteral("nmcLiveBackupPanel"));
    liveWidget->setAttribute(Qt::WA_StyledBackground, true);
    liveWidget->setStyleSheet(QStringLiteral(
        "#nmcLiveBackupPanel {"
        " background: palette(" BACKGROUND_PALETTE ");"
        " border-radius: 6px;"
        "}"
    ));

    auto *liveHLayout = new QHBoxLayout(liveWidget);
    liveHLayout->setContentsMargins(panelPadding, panelPadding, panelPadding, panelPadding);
    liveHLayout->setSpacing(32);

    auto *liveVLayout = new QVBoxLayout();
    liveVLayout->setSpacing(4);

    liveHLayout->addLayout(liveVLayout);
    liveHLayout->addStretch();

    const QString styleSheet = QStringLiteral(
        "QPushButton { font-size: %5px; border: %1px solid; border-color: black; "
        "border-radius: 4px; background-color: %2; color: %3; } "
        "QPushButton:hover { background-color: %4; }");

    m_liveAccountButton->setStyleSheet(styleSheet.arg("0", "#E20074", "white", "#c00063", "13"));
    m_liveAccountButton->setFixedSize(180, 32);
    m_liveAccountButton->setIcon(QIcon());

    liveHLayout->addWidget(m_liveAccountButton, 0, Qt::AlignRight | Qt::AlignVCenter);

    liveVLayout->addWidget(m_liveTitle);
    m_liveTitle->setStyleSheet("font-size: 15px; font-weight: 600;");

    liveVLayout->addWidget(m_liveDescription);
    m_liveDescription->setStyleSheet("font-size: 13px;");
    m_liveDescription->setText(QCoreApplication::translate("", "LIVE_BACKUPS_DESCRIPTION"));
    m_liveDescription->setWordWrap(true);
    m_liveDescription->setFixedWidth(contentWidth);

    getUi()->verticalLayout_2->addWidget(liveWidget);

    auto *quotaWidget = new QWidget(this);
    quotaWidget->setObjectName(QStringLiteral("nmcQuotaPanel"));
    quotaWidget->setAttribute(Qt::WA_StyledBackground, true);
    quotaWidget->setStyleSheet(QStringLiteral(
        "#nmcQuotaPanel {"
        " background: palette(" BACKGROUND_PALETTE ");"
        " border-radius: 6px;"
        "}"
    ));

    auto *magentaHLayout = new QHBoxLayout(quotaWidget);
    magentaHLayout->setContentsMargins(panelPadding, panelPadding, panelPadding, panelPadding);
    magentaHLayout->setSpacing(32);

    auto *quotaVLayout = new QVBoxLayout();
    quotaVLayout->setSpacing(4);

    quotaVLayout->addWidget(m_quotaInfoLabel);
    m_quotaInfoLabel->setFixedWidth(contentWidth);
    m_quotaInfoLabel->setStyleSheet("QLabel { font-size: 18px; font-weight: 500; padding: 0px; }");

    quotaVLayout->addWidget(m_quotaProgressBar);
    m_quotaProgressBar->setRange(0, 100);
    m_quotaProgressBar->setTextVisible(false);
    m_quotaProgressBar->setFixedWidth(contentWidth);
    m_quotaProgressBar->setFixedHeight(8);
    m_quotaProgressBar->setStyleSheet(
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
        "}");
    m_quotaProgressBar->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    quotaVLayout->addWidget(m_quotaInfoText);
    m_quotaInfoText->setFixedWidth(contentWidth);
    m_quotaInfoText->setStyleSheet("QLabel { font-size: 13px; padding: 0px; }");

    magentaHLayout->addLayout(quotaVLayout);
    magentaHLayout->addStretch();

    auto *storageLinkButton = new QPushButton(QCoreApplication::translate("", "STORAGE_EXTENSION"), quotaWidget);
    storageLinkButton->setFixedSize(180, 32);
    styleSecondaryButton(storageLinkButton);

    connect(storageLinkButton, &QPushButton::clicked, this, []() {
        QDesktopServices::openUrl(QUrl(QStringLiteral("https://cloud.telekom-dienste.de/tarife")));
    });

    magentaHLayout->addWidget(storageLinkButton, 0, Qt::AlignRight | Qt::AlignVCenter);

    getUi()->verticalLayout_2->addWidget(quotaWidget);

    getUi()->encryptionMessage->hide();
    checkClientSideEncryptionState();

    QTimer::singleShot(0, this, syncEncryptionButtons);
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
