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
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 */

#ifndef MIRALL_ACCOUNTSETTINGSMAGENTA_H
#define MIRALL_ACCOUNTSETTINGSMAGENTA_H

#include <QIcon>
#include <QLabel>
#include <QProgressBar>
#include <QPushButton>

#include <accountsettings.h>

namespace OCC {

/**
 * @brief Simple QPushButton with predefined icon size.
 */
class CustomButton : public QPushButton
{
    Q_OBJECT

public:
    explicit CustomButton(const QString &text, const QIcon &icon, QWidget *parent = nullptr)
        : QPushButton(text, parent)
    {
        setIcon(icon);
        setIconSize(QSize(24, 24));
    }

    void setLeftIconMargin(int) {}
};

/**
 * @brief Erweiterte AccountSettings-Ansicht für Magenta.
 */
class NMCAccountSettings : public AccountSettings
{
    Q_OBJECT

public:
    explicit NMCAccountSettings(AccountState *accountState, QWidget *parent = nullptr);
    ~NMCAccountSettings() override = default;

public slots:
    void slotUpdateQuota(qint64 total, qint64 used) override;

private:
    void setDefaultSettings();
    void setLayout();

    CustomButton *m_liveAccountButton = nullptr;
    QLabel *m_liveTitle = nullptr;
    QLabel *m_liveDescription = nullptr;
    QLabel *m_folderSync = nullptr;

    QLabel *m_quotaInfoLabel = nullptr;
    QProgressBar *m_quotaProgressBar = nullptr;
    QLabel *m_quotaInfoText = nullptr;
};

} // namespace OCC

#endif // MIRALL_ACCOUNTSETTINGSMAGENTA_H
