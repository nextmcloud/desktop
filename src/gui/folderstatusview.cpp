/*
 * SPDX-FileCopyrightText: 2018 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "folderstatusview.h"
#include "folderstatusdelegate.h"

#include <QApplication>
#include <QEvent>
#include <QPainter>
#include <QPainterPath>
#include <QTimer>

namespace OCC {

FolderStatusView::FolderStatusView(QWidget *parent) : QTreeView(parent)
{
    this->setStyleSheet("QTreeView { border: none; }");
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

    // Empty function: This overrides the default behavior to remove the left column 
    // containing the collapse and expand icons. Instead, this is handled 
    // in FolderStatusDelegate::paint().
}

void FolderStatusView::paintEvent(QPaintEvent *event)
{
    QPainter painter(viewport());
    painter.setRenderHint(QPainter::Antialiasing);

    const int radius = 4;
    const int padding = 8;

    QRect outerRect(0, 0, width(), height());
    QRect innerRect = outerRect.adjusted(padding, padding, -padding, -padding);

    QPainterPath path;
    path.addRoundedRect(innerRect, radius, radius);

    QPalette palette = this->palette();
    QColor backgroundColor = palette.color(QPalette::Window);
    QColor baseColor = palette.color(QPalette::Base);

    painter.fillRect(outerRect, backgroundColor);
    painter.fillPath(path, baseColor);

    QTreeView::paintEvent(event);
}

} // namespace OCC
