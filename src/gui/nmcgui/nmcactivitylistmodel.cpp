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

#include "nmcactivitylistmodel.h"
#include "accountmanager.h"

namespace OCC {

NMCActivityListModel::NMCActivityListModel(QObject *parent)
    : ActivityListModel(parent)
{
}

NMCActivityListModel::NMCActivityListModel(AccountState *accountState,
    QObject *parent)
    : ActivityListModel(accountState, parent)
{
}

QVariant NMCActivityListModel::data(const QModelIndex &index, int role) const
{
    const auto a = activityList().at(index.row());
    AccountStatePtr ast = AccountManager::instance()->account(a._accName);
    if (!ast && accountState() != ast.data())
        return QVariant();

    const auto NMCgenerateIconPath = [&]() {
        auto colorIconPath = role == DarkIconRole ? QStringLiteral("qrc:///client/theme/white/") : QStringLiteral("qrc:///client/theme/black/");
        if (a._type == Activity::NotificationType /*&& !a._talkNotificationData.userAvatar.isEmpty()*/) {
            return QStringLiteral("qrc:///client/theme/colored/talk-bordered.svg");
        } else if (a._type == Activity::SyncResultType) {
            return QStringLiteral("qrc:///client/theme/black/state-error.svg");//colorIconPath.append("state-error.svg");
            return colorIconPath;
        } else if (a._type == Activity::SyncFileItemType) {
            if (a._syncFileItemStatus == SyncFileItem::NormalError
                || a._syncFileItemStatus == SyncFileItem::FatalError
                || a._syncFileItemStatus == SyncFileItem::DetailError
                || a._syncFileItemStatus == SyncFileItem::BlacklistedError) {
                return  QStringLiteral("qrc:///client/theme/black/state-error.svg");//colorIconPath.append("state-error.svg");
            } else if (a._syncFileItemStatus == SyncFileItem::SoftError
                       || a._syncFileItemStatus == SyncFileItem::Conflict
                       || a._syncFileItemStatus == SyncFileItem::Restoration
                       || a._syncFileItemStatus == SyncFileItem::FileLocked
                       || a._syncFileItemStatus == SyncFileItem::FileNameInvalid
                       || a._syncFileItemStatus == SyncFileItem::FileNameInvalidOnServer
                       || a._syncFileItemStatus == SyncFileItem::FileNameClash) {
                return QStringLiteral("qrc:///client/theme/black/state-warning.svg");//colorIconPath.append("state-warning.svg");
                return colorIconPath;
            } else if (a._syncFileItemStatus == SyncFileItem::FileIgnored) {
                return  QStringLiteral("qrc:///client/theme/black/state-info.svg");// colorIconPath.append("state-info.svg");
            } else {
                // File sync successful
                if (a._fileAction == "file_created") {
                    return QStringLiteral("qrc:///client/theme/black/add-circle.svg");
                } else if (a._fileAction == "file_deleted") {
                    return QStringLiteral("qrc:///client/theme/black/delete.svg");
                } else {
                    return QStringLiteral("qrc:///client/theme/refresh.svg");
                }
            }
        } else {
            // We have an activity
            if (a._icon.isEmpty()) {
                colorIconPath.append("activity.svg");
                return colorIconPath;
            }

            const QString basePath = QStringLiteral("image://tray-image-provider/") % a._icon % QStringLiteral("/");
            return role == DarkIconRole ? QString(basePath + QStringLiteral("white")) : QString(basePath + QStringLiteral("black"));
        }
    };

    switch (role) {
    case DarkIconRole:
    case LightIconRole:
        return NMCgenerateIconPath();
    default:
        return ActivityListModel::data(index, role);
    }

}

int NMCActivityListModel::rowCount(const QModelIndex &parent) const
{
    if(parent.isValid()) {
        return 0;
    }
    return activityList().count()<_maxActivities ? activityList().count() :_maxActivities;
}

void NMCActivityListModel::addNotificationToActivityList(const Activity &activity)
{
    const QDate currentDate = QDate::currentDate().addDays(-7);
    if(currentDate <=activity._dateTime.date()){
        addEntriesToActivityList({activity});
        auto notifList = notificationList();
        notifList.prepend(activity);
    }
}

}
