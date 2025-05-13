/*
 * Copyright (C) by Michael Schuster <michael@schuster.ms>
 * Adapted by Eugen Fischer for MagentaCLOUD
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#include "flow2authwidget.h"

#include "common/utility.h"
#include "account.h"
#include "creds/webflowcredentials.h"
#include "networkjobs.h"
#include "wizard/owncloudwizardcommon.h"
#include "theme.h"
#include "linklabel.h"

#include "QProgressIndicator.h"

#include <QJsonDocument>
#include <QStringLiteral>
#include <QJsonObject>
#include <QPainter>
#include <QPalette>

namespace OCC {

Q_LOGGING_CATEGORY(lcFlow2AuthWidget, "nextcloud.gui.wizard.flow2authwidget", QtInfoMsg)

Flow2AuthWidget::Flow2AuthWidget(QWidget *parent)
    : QWidget(parent)
    , _progressIndi(new QProgressIndicator(this))
{
    _ui.setupUi(this);

    WizardCommon::initErrorLabel(_ui.errorLabel);
    _ui.errorLabel->setTextFormat(Qt::RichText);

    connect(_ui.openLinkButton, &QPushButton::clicked, this, &Flow2AuthWidget::slotOpenBrowser);
    connect(_ui.copyLinkButton, &QPushButton::clicked, this, &Flow2AuthWidget::slotCopyLinkToClipboard);

    auto sizePolicy = _progressIndi->sizePolicy();
    sizePolicy.setRetainSizeWhenHidden(true);
    _progressIndi->setSizePolicy(sizePolicy);

    _ui.progressLayout->addWidget(_progressIndi);
    stopSpinner(false);

    customizeStyle();
}

Flow2AuthWidget::~Flow2AuthWidget()
{
    _asyncAuth.reset(nullptr);
}

void Flow2AuthWidget::setLogo()
{
    _ui.logoLabel->setPixmap(QIcon(":/client/theme/NMCIcons/tlogocarrier.svg").pixmap(36, 36));
}

void Flow2AuthWidget::customizeStyle()
{
    setLogo();

    if (_progressIndi) {
        const auto isDarkBackground = Theme::isDarkColor(palette().window().color());
        _progressIndi->setColor(isDarkBackground ? Qt::white : Qt::black);
    }

    // Textanpassung
    _ui.label->setText(
        tr("Wechseln Sie bitte zu Ihrem Browser und melden Sie sich dort an, um Ihr Konto zu verbinden."));
    _ui.label->setStyleSheet("font-size: 15px; font-weight: normal;");

    // LOGIN-Button Styling
    _ui.openLinkButton->setText(tr("LOGIN"));
    _ui.openLinkButton->setStyleSheet(R"(
        QPushButton {
            font-size: 15px;
            border: 0px solid;
            border-radius: 4px;
            background-color: #E20074;
            color: white;
            width: 130px;
            height: 32px;
        }
        QPushButton:hover {
            background-color: #c00063;
        }
    )");

    // Copy-Link-Button ausblenden (optional)
    _ui.copyLinkButton->setVisible(false);

    WizardCommon::customizeHintLabel(_ui.statusLabel);
    _ui.errorLabel->setStyleSheet("color: red;");

    // Weißer Hintergrund
    setAutoFillBackground(true);
    QPalette pal = palette();
    pal.setColor(QPalette::Window, Qt::white);
    setPalette(pal);
}

void Flow2AuthWidget::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    p.fillRect(rect(), Qt::white);
    QWidget::paintEvent(event);
}

void Flow2AuthWidget::startAuth(Account *account)
{
    const auto oldAuth = _asyncAuth.release();
    if (oldAuth) {
        oldAuth->deleteLater();
    }

    _statusUpdateSkipCount = 0;

    if (account) {
        _account = account;

        _asyncAuth = std::make_unique<Flow2Auth>(_account, this);
        connect(_asyncAuth.get(), &Flow2Auth::result, this, &Flow2AuthWidget::slotAuthResult, Qt::QueuedConnection);
        connect(_asyncAuth.get(), &Flow2Auth::statusChanged, this, &Flow2AuthWidget::slotStatusChanged);
        connect(this, &Flow2AuthWidget::pollNow, _asyncAuth.get(), &Flow2Auth::slotPollNow);
        _asyncAuth->start();
    }
}

void Flow2AuthWidget::resetAuth(Account *account)
{
    startAuth(account);
}

void Flow2AuthWidget::slotAuthResult(Flow2Auth::Result r, const QString &errorString, const QString &user, const QString &appPassword)
{
    stopSpinner(false);

    switch (r) {
    case Flow2Auth::NotSupported:
        _ui.errorLabel->setText(tr("Unable to open the Browser, please copy the link to your Browser."));
        _ui.errorLabel->show();
        break;
    case Flow2Auth::Error:
        _ui.errorLabel->setText(errorString);
        _ui.errorLabel->show();
        break;
    case Flow2Auth::LoggedIn:
        _ui.errorLabel->hide();
        break;
    }

    emit authResult(r, errorString, user, appPassword);
}

void Flow2AuthWidget::setError(const QString &error)
{
    if (error.isEmpty()) {
        _ui.errorLabel->hide();
    } else {
        _ui.errorLabel->setText(error);
        _ui.errorLabel->show();
    }
}

void Flow2AuthWidget::slotOpenBrowser()
{
    if (_ui.errorLabel)
        _ui.errorLabel->hide();

    if (_asyncAuth)
        _asyncAuth->openBrowser();
}

void Flow2AuthWidget::slotCopyLinkToClipboard()
{
    if (_ui.errorLabel)
        _ui.errorLabel->hide();

    if (_asyncAuth)
        _asyncAuth->copyLinkToClipboard();
}

void Flow2AuthWidget::slotPollNow()
{
    emit pollNow();
}

void Flow2AuthWidget::slotStatusChanged(Flow2Auth::PollStatus status, int secondsLeft)
{
    switch (status) {
    case Flow2Auth::statusPollCountdown:
        if (_statusUpdateSkipCount > 0) {
            _statusUpdateSkipCount--;
            break;
        }
        _ui.statusLabel->setText(tr("Waiting for authorization") + QStringLiteral("… (%1)").arg(secondsLeft));
        stopSpinner(true);
        break;
    case Flow2Auth::statusPollNow:
        _statusUpdateSkipCount = 0;
        _ui.statusLabel->setText(tr("Polling for authorization") + "…");
        startSpinner();
        break;
    case Flow2Auth::statusFetchToken:
        _statusUpdateSkipCount = 0;
        _ui.statusLabel->setText(tr("Starting authorization") + "…");
        startSpinner();
        break;
    case Flow2Auth::statusCopyLinkToClipboard:
        _ui.statusLabel->setText(tr("Link copied to clipboard."));
        _statusUpdateSkipCount = 3;
        stopSpinner(true);
        break;
    }
}

void Flow2AuthWidget::startSpinner()
{
    _ui.progressLayout->setEnabled(true);
    _ui.statusLabel->setVisible(true);
    _progressIndi->setVisible(true);
    _progressIndi->startAnimation();

    _ui.openLinkButton->setEnabled(false);
    _ui.copyLinkButton->setEnabled(false);
}

void Flow2AuthWidget::stopSpinner(bool showStatusLabel)
{
    _ui.progressLayout->setEnabled(false);
    _ui.statusLabel->setVisible(showStatusLabel);
    _progressIndi->setVisible(false);
    _progressIndi->stopAnimation();

    _ui.openLinkButton->setEnabled(_statusUpdateSkipCount == 0);
    _ui.copyLinkButton->setEnabled(_statusUpdateSkipCount == 0);
}

void Flow2AuthWidget::slotStyleChanged()
{
    customizeStyle();
}

} // namespace OCC
 