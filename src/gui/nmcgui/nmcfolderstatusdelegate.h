/*
 * Copyright (C) by Klaas Freitag <freitag@kde.org>
 * Copyright (C) by Olivier Goffart <ogoffart@woboq.com>
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

#pragma once
#include "folderstatusdelegate.h"
#include <QStyledItemDelegate>

namespace OCC {

/**
 * @brief The NMCFolderStatusDelegate class
 * @ingroup gui
 */
class NMCFolderStatusDelegate : public FolderStatusDelegate
{
    Q_OBJECT
public:
    NMCFolderStatusDelegate();

    enum class AddButtonText
    {
        AB_Headline,
        AB_Textline
    };

    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override final;
    [[nodiscard]] QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const override final;

    static QString addFolderText(AddButtonText selection);
};

} // namespace OCC
