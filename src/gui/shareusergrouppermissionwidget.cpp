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
#include <QCalendarWidget>

namespace OCC {

static const int thumbnailSize = 40;

ShareUserGroupPermissionWidget::ShareUserGroupPermissionWidget(AccountPtr account,
    const QString &sharePath,
    const QString &localPath,
    const QString &userLinePermission,
    SharePermissions maxSharingPermissions, Share::ShareType type,
    const QSharedPointer<Sharee> &sharee,
    bool createShare,
    QWidget *parent)
    : QWidget(parent)
    ,_ui(new Ui::ShareUserGroupPermissionWidget)
    , _account(account)
    , _sharePath(sharePath)
    , _localPath(localPath)
    , _userPermission(userLinePermission)
    , _type(type)
    , _sharee(sharee)
    , _createShare(createShare)
    , _permissions(SharePermissionRead)
{
    _ui->setupUi(this);

    //Is this a file or folder?
    _isFile = QFileInfo(localPath).isFile();

    setupUI();

    connect(_ui->readOnlyRadioButton, SIGNAL(toggled(bool)), this, SLOT(slotPermissionChanged()));
    connect(_ui->fileDropRadioButton, SIGNAL(toggled(bool)), this, SLOT(slotPermissionChanged()));
    connect(_ui->editRadioButton, SIGNAL(toggled(bool)), this, SLOT(slotPermissionChanged()));
    connect(_ui->nextButton, SIGNAL(clicked()), this, SLOT(slotShowMessageBox()));
    connect(_ui->setPasswordCheckbox, SIGNAL(clicked(bool)), this, SLOT(slotPasswordCheckboxChecked(bool)));
    connect(_ui->expirationDateCheckbox, SIGNAL(clicked(bool)), this, SLOT(slotExpireDateCheckboxChecked(bool)));
    connect(_ui->cancelButton, SIGNAL(clicked()), this, SLOT(slotCancelButtonClicked()));
}

void ShareUserGroupPermissionWidget::setupUI()
{
    if(!_isFile && (_type == Share::TypeEmail))
    {
        _ui->fileDropRadioButton->setVisible(true);
    }
    else
    {
        _ui->fileDropRadioButton->setVisible(false);
    }

    _ui->lineEdit_password->setVisible(false);
    _ui->dateEdit->setVisible(false);
    _ui->passwordShareInfoText->setVisible(false);

    if(_type == Share::TypeEmail)
    {
        _ui->editRadioButton->setEnabled(false);
        _ui->allowForwardingCheckbox->setVisible(false);
    }
    else
    {
        _ui->editRadioButton->setEnabled(true);
        _ui->allowForwardingCheckbox->setVisible(true);
    }

    setPermission(_userPermission);
    _ui->expirationDateCheckbox->setChecked(true);
    _ui->dateEdit->setVisible(true);
    const QDate date = QDate::currentDate().addDays(1);

    QTextCharFormat format;
    format.setFontWeight(QFont::Bold);
    _ui->dateEdit->calendarWidget()->setDateTextFormat(date, format);

    _ui->dateEdit->setDate(date);
    _ui->dateEdit->setMinimumDate(date);
    _ui->dateEdit->setFocus();

    QTextCharFormat fmt;
    fmt.setForeground(QBrush(qRgb(25, 25, 25)));
    _ui->dateEdit->calendarWidget()->setWeekdayTextFormat(Qt::Saturday, fmt);
    _ui->dateEdit->calendarWidget()->setWeekdayTextFormat(Qt::Sunday, fmt);

    if(_createShare == false)
    {
        _ui->nextButton->setText("Confirm");
    } else{
        _ui->nextButton->setText("Next");
    }

}

ShareUserGroupPermissionWidget::~ShareUserGroupPermissionWidget()
{
    delete _ui;
}

void ShareUserGroupPermissionWidget::slotPermissionChanged()
{
    _permissions = SharePermissionRead;
   if(_ui->readOnlyRadioButton->isChecked())
    {
        //emit readPermissionEnabled();
        //_share->setPermissions(permissions);
    }
    if(_ui->editRadioButton->isChecked())
    {
        _permissions |= SharePermissionUpdate;
        //_share->setPermissions(permissions);
       // emit editPermissionEnabled();
    }
    if(_ui->fileDropRadioButton->isChecked())
    {
       // emit fileDropPermissionEnabled();
        _permissions = SharePermissionCreate;
        //_share->setPermissions(permissions);
    }
    //emit permissionsChanged(_permissions);
}

void ShareUserGroupPermissionWidget::slotShowMessageBox()
{
    if(_type == Share::TypeLink) {
        //emit linkPermissionsChanged(_permissions);
    } else {
        emit permissionsChanged(_permissions);
    }
    if(_createShare == true)
    {
        emit nextButtonClicked(_sharee, _createShare);
    }
    else{

        setSharePermission();
        emit confirmButtonClicked(_sharee, false);
    }
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

void ShareUserGroupPermissionWidget::setPermission(const QString &permission)
{
    if(permission == "Read only"){
        _ui->readOnlyRadioButton->setChecked(true);
    } else if(permission == "Can edit"){
        _ui->editRadioButton->setChecked(true);
    }else if(permission == "File drop only"){
        _ui->fileDropRadioButton->setChecked(true);
    }else {
        _ui->readOnlyRadioButton->setChecked(true);
    }
}

void ShareUserGroupPermissionWidget::setLinkAdvancePermission(QSharedPointer<LinkShare> linkShare,Share::ShareType type, QSharedPointer<Sharee> sharee, bool createShare)
{
    _linkShare = linkShare;
    _type = type;
    _createShare = createShare;
     setupUI();
}

void ShareUserGroupPermissionWidget::setUserAdvancePermission(QSharedPointer<UserGroupShare>share,Share::ShareType type, const QSharedPointer<Sharee> &sharee, bool createShare)
{
    _share = share;
    _type = type;
    _sharee = sharee;
    _createShare = createShare;
    setupUI();
}

void ShareUserGroupPermissionWidget::setUserCreatePermission(Share::ShareType type, const QSharedPointer<Sharee> &sharee, bool createShare)
{
    _type = type;
    _sharee = sharee;
    _createShare = createShare;
    setupUI();
}

void ShareUserGroupPermissionWidget::setSharePermission()
{
    if(_type == Share::TypeLink)
    {
        _linkShare->setPermissions(_permissions);
        if(_ui->lineEdit_password->isVisible())
        {
            _linkShare->setPassword(_ui->lineEdit_password->text());
        }
        if(_ui->dateEdit->isVisible())
        {
            _linkShare->setExpireDate(_ui->dateEdit->date());
        }
    }
    else
    {
        _share->setPermissions(_permissions);
        if(_ui->lineEdit_password->isVisible())
        {
            _share->setPassword(_ui->lineEdit_password->text());
        }
        if(_ui->dateEdit->isVisible())
        {
            _share->setExpireDate(_ui->dateEdit->date());
        }
        if(_ui->allowForwardingCheckbox->isChecked())
        {
            _share->setPermissions(SharePermissionShare);
        }
    }
}
}
