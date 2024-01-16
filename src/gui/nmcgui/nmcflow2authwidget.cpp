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
#include "QPushButton"
#include "QDesktopServices"
#include "QtGui/qpainter.h"
#include "theme.h"
#include "QString"
#include <MacTypes.h>

namespace OCC {


NMCFlow2AuthWidget::NMCFlow2AuthWidget(QWidget *parent)
    : Flow2AuthWidget(parent)
{

    //setFixedSize(700,502);

    getUi().copyLinkLabel->setVisible(false);
    getUi().openLinkLabel->setVisible(false);
    auto progressInd = getProgressIndicator();
    getUi().progressLayout->removeWidget(progressInd);
    progressInd->setVisible(false);
    progressInd->setFixedSize(0,0);

    //Create and connect the push buttons to base slots
    auto loginBrowserButton = new QPushButton(tr("Login"));
    connect(loginBrowserButton, &QPushButton::clicked, this, [this](){
        slotOpenBrowser();
    });

    //Set login button size and style
    QSize buttonSize(130,32);
    const QString styleSheetHoverPart = "QPushButton:hover { background-color: #c00063; }";
    const QString styleSheet("QPushButton{font-size: 15px; border: %1px solid; border-color: black; border-radius: 4px; background-color: %2; color: %3;}" + styleSheetHoverPart );
    loginBrowserButton->setStyleSheet(styleSheet.arg("0","#E20074","white"));
    loginBrowserButton->setFixedSize(buttonSize);

    //Create needed layouts
    auto mainVerticalLayout = new QVBoxLayout(this);
    auto subMainHorizontalLayout = new QHBoxLayout(this);
    auto leftSideVerticalLayout = new QVBoxLayout(this);
    auto rightSideVerticalLayout = new QVBoxLayout(this);

    mainVerticalLayout->addLayout(subMainHorizontalLayout);

    QSpacerItem *spacer4 = new QSpacerItem(1,1, QSizePolicy::Fixed, QSizePolicy::Fixed);
    subMainHorizontalLayout->addSpacerItem(spacer4);
    subMainHorizontalLayout->addLayout(leftSideVerticalLayout);
    subMainHorizontalLayout->addLayout(rightSideVerticalLayout);

    //Create a horizontal Logo and label layout
    auto hLogoAndLabelLayout = new QHBoxLayout(this);
    getUi().verticalLayout_3->removeWidget(getUi().logoLabel);
    getUi().logoLabel->setFixedSize(36,36);
    getUi().logoLabel->setPixmap(QIcon(QLatin1String(":/client/theme/NMCIcons/tlogocarrier.svg")).pixmap(36,36));

    hLogoAndLabelLayout->addWidget(getUi().logoLabel);

    QSpacerItem *spacer3 = new QSpacerItem(1,32, QSizePolicy::Fixed, QSizePolicy::Fixed);
    leftSideVerticalLayout->addSpacerItem(spacer3);

    QSpacerItem *spacer9 = new QSpacerItem(8,1, QSizePolicy::Fixed, QSizePolicy::Fixed);
    hLogoAndLabelLayout->addSpacerItem(spacer9);

    QLabel *magentaLabel = new QLabel("MagentaCLOUD");
    magentaLabel->setStyleSheet("QLabel{font-size: 15px; font-weight: bold;}");
    magentaLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    hLogoAndLabelLayout->addWidget(magentaLabel);
    leftSideVerticalLayout->insertItem(1, hLogoAndLabelLayout);

    QSpacerItem *spacer7 = new QSpacerItem(1,24, QSizePolicy::Fixed, QSizePolicy::Fixed);
    leftSideVerticalLayout->insertSpacerItem(2, spacer7);

    QLabel *descriptionLabel = new QLabel("Melden Sie sich an um direkt loszulegen");
    descriptionLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    descriptionLabel->setStyleSheet("QLabel{font-size: 28px; font-weight: normal;}");
    descriptionLabel->setWordWrap(true);
    descriptionLabel->setMinimumSize(descriptionLabel->sizeHint());
    leftSideVerticalLayout->insertWidget(3, descriptionLabel);

    QSpacerItem *spacer5 = new QSpacerItem(1,16, QSizePolicy::Fixed, QSizePolicy::Fixed);
    leftSideVerticalLayout->insertSpacerItem(4, spacer5);

    getUi().label->setStyleSheet("QLabel{font-size: 15px; font-weight: normal;}");
    getUi().verticalLayout_3->removeWidget(getUi().label);
    leftSideVerticalLayout->insertWidget(5, getUi().label);
    getUi().label->setText("Wechseln Sie bitte zu ihrem Browser und melden Sie sich dort an um ihr Konto zu verbinden.");
    getUi().label->setFixedWidth(282);
    getUi().label->setAlignment(Qt::AlignLeft);

    QSpacerItem *spacer6 = new QSpacerItem(1,32, QSizePolicy::Fixed, QSizePolicy::Fixed);
    leftSideVerticalLayout->insertSpacerItem(6, spacer6);

    //Add buttons
    leftSideVerticalLayout->insertWidget(7, loginBrowserButton);

    QSpacerItem *spacer11 = new QSpacerItem(1,1, QSizePolicy::Fixed, QSizePolicy::Expanding);
    leftSideVerticalLayout->addSpacerItem(spacer11);

    //Add items to the right side
    QLabel *bigMagetnaIcon = new QLabel("Test");
    bigMagetnaIcon->setFixedSize(175,175);
    bigMagetnaIcon->setPixmap(QIcon(QLatin1String(":/client/theme/NMCIcons/ApplicationLogo.svg")).pixmap(175,175));

    QSpacerItem *spacer1 = new QSpacerItem(1,98, QSizePolicy::Fixed, QSizePolicy::Fixed);
    rightSideVerticalLayout->addSpacerItem(spacer1);
    rightSideVerticalLayout->addWidget(bigMagetnaIcon);

    QSpacerItem *spacer10 = new QSpacerItem(1,1, QSizePolicy::Fixed, QSizePolicy::Expanding);
    rightSideVerticalLayout->addSpacerItem(spacer10);

    QSpacerItem *spacer2 = new QSpacerItem(0,1, QSizePolicy::Fixed, QSizePolicy::Fixed);
    subMainHorizontalLayout->addSpacerItem(spacer2);


    getUi().verticalLayout_3->removeWidget(getUi().errorLabel);
    mainVerticalLayout->addWidget(getUi().errorLabel);

    getUi().verticalLayout_3->removeWidget(getUi().statusLabel);
    getUi().statusLabel->setFixedSize(0,0);


    //Delete previous installed layout, or you can not apply the new one.
    QLayout* layout = this->layout ();
    if (layout != 0)
    {
        QLayoutItem *item;
        while ((item = layout->takeAt(0)) != 0)
            layout->removeItem (item);
        delete layout;
    }

    this->setLayout(mainVerticalLayout);
}

void NMCFlow2AuthWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.fillRect(rect(), Qt::white);
    painter.end();
    Flow2AuthWidget::paintEvent(event);
}

void NMCFlow2AuthWidget::customizeStyle()
{
    //Empty
}


} // namespace OCC
