/*
 * Copyright (C) by Duncan Mac-Vicar P. <duncan@kde.org>
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

#ifndef MIRALL_FOLDERWIZARD_H
#define MIRALL_FOLDERWIZARD_H

#include <QWizard>
#include <QNetworkReply>
#include <QTimer>

#include "folder.h"
#include "accountfwd.h"

#include "nmcgui/nmcfolderwizardsourcepage.h"
#include "nmcgui/nmcfolderwizardtargetpage.h"
#include "nmcgui/nmcselectivesyncdialog.h"

class QCheckBox;

namespace OCC {

class NMCSelectiveSyncWidget;

class ownCloudInfo;

/**
 * @brief The FormatWarningsWizardPage class
 * @ingroup gui
 */
class FormatWarningsWizardPage : public QWizardPage
{
    Q_OBJECT
protected:
    [[nodiscard]] QString formatWarnings(const QStringList &warnings) const;
};

/**
 * @brief Page to ask for the local source folder
 * @ingroup gui
 */
class FolderWizardLocalPath : public FormatWarningsWizardPage
{
    Q_OBJECT
public:
    explicit FolderWizardLocalPath(const AccountPtr &account);
    ~FolderWizardLocalPath() override;

    [[nodiscard]] bool isComplete() const override;
    void initializePage() override;
    void cleanupPage() override;

    void setFolderMap(const Folder::Map &fm) { _folderMap = fm; }

    NMCFolderWizardSourcePage getUi()
    {
        return _ui;
    }

protected:
    void changeEvent(QEvent *) override;

protected slots:
    void slotChooseLocalFolder();

private:
    void changeStyle();

    NMCFolderWizardSourcePage _ui{};
    Folder::Map _folderMap;
    AccountPtr _account;
};


/**
 * @brief page to ask for the target folder
 * @ingroup gui
 */

class FolderWizardRemotePath : public FormatWarningsWizardPage
{
    Q_OBJECT
public:
    explicit FolderWizardRemotePath(const AccountPtr &account);
    ~FolderWizardRemotePath() override;

    [[nodiscard]] bool isComplete() const override;

    void initializePage() override;
    void cleanupPage() override;

    NMCFolderWizardTargetPage getUi(){
        return _ui;
    };

protected slots:
    void showWarn(const QString & = QString()) const;
    void slotAddRemoteFolder();
    void slotCreateRemoteFolder(const QString &);
    void slotCreateRemoteFolderFinished();
    void slotHandleMkdirNetworkError(QNetworkReply *);
    void slotHandleLsColNetworkError(QNetworkReply *);
    void slotUpdateDirectories(const QStringList &);
    void slotGatherEncryptedPaths(const QString &, const QMap<QString, QString> &);
    void slotRefreshFolders();
    void slotItemExpanded(QTreeWidgetItem *);
    void slotCurrentItemChanged(QTreeWidgetItem *);
    void slotFolderEntryEdited(const QString &text);
    void slotLsColFolderEntry();
    void slotTypedPathFound(const QStringList &subpaths);

protected:
    void changeEvent(QEvent *) override;

private slots:
    void changeStyle();

private:
    LsColJob *runLsColJob(const QString &path);
    void recursiveInsert(QTreeWidgetItem *parent, QStringList pathTrail, QString path);
    bool selectByPath(QString path);
    NMCFolderWizardTargetPage _ui{};
    bool _warnWasVisible = false;
    AccountPtr _account;
    QTimer _lscolTimer;
    QStringList _encryptedPaths;
};

/**
 * @brief The FolderWizardSelectiveSync class
 * @ingroup gui
 */
class FolderWizardSelectiveSync : public QWizardPage
{
    Q_OBJECT
public:
    explicit FolderWizardSelectiveSync(const AccountPtr &account);
    ~FolderWizardSelectiveSync() override;

    bool validatePage() override;

    void initializePage() override;
    void cleanupPage() override;

private slots:
    void virtualFilesCheckboxClicked();

private:
    NMCSelectiveSyncWidget *_selectiveSync;
    QCheckBox *_virtualFilesCheckBox = nullptr;
};

/**
 * @brief The FolderWizard class
 * @ingroup gui
 */
class FolderWizard : public QWizard
{
    Q_OBJECT
public:
    enum {
        Page_Source,
        Page_Target,
        Page_SelectiveSync
    };

    explicit FolderWizard(AccountPtr account, QWidget *parent = nullptr);
    ~FolderWizard() override;

    bool eventFilter(QObject *watched, QEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

protected:
    FolderWizardLocalPath *_folderWizardSourcePage;
    FolderWizardRemotePath *_folderWizardTargetPage = nullptr;
    FolderWizardSelectiveSync *_folderWizardSelectiveSyncPage;
};


} // namespace OCC

#endif
