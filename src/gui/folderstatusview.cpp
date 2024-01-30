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
#include "QtCore/qtimer.h"
#include "QtGui/qevent.h"
#include "folderstatusdelegate.h"

#include "QPainter"

namespace OCC {

FolderStatusView::FolderStatusView(QWidget *parent) : QTreeView(parent)
{
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
    QMutexLocker locker(&mutex);  // Locker zum Sperren des Mutex für den kritischen Abschnitt

    if (index.isValid() && mouseOverIndex == index) {
        painter->save();
        painter->fillRect(rect, Qt::red);
        painter->restore();
    }

    QTreeView::drawBranches(painter, rect, index);
}

void FolderStatusView::mouseMoveEvent(QMouseEvent *event) {
    QMutexLocker locker(&mutex);  // Locker zum Sperren des Mutex für den kritischen Abschnitt

    QTreeView::mouseMoveEvent(event);

    mouseOverIndex = indexAt(event->pos());
}

void FolderStatusView::leaveEvent(QEvent *event) {
    QMutexLocker locker(&mutex);  // Locker zum Sperren des Mutex für den kritischen Abschnitt

    QTreeView::leaveEvent(event);
    mouseOverIndex = QModelIndex();  // Zurücksetzen auf einen ungültigen Index

}


} // namespace OCC
