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
#include "QtGui/qevent.h"
#include "QtWidgets/qboxlayout.h"
#include "QGraphicsPixmapItem"

NMCAdvertWidget::NMCAdvertWidget(QWidget *parent) : QWidget(parent)
    ,m_graphicsView(new NMCCustomGraphicsView(this))
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

    initStartButton();

    //Set initial page
    m_graphicsView->show();

    m_arrow_left = new NMCClickableLabel(m_graphicsView);
    m_arrow_left->setPixmap(QIcon(QLatin1String(":/client/theme/NMCIcons/navigation-left.svg")).pixmap(24,24));
    connect(m_arrow_left, &NMCClickableLabel::clicked, this, [this](){
        m_animationTimer.stop();
        loadPicture(false);
    });

    m_arrow_right = new NMCClickableLabel(m_graphicsView);
    m_arrow_right->setPixmap(QIcon(QLatin1String(":/client/theme/NMCIcons/navigation-right.svg")).pixmap(24,24));
    connect(m_arrow_right, &NMCClickableLabel::clicked, this, [this](){
        m_animationTimer.stop();
        loadPicture();
    });

    if(!m_pixmapList.empty())
    {
        loadPNG(m_pixmapList.first());
        m_currentImageId = 0;
    }

    m_animationTimer.setInterval(5000);
    connect(&m_animationTimer, &QTimer::timeout, this, [this](){

        ++m_currentImageId;
        if(m_pixmapList.size()-1 < m_currentImageId)
        {
            m_currentImageId = 0;
        }
        selectTextByID();
    });

    m_animationTimer.start();
    setStartButton();
    setDetailText(tr("ADVERT_DETAIL_TEXT_1"));
    setHeaderText(tr("ADVERT_HEADER_TEXT_1"));
    setHeader(tr("ADVERT_HEADER_1"));
    setArrows();
}

void NMCAdvertWidget::loadPNG(const QPixmap &pixmap)
{
    QGraphicsPixmapItem *pixmapItem = m_graphicsScene.addPixmap(pixmap.scaled(window()->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    m_graphicsView->setFixedSize(pixmapItem->pixmap().size());
    m_graphicsView->update();
}

void NMCAdvertWidget::generatePixmapList(const QString &name)
{
    QPixmap pixmap(name);
    m_pixmapList.append(pixmap.scaled(window()->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
}

void NMCAdvertWidget::initStartButton()
{
    if(m_pushButton == nullptr)
    {
        m_pushButton = new QPushButton(tr("START_NOW"), m_graphicsView);
        if(m_pushButton != nullptr)
        {
            const QString styleSheet = "QPushButton {"
                "    font-size: 15px;"
                "    border: 0px solid black;"
                "    border-radius: 4px;"
                "    background-color: white;"
                "    color: black;"
                "}"
                "QPushButton:hover {"
                "    background-color: #ededed;"
                "}";
            m_pushButton->setStyleSheet(styleSheet);
            m_pushButton->setFixedSize(130,32);

            connect(m_pushButton, &QPushButton::clicked, this, [this](){
                this->close();
            });
        }
    }
}

void NMCAdvertWidget::setStartButton()
{
    if (m_pushButton != nullptr && m_graphicsView != nullptr)
    {
        m_graphicsScene.addWidget(m_pushButton);
        m_pushButton->setGeometry(m_graphicsView->width()/2 - 60, m_graphicsView->height() - 32 - 32, 120, 32);
    }
}

void NMCAdvertWidget::setDetailText(const QString &p_text)
{
    if(m_detailText)
    {
        m_detailText->setText(p_text);
    }
    else{
        m_detailText = new QLabel(p_text, m_graphicsView);
    }

    m_detailText->setFixedWidth(380);
    m_detailText->setStyleSheet("font-size: 15px; color: white");
    m_detailText->setWordWrap(true);
    m_detailText->setAlignment(Qt::AlignCenter);

    m_graphicsScene.addWidget(m_detailText);
    //88 is the result of all margins and buttonszie
    m_detailText->setGeometry(m_graphicsView->width()/2 - m_detailText->sizeHint().width()/2, m_graphicsView->height() - 88 - m_detailText->sizeHint().height(), m_detailText->sizeHint().width(), m_detailText->sizeHint().height());
}

void NMCAdvertWidget::setHeaderText(const QString &p_text)
{
    if(m_headerText)
    {
        m_headerText->setText(p_text);
    }
    else{
        m_headerText = new QLabel(p_text, m_graphicsView);
    }

    m_headerText->setFixedWidth(380);
    m_headerText->setStyleSheet("font-size: 28px; color: white");
    m_headerText->setWordWrap(true);
    m_headerText->setAlignment(Qt::AlignCenter);

    m_graphicsScene.addWidget(m_headerText);
    //96 is the result of all margins and buttonszie
    m_headerText->setGeometry(m_graphicsView->width()/2 - m_headerText->sizeHint().width()/2, m_graphicsView->height() - 96 - m_detailText->sizeHint().height() - m_headerText->sizeHint().height(), m_headerText->sizeHint().width(), m_headerText->sizeHint().height());
}

void NMCAdvertWidget::setHeader(const QString &p_text)
{
    m_header = new QLabel(p_text, m_graphicsView);
    m_header->setStyleSheet("font-size: 22px; color: white; font-weight: bold;");
    m_header->setAlignment(Qt::AlignCenter);

    m_graphicsScene.addWidget(m_header);
    //146 is the result of all margins and buttonszie
    m_header->setGeometry(m_graphicsView->width()/2 - m_header->sizeHint().width()/2, m_graphicsView->height() - 146 - m_detailText->sizeHint().height() - m_headerText->sizeHint().height(), m_header->sizeHint().width(), m_header->sizeHint().height());
}

void NMCAdvertWidget::setArrows()
{
    m_arrow_left->move( 112, m_graphicsView->height() - 130);
    m_arrow_right->move( m_graphicsView->width() - 130, m_graphicsView->height() - 130);
}

void NMCAdvertWidget::loadPicture(bool next)
{
    if(next)
    {
        ++m_currentImageId;
    }
    else{
        --m_currentImageId;
    }
    if(m_currentImageId < 0)
    {
        m_currentImageId = 2;
    }
    if(m_currentImageId > 2)
    {
        m_currentImageId = 0;
    }

    selectTextByID();
}

void NMCAdvertWidget::selectTextByID()
{
    loadPNG(m_pixmapList.at(m_currentImageId));

    switch (m_currentImageId) {
    case 0: {
        setDetailText(tr("ADVERT_DETAIL_TEXT_1"));
        setHeaderText(tr("ADVERT_HEADER_TEXT_1"));
        break;
    }
    case 1: {
        setDetailText(tr("ADVERT_DETAIL_TEXT_2"));
        setHeaderText(tr("ADVERT_HEADER_TEXT_2"));
        break;
    }
    case 2: {
        setDetailText(tr("ADVERT_DETAIL_TEXT_3"));
        setHeaderText(tr("ADVERT_HEADER_TEXT_3"));
        break;
    }
    default:
        break;
    }

    if(m_header)
    {
        m_currentImageId != 0 ? m_header->setVisible(false) : m_header->setVisible(true);
    }
}
