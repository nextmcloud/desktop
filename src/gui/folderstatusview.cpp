/*
 * SPDX-FileCopyrightText: 2018 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "folderstatusview.h"
#include "folderstatusdelegate.h"

#include <QHeaderView>
#include <QScrollBar>
#include <QSizePolicy>
#include <QtGlobal>

#include <QApplication>
#include <QEvent>
#include <QPainter>
#include <QPainterPath>
#include <QTimer>

namespace OCC {

FolderStatusView::FolderStatusView(QWidget *parent) : QTreeView(parent)
{
    this->setStyleSheet("QTreeView { border: none; }");
    setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
}

QSize FolderStatusView::sizeHint() const
{
    auto hint = QTreeView::sizeHint();
    hint.setHeight(visibleRowsHeight() + (header()->isVisible() ? header()->height() : 0) + 2 * frameWidth());
    return hint;
}

QSize FolderStatusView::minimumSizeHint() const
{
    return sizeHint();
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
        rect.setLeft(viewport()->rect().left());
        rect.setWidth(viewport()->width());
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

    const QRect rect = viewport()->rect();
    QPainterPath path;
    path.addRoundedRect(rect, 4, 4);

    painter.fillPath(path, Qt::transparent);

    QTreeView::paintEvent(event);
}

int FolderStatusView::visibleRowsHeight(const QModelIndex &parent) const
{
    auto height = 0;
    const auto rows = model() ? model()->rowCount(parent) : 0;
    for (auto row = 0; row < rows; ++row) {
        const auto index = model()->index(row, 0, parent);
        height += rowHeight(index);
        if (isExpanded(index)) {
            height += visibleRowsHeight(index);
        }
    }
    return height;
}

} // namespace OCC
