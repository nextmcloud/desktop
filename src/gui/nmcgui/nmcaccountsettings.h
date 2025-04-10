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

 #ifndef MIRALL_ACCOUNTSETTINGSMAGENTA_H
 #define MIRALL_ACCOUNTSETTINGSMAGENTA_H
 
 #include <QPushButton>
 #include <QIcon>
 #include <QPainter>
 #include <QLabel>
 
 #include <accountsettings.h>
 
 namespace OCC {
 
 /**
  * @brief A QPushButton with a custom left icon margin.
  */
 class CustomButton : public QPushButton {
     Q_OBJECT
 
 public:
     explicit CustomButton(const QString &text, const QIcon &icon, QWidget *parent = nullptr)
         : QPushButton(text, parent)
         , _icon(icon)
     {
         setIconSize(QSize(24, 24));
     }
 
     void setLeftIconMargin(int margin) { _leftMargin = margin; }
 
 protected:
     void paintEvent(QPaintEvent *event) override {
         QPushButton::paintEvent(event);
         // Optionale benutzerdefinierte Icon-Darstellung – aktuell deaktiviert
         // if (!_icon.isNull()) {
         //     QRect iconRect(_leftMargin,
         //                    (height() - iconSize().height()) / 2,
         //                    iconSize().width(),
         //                    iconSize().height());
         //     QPainter painter(this);
         //     painter.drawPixmap(iconRect, _icon.pixmap(iconSize()));
         // }
     }
 
 private:
     QIcon _icon;
     int _leftMargin = 4;
 };
 
 /**
  * @brief Erweiterte AccountSettings-Ansicht für Magenta.
  */
 class NMCAccountSettings : public AccountSettings {
     Q_OBJECT
 
 public:
     explicit NMCAccountSettings(AccountState *accountState, QWidget *parent = nullptr);
     ~NMCAccountSettings() override = default;
 
 private:
     void setDefaultSettings();
     void setLayout();
 
     CustomButton *_liveAccountButton = nullptr;
     QLabel *_liveTitle = nullptr;
     QLabel *_liveDescription = nullptr;
     QLabel *_folderSync = nullptr;
 };
 
 } // namespace OCC
 
 #endif // MIRALL_ACCOUNTSETTINGSMAGENTA_H
 