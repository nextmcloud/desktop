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

#ifndef SHAREUSERMESSAGEWIDGET_H
#define SHAREUSERMESSAGEWIDGET_H

#include "accountfwd.h"
#include "sharepermissions.h"
#include "QProgressIndicator.h"
#include <QDialog>
#include <QSharedPointer>
#include <QList>

class QMenu;
class QTableWidgetItem;
class TestShareUserMessageWidget;

namespace OCC {

namespace Ui {
    class ShareUserMessageWidget;
}

class AbstractCredentials;
class SyncResult;
class LinkShare;
class UserGroupShare;
class Share;
class Sharee;
class ShareManager;

/**
 * @brief The ShareDialog class
 * @ingroup gui
 */
class ShareUserMessageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ShareUserMessageWidget(AccountPtr account,
        const QString &sharePath,
        const QString &localPath,
        SharePermissions maxSharingPermissions, const QSharedPointer<Sharee> &sharee, QWidget *parent);
     ~ShareUserMessageWidget();

    Ui::ShareUserMessageWidget *_ui;
    void setMessageBox(QSharedPointer<UserGroupShare>share, bool createShare);

private slots:
    void slotShareMessage();
    void slotCancelButtonClicked();

signals:
    void shareButtonCLicked(const QSharedPointer<Sharee> &sharee, const QString &note);
    void cancelButtonClicked(const QSharedPointer<Sharee> &sharee);

private:
    AccountPtr _account;
    QString _sharePath;
    QString _localPath;
    QString _shareUrl;
    QSharedPointer<Sharee> _sharee;
    QSharedPointer<UserGroupShare> _share;

    /* for Unit Test */
    friend class ::TestShareUserMessageWidget;
};

}

#endif // SHAREUSERMESSAGEWIDGET_H
