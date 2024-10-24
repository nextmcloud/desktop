/*
 * Copyright (C) 2018 by J-P Nurmi <jpnurmi@gmail.com>
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

#include "folderstatusview.h"
#include "folderstatusdelegate.h"
#include "QtCore/qtimer.h"
#include "QtGui/qevent.h"
#include "QtGui/qpainterpath.h"
#include "QtWidgets/qapplication.h"

#include "QPainter"

namespace OCC {

FolderStatusView::FolderStatusView(QWidget *parent) : QTreeView(parent)
{
    // Removes the border
    setStyleSheet("QTreeView { border: none; border-width: 0px; border-style: none; border-color: transparent; }");
}

QModelIndex FolderStatusView::indexAt(const QPoint &point) const
{
    QModelIndex index = QTreeView::indexAt(point);
    if (index.data(FolderStatusDelegate::AddButton).toBool() && !visualRect(index).contains(point)) {
        return {};
    }
    return index;
}

QRect FolderStatusView::visualRect(const QModelIndex &index) const
{
    QRect rect = QTreeView::visualRect(index);
    if (index.data(FolderStatusDelegate::AddButton).toBool()) {
        return FolderStatusDelegate::addButtonRect(rect, layoutDirection());
    }
    return rect;
}

void FolderStatusView::drawBranches(QPainter *painter, const QRect &rect, const QModelIndex &index) const {

    Q_UNUSED(painter)
    Q_UNUSED(rect)
    Q_UNUSED(index)

    // Empty, we override this function, to get rid of the left column with the collapse and expand icons. 
    // It's implemented here, but due to synchronisation, we will implement it in folderstatusdelegate.cpp paint funtion.
}

void FolderStatusView::paintEvent(QPaintEvent *event)
{
    // it paints rounded corner, Qtreeview does not support the stylesheet setting
    QPainter painter(viewport());
    painter.setRenderHint(QPainter::Antialiasing);

    const int radius = 4;

    QRect rect(0, 0, width(), height());
    QPainterPath path;
    path.addRoundedRect(rect, radius, radius);

    QPalette palette = QApplication::palette();
    painter.fillRect(rect, palette.window());

    painter.fillPath(path, Qt::white);

    QTreeView::paintEvent(event);
}

} // namespace OCC
