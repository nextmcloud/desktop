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
#include "QtWidgets/qgraphicsview.h"
#include <QWidget>
#include <QLabel>

class NMCAdvertWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NMCAdvertWidget(QWidget *parent = nullptr);
    ~NMCAdvertWidget() = default;

private:
    void loadPNG(const QPixmap &pixmap);
    void generatePixmapList(const QString &name);

private:
    QGraphicsView *m_graphicsView = nullptr;
    QGraphicsScene m_graphicsScene;
    QList<QPixmap> m_pixmapList;
    QTimer m_animationTimer;
    int m_currentImageId = 0;

private:
    // Hier können Sie Mitgliedsvariablen und private Methoden hinzufügen
};

#endif // NMCADVERTWIDGET_H
