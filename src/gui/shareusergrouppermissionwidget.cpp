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
    SharePermissions maxSharingPermissions, Sharee::Type type,
    const QSharedPointer<Sharee> &sharee,
    QWidget *parent)
    : QWidget(parent)
    ,_ui(new Ui::ShareUserGroupPermissionWidget)
    , _account(account)
    , _sharePath(sharePath)
    , _localPath(localPath)
    , _type(type)
    , _sharee(sharee)
{
    _ui->setupUi(this);

    //Is this a file or folder?
    _isFile = QFileInfo(localPath).isFile();

    if(_isFile)
    {
        _ui->fileDropRadioButton->setVisible(false);
    }
    else
    {
        _ui->fileDropRadioButton->setVisible(true);
    }

    _ui->lineEdit_password->setVisible(false);
    _ui->dateEdit->setVisible(false);
    _ui->passwordShareInfoText->setVisible(false);

    if(_type == Sharee::Email)
    {
        _ui->editRadioButton->setEnabled(false);
        _ui->allowForwardingCheckbox->setVisible(false);
    }
    else
    {
        _ui->editRadioButton->setEnabled(true);
        _ui->allowForwardingCheckbox->setVisible(true);
    }

    _ui->readOnlyRadioButton->setChecked(true);
    _ui->expirationDateCheckbox->setChecked(true);
    _ui->dateEdit->setVisible(true);
    const QDate date = QDate::currentDate().addDays(1);
    _ui->dateEdit->setDate(date);
    _ui->dateEdit->setMinimumDate(date);
    _ui->dateEdit->setFocus();

    /*const QIcon radioIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/radio_checked.svg"));
    if(_ui->readOnlyRadioButton->isChecked() == true)
    {
        _ui->readOnlyRadioButton->setIcon(radioIcon);
    }
    if(_ui->editRadioButton->isChecked() == true)
    {
        _ui->editRadioButton->setIcon(radioIcon);
    }
    if(_ui->fileDropRadioButton->isChecked() == true)
    {
        _ui->fileDropRadioButton->setIcon(radioIcon);
    }

    const QIcon checkedIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/radio_checked.svg"));
    if(_ui->setPasswordCheckbox->isChecked() == true)
    {
        _ui->setPasswordCheckbox->setIcon(checkedIcon);
    }
    if(_ui->expirationDateCheckbox->isChecked() == true)
    {
        _ui->expirationDateCheckbox->setIcon(checkedIcon);
    }
    if(_ui->allowForwardingCheckbox->isChecked() == true)
    {
        _ui->allowForwardingCheckbox->setIcon(checkedIcon);
    }*/

    //_ui->readOnlyRadioButton->setStyleSheet("QRadioButton::indicator:checked{color: green; background-color:e20074; border: 2px #e20074;}");
    //_ui->editRadioButton->setStyleSheet("QRadioButton::indicator:checked{ background-color:e20074; border: 2px #e20074;}");
    //_ui->fileDropRadioButton->setStyleSheet("QRadioButton::indicator:checked{ background-color:e20074; border: 2px #e20074;}");

    //_ui->setPasswordCheckbox->setStyleSheet("QCheckBox::indicator:checked{ color: green; background-color:e20074; border: 2px #e20074;}");
    //_ui->expirationDateCheckbox->setStyleSheet("QCheckBox::indicator:checked{ color: green; background-color:e20074; border: 2px #e20074;}");
    //_ui->allowForwardingCheckbox->setStyleSheet("QCheckBox::indicator:checked{ color: green; background-color:e20074; border: 2px #e20074;}");

    connect(_ui->readOnlyRadioButton, SIGNAL(toggled(bool)), this, SLOT(slotPermissionChanged()));
    connect(_ui->fileDropRadioButton, SIGNAL(toggled(bool)), this, SLOT(slotPermissionChanged()));
    connect(_ui->editRadioButton, SIGNAL(toggled(bool)), this, SLOT(slotPermissionChanged()));
    connect(_ui->nextButton, SIGNAL(clicked()), this, SLOT(slotShowMessageBox()));
    connect(_ui->setPasswordCheckbox, SIGNAL(clicked(bool)), this, SLOT(slotPasswordCheckboxChecked(bool)));
    connect(_ui->expirationDateCheckbox, SIGNAL(clicked(bool)), this, SLOT(slotExpireDateCheckboxChecked(bool)));
    connect(_ui->cancelButton, SIGNAL(clicked()), this, SLOT(slotCancelButtonClicked()));
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
        //emit readPermissionEnabled();
        //_share->setPermissions(permissions);
    }
    if(_ui->editRadioButton->isChecked())
    {
        permissions = SharePermissionUpdate;
        //_share->setPermissions(permissions);
       // emit editPermissionEnabled();
    }
    if(_ui->fileDropRadioButton->isChecked())
    {
       // emit fileDropPermissionEnabled();
        permissions = SharePermissionCreate;
        //_share->setPermissions(permissions);
    }
    emit permissionsChanged(permissions);
}

void ShareUserGroupPermissionWidget::slotShowMessageBox()
{
    emit nextButtonClicked(_sharee, true);
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
        const QDate date = QDate::currentDate().addDays(1);
        _ui->dateEdit->setDate(date);
        _ui->dateEdit->setMinimumDate(date);
        _ui->dateEdit->setFocus();
    }
    else
    {
        _ui->dateEdit->setVisible(false);
    }
}

void ShareUserGroupPermissionWidget::slotCancelButtonClicked()
{
    hide();
    emit cancelButtonClicked(_sharee);
}
}
