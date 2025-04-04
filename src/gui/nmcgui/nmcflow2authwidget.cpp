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

#include <QPushButton>
#include <QDesktopServices>
#include <QPainter>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QCoreApplication>
#include <QSpacerItem>

#include "theme.h"

namespace OCC {

NMCFlow2AuthWidget::NMCFlow2AuthWidget(QWidget *parent)
    : Flow2AuthWidget(parent)
{
    auto progressInd = getProgressIndicator();
    getUi().progressLayout->removeWidget(progressInd);
    progressInd->setVisible(false);
    progressInd->setFixedSize(0, 0);

    // LOGIN-Button erstellen
    auto loginBrowserButton = new QPushButton(QCoreApplication::translate("", "LOGIN"));
    loginBrowserButton->setFocusPolicy(Qt::NoFocus);
    connect(loginBrowserButton, &QPushButton::clicked, this, [this]() {
        slotOpenBrowser();
    });

    // Button-Styling setzen
    QSize buttonSize(130, 32);
    const QString styleSheetHoverPart = "QPushButton:hover { background-color: #c00063; }";
    const QString styleSheet =
        QString("QPushButton{font-size: 15px; border: %1px solid; border-color: black; "
                "border-radius: 4px; background-color: %2; color: %3;}" + styleSheetHoverPart)
            .arg("0", "#E20074", "white");

    loginBrowserButton->setStyleSheet(styleSheet);
    loginBrowserButton->setFixedSize(buttonSize);

    // Layouts erstellen
    auto mainVerticalLayout = new QVBoxLayout(this);
    auto subMainHorizontalLayout = new QHBoxLayout();
    auto leftSideVerticalLayout = new QVBoxLayout();
    auto rightSideVerticalLayout = new QVBoxLayout();

    mainVerticalLayout->setSpacing(0);
    mainVerticalLayout->setContentsMargins(16, 8, 28, 0);
    subMainHorizontalLayout->setSpacing(0);
    subMainHorizontalLayout->setContentsMargins(0, 0, 0, 0);
    leftSideVerticalLayout->setSpacing(0);
    leftSideVerticalLayout->setContentsMargins(0, 0, 0, 0);
    rightSideVerticalLayout->setSpacing(0);
    rightSideVerticalLayout->setContentsMargins(0, 0, 0, 0);

    mainVerticalLayout->addLayout(subMainHorizontalLayout);

    subMainHorizontalLayout->addSpacerItem(new QSpacerItem(1, 1, QSizePolicy::Fixed, QSizePolicy::Fixed));
    subMainHorizontalLayout->addLayout(leftSideVerticalLayout);
    subMainHorizontalLayout->addLayout(rightSideVerticalLayout);

    // Logo und Label Layout
    auto hLogoAndLabelLayout = new QHBoxLayout();
    hLogoAndLabelLayout->setContentsMargins(0, 0, 0, 0);
    getUi().logoLabel->setFixedSize(36, 36);
    getUi().logoLabel->setPixmap(QIcon(":/client/theme/NMCIcons/tlogocarrier.svg").pixmap(36, 36));

    hLogoAndLabelLayout->addWidget(getUi().logoLabel);
    hLogoAndLabelLayout->addSpacerItem(new QSpacerItem(8, 1, QSizePolicy::Fixed, QSizePolicy::Fixed));

    auto magentaLabel = new QLabel("MagentaCLOUD");
    magentaLabel->setStyleSheet("QLabel{font-size: 15px; font-weight: bold;}");
    magentaLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    hLogoAndLabelLayout->addWidget(magentaLabel);

    leftSideVerticalLayout->addLayout(hLogoAndLabelLayout);
    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1, 24, QSizePolicy::Fixed, QSizePolicy::Fixed));

    // Beschreibung
    auto descriptionLabel = new QLabel(QCoreApplication::translate("", "SETUP_HEADER_TEXT_1"));
    descriptionLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    descriptionLabel->setStyleSheet("QLabel{font-size: 28px; font-weight: normal;}");
    descriptionLabel->setWordWrap(true);
    descriptionLabel->setMinimumSize(descriptionLabel->sizeHint());
    leftSideVerticalLayout->addWidget(descriptionLabel);

    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1, 16, QSizePolicy::Fixed, QSizePolicy::Fixed));

    getUi().label->setStyleSheet("QLabel{font-size: 15px; font-weight: normal;}");
    getUi().label->setText("Wechseln Sie bitte zu Ihrem Browser und melden Sie sich dort an, um Ihr Konto zu verbinden.");
    getUi().label->setFixedWidth(282);
    getUi().label->setAlignment(Qt::AlignLeft);
    leftSideVerticalLayout->addWidget(getUi().label);

    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1, 32, QSizePolicy::Fixed, QSizePolicy::Fixed));

    // Login-Button hinzufügen
    leftSideVerticalLayout->addWidget(loginBrowserButton);
    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1, 1, QSizePolicy::Fixed, QSizePolicy::Expanding));

    // Rechtsseitige Inhalte
    auto bigMagentaIcon = new QLabel();
    bigMagentaIcon->setFixedSize(175, 175);
    bigMagentaIcon->setPixmap(QIcon(":/client/theme/NMCIcons/applicationLogo.svg").pixmap(175, 175));

    rightSideVerticalLayout->addSpacerItem(new QSpacerItem(1, 98, QSizePolicy::Fixed, QSizePolicy::Fixed));
    rightSideVerticalLayout->addWidget(bigMagentaIcon);
    rightSideVerticalLayout->addSpacerItem(new QSpacerItem(1, 1, QSizePolicy::Fixed, QSizePolicy::Expanding));

    mainVerticalLayout->addWidget(getUi().errorLabel);
    getUi().statusLabel->setFixedSize(0, 0);

    // Falls ein altes Layout existiert, entfernen
    if (layout() != nullptr) {
        delete layout();
    }

    setLayout(mainVerticalLayout);
}

void NMCFlow2AuthWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(rect(), Qt::white);
    Flow2AuthWidget::paintEvent(event);
}

void NMCFlow2AuthWidget::customizeStyle()
{
    // Empty
}

} // namespace OCC
