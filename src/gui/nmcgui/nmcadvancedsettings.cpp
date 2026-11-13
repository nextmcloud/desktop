/*
 * SPDX-FileCopyrightText: 2026 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "nmcadvancedsettings.h"

#include "accountmanager.h"
#include "nmclibsync/nmcconfigfile.h"
#include "settingspanelstyle.h"
#include "settingsswitch.h"

#include <QAbstractButton>
#include <QCoreApplication>
#include <QFrame>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

using namespace Qt::StringLiterals;

namespace OCC
{

NMCAdvancedSettings::NMCAdvancedSettings(QWidget *parent)
    : AdvancedSettings(parent)
{
    auto *syncBehaviorLayout = findChild<QVBoxLayout *>("syncBehaviorLayout"_L1);
    Q_ASSERT(syncBehaviorLayout);
    auto *debugArchiveButton = findChild<QPushButton *>("debugArchiveButton"_L1);
    Q_ASSERT(debugArchiveButton);
    debugArchiveButton->hide();

    auto *dataAnalysisSeparator = new QFrame(this);
    dataAnalysisSeparator->setObjectName("nmcDataAnalysisSeparator"_L1);
    dataAnalysisSeparator->setFrameShape(QFrame::HLine);
    dataAnalysisSeparator->setFrameShadow(QFrame::Plain);

    auto *dataAnalysisRow = new QWidget(this);
    dataAnalysisRow->setObjectName("nmcDataAnalysisRow"_L1);
    auto *rowLayout = new QHBoxLayout(dataAnalysisRow);
    rowLayout->setContentsMargins(0, 0, 0, 0);
    auto *dataAnalysisLabel = new QLabel(QCoreApplication::translate("", "DATA_ANALYSIS"), dataAnalysisRow);
    auto *dataAnalysisSwitch = new SettingsSwitch(dataAnalysisRow);
    dataAnalysisLabel->setBuddy(dataAnalysisSwitch);
    dataAnalysisSwitch->setObjectName("dataAnalysisCheckBox"_L1);
    dataAnalysisSwitch->setFocusPolicy(Qt::NoFocus);
    rowLayout->addWidget(dataAnalysisLabel);
    rowLayout->addStretch();
    rowLayout->addWidget(dataAnalysisSwitch);

    syncBehaviorLayout->insertWidget(1, dataAnalysisSeparator);
    syncBehaviorLayout->insertWidget(2, dataAnalysisRow);
    SettingsPanelStyle::apply(this);

    connect(dataAnalysisSwitch, &QAbstractButton::toggled, this, [](bool toggle) {
        NMCConfigFile cfgFile;
        cfgFile.setTransferUsageData(toggle, QString());
    });

    NMCConfigFile cfgFile;
    dataAnalysisSwitch->setChecked(cfgFile.transferUsageData());

    const auto hideRemotePollInterval = [this] {
        findChild<QWidget *>("horizontalLayoutWidget_remotePollInterval"_L1)->hide();
        findChild<QFrame *>("remotePollIntervalSeparator"_L1)->hide();
    };
    hideRemotePollInterval();
    connect(AccountManager::instance(), &AccountManager::accountAdded, this, hideRemotePollInterval);
    connect(AccountManager::instance(), &AccountManager::accountRemoved, this, hideRemotePollInterval);
    connect(AccountManager::instance(), &AccountManager::capabilitiesChanged, this, hideRemotePollInterval);
}

} // namespace OCC
