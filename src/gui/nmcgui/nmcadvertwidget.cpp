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
#include <QBoxLayout>
#include <QIcon>
#include <QCoreApplication>
#include <QGraphicsView>
#include <QMouseEvent>
#include <QDebug>

NMCAdvertWidget::NMCAdvertWidget(QWidget *parent)
    : QWidget(parent),
    m_graphicsView(new NMCCustomGraphicsView(this))
{
    setFixedSize(698, 474);
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

    m_arrow_left = new NMCClickableLabel(m_graphicsView);
    m_arrow_left->setPixmap(QIcon(QStringLiteral(":/client/theme/NMCIcons/navigation-left.svg")).pixmap(32, 32));
    connect(m_arrow_left, &NMCClickableLabel::clicked, this, &NMCAdvertWidget::onArrowLeftClicked);

    m_arrow_right = new NMCClickableLabel(m_graphicsView);
    m_arrow_right->setPixmap(QIcon(QStringLiteral(":/client/theme/NMCIcons/navigation-right.svg")).pixmap(32, 32));
    connect(m_arrow_right, &NMCClickableLabel::clicked, this, &NMCAdvertWidget::onArrowRightClicked);

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

void NMCAdvertWidget::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    if (m_currentImageId < m_pixmapList.size())
        loadPNG(m_pixmapList.at(m_currentImageId));

    setStartButton();
    setDetailText(m_detailText ? m_detailText->text() : QString());
    setHeaderText(m_headerText ? m_headerText->text() : QString());
    setHeader(m_header ? m_header->text() : QString());
    setArrows();
}

void NMCAdvertWidget::clearScene()
{
    m_graphicsScene.clear();
}

void NMCAdvertWidget::loadPNG(const QPixmap &pixmap)
{
    clearScene();
    auto *pixmapItem = m_graphicsScene.addPixmap(pixmap.scaled(size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    if (pixmapItem) {
        m_graphicsView->setFixedSize(pixmapItem->pixmap().size());
        m_graphicsView->update();
    }
}

void NMCAdvertWidget::generatePixmapList(const QString &name)
{
    QPixmap pixmap(name);
    m_pixmapList.append(pixmap.scaled(size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
}

void NMCAdvertWidget::initStartButton()
{
    if (!m_pushButton) {
        m_pushButton = new QPushButton(QCoreApplication::translate("", "START_NOW"), m_graphicsView);
        m_pushButton->setStyleSheet(QStringLiteral(
            "QPushButton { font-size: 15px; border: 0px solid black; border-radius: 4px; background-color: white; color: black; }"
            "QPushButton:hover { background-color: #ededed; }"
        ));
        // m_pushButton->setFixedSize(kButtonWidth, kButtonHeight);
        m_pushButton->setFixedSize(140, 36);
        connect(m_pushButton, &QPushButton::clicked, this, &NMCAdvertWidget::close);
    }
}

void NMCAdvertWidget::setStartButton()
{
    if (m_pushButton && m_graphicsView) {
        m_graphicsScene.addWidget(m_pushButton);
        int buttonWidth = 140;
        int buttonHeight = 36;
        int x = (width() - buttonWidth) / 2;
        int y = height() - 60;
        m_pushButton->setGeometry(x, y, buttonWidth, buttonHeight);
    }
}

void NMCAdvertWidget::setDetailText(const QString &p_text)
{
    if (!m_detailText) {
        m_detailText = new QLabel(p_text, m_graphicsView);
        m_detailText->setWordWrap(true);
        m_detailText->setAlignment(Qt::AlignCenter);
        m_detailText->setStyleSheet(QStringLiteral("font-size: 15px; color: white"));
        m_graphicsScene.addWidget(m_detailText);
    } else {
        m_detailText->setText(p_text);
    }

    m_detailText->setFixedWidth(420);

    int y = height() - 88 - m_detailText->sizeHint().height();
    int x = width() / 2 - m_detailText->sizeHint().width() / 2;

    m_detailText->setGeometry(x, y, m_detailText->sizeHint().width(), m_detailText->sizeHint().height());
}

void NMCAdvertWidget::setHeaderText(const QString &p_text)
{
    if (!m_headerText) {
        m_headerText = new QLabel(p_text, m_graphicsView);
        m_headerText->setWordWrap(true);
        m_headerText->setAlignment(Qt::AlignCenter);
        m_headerText->setStyleSheet(QStringLiteral("font-size: 26px; color: white"));
        m_graphicsScene.addWidget(m_headerText);
    } else {
        m_headerText->setText(p_text);
    }

    m_headerText->setFixedWidth(420);

    int y = height() - 100 - m_detailText->sizeHint().height() - m_headerText->sizeHint().height();
    int x = width() / 2 - m_headerText->sizeHint().width() / 2;

    m_headerText->setGeometry(x, y, m_headerText->sizeHint().width(), m_headerText->sizeHint().height());
}

void NMCAdvertWidget::setHeader(const QString &p_text)
{
    if (!m_header) {
        m_header = new QLabel(p_text, m_graphicsView);
        m_header->setAlignment(Qt::AlignCenter);
        m_header->setStyleSheet(QStringLiteral("font-size: 22px; color: white; font-weight: bold;"));
        m_graphicsScene.addWidget(m_header);
    } else {
        m_header->setText(p_text);
    }

    int y = height() - 142 - m_detailText->sizeHint().height() - m_headerText->sizeHint().height();
    int x = width() / 2 - m_header->sizeHint().width() / 2;

    m_header->setGeometry(x, y, m_header->sizeHint().width(), m_header->sizeHint().height());
}

void NMCAdvertWidget::setArrows()
{
    int y = height() - kArrowOffset;
    m_arrow_left->move(qMax(112, 20), y);
    m_arrow_right->move(qMin(width() - 130, width() - 50), y);
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

    if (m_header) {
        m_header->setVisible(m_currentImageId == 0);
    }
}

void NMCAdvertWidget::onArrowLeftClicked()
{
    m_animationTimer.stop();
    loadPicture(false);
}

void NMCAdvertWidget::onArrowRightClicked()
{
    m_animationTimer.stop();
    loadPicture(true);
}

// Definition von NMCCustomGraphicsView
NMCCustomGraphicsView::NMCCustomGraphicsView(QWidget *parent)
    : QGraphicsView(parent)
{
    setStyleSheet(QStringLiteral("background: transparent"));
    setFrameStyle(QFrame::NoFrame);
}

void NMCCustomGraphicsView::wheelEvent(QWheelEvent *event)
{
    // Unterdrücke Scrollen
    event->ignore();
}

// Definition von NMCClickableLabel
NMCClickableLabel::NMCClickableLabel(QWidget *parent)
    : QLabel(parent)
{
    setCursor(Qt::PointingHandCursor);
}

void NMCClickableLabel::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        emit clicked();
    }
    QLabel::mousePressEvent(event);
}