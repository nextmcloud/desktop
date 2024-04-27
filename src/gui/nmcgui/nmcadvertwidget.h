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
    /**
     * @brief Constructs an NMCCustomGraphicsView object.
     * @param parent The parent widget (default is nullptr).
     */
    NMCCustomGraphicsView(QWidget *parent = nullptr) : QGraphicsView(parent) {}

protected:
    /**
     * @brief Reimplemented from QGraphicsView.
     * Handles wheel events to ignore them and disable scrolling.
     * @param event The wheel event.
     */
    void wheelEvent(QWheelEvent *event) override
    {
        event->ignore();
    }
};

class NMCClickableLabel : public QLabel
{
    Q_OBJECT

public:
    /**
     * @brief Constructs an NMCClickableLabel object.
     * @param parent The parent widget (default is nullptr).
     */
    explicit NMCClickableLabel(QWidget *parent = nullptr) : QLabel(parent)
    {
    }

    ~NMCClickableLabel() = default;

protected:
    /**
     * @brief Reimplemented from QLabel.
     * Handles mouse press events and emits the clicked signal.
     * @param event The mouse press event.
     */
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
    /**
     * @brief Constructs an NMCAdvertWidget object.
     * @param parent The parent widget (default is nullptr).
     */
    explicit NMCAdvertWidget(QWidget *parent = nullptr);

    ~NMCAdvertWidget() = default;

private:
    /**
     * @brief Loads a PNG image into the QPixmap.
     * @param pixmap The QPixmap to load the image into.
     */
    void loadPNG(const QPixmap &pixmap);

    /**
     * @brief Generates a list of Pixmaps from a specified image name.
     * @param name The base name of the image.
     */
    void generatePixmapList(const QString &name);

    /**
     * @brief Initializes the start button.
     */
    void initStartButton();

    /**
     * @brief Sets the start button properties.
     */
    void setStartButton();

    /**
     * @brief Sets the detail text label.
     * @param p_text The text to set.
     */
    void setDetailText(const QString &p_text);

    /**
     * @brief Sets the header text label.
     * @param p_text The text to set.
     */
    void setHeaderText(const QString &p_text);

    /**
     * @brief Sets the header label.
     * @param p_text The text to set.
     */
    void setHeader(const QString &p_text);

    /**
     * @brief Sets the left and right arrows for navigation.
     */
    void setArrows();

    /**
     * @brief Loads the next or previous picture in the list.
     * @param next If true, loads the next picture; otherwise, loads the previous.
     */
    void loadPicture(bool next = true);

    /**
     * @brief Selects text by its ID.
     */
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
