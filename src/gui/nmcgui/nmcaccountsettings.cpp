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

#include "nmcgui/nmcaccountsettings.h"
#include "ui_accountsettings.h"
#include "../common/utility.h"
#include "guiutility.h"
#include "qdesktopservices.h"


namespace OCC {

NMCAccountSettings::NMCAccountSettings(AccountState *accountState, QWidget *parent)
    : AccountSettings(accountState, parent)
    , m_liveAccountButton(new CustomButton(QCoreApplication::translate("", "ADD_LIVE_BACKUP"), QIcon(QLatin1String(":/client/theme/NMCIcons/action-add.svg")).pixmap(24,24)))
    , m_liveTitle(new QLabel(QCoreApplication::translate("", "LIVE_BACKUPS")))
    , m_liveDescription(new QLabel(QCoreApplication::translate("", "LIVE_DESCRIPTION")))
    , m_folderSync(new QLabel(QCoreApplication::translate("", "YOUR_FOLDER_SYNC")))
{
    setDefaultSettings();
    setLayout();
    connect(m_liveAccountButton, &CustomButton::clicked, this, &NMCAccountSettings::slotAddFolder);
}

void NMCAccountSettings::setDefaultSettings()
{
    //Set default settings
    getUi()->encryptionMessage->setCloseButtonVisible(true);
    getUi()->selectiveSyncStatus->setVisible(false);
    getUi()->selectiveSyncNotification->setVisible(false);
    getUi()->accountStatus->setVisible(false);
    getUi()->bigFolderUi->setVisible(false);
    getUi()->gridLayout->setSpacing(8);
}

void NMCAccountSettings::setLayout()
{
    //Fix layout
    getUi()->storageGroupBox->removeWidget(getUi()->quotaInfoLabel);
    getUi()->storageGroupBox->removeWidget(getUi()->quotaProgressBar);
    getUi()->storageGroupBox->removeWidget(getUi()->quotaInfoText);

    getUi()->gridLayout->removeWidget(getUi()->encryptionMessage);
    getUi()->gridLayout->addWidget(getUi()->encryptionMessage, 0, 0);

    //getUi()->gridLayout->addWidget(new QLabel(""), 1, 0); //Spacer

    //Title
    m_folderSync->setStyleSheet("font-size: 15px; font-weight: 600; padding: 8px;"); //Semi-bold
    m_folderSync->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    getUi()->gridLayout->addWidget(m_folderSync, 1, 0);

    //Live backup area encryptionMessage
    auto *liveHLayout = new QHBoxLayout(this);
    liveHLayout->setContentsMargins(8,8,8,8);
    auto *liveVLayout = new QVBoxLayout(this);
    auto *liveWidget = new QWidget(this);

    liveWidget->setStyleSheet("QWidget {background-color: white;border-radius: 4px;}");
    liveWidget->setLayout(liveHLayout);
    liveHLayout->addLayout(liveVLayout);

    liveHLayout->addSpacerItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));

    const QString styleSheet("QPushButton{ font-size: %5px; border: %1px solid; border-color: black; border-radius: 4px; background-color: %2; color: %3;} QPushButton:hover { background-color: %4; }" );
    m_liveAccountButton->setStyleSheet(styleSheet.arg("0","#E20074","white", "#c00063", "13"));
    m_liveAccountButton->setFixedSize(180, 32);
    m_liveAccountButton->setLeftIconMargin(4);
    liveHLayout->addWidget(m_liveAccountButton);

    liveVLayout->addWidget(m_liveTitle);
    m_liveTitle->setStyleSheet("font-size: 15px; font-weight: 600;"); //Semi-bold
    liveVLayout->addWidget(m_liveDescription);
    m_liveDescription->setStyleSheet("font-size: 13px;");
    m_liveDescription->setText(QCoreApplication::translate("", "LIVE_BACKUPS_DESCRIPTION"));
    m_liveDescription->setWordWrap(true);
    m_liveDescription->setFixedWidth(450);

    getUi()->gridLayout->addWidget(liveWidget, 4, 0);

    //Storage area
    auto *magentaHLayout = new QHBoxLayout(this);
    magentaHLayout->setSpacing(32);

    auto *quotaVLayout = new QVBoxLayout(this);
    quotaVLayout->setSpacing(4);

    quotaVLayout->addSpacerItem(new QSpacerItem(1,12, QSizePolicy::Fixed, QSizePolicy::Fixed));
    quotaVLayout->addWidget(getUi()->quotaInfoLabel);
    getUi()->quotaInfoLabel->setStyleSheet("QLabel{font-size: 18px; padding: 8px; font-weight: 500;}");
    quotaVLayout->addWidget(getUi()->quotaProgressBar);
    getUi()->quotaProgressBar->setStyleSheet("QProgressBar {"
        "    background-color: #e5e5e5;"
        "    color: black;"
        "    border-width: 1px;"
        "    border-color: black;"
        "    border-radius: 4px;"
        "}"

        "QProgressBar::chunk {"
        "    background-color: #ea0a8e; }");
    getUi()->quotaProgressBar->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    quotaVLayout->addWidget(getUi()->quotaInfoText);
    getUi()->quotaInfoText->setStyleSheet("QLabel{font-size: 13px; padding: 8px;}");

    quotaVLayout->addSpacerItem(new QSpacerItem(1,20, QSizePolicy::Fixed, QSizePolicy::Fixed));

    magentaHLayout->addLayout(quotaVLayout);

    auto *storageLinkButton = new QPushButton(QCoreApplication::translate("", "STORAGE_EXTENSION"), this);
    storageLinkButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    storageLinkButton->setStyleSheet("QPushButton {"
        "    height: 32px;"
        "    width: 180px;"
        "    border: 1px solid black;"
        "    background-color: #ededed;"
        "    font-size: 13px;"
        "    border-radius: 4px;"
        "} QPushButton::hover {"
        "    background-color: white;"
        "}");
    connect(storageLinkButton, &QPushButton::clicked, this, [](){
        QDesktopServices::openUrl(QUrl("https://cloud.telekom-dienste.de/tarife"));
    });
    magentaHLayout->addWidget(storageLinkButton);
    magentaHLayout->addSpacerItem(new QSpacerItem(8,1, QSizePolicy::Fixed, QSizePolicy::Fixed));

    getUi()->gridLayout->addLayout(magentaHLayout, 5, 0);

    //We need these, because our widget becomes visibe, when we add it to our layout (due to parent), but in accountsettings its forced to be invisible at first.
    //We do here the same and check if the visibility is needed or not.
    getUi()->encryptionMessage->hide();
    checkClientSideEncryptionState();
}

} // namespace OCC