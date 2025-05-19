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

#include "QProgressIndicator.h"
#include <QPushButton>
#include <QDesktopServices>
#include <QPainter>
#include <QLabel>
#include <QIcon>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QCoreApplication>

#include "theme.h"

namespace OCC {

NMCFlow2AuthWidget::NMCFlow2AuthWidget(QWidget *parent)
    : Flow2AuthWidget(parent)
{
    // Bestehende UI-Elemente ausblenden
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
    }
    if (getUi().logoLabel) {
        getUi().logoLabel->hide();
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
    auto titleLogoLabel = new QLabel(this);
    titleLogoLabel->setPixmap(QIcon(":/client/theme/NMCIcons/tlogocarrier.svg").pixmap(36, 36));
    titleLogoLabel->setFixedSize(36, 36);

    auto titleLabel = new QLabel(tr("MagentaCLOUD"), this);
    titleLabel->setStyleSheet("font-weight: bold; font-size: 15px;");

    auto logoTitleLayout = new QHBoxLayout;
    logoTitleLayout->setSpacing(8);
    logoTitleLayout->addWidget(titleLogoLabel);
    logoTitleLayout->addWidget(titleLabel);
    logoTitleLayout->addStretch();

    // Überschrift
    auto headerLabel = new QLabel(QCoreApplication::translate("", "SETUP_HEADER_TEXT_1"));
    headerLabel->setStyleSheet("font-size: 24px; font-weight: normal;");
    headerLabel->setWordWrap(true);
    headerLabel->setFixedWidth(282);

    // Anweisungs-Label
    auto instructionLabel = new QLabel(tr("Wechseln Sie bitte zu Ihrem Browser und melden Sie sich dort an, um Ihr Konto zu verbinden."), this);
    instructionLabel->setStyleSheet("font-size: 14px;");
    instructionLabel->setWordWrap(true);
    instructionLabel->setFixedWidth(282);

    // Linke Seite
    auto leftLayout = new QVBoxLayout;
    leftLayout->addLayout(logoTitleLayout);
    leftLayout->addSpacing(24);
    leftLayout->addWidget(headerLabel);
    leftLayout->addSpacing(16);
    leftLayout->addWidget(instructionLabel);
    leftLayout->addSpacing(24);
    leftLayout->addWidget(loginButton);
    leftLayout->addStretch();

    // Rechtes Logo
    auto bigLogoLabel = new QLabel(this);
    bigLogoLabel->setPixmap(QIcon(":/client/theme/NMCIcons/applicationLogo.svg").pixmap(175, 175));
    bigLogoLabel->setFixedSize(175, 175);

    auto rightLayout = new QVBoxLayout;
    rightLayout->addStretch();
    rightLayout->addWidget(bigLogoLabel, 0, Qt::AlignRight | Qt::AlignVCenter);

    // Hauptlayout
    auto mainLayout = new QHBoxLayout;
    mainLayout->setContentsMargins(16, 16, 16, 16);
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);

    // Bestehendes Layout leeren und ersetzen
    if (auto *oldLayout = layout()) {
        QLayoutItem *item;
        while ((item = oldLayout->takeAt(0)) != nullptr) {
            if (auto *widget = item->widget()) {
                widget->setParent(nullptr);  // Sicheres Entfernen
            }
            delete item;
        }
        delete oldLayout;
    }

    setLayout(mainLayout);

    // Fehlerlabel wieder hinzufügen
    if (getUi().errorLabel) {
        mainLayout->addWidget(getUi().errorLabel);
    }
}

void NMCFlow2AuthWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(rect(), Qt::white);  // Hintergrundfarbe
    Flow2AuthWidget::paintEvent(event);
}

void NMCFlow2AuthWidget::customizeStyle()
{
    // optional leer lassen
}

} // namespace OCC
