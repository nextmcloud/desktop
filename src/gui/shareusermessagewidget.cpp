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

    _ui->textEdit_MessageNote->setStyleSheet("border: 2px solid #191919;");
    connect(_ui->sendButton, SIGNAL(clicked()), this, SLOT(slotShareMessage()));
    connect(_ui->cancelButton, SIGNAL(clicked()), this, SLOT(slotCancelButtonClicked()));
}

void ShareUserMessageWidget::slotShareMessage()
{
   emit  shareButtonCLicked(_sharee,_ui->textEdit_MessageNote->toPlainText());
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
