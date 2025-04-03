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
#include <QDebug>
#include <QEvent>
#include <QApplication>
#include <QBoxLayout>
#include <QGraphicsPixmapItem>

NMCAdvertWidget::NMCAdvertWidget(QWidget *parent) 
    : QWidget(parent),
    m_graphicsView(new NMCCustomGraphicsView(this))
{
    setFixedSize(700, 502);
    auto *layout = new QHBoxLayout(this);
    setLayout(layout);
    
    m_graphicsView->setScene(&m_graphicsScene);
    layout->addWidget(m_graphicsView);
    layout->setContentsMargins(0, 0, 0, 0);

    m_graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    m_graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    generatePixmapList(QStringLiteral(":/client/theme/NMCIcons/configuration1.png"));
    generatePixmapList(QStringLiteral(":/client/theme/NMCIcons/configuration2.png"));
    generatePixmapList(QStringLiteral(":/client/theme/NMCIcons/configuration3.png"));

    initStartButton();

    // Set initial page
    m_graphicsView->show();

    m_arrow_left = new NMCClickableLabel(m_graphicsView);
    m_arrow_left->setPixmap(QIcon(QStringLiteral(":/client/theme/NMCIcons/navigation-left.svg")).pixmap(32, 32));
    connect(m_arrow_left, &NMCClickableLabel::clicked, this, [this]() {
        m_animationTimer.stop();
        loadPicture(false);
    });

    m_arrow_right = new NMCClickableLabel(m_graphicsView);
    m_arrow_right->setPixmap(QIcon(QStringLiteral(":/client/theme/NMCIcons/navigation-right.svg")).pixmap(32, 32));
    connect(m_arrow_right, &NMCClickableLabel::clicked, this, [this]() {
        m_animationTimer.stop();
        loadPicture();
    });

    if (!m_pixmapList.empty()) {
        loadPNG(m_pixmapList.first());
        m_currentImageId = 0;
    }

    m_animationTimer.setInterval(5000);
    connect(&m_animationTimer, &QTimer::timeout, this, [this]() {
        ++m_currentImageId;
        if (m_currentImageId >= m_pixmapList.size()) {
            m_currentImageId = 0;
        }
        selectTextByID();
    });

    m_animationTimer.start();
    setStartButton();
    setDetailText(QCoreApplication::translate("", "ADVERT_DETAIL_TEXT_1"));
    setHeaderText(QCoreApplication::translate("", "ADVERT_HEADER_TEXT_1"));
    setHeader(QCoreApplication::translate("", "ADVERT_HEADER_1"));
    setArrows();
} 
void NMCAdvertWidget::loadPNG(const QPixmap &pixmap)
{
    auto *pixmapItem = m_graphicsScene.addPixmap(pixmap.scaled(window()->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    if (pixmapItem) {
        m_graphicsView->setFixedSize(pixmapItem->pixmap().size());
        m_graphicsView->update();
    }
}

void NMCAdvertWidget::generatePixmapList(const QString &name)
{
    QPixmap pixmap(name);
    m_pixmapList.append(pixmap.scaled(window()->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
}

void NMCAdvertWidget::initStartButton()
{
    if (!m_pushButton)
    {
        m_pushButton = new QPushButton(QCoreApplication::translate("", "START_NOW"), m_graphicsView);
        m_pushButton->setStyleSheet(QStringLiteral(
            "QPushButton {"
            "    font-size: 15px;"
            "    border: 0px solid black;"
            "    border-radius: 4px;"
            "    background-color: white;"
            "    color: black;"
            "}"
            "QPushButton:hover {"
            "    background-color: #ededed;"
            "}"
        ));
        m_pushButton->setFixedSize(130, 32);

        connect(m_pushButton, &QPushButton::clicked, this, &NMCAdvertWidget::close);
    }
}

void NMCAdvertWidget::setStartButton()
{
    if (m_pushButton && m_graphicsView)
    {
        m_graphicsScene.addWidget(m_pushButton);
        m_pushButton->setGeometry(m_graphicsView->width() / 2 - 60, m_graphicsView->height() - 64, 120, 32);
    }
}

void NMCAdvertWidget::setDetailText(const QString &p_text)
{
    if (!m_detailText)
    {
        m_detailText = new QLabel(p_text, m_graphicsView);
        m_detailText->setWordWrap(true);
        m_detailText->setAlignment(Qt::AlignCenter);
        m_detailText->setStyleSheet(QStringLiteral("font-size: 15px; color: white"));
        m_graphicsScene.addWidget(m_detailText);
    }
    else
    {
        m_detailText->setText(p_text);
    }

    m_detailText->setFixedWidth(380);
    
    int detailTextY = m_graphicsView->height() - 88 - m_detailText->sizeHint().height();
    int detailTextX = m_graphicsView->width() / 2 - m_detailText->sizeHint().width() / 2;

    m_detailText->setGeometry(detailTextX, detailTextY, m_detailText->sizeHint().width(), m_detailText->sizeHint().height());
}

void NMCAdvertWidget::setHeaderText(const QString &p_text)
{
    if (!m_headerText)
    {
        m_headerText = new QLabel(p_text, m_graphicsView);
        m_headerText->setWordWrap(true);
        m_headerText->setAlignment(Qt::AlignCenter);
        m_headerText->setStyleSheet(QStringLiteral("font-size: 28px; color: white"));
        m_graphicsScene.addWidget(m_headerText);
    }
    else
    {
        m_headerText->setText(p_text);
    }

    int headerTextY = m_graphicsView->height() - 96 - m_detailText->sizeHint().height() - m_headerText->sizeHint().height();
    int headerTextX = m_graphicsView->width() / 2 - m_headerText->sizeHint().width() / 2;

    m_headerText->setGeometry(headerTextX, headerTextY, m_headerText->sizeHint().width(), m_headerText->sizeHint().height());
}

void NMCAdvertWidget::setHeader(const QString &p_text)
{
    if (!m_header)
    {
        m_header = new QLabel(p_text, m_graphicsView);
        m_header->setAlignment(Qt::AlignCenter);
        m_header->setStyleSheet(QStringLiteral("font-size: 22px; color: white; font-weight: bold;"));
        m_graphicsScene.addWidget(m_header);
    }
    else
    {
        m_header->setText(p_text);
    }

    int headerY = m_graphicsView->height() - 146 - m_detailText->sizeHint().height() - m_headerText->sizeHint().height();
    int headerX = m_graphicsView->width() / 2 - m_header->sizeHint().width() / 2;

    m_header->setGeometry(headerX, headerY, m_header->sizeHint().width(), m_header->sizeHint().height());
}

void NMCAdvertWidget::setArrows()
{
    int arrowY = m_graphicsView->height() - 130;
    m_arrow_left->move(qMax(112, 20), arrowY);
    m_arrow_right->move(qMin(m_graphicsView->width() - 130, m_graphicsView->width() - 50), arrowY);
}

void NMCAdvertWidget::loadPicture(bool next)
{
    m_currentImageId = (m_currentImageId + (next ? 1 : -1) + 3) % 3;
    selectTextByID();
}

void NMCAdvertWidget::selectTextByID()
{
    loadPNG(m_pixmapList.at(m_currentImageId));

    switch (m_currentImageId) {
    case 0:
        setDetailText(QCoreApplication::translate("", "ADVERT_DETAIL_TEXT_1"));
        setHeaderText(QCoreApplication::translate("", "ADVERT_HEADER_TEXT_1"));
        break;
    case 1:
        setDetailText(QCoreApplication::translate("", "ADVERT_DETAIL_TEXT_2"));
        setHeaderText(QCoreApplication::translate("", "ADVERT_HEADER_TEXT_2"));
        break;
    case 2:
        setDetailText(QCoreApplication::translate("", "ADVERT_DETAIL_TEXT_3"));
        setHeaderText(QCoreApplication::translate("", "ADVERT_HEADER_TEXT_3"));
        break;
    default:
        break;
    }

    if (m_header)
    {
        m_header->setVisible(m_currentImageId == 0);
    }
}
