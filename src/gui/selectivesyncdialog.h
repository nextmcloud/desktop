/*
 * Copyright (C) by Olivier Goffart <ogoffart@woboq.com>
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

#pragma once

#include <QDialog>
#include <QTreeWidget>
#include <QVBoxLayout>

#include "accountfwd.h"
#include "csync_exclude.h"

class QTreeWidgetItem;
class QNetworkReply;
class QLabel;
class QPushButton;

namespace OCC {

class Folder;

/**
 * @brief Widget zur Darstellung selektiver Synchronisation mit Ordnerbaum.
 * @ingroup gui
 */
class SelectiveSyncWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SelectiveSyncWidget(AccountPtr account, QWidget *parent = nullptr);

    QStringList createBlackList(QTreeWidgetItem *root = nullptr) const;

    [[nodiscard]] QStringList oldBlackList() const;

    qint64 estimatedSize(QTreeWidgetItem *root = nullptr);

    void setFolderInfo(const QString &folderPath, const QString &rootName,
                    const QStringList &oldBlackList = QStringList());

    [[nodiscard]] QSize sizeHint() const override;

protected:
    QVBoxLayout *_layout = nullptr;
    QLabel *_header = nullptr;
    QTreeWidget *_folderTree = nullptr;

private slots:
    void slotUpdateDirectories(const QStringList &paths);
    void slotUpdateRootFolderFilesSize(const QStringList &subfolders);
    void slotItemExpanded(QTreeWidgetItem *item);
    void slotItemChanged(QTreeWidgetItem *item, int column);
    void slotLscolFinishedWithError(QNetworkReply *reply);
    void slotGatherEncryptedPaths(const QString &path, const QMap<QString, QString> &map);

private:
    void refreshFolders();
    void recursiveInsert(QTreeWidgetItem *parent, QStringList pathTrail, QString path, qint64 size);

    AccountPtr _account;
    QString _folderPath;
    QString _rootName;
    QStringList _oldBlackList;
    QStringList _encryptedPaths;

    bool _inserting = false;
    qint64 _rootFilesSize = 0;

    QLabel *_loading = nullptr;
    ExcludedFiles _excludedFiles;
};


/**
 * @brief Dialog zur Konfiguration selektiver Synchronisation.
 * @ingroup gui
 */
class SelectiveSyncDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SelectiveSyncDialog(AccountPtr account, Folder *folder,
                                QWidget *parent = nullptr, Qt::WindowFlags f = {});

    explicit SelectiveSyncDialog(AccountPtr account, const QString &folder,
                                const QStringList &blacklist,
                                QWidget *parent = nullptr, Qt::WindowFlags f = {});

    void accept() override;

    [[nodiscard]] QStringList createBlackList() const;
    [[nodiscard]] QStringList oldBlackList() const;

    qint64 estimatedSize();

private:
    void init(const AccountPtr &account);

    SelectiveSyncWidget *_selectiveSync = nullptr;
    Folder *_folder = nullptr;
    QPushButton *_okButton = nullptr;
};

} // namespace OCC 