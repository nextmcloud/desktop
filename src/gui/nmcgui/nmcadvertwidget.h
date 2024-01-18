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

#ifndef NMCADVERTWIDGET_H
#define NMCADVERTWIDGET_H

#include "QtCore/qtimer.h"
#include "QtGui/qevent.h"
#include "QtWidgets/qgraphicsview.h"
#include "QtWidgets/qpushbutton.h"
#include <QWidget>
#include <QLabel>

class NMCCustomGraphicsView : public QGraphicsView
{
public:
    NMCCustomGraphicsView(QWidget *parent = nullptr) : QGraphicsView(parent) {}

protected:
    void wheelEvent(QWheelEvent *event) override
    {
        event->ignore();
    }
};

class NMCClickableLabel : public QLabel
{
    Q_OBJECT

public:
    explicit NMCClickableLabel(QWidget *parent = nullptr) : QLabel(parent)
    {
    }

    ~NMCClickableLabel() = default;

protected:
    void mousePressEvent(QMouseEvent *event) override {
        Q_UNUSED(event)
        emit clicked();
    }

signals:
    void clicked();
};


class NMCAdvertWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NMCAdvertWidget(QWidget *parent = nullptr);
    ~NMCAdvertWidget() = default;

private:
    void loadPNG(const QPixmap &pixmap);
    void generatePixmapList(const QString &name);
    void initStartButton();
    void setStartButton();
    void setDetailText(const QString &p_text);
    void setHeaderText(const QString &p_text);
    void setHeader(const QString &p_text);
    void setArrows();
    void loadPicture(bool next = true);
    void selectTextByID();

private:
    NMCCustomGraphicsView *m_graphicsView = nullptr;
    QGraphicsScene m_graphicsScene;
    QList<QPixmap> m_pixmapList;
    QTimer m_animationTimer;
    int m_currentImageId = 0;
    QPushButton *m_pushButton = nullptr;
    QLabel *m_detailText = nullptr;
    QLabel *m_headerText = nullptr;
    QLabel *m_header = nullptr;
    NMCClickableLabel *m_arrow_left = nullptr;
    NMCClickableLabel *m_arrow_right = nullptr;
};

#endif // NMCADVERTWIDGET_H
