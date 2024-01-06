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

#ifndef NMCACTIVITYLISTMODEL_H
#define NMCACTIVITYLISTMODEL_H

#include "tray/activitylistmodel.h"

namespace OCC {

/**
 * @brief The NMCActivityListModel
 * @ingroup gui
 *
 * Simple list model to provide the list view with data.
 */

class NMCActivityListModel : public ActivityListModel
{
public:
    explicit NMCActivityListModel(QObject *parent = nullptr);
    explicit NMCActivityListModel(AccountState *accountState, QObject *parent = nullptr);

    ~NMCActivityListModel() = default;

    [[nodiscard]] QVariant data(const QModelIndex &index, int role) const override final;
    [[nodiscard]] int rowCount(const QModelIndex &parent = QModelIndex()) const override final;

public slots:
    void addNotificationToActivityList(const OCC::Activity &activity) override final;

private:
    int _maxActivities = 30;

};

}

#endif // ACTIVITYLISTMODEL_H
