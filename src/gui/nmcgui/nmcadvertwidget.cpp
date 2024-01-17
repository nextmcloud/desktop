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

#include "nmcadvertwidget.h"
#include "QtWidgets/qboxlayout.h"

NMCAdvertWidget::NMCAdvertWidget(QWidget *parent) : QWidget(parent)
{
    setFixedSize(700,502);
    QHBoxLayout *layout = new QHBoxLayout(this);
    setLayout(layout);
    layout->addWidget(&m_imageLabel);
    layout->setMargin(0);
    //Set initial image
    loadPNG(QString(":/client/theme/NMCIcons/configuration1.png"));
}

void NMCAdvertWidget::loadPNG(const QString &name)
{
    QPixmap pixmap(name);
    pixmap = pixmap.scaled(window()->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    m_imageLabel.setPixmap(pixmap);
}
