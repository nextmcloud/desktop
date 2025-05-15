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
    getUi().copyLinkButton->setVisible(false);
    getUi().openLinkButton->setVisible(false);

    auto progressInd = getProgressIndicator();
    getUi().progressLayout->removeWidget(progressInd);
    progressInd->setVisible(false);
    progressInd->setFixedSize(0, 0);

    // Login Button
    auto loginBrowserButton = new QPushButton(QCoreApplication::translate("", "LOGIN"));
    loginBrowserButton->setFocusPolicy(Qt::NoFocus);
    connect(loginBrowserButton, &QPushButton::clicked, this, [this]() {
        slotOpenBrowser();
    });

    const QSize buttonSize(130, 32);
    const QString styleSheetHoverPart = "QPushButton:hover { background-color: #c00063; }";
    const QString styleSheet = QString("QPushButton{font-size: 15px; border: %1px solid; border-color: black; border-radius: 4px; background-color: %2; color: %3;}")
                               .arg("0", "#E20074", "white") + styleSheetHoverPart;
    loginBrowserButton->setStyleSheet(styleSheet);
    loginBrowserButton->setFixedSize(buttonSize);

    // Layouts
    auto mainVerticalLayout = new QVBoxLayout;
    auto subMainHorizontalLayout = new QHBoxLayout;
    auto leftSideVerticalLayout = new QVBoxLayout;
    auto rightSideVerticalLayout = new QVBoxLayout;

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

    // Logo & Label
    auto hLogoAndLabelLayout = new QHBoxLayout;
    hLogoAndLabelLayout->setContentsMargins(0, 0, 0, 0);

    getUi().verticalLayout->removeWidget(getUi().logoLabel);
    getUi().logoLabel->setFixedSize(36, 36);
    getUi().logoLabel->setPixmap(QIcon(":/client/theme/NMCIcons/tlogocarrier.svg").pixmap(36, 36));
    hLogoAndLabelLayout->addWidget(getUi().logoLabel);
    hLogoAndLabelLayout->addSpacerItem(new QSpacerItem(8, 1, QSizePolicy::Fixed, QSizePolicy::Fixed));

    auto magentaLabel = new QLabel("MagentaCLOUD");
    magentaLabel->setStyleSheet("QLabel{font-size: 15px; font-weight: bold;}");
    magentaLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    hLogoAndLabelLayout->addWidget(magentaLabel);

    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1, 32, QSizePolicy::Fixed, QSizePolicy::Fixed));
    leftSideVerticalLayout->addLayout(hLogoAndLabelLayout);
    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1, 24, QSizePolicy::Fixed, QSizePolicy::Fixed));

    // Beschreibung
    auto descriptionLabel = new QLabel(QCoreApplication::translate("", "SETUP_HEADER_TEXT_1"));
    descriptionLabel->setStyleSheet("QLabel{font-size: 28px; font-weight: normal;}");
    descriptionLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    descriptionLabel->setWordWrap(true);
    descriptionLabel->setMinimumSize(descriptionLabel->sizeHint());
    leftSideVerticalLayout->addWidget(descriptionLabel);

    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1, 16, QSizePolicy::Fixed, QSizePolicy::Fixed));

    // Anleitungstext
    getUi().label->setStyleSheet("QLabel{font-size: 15px; font-weight: normal;}");
    getUi().verticalLayout->removeWidget(getUi().label);
    getUi().label->setText("Wechseln Sie bitte zu ihrem Browser und melden Sie sich dort an um ihr Konto zu verbinden.");
    getUi().label->setFixedWidth(282);
    getUi().label->setAlignment(Qt::AlignLeft);
    leftSideVerticalLayout->addWidget(getUi().label);

    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1, 32, QSizePolicy::Fixed, QSizePolicy::Fixed));
    leftSideVerticalLayout->addWidget(loginBrowserButton);
    leftSideVerticalLayout->addSpacerItem(new QSpacerItem(1, 1, QSizePolicy::Fixed, QSizePolicy::Expanding));

    // Rechte Seite mit großem Logo
    auto bigMagetnaIcon = new QLabel("Test");
    bigMagetnaIcon->setFixedSize(175, 175);
    bigMagetnaIcon->setPixmap(QIcon(":/client/theme/NMCIcons/applicationLogo.svg").pixmap(175, 175));
    rightSideVerticalLayout->addSpacerItem(new QSpacerItem(1, 98, QSizePolicy::Fixed, QSizePolicy::Fixed));
    rightSideVerticalLayout->addWidget(bigMagetnaIcon);
    rightSideVerticalLayout->addSpacerItem(new QSpacerItem(1, 1, QSizePolicy::Fixed, QSizePolicy::Expanding));

    subMainHorizontalLayout->addSpacerItem(new QSpacerItem(0, 1, QSizePolicy::Fixed, QSizePolicy::Fixed));

    // Fehler- und Statusanzeige
    getUi().verticalLayout->removeWidget(getUi().errorLabel);
    mainVerticalLayout->addWidget(getUi().errorLabel);

    getUi().verticalLayout->removeWidget(getUi().statusLabel);
    getUi().statusLabel->setFixedSize(0, 0);

    // Vorheriges Layout entfernen
    if (auto *oldLayout = this->layout()) {
        QLayoutItem *item;
        while ((item = oldLayout->takeAt(0)) != nullptr) {
            delete item;
        }
        delete oldLayout;
    }

    this->setLayout(mainVerticalLayout);
}

void NMCFlow2AuthWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(rect(), Qt::white);
    Flow2AuthWidget::paintEvent(event);
}

void NMCFlow2AuthWidget::customizeStyle()
{
    //Empty
}

} // namespace OCC
