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
 
 #include <QWidget>
 #include <QTimer>
 #include <QLabel>
 #include <QGraphicsView>
 #include <QGraphicsScene>
 #include <QGraphicsPixmapItem>
 #include <QPushButton>
 #include <QList>
 #include <QResizeEvent>
 
 class QWheelEvent;
 class QMouseEvent;
 
 /**
  * @brief Custom QGraphicsView that disables scroll wheel interaction.
  */
 class NMCCustomGraphicsView : public QGraphicsView
 {
     Q_OBJECT
 
 public:
     explicit NMCCustomGraphicsView(QWidget *parent = nullptr);
 
 protected:
     void wheelEvent(QWheelEvent *event) override;
 };
 
 /**
  * @brief Clickable QLabel emitting a signal on click.
  */
 class NMCClickableLabel : public QLabel
 {
     Q_OBJECT
 
 public:
     explicit NMCClickableLabel(QWidget *parent = nullptr);
     ~NMCClickableLabel() override = default;
 
 signals:
     void clicked();
 
 protected:
     void mousePressEvent(QMouseEvent *event) override;
 };
 
 /**
  * @brief Widget displaying an image-based slideshow with controls and text.
  */
 class NMCAdvertWidget : public QWidget
 {
     Q_OBJECT
 
 public:
     explicit NMCAdvertWidget(QWidget *parent = nullptr);
     ~NMCAdvertWidget() override = default;
 
 private:
     void loadPNG(const QPixmap &pixmap);
     void generatePixmapList(const QString &name);
     void initStartButton();
     void setStartButton();
     void setDetailText(const QString &text);
     void setHeaderText(const QString &text);
     void setHeader(const QString &text);
     void setArrows();
     void loadPicture(bool next = true);
     void selectTextByID();
     void clearScene();
     void onArrowLeftClicked();
     void onArrowRightClicked();
     void resizeEvent(QResizeEvent *event) override;
 
 private:
     NMCCustomGraphicsView *m_graphicsView = nullptr;
     QGraphicsScene m_graphicsScene;
     QList<QPixmap> m_pixmapList;
     QGraphicsPixmapItem *m_pixmapItem = nullptr;
     QTimer m_animationTimer;
     int m_currentImageId = 0;
 
     QPushButton *m_pushButton = nullptr;
     QLabel *m_detailText = nullptr;
     QLabel *m_headerText = nullptr;
     QLabel *m_header = nullptr;
     NMCClickableLabel *m_arrow_left = nullptr;
     NMCClickableLabel *m_arrow_right = nullptr;
 
     static constexpr int kButtonWidth = 200;
     static constexpr int kButtonHeight = 40;
     static constexpr int kArrowOffset = 60;
 };
 
 #endif // NMCADVERTWIDGET_H
 