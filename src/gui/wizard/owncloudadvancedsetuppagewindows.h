/*
 * Copyright (C) by Klaas Freitag <freitag@owncloud.com>
 * Copyright (C) by Krzesimir Nowak <krzesimir@endocode.com>
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

#ifndef MIRALL_OWNCLOUD_ADVANCED_SETUP_PAGE_WINDOWS_H
#define MIRALL_OWNCLOUD_ADVANCED_SETUP_PAGE_WINDOWS_H

#include <QWizard>

#include "wizard/owncloudwizardcommon.h"
#include "ui_owncloudadvancedsetuppagewindows.h"

class QProgressIndicator;

namespace OCC {

class OwncloudWizard;

/**
 * @brief The OwncloudAdvancedSetupPageWindows class
 * @ingroup gui
 */
class OwncloudAdvancedSetupPageWindows : public QWizardPage
{
    Q_OBJECT
public:
    OwncloudAdvancedSetupPageWindows(OwncloudWizard *wizard);

    [[nodiscard]] bool isComplete() const override;
    void initializePage() override;
    [[nodiscard]] int nextId() const override;
    [[nodiscard]]bool validatePage() override;
    QString localFolder() const;
    QStringList selectiveSyncBlacklist() const;
    bool useVirtualFileSync() const;
    bool isConfirmBigFolderChecked() const;
    void setRemoteFolder(const QString &remoteFolder);
    void setMultipleFoldersExist(bool exist);
    void directoriesCreated();

signals:
    void createLocalAndRemoteFolders(const QString &, const QString &);

public slots:
    void setErrorString(const QString &);
    void slotStyleChanged();

private slots:
    void slotSelectFolder();
    void slotVirtualFileSyncClicked();
    void slotQuotaRetrieved(const QVariantMap &result);

private:
    void setVirtualFilesInfo();
    void setupCustomization();
    void updateStatus();
    void startSpinner();
    void stopSpinner();
    QUrl serverUrl() const;
    qint64 availableLocalSpace() const;
    QString checkLocalSpace(qint64 remoteSize) const;
    void customizeStyle();
    void setServerAddressLabelUrl(const QUrl &url);
    void setLocalFolderPushButtonPath(const QString &path);
    void styleSyncLogo();
    void styleLocalFolderLabel();
    void setupResoultionWidget();
    void setUserInformation();

    Ui_OwncloudAdvancedSetupPageWindows _ui;
    bool _checking = false;
    bool _created = false;
    bool _localFolderValid = false;
    QProgressIndicator *_progressIndi;
    QString _remoteFolder;
    QStringList _selectiveSyncBlacklist;
    qint64 _rSize = -1;
    OwncloudWizard *_ocWizard;
};

} // namespace OCC

#endif
