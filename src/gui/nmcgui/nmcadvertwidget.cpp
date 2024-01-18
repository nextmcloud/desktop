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
#include "QtCore/qdebug.h"
#include "QtWidgets/qboxlayout.h"
#include "QGraphicsPixmapItem"

NMCAdvertWidget::NMCAdvertWidget(QWidget *parent) : QWidget(parent)
    ,m_graphicsView(new QGraphicsView)

{
    setFixedSize(700,502);
    QHBoxLayout *layout = new QHBoxLayout(this);
    setLayout(layout);
    m_graphicsView->setScene(&m_graphicsScene);
    layout->addWidget(m_graphicsView);
    layout->setMargin(0);

    m_graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    m_graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    generatePixmapList(":/client/theme/NMCIcons/configuration1.png");
    generatePixmapList(":/client/theme/NMCIcons/configuration2.png");
    generatePixmapList(":/client/theme/NMCIcons/configuration3.png");

    //Set initial page
    if(!m_pixmapList.empty())
    {
        loadPNG(m_pixmapList.first());
        drawStartButton();
        m_currentImageId = 0;
    }

    m_graphicsView->show();

    m_animationTimer.setInterval(2500);
    connect(&m_animationTimer, &QTimer::timeout, this, [this](){

        ++m_currentImageId;
        if(m_pixmapList.size()-1 < m_currentImageId)
        {
            m_currentImageId = 0;
        }

        loadPNG(m_pixmapList.at(m_currentImageId));
        drawStartButton();
    });

    m_animationTimer.start();
}

void NMCAdvertWidget::loadPNG(const QPixmap &pixmap)
{
    m_graphicsScene.clear();
    QGraphicsPixmapItem *pixmapItem = m_graphicsScene.addPixmap(pixmap.scaled(window()->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    m_graphicsView->setFixedSize(pixmapItem->pixmap().size());
}

void NMCAdvertWidget::generatePixmapList(const QString &name)
{
    QPixmap pixmap(name);
    m_pixmapList.append(pixmap.scaled(window()->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
}

void NMCAdvertWidget::drawStartButton()
{
    QPainterPath roundedPath;
    roundedPath.addRoundedRect((m_graphicsView->width()/2) - 60, m_graphicsView->height() - 32 - 32, 120, 32, 4, 4);

    QGraphicsPathItem *roundedRect = new QGraphicsPathItem(roundedPath);
    roundedRect->setBrush(QBrush(Qt::white));
    roundedRect->setPen(QPen(Qt::NoPen));

    m_graphicsScene.addItem(roundedRect);

    QGraphicsTextItem *textItem = new QGraphicsTextItem(tr("START_NOW"));
    textItem->setDefaultTextColor(Qt::black);

    QFont font;
    font.setPointSize(15);
    font.setWeight(QFont::Normal);
    textItem->setFont(font);

    m_graphicsScene.addItem(textItem);

    qreal textX = (roundedRect->boundingRect().width() - textItem->boundingRect().width()) / 2;
    qreal textY = (roundedRect->boundingRect().height() - textItem->boundingRect().height()) / 2;

    QPointF scenePos = roundedRect->sceneBoundingRect().topLeft();

    textItem->setPos(scenePos.x() + textX, scenePos.y() + textY);
}
