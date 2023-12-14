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

#include "QPushButton"
#include "QDesktopServices"
#include "QtGui/qpainter.h"
#include "theme.h"

namespace OCC {


NMCFlow2AuthWidget::NMCFlow2AuthWidget(QWidget *parent)
    : Flow2AuthWidget(parent)
{
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    _ui.copyLinkLabel->setVisible(false);
    _ui.openLinkLabel->setVisible(false);

    //Create and connect the push buttons to base slots
    auto copyLinkButton = new QPushButton(tr("Copy Link"));
    connect(copyLinkButton, &QPushButton::clicked, this, [this](){
        slotCopyLinkToClipboard();
    });
    auto reopenBrowserButton = new QPushButton(tr("Reopen Browser"));
    connect(reopenBrowserButton, &QPushButton::clicked, this, [this](){
        slotOpenBrowser();
    });

    //Create a layout where we put our new buttons.
    auto hLayout = new QHBoxLayout(this);
    auto spacerLeft = new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed);
    auto spacerRight = new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed);
    hLayout->addSpacerItem(spacerLeft);
    hLayout->addWidget(copyLinkButton);
    hLayout->addWidget(reopenBrowserButton);
    hLayout->addSpacerItem(spacerRight);

    hLayout->setSpacing(10); //its not defined in jira ticket https://jira.telekom.de/browse/NMC-2380

    //According to Jira ticket https://jira.telekom.de/browse/NMC-2380
    QSize buttonSize(176,32);
    copyLinkButton->setFixedSize(buttonSize);
    reopenBrowserButton->setFixedSize(buttonSize);

    //Now add the layout to base layout
    _ui.verticalLayout_3->addLayout(hLayout);

    //Make sure the first button wont get focus. It will be assigned to second button (reopenBrowserButton)
    copyLinkButton->setFocusPolicy(Qt::NoFocus);

    //Apply custom Pushbutton ui modifications, colors are set globaly in style.qml or theme?
    const QString styleSheet("QPushButton{font-size: 14px;font-family: Segoe;}");
    copyLinkButton->setStyleSheet(styleSheet);
    reopenBrowserButton->setStyleSheet(styleSheet);
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
