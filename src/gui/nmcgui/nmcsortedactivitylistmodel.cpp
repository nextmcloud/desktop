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

#include "nmcsortedactivitylistmodel.h"


namespace OCC {

NMCSortedActivityListModel::NMCSortedActivityListModel(QObject *parent)
    : SortedActivityListModel(parent)
{
    sort(0, Qt::DescendingOrder);
}

bool NMCSortedActivityListModel::filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const
{
    Q_UNUSED(sourceParent)
    return sourceRow <  _maxEntries ? true : false;
}
}
