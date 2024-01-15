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

    setFixedSize(700,502);

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
    QSize buttonSize(120,32);
    const QString styleSheet("QPushButton{font-size: 15px; border: %1px solid; border-color: black; border-radius: 10px; background-color: %2; color: %3}");
    loginBrowserButton->setStyleSheet(styleSheet.arg("0","#E20074","white"));
    loginBrowserButton->setFixedSize(buttonSize);

    //Create needed layouts
    auto mainVerticalLayout = new QVBoxLayout(this);
    auto subMainHorizontalLayout = new QHBoxLayout(this);
    auto leftSideVerticalLayout = new QVBoxLayout(this);
    auto rightSideVerticalLayout = new QVBoxLayout(this);

    mainVerticalLayout->addLayout(subMainHorizontalLayout);
    subMainHorizontalLayout->addLayout(leftSideVerticalLayout);
    subMainHorizontalLayout->addLayout(rightSideVerticalLayout);

    //Create a horizontal Logo and label layout
    auto hLogoAndLabelLayout = new QHBoxLayout(this);
    getUi().verticalLayout_3->removeWidget(getUi().logoLabel);
    getUi().logoLabel->setFixedSize(36,36);
    hLogoAndLabelLayout->addWidget(getUi().logoLabel);

    QLabel *magentaLabel = new QLabel("MagentaCLOUD");
    hLogoAndLabelLayout->addWidget(magentaLabel);
    leftSideVerticalLayout->insertItem(0, hLogoAndLabelLayout);

    QLabel *descriptionLabel = new QLabel("SETUP_DESCRIPTION1");
    descriptionLabel->setStyleSheet("");
    leftSideVerticalLayout->insertWidget(1, descriptionLabel);

    getUi().label->setStyleSheet("");
    getUi().verticalLayout_3->removeWidget(getUi().label);
    leftSideVerticalLayout->insertWidget(2, getUi().label);

    //Add buttons
    leftSideVerticalLayout->insertWidget(3, loginBrowserButton);


    //Add items to the right side
    QLabel *bigMagetnaIcon = new QLabel("Test");
    rightSideVerticalLayout->addWidget(bigMagetnaIcon);

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





    // //Now add the layout to base layout
    // getUi().verticalLayout_3->addLayout(hLayout);

    // //Make sure the first button wont get focus. It will be assigned to second button (reopenBrowserButton)
    // copyLinkButton->setFocusPolicy(Qt::NoFocus);
}

void NMCFlow2AuthWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.fillRect(rect(), Qt::white);
    painter.end();
    Flow2AuthWidget::paintEvent(event);
}


} // namespace OCC
