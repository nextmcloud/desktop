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
#include <QSpacerItem>
#include <QSizePolicy>
#include <QCoreApplication>

#include "theme.h"

namespace OCC {

NMCFlow2AuthWidget::NMCFlow2AuthWidget(QWidget *parent)
    : Flow2AuthWidget(parent)
{
    // Alte UI-Elemente ausblenden oder entfernen
    getUi().copyLinkButton->setVisible(false);
    getUi().openLinkButton->setVisible(false);
    getProgressIndicator()->setVisible(false);
    getProgressIndicator()->setFixedSize(0, 0);
    getUi().verticalLayout->removeWidget(getUi().statusLabel);

    // Login-Button
    auto loginButton = new QPushButton(QCoreApplication::translate("", "LOGIN"));
    loginButton->setFocusPolicy(Qt::NoFocus);
    loginButton->setFixedSize(130, 32);
    loginButton->setStyleSheet(
        "QPushButton { font-size: 15px; border: none; border-radius: 4px; background-color: #E20074; color: white; }"
        "QPushButton:hover { background-color: #c00063; }"
    );
    connect(loginButton, &QPushButton::clicked, this, [this]() {
        slotOpenBrowser();
    });

    // Linker Bereich
    auto logoLabel = new QLabel;
    logoLabel->setPixmap(QIcon(":/client/theme/NMCIcons/tlogocarrier.svg").pixmap(24, 24));
    logoLabel->setFixedSize(24, 24);

    auto titleLabel = new QLabel("MagentaCLOUD");
    titleLabel->setStyleSheet("font-weight: bold; font-size: 14px;");
    titleLabel->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);

    auto logoTitleLayout = new QHBoxLayout;
    logoTitleLayout->setSpacing(8);
    logoTitleLayout->addWidget(logoLabel);
    logoTitleLayout->addWidget(titleLabel);
    logoTitleLayout->addStretch();

    auto descriptionLabel = new QLabel(QCoreApplication::translate("", "SETUP_HEADER_TEXT_1"));
    headerLabel->setStyleSheet("font-size: 24px; font-weight: normal;");
    headerLabel->setWordWrap(true);

    auto instructionLabel = new QLabel(tr("Wechseln Sie bitte zu Ihrem Browser und melden Sie sich dort an, um Ihr Konto zu verbinden."));
    instructionLabel->setStyleSheet("font-size: 14px;");
    instructionLabel->setWordWrap(true);
    instructionLabel->setFixedWidth(300);

    auto leftLayout = new QVBoxLayout;
    leftLayout->addLayout(logoTitleLayout);
    leftLayout->addSpacing(24);
    leftLayout->addWidget(headerLabel);
    leftLayout->addSpacing(16);
    leftLayout->addWidget(instructionLabel);
    leftLayout->addSpacing(24);
    leftLayout->addWidget(getUi().statusLabel);
    leftLayout->addSpacing(24);
    leftLayout->addWidget(loginButton);
    leftLayout->addStretch();

    // Rechter Bereich (großes Logo)
    auto bigLogoLabel = new QLabel;
    bigLogoLabel->setPixmap(QIcon(":/client/theme/NMCIcons/applicationLogo.svg").pixmap(175, 175));
    bigLogoLabel->setFixedSize(175, 175);

    auto rightLayout = new QVBoxLayout;
    rightLayout->addStretch();
    rightLayout->addWidget(bigLogoLabel, 0, Qt::AlignRight | Qt::AlignBottom);

    // Hauptlayout
    auto mainLayout = new QHBoxLayout;
    mainLayout->setContentsMargins(16, 16, 16, 16);
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);

    // Ursprüngliches Layout leeren und ersetzen
    if (auto *oldLayout = layout()) {
        QLayoutItem *item;
        while ((item = oldLayout->takeAt(0)) != nullptr) {
            delete item;
        }
        delete oldLayout;
    }

    setLayout(mainLayout);

    // Fehlerlabel unten anzeigen
    getUi().verticalLayout->removeWidget(getUi().errorLabel);
    layout()->addWidget(getUi().errorLabel);
}

void NMCFlow2AuthWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(rect(), Qt::white);
    Flow2AuthWidget::paintEvent(event);
}

void NMCFlow2AuthWidget::customizeStyle()
{
    // leer
}

} // namespace OCC
