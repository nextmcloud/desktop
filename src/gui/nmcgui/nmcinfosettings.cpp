/*
 * SPDX-FileCopyrightText: 2026 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "nmcinfosettings.h"

#include "guiutility.h"
#include "settingspanelstyle.h"
#include "theme.h"

#if defined(BUILD_UPDATER)
#include "updater/ocupdater.h"
#include "updater/updater.h"
#ifdef Q_OS_MACOS
#include "updater/sparkleupdater.h"
#endif
#endif

#include <QCoreApplication>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QUrl>
#include <QVBoxLayout>

using namespace Qt::StringLiterals;

namespace OCC
{

namespace
{
QPushButton *createLinkButton(const QString &objectName, const QString &url, const QString &text, QWidget *parent)
{
    auto *button = new QPushButton(text, parent);
    button->setObjectName(objectName);
    button->setProperty("url", url);
    QObject::connect(button, &QPushButton::clicked, button, [url] {
        Utility::openBrowser(QUrl(url));
    });
    return button;
}

#if defined(BUILD_UPDATER)
QString latestVersionStatus(const QString &translatedStatus)
{
    auto status = translatedStatus;
    const auto sentenceEnd = status.indexOf(". ");
    if (sentenceEnd >= 0) {
        status = status.mid(sentenceEnd + 2);
    }
    if (status.endsWith('.')) {
        status.chop(1);
    }
    return status;
}
#endif
} // namespace

NMCInfoSettings::NMCInfoSettings(QWidget *parent)
    : InfoSettings(parent)
{
    auto *linksGroup = new QGroupBox(this);
    linksGroup->setObjectName("nmcInfoLinksGroupBox"_L1);
    linksGroup->setTitle({});

    auto *groupLayout = new QHBoxLayout(linksGroup);
    groupLayout->addWidget(
        createLinkButton("nmcImpressumLink"_L1, "https://www.telekom.de/impressum/"_L1, QCoreApplication::translate("", "IMPRESSUM"), linksGroup));
    groupLayout->addWidget(createLinkButton("nmcDataProtectionLink"_L1,
                                            "https://static.magentacloud.de/privacy/datenschutzhinweise_software.pdf"_L1,
                                            QCoreApplication::translate("", "DATA_PROTECTION"),
                                            linksGroup));
    groupLayout->addWidget(createLinkButton("nmcOpenSourceLink"_L1,
                                            "https://static.magentacloud.de/licences/windowsdesktop.html"_L1,
                                            QCoreApplication::translate("", "LICENCE"),
                                            linksGroup));
    groupLayout->addWidget(
        createLinkButton("nmcFurtherInfoLink"_L1, "https://cloud.telekom-dienste.de/hilfe"_L1, QCoreApplication::translate("", "FURTHER_INFO"), linksGroup));
    groupLayout->addStretch();

    auto *pageLayout = qobject_cast<QVBoxLayout *>(layout());
    Q_ASSERT(pageLayout);
    auto *aboutGroup = findChild<QGroupBox *>("aboutAndUpdatesGroupBox"_L1);
    auto *updatesGroup = findChild<QGroupBox *>("updatesGroupBox"_L1);
    Q_ASSERT(aboutGroup);
    Q_ASSERT(updatesGroup);
    aboutGroup->hide();
    pageLayout->insertWidget(pageLayout->indexOf(updatesGroup) + 1, linksGroup);
    SettingsPanelStyle::apply(this);
#if defined(BUILD_UPDATER)
    slotUpdateInfo();
#endif
}

QString NMCInfoSettings::customizeUpdateStatus(const QString &status) const
{
#if defined(BUILD_UPDATER)
    if (const auto updater = qobject_cast<OCUpdater *>(Updater::instance()); updater && updater->downloadState() == OCUpdater::UpToDate) {
        const auto latestStatus = QCoreApplication::translate("OCC::OCUpdater", "No updates available. Your installation is the latest version.");
        return Theme::instance()->about() + " (" + latestVersionStatus(latestStatus) + ")";
    }

#if defined(Q_OS_MACOS) && defined(HAVE_SPARKLE)
    if (const auto updater = qobject_cast<SparkleUpdater *>(Updater::instance()); updater && updater->state() == SparkleUpdater::State::Idle
        && updater->statusString() == QCoreApplication::translate("QObject", "No valid update found.")) {
        const auto latestStatus = QCoreApplication::translate("OCC::OCUpdater", "No updates available. Your installation is the latest version.");
        return Theme::instance()->about() + " (" + latestVersionStatus(latestStatus) + ")";
    }
#endif
#endif

    return status;
}

} // namespace OCC
