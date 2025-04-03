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
 
 #include <QTimer>
 #include <QWidget>
 #include <QLabel>
 #include <QGraphicsView>
 #include <QGraphicsScene>
 #include <QGraphicsPixmapItem>
 #include <QPushButton>
 #include <QWheelEvent>
 #include <QMouseEvent>
 #include <QList>
 
 /**
  * @brief Custom QGraphicsView to prevent scroll events.
  */
 class NMCCustomGraphicsView : public QGraphicsView
 {
 public:
     /**
      * @brief Constructs an NMCCustomGraphicsView object.
      * @param parent The parent widget (default is nullptr).
      */
     explicit NMCCustomGraphicsView(QWidget *parent = nullptr) : QGraphicsView(parent) {}
 
 protected:
     /**
      * @brief Overrides wheelEvent to prevent scrolling.
      * @param event The wheel event.
      */
     void wheelEvent(QWheelEvent *event) override
     {
         event->ignore();
     }
 };
 
 /**
  * @brief A QLabel that emits a clicked signal when pressed.
  */
 class NMCClickableLabel : public QLabel
 {
     Q_OBJECT
 
 public:
     /**
      * @brief Constructs an NMCClickableLabel object.
      * @param parent The parent widget (default is nullptr).
      */
     explicit NMCClickableLabel(QWidget *parent = nullptr) : QLabel(parent) {}
 
     ~NMCClickableLabel() override = default;
 
 protected:
     /**
      * @brief Handles mouse press events to emit a clicked signal.
      * @param event The mouse press event.
      */
     void mousePressEvent(QMouseEvent *event) override 
     {
         Q_UNUSED(event)
         emit clicked();
     }
 
 signals:
     /**
      * @brief Emitted when the label is clicked.
      */
     void clicked();
 };
 
 /**
  * @brief A widget that displays an advertisement slideshow.
  */
 class NMCAdvertWidget : public QWidget
 {
     Q_OBJECT
 
 public:
     /**
      * @brief Constructs an NMCAdvertWidget object.
      * @param parent The parent widget (default is nullptr).
      */
     explicit NMCAdvertWidget(QWidget *parent = nullptr);
 
     ~NMCAdvertWidget() override = default;
 
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
     NMCCustomGraphicsView *m_graphicsView = nullptr; ///< Custom graphics view
     QGraphicsScene m_graphicsScene; ///< Graphics scene for images
     QList<QPixmap> m_pixmapList; ///< List of advertisement images
     QTimer m_animationTimer; ///< Timer for image transitions
     int m_currentImageId = 0; ///< Current displayed image index
     QPushButton *m_pushButton = nullptr; ///< Start button
     QLabel *m_detailText = nullptr; ///< Detail text label
     QLabel *m_headerText = nullptr; ///< Header text label
     QLabel *m_header = nullptr; ///< Main header label
     NMCClickableLabel *m_arrow_left = nullptr; ///< Left navigation arrow
     NMCClickableLabel *m_arrow_right = nullptr; ///< Right navigation arrow
 };
 
 #endif // NMCADVERTWIDGET_H
 