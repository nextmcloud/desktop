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

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QIcon>
#include <QPainter>
#include <QCoreApplication>
#include <QDesktopServices>

#include "theme.h"

namespace OCC {

NMCFlow2AuthWidget::NMCFlow2AuthWidget(QWidget *parent)
    : Flow2AuthWidget(parent)
{
    // UI von Flow2AuthWidget vollständig ignorieren:
    QWidget *container = new QWidget(this);

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

    // Anweisungs-Text
    auto instructionLabel = new QLabel(tr("Wechseln Sie bitte zu Ihrem Browser und melden Sie sich dort an, um Ihr Konto zu verbinden."), this);
    instructionLabel->setStyleSheet("font-size: 14px;");
    instructionLabel->setWordWrap(true);
    instructionLabel->setFixedWidth(282);

    // Linke Spalte
    auto leftLayout = new QVBoxLayout;
    leftLayout->addLayout(logoTitleLayout);
    leftLayout->addSpacing(24);
    leftLayout->addWidget(headerLabel);
    leftLayout->addSpacing(16);
    leftLayout->addWidget(instructionLabel);
    leftLayout->addSpacing(24);
    leftLayout->addWidget(loginButton);
    leftLayout->addStretch();

    // Großes Logo rechts
    auto bigLogoLabel = new QLabel(this);
    bigLogoLabel->setPixmap(QIcon(":/client/theme/NMCIcons/applicationLogo.svg").pixmap(175, 175));
    bigLogoLabel->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

    auto rightLayout = new QVBoxLayout;
    rightLayout->addStretch();
    rightLayout->addWidget(bigLogoLabel);
    rightLayout->addStretch();

    // Gesamt-Layout
    auto mainLayout = new QHBoxLayout(container);
    mainLayout->setContentsMargins(16, 16, 16, 16);
    mainLayout->setSpacing(24);
    mainLayout->addLayout(leftLayout);
    mainLayout->addStretch();
    mainLayout->addLayout(rightLayout);

    // Hauptlayout zuweisen
    auto wrapperLayout = new QVBoxLayout;
    wrapperLayout->setContentsMargins(0, 0, 0, 0);
    wrapperLayout->addWidget(container);
    setLayout(wrapperLayout);
}

// Hintergrundfarbe
void NMCFlow2AuthWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(rect(), Qt::white);
    QWidget::paintEvent(event);
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
