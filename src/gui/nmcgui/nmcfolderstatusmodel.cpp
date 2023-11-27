/*
 * Copyright (C) by Klaas Freitag <freitag@kde.org>
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

#include "nmcfolderstatusmodel.h"
#include "folderstatusdelegate.h"
#include "theme.h"

namespace OCC {

NMCFolderStatusModel::NMCFolderStatusModel(QObject *parent)
    :FolderStatusModel(parent)
{

}

QVariant NMCFolderStatusModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();
    if (role == Qt::EditRole)
        return QVariant();

    switch (role) {
    case FolderStatusDelegate::FolderStatusIconRole:{
        auto theme = Theme::instance();
        return theme->folderIcon();
    }
    default:
        break;
    }

    return FolderStatusModel::data(index, role);
}




} // namespace OCC
