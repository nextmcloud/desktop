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

#include "ui_shareusergrouppermissionwidget.h"
#include "shareusergrouppermissionwidget.h"
#include "shareusermessagewidget.h"
#include "account.h"
#include "capabilities.h"
#include "guiutility.h"
#include "sharemanager.h"
#include "theme.h"
#include "sharee.h"

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

ShareUserGroupPermissionWidget::ShareUserGroupPermissionWidget(AccountPtr account,
    const QString &sharePath,
    const QString &localPath,
    SharePermissions maxSharingPermissions, QSharedPointer<Sharee> share)
    : _ui(new Ui::ShareUserGroupPermissionWidget)
    , _account(account)
    , _sharePath(sharePath)
    , _localPath(localPath)
    , _share(share)
{
    _ui->setupUi(this);

    //Is this a file or folder?
    _isFile = QFileInfo(localPath).isFile();

    if(_isFile)
    {
        _ui->allowForwardingCheckbox->setVisible(true);
    }
    else
    {
        _ui->allowForwardingCheckbox->setVisible(false);
    }

    _ui->lineEdit_password->setVisible(false);
    _ui->dateEdit->setVisible(false);
    _ui->passwordShareInfoText->setVisible(false);

    // Set icon
    QFileInfo f_info(_localPath);
    QFileIconProvider icon_provider;
    QIcon icon = icon_provider.icon(f_info);
    auto pixmap = icon.pixmap(thumbnailSize, thumbnailSize);
    if (pixmap.width() > 0) {
        _ui->label_icon->setPixmap(pixmap);
    }

    _shareUserMessage = new ShareUserMessageWidget(_account, _sharePath, _localPath, maxSharingPermissions);

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
    }

    if(share->type() == Share::TypeEmail)
    {
        _ui->editRadioButton->setEnabled(false);
    }
    else
    {
        _ui->editRadioButton->setEnabled(true);
    }

    _ui->readOnlyRadioButton->setStyleSheet("QRadioButton::indicator::checked{ color: #e20074;}");
    _ui->editRadioButton->setStyleSheet("QRadioButton::indicator::checked{ color: #e20074;}");
    _ui->fileDropRadioButton->setStyleSheet("QRadioButton::indicator::checked{ color: #e20074;}");

    _ui->setPasswordCheckbox->setStyleSheet("QCheckBox::indicator::checked{ color: #e20074;}");
    _ui->expirationDateCheckbox->setStyleSheet("QCheckBox::indicator::checked{ color: #e20074;}");
    _ui->allowForwardingCheckbox->setStyleSheet("QCheckBox::indicator::checked{ color: #e20074;}");

    connect(_ui->readOnlyRadioButton, SIGNAL(toggled(bool)), this, SLOT(slotPermissionChanged()));
    connect(_ui->fileDropRadioButton, SIGNAL(toggled(bool)), this, SLOT(slotPermissionChanged()));
    connect(_ui->editRadioButton, SIGNAL(toggled(bool)), this, SLOT(slotPermissionChanged()));
    connect(_ui->nextButton, SIGNAL(clicked()), this, SLOT(slotShowMessageBox()));
    connect(_ui->setPasswordCheckbox, SIGNAL(clicked(bool)), this, SLOT(slotPasswordCheckboxChecked(bool)));
    connect(_ui->expirationDateCheckbox, SIGNAL(clicked(bool)), this, SLOT(slotExpireDateCheckboxChecked(bool)));
}

ShareUserGroupPermissionWidget::~ShareUserGroupPermissionWidget()
{
    delete _ui;
}

void ShareUserGroupPermissionWidget::slotPermissionChanged()
{
    Share::Permissions permissions = SharePermissionRead;

    if(_ui->readOnlyRadioButton->isChecked())
    {
        emit readPermissionEnabled();
        //_share->setPermissions(permissions);
    }
    if(_ui->readOnlyRadioButton->isChecked())
    {
        //permissions |= SharePermissionUpdate;
        //_share->setPermissions(permissions);
        emit editPermissionEnabled();
    }
    if(_ui->readOnlyRadioButton->isChecked())
    {
        emit fileDropPermissionEnabled();
        //permissions |= SharePermissionCreate;
        //_share->setPermissions(permissions);
    }
}

void ShareUserGroupPermissionWidget::slotShowMessageBox()
{
    _shareUserMessage->show();
    hide();
}

void ShareUserGroupPermissionWidget::slotPasswordCheckboxChecked(bool checkState)
{
    if(checkState)
    {
        _ui->lineEdit_password->setVisible(true);
        _ui->passwordShareInfoText->setVisible(true);
    }
    else
    {
        _ui->lineEdit_password->setVisible(false);
        _ui->passwordShareInfoText->setVisible(false);
    }
}

void ShareUserGroupPermissionWidget::slotExpireDateCheckboxChecked(bool checkState)
{
    if(checkState)
    {
        _ui->dateEdit->setVisible(true);
    }
    else
    {
        _ui->dateEdit->setVisible(false);
    }
}
}
