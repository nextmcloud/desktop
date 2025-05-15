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
    // Bestehende Widgets anpassen
    getUi().copyLinkButton->hide();
    getUi().openLinkButton->hide();
    getUi().statusLabel->hide();

    auto progressInd = getProgressIndicator();
    progressInd->setVisible(false);
    progressInd->setFixedSize(0, 0);

    // Logo anpassen
    getUi().logoLabel->setFixedSize(36, 36);
    getUi().logoLabel->setPixmap(QIcon(":/client/theme/NMCIcons/tlogocarrier.svg").pixmap(36, 36));

    // Titel und Beschreibung ersetzen
    auto headerLabel = new QLabel("MagentaCLOUD");
    headerLabel->setStyleSheet("font-size: 15px; font-weight: bold;");
    getUi().verticalLayout->insertWidget(0, headerLabel);

    auto descriptionLabel = new QLabel(tr("SETUP_HEADER_TEXT_1"));
    descriptionLabel->setStyleSheet("font-size: 28px; font-weight: normal;");
    descriptionLabel->setWordWrap(true);
    getUi().verticalLayout->insertWidget(1, descriptionLabel);

    // Textanleitung anpassen
    getUi().label->setStyleSheet("font-size: 15px; font-weight: normal;");
    getUi().label->setText(tr("Wechseln Sie bitte zu Ihrem Browser und melden Sie sich dort an, um Ihr Konto zu verbinden."));
    getUi().label->setFixedWidth(282);
    getUi().label->setAlignment(Qt::AlignLeft);

    // Login Button hinzufügen
    auto loginButton = new QPushButton(tr("LOGIN"));
    loginButton->setFocusPolicy(Qt::NoFocus);
    connect(loginButton, &QPushButton::clicked, this, [this]() {
        slotOpenBrowser();
    });

    const QSize buttonSize(130, 32);
    const QString styleSheet = QString(
        "QPushButton{font-size: 15px; border: 0px solid; border-color: black; border-radius: 4px; "
        "background-color: #E20074; color: white;}"
        "QPushButton:hover { background-color: #c00063; }");
    loginButton->setStyleSheet(styleSheet);
    loginButton->setFixedSize(buttonSize);

    getUi().verticalLayout->addSpacing(24);
    getUi().verticalLayout->addWidget(loginButton);

    // Großes Logo rechts – ergänzend, optional
    auto bigLogo = new QLabel;
    bigLogo->setPixmap(QIcon(":/client/theme/NMCIcons/applicationLogo.svg").pixmap(175, 175));
    bigLogo->setAlignment(Qt::AlignRight | Qt::AlignTop);
    getUi().verticalLayout->addSpacing(16);
    getUi().verticalLayout->addWidget(bigLogo);
}

void NMCFlow2AuthWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(rect(), Qt::white); // weißer Hintergrund
    Flow2AuthWidget::paintEvent(event);
}

void NMCFlow2AuthWidget::customizeStyle()
{
    // optional override, leer gelassen
}

} // namespace OCC
