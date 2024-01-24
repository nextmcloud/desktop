/*
 * Copyright (C) by Daniel Molkentin <danimo@owncloud.com>
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

#ifndef MIRALL_ACCOUNTSETTINGSMAGENTA_H
#define MIRALL_ACCOUNTSETTINGSMAGENTA_H

#include "QtWidgets/qpushbutton.h"
#include <accountsettings.h>
#include <QPushButton>
#include <QIcon>
#include <QPainter>

namespace OCC {

class CustomButton : public QPushButton {
public:
    explicit CustomButton(const QString &text, const QIcon &icon, QWidget *parent = nullptr)
        : QPushButton(text, parent)
        , icon_(icon)
    {
        setIconSize(QSize(24, 24));
    }

    void setleftIconMargin(int margin){
        m_leftMargin = margin;
    }

protected:
    void paintEvent(QPaintEvent *event) override {
        QPushButton::paintEvent(event);

        if (!icon_.isNull()) {
            QRect iconRect = QRect( m_leftMargin, //left margin
                                   (height() - iconSize().height()) / 2, // vertical center
                                   iconSize().width(),
                                   iconSize().height());

            QPainter painter(this);
            painter.drawPixmap(iconRect, icon_.pixmap(iconSize()));
        }
    }

private:
    QIcon icon_;
    int m_leftMargin = 4;
};



/**
 * @brief The NMCAccountSettingsMagenta class
 * @ingroup gui
 */
class NMCAccountSettings : public AccountSettings
{
    Q_OBJECT

public:
    explicit NMCAccountSettings(AccountState *accountState, QWidget *parent = nullptr);
    ~NMCAccountSettings() = default;

protected:
    void setDefaultSettings();
    void setLayout();

private:
    CustomButton *m_liveAccountButton = nullptr;
    QLabel *m_liveTitle = nullptr;
    QLabel *m_liveDescription = nullptr;
    QLabel *m_folderSync = nullptr;
};


} // namespace OCC
#endif // MIRALL_ACCOUNTSETTINGSMAGENTA_H
