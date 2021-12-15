/*
 * Copyright (C) by Roeland Jago Douma <roeland@famdouma.nl>
 * Copyright (C) 2015 by Klaas Freitag <freitag@owncloud.com>
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

#ifndef SHAREUSERGROUPPERMISSIONWIDGET_H
#define SHAREUSERGROUPPERMISSIONWIDGET_H

#include "accountfwd.h"
#include "sharemanager.h"
#include "sharepermissions.h"
#include "QProgressIndicator.h"
#include <QDialog>
#include <QSharedPointer>
#include <QList>

class QMenu;
class QTableWidgetItem;
class TestShareUserGroupPermissionWidget;
class TestShareDialog;

namespace OCC {

namespace Ui {
    class ShareUserGroupPermissionWidget;
}

class AbstractCredentials;
class SyncResult;
class LinkShare;
class Share;
class ShareUserMessageWidget;
class ShareManager;
class Sharee;

/**
 * @brief The ShareDialog class
 * @ingroup gui
 */
class ShareUserGroupPermissionWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ShareUserGroupPermissionWidget(AccountPtr account,
        const QString &sharePath,
        const QString &localPath, const QString &userLinePermission,
        SharePermissions maxSharingPermissions, Share::ShareType type, const QSharedPointer<Sharee> &sharee, bool createShare,
        QWidget *parent);
    ~ShareUserGroupPermissionWidget();
    void setLinkAdvancePermission(QSharedPointer<LinkShare> linkShare, Share::ShareType type, QSharedPointer<Sharee> sharee, bool createShare, const QString &permission);
    void setUserAdvancePermission(QSharedPointer<UserGroupShare> share,Share::ShareType type, const QSharedPointer<Sharee> &sharee, bool createShare, const QString &permission);
    void setUserCreatePermission(Share::ShareType type, const QSharedPointer<Sharee> &sharee, bool createShare);
    void setPermission(const QString &permission);

signals:
    void readPermissionEnabled();
    void editPermissionEnabled();
    void fileDropPermissionEnabled();
    void nextButtonClicked(const QSharedPointer<Sharee> &sharee, bool);
    void confirmButtonClicked(const QSharedPointer<Sharee> &sharee, bool);
    void permissionsChanged(Share::Permissions);
    void linkPermissionsChanged(Share::Permissions);
    void cancelButtonClicked(const QSharedPointer<Sharee> &sharee);

private slots:
    void slotPermissionChanged();
    void slotShowMessageBox();
    void slotPasswordCheckboxChecked(bool checkState);
    void slotExpireDateCheckboxChecked(bool checkState);
    void slotCancelButtonClicked();


private:
    void setupUI();
    void setSharePermission();
    Ui::ShareUserGroupPermissionWidget *_ui;
    //ShareUserMessageWidget *_shareUserMessage = nullptr;
    bool _isFile;
    Share::ShareType _type;
    AccountPtr _account;
    QString _sharePath;
    QString _localPath;
    QString _userPermission;
    QString _shareUrl;
    QSharedPointer<Sharee> _sharee ;
    bool _createShare;
    Share::Permissions _permissions;
    QSharedPointer<LinkShare> _linkShare;
    QSharedPointer<UserGroupShare> _share;

    /* for Unit Test */
    friend class ::TestShareUserGroupPermissionWidget;
    friend class ::TestShareDialog;
};

}

#endif // SHAREUSERGROUPPERMISSIONWIDGET_H
