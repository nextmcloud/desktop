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

#include "ui_shareusermessagewidget.h"
#include "shareusermessagewidget.h"
#include "account.h"
#include "capabilities.h"
#include "guiutility.h"
#include "sharemanager.h"
#include "theme.h"

#include "QProgressIndicator.h"
#include <QBuffer>
#include <QClipboard>
#include <QFileInfo>
#include <QDesktopServices>
#include <QMessageBox>
#include <QMenu>
#include <QTextEdit>
#include <QToolButton>
#include <QPropertyAnimation>
#include <QFileIconProvider>

namespace OCC {

static const int thumbnailSize = 40;

ShareUserMessageWidget::ShareUserMessageWidget(AccountPtr account,
    const QString &sharePath,
    const QString &localPath,
    SharePermissions maxSharingPermissions,
    const QSharedPointer<Sharee> &sharee,
    QWidget *parent)
    : QWidget(parent)
    , _ui(new Ui::ShareUserMessageWidget)
    , _account(account)
    , _sharePath(sharePath)
    , _localPath(localPath)
    , _sharee(sharee)
{
    _ui->setupUi(this);

    // Set icon
   /* QFileInfo f_info(_localPath);
    QFileIconProvider icon_provider;
    QIcon icon = icon_provider.icon(f_info);
    auto pixmap = icon.pixmap(thumbnailSize, thumbnailSize);
    if (pixmap.width() > 0) {
        _ui->label_icon->setPixmap(pixmap);
    }

    // Set filename
    QString fileName = QFileInfo(_sharePath).fileName();
    _ui->label_name->setText(tr("%1").arg(fileName));
    QFont f(_ui->label_name->font());
    f.setPointSize(qRound(f.pointSize() * 1.4));
    _ui->label_name->setFont(f);

    QString ocDir(_sharePath);
    ocDir.truncate(ocDir.length() - fileName.length());

    ocDir.replace(QRegExp("^/*"), "");
    ocDir.replace(QRegExp("/*$"), "");

    // Laying this out is complex because sharePath
    // may be in use or not.
    _ui->gridLayout->removeWidget(_ui->label_sharePath);
    _ui->gridLayout->removeWidget(_ui->label_name);
    if (ocDir.isEmpty()) {
        _ui->gridLayout->addWidget(_ui->label_name, 0, 1, 2, 1);
        _ui->label_sharePath->setText(QString());
    } else {
        _ui->gridLayout->addWidget(_ui->label_name, 0, 1, 1, 1);
        _ui->gridLayout->addWidget(_ui->label_sharePath, 1, 1, 1, 1);
        _ui->label_sharePath->setText(tr("Folder: %2").arg(ocDir));
    }*/

    _ui->textEdit_MessageNote->setStyleSheet("border: 2px solid #191919;");
    connect(_ui->sendButton, SIGNAL(clicked()), this, SLOT(slotShareMessage()));
    connect(_ui->cancelButton, SIGNAL(clicked()), this, SLOT(slotCancelButtonClicked()));
}

void ShareUserMessageWidget::slotShareMessage()
{
   emit  shareButtonCLicked(_sharee);
  // hide();
}

void ShareUserMessageWidget::slotCancelButtonClicked()
{
    hide();
    emit cancelButtonClicked(_sharee);
}

ShareUserMessageWidget::~ShareUserMessageWidget()
{
    delete _ui;
}

}
