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

#include "nmcflow2authwidget.h"

#include <QCoreApplication>
#include <QDesktopServices>
#include <QIcon>
#include <QLabel>
#include <QPainter>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include "QProgressIndicator.h"
#include "theme.h"

namespace OCC {

NMCFlow2AuthWidget::NMCFlow2AuthWidget(QWidget *parent)
    : Flow2AuthWidget(parent)
{
    // Bestehende UI-Elemente ausblenden
    if (getUi().logoLabel) {
        getUi().logoLabel->hide();
        getUi().logoLabel->setFixedSize(0, 0);
    }
    if (getUi().label) {
        getUi().label->hide();
        getUi().label->setFixedSize(0, 0);
    }
    if (getUi().copyLinkButton) {
        getUi().copyLinkButton->hide();
    }
    if (getUi().openLinkButton) {
        getUi().openLinkButton->hide();
    }
    if (auto *progressInd = getProgressIndicator()) {
        progressInd->setVisible(false);
        progressInd->setFixedSize(0, 0);
    }
    if (getUi().statusLabel) {
        getUi().statusLabel->setVisible(false);
        getUi().statusLabel->setFixedSize(0, 0);
    }

    // Bestehendes Layout und Child-Widgets entfernen
    if (auto *oldLayout = layout()) {
        QLayoutItem *item;
        while ((item = oldLayout->takeAt(0)) != nullptr) {
            if (auto *widget = item->widget()) {
                widget->setParent(nullptr);
            }
            delete item;
        }
        delete oldLayout;
    }

    // Login-Button
    auto loginButton = new QPushButton(QCoreApplication::translate("", "LOGIN"));
    loginButton->setFocusPolicy(Qt::NoFocus);
    loginButton->setFixedSize(130, 32);
    loginButton->setStyleSheet(
        "QPushButton { font-size: 15px; border: none; border-radius: 4px; background-color: #E20074; color: white; }"
        "QPushButton:hover { background-color: #c00063; }"
    );
    connect(loginButton, &QPushButton::clicked, this, &NMCFlow2AuthWidget::slotOpenBrowser);

    // Logo + Titel
    auto logoLabel = new QLabel(this);
    logoLabel->setPixmap(QIcon(":/client/theme/NMCIcons/tlogocarrier.svg").pixmap(36, 36));
    logoLabel->setFixedSize(36, 36);

    auto titleLabel = new QLabel(tr("MagentaCLOUD"), this);
    titleLabel->setStyleSheet("font-weight: bold; font-size: 15px;");

    auto logoTitleLayout = new QHBoxLayout;
    logoTitleLayout->setSpacing(8);
    logoTitleLayout->addWidget(logoLabel);
    logoTitleLayout->addWidget(titleLabel);
    logoTitleLayout->addStretch();

    // Überschrift
    auto headerLabel = new QLabel(QCoreApplication::translate("", "SETUP_HEADER_TEXT_1"));
    headerLabel->setStyleSheet("font-size: 24px; font-weight: normal;");
    headerLabel->setWordWrap(true);
    headerLabel->setFixedWidth(282);

    // Anweisungs-Label
    auto label = new QLabel(tr("Wechseln Sie bitte zu Ihrem Browser und melden Sie sich dort an, um Ihr Konto zu verbinden."), this);
    label->setStyleSheet("font-size: 14px;");
    label->setWordWrap(true);
    label->setFixedWidth(282);

    // Linke Seite
    auto leftLayout = new QVBoxLayout;
    leftLayout->addLayout(logoTitleLayout);
    leftLayout->addSpacing(24);
    leftLayout->addWidget(headerLabel);
    leftLayout->addSpacing(16);
    leftLayout->addWidget(label);
    leftLayout->addSpacing(24);
    leftLayout->addWidget(loginButton);
    leftLayout->addStretch();

    // Rechtes Logo
    auto bigLogoLabel = new QLabel(this);
    bigLogoLabel->setPixmap(QIcon(":/client/theme/NMCIcons/applicationLogo.svg").pixmap(175, 175));
    bigLogoLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    bigLogoLabel->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

    auto rightLayout = new QVBoxLayout;
    rightLayout->addStretch();
    rightLayout->addWidget(bigLogoLabel);
    rightLayout->addStretch();

    // Hauptlayout
    auto mainLayout = new QHBoxLayout;
    mainLayout->setContentsMargins(16, 16, 16, 16);
    mainLayout->setSpacing(24);
    mainLayout->addLayout(leftLayout);
    mainLayout->addStretch();
    mainLayout->addLayout(rightLayout);

    // Fehlerlabel wieder einfügen
    if (getUi().errorLabel) {
        mainLayout->addWidget(getUi().errorLabel);
    }
    setLayout(mainLayout);
}

// Styling bewusst ignorieren
void NMCFlow2AuthWidget::customizeStyle() {}

// Spinner einblenden / ungenutzt
void NMCFlow2AuthWidget::startSpinner() {}

// Spinner ausblenden / ungenutzt
void NMCFlow2AuthWidget::stopSpinner(bool showStatusLabel)
{
    Q_UNUSED(showStatusLabel);
}

// Statusänderung unterdrücken
void NMCFlow2AuthWidget::slotStatusChanged(Flow2Auth::PollStatus status, int secondsLeft)
{
    Q_UNUSED(status);
    Q_UNUSED(secondsLeft);
}

} // namespace OCC
