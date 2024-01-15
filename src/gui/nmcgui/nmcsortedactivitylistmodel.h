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

#pragma once

#include "tray/sortedactivitylistmodel.h"

namespace OCC {

class NMCSortedActivityListModel : public SortedActivityListModel
{
    Q_OBJECT

public:
    explicit NMCSortedActivityListModel(QObject *parent = nullptr);
    ~NMCSortedActivityListModel() = default;

protected:
    bool filterAcceptsRow(int sourceRow,const QModelIndex &sourceParent) const override;

};

}
