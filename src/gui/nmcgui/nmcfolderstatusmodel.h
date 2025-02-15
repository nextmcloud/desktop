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

#ifndef NMCFOLDERSTATUSMODEL_H
#define NMCFOLDERSTATUSMODEL_H

#include "folderstatusmodel.h"

namespace OCC {

Q_DECLARE_LOGGING_CATEGORY(lcFolderStatus)

class Folder;
class ProgressInfo;
class LsColJob;

/**
 * @brief The NMCFolderStatusModel class
 * @ingroup gui
 */
class NMCFolderStatusModel : public FolderStatusModel
{
    Q_OBJECT
public:

    NMCFolderStatusModel(QObject *parent = nullptr);
    ~NMCFolderStatusModel() = default;

    [[nodiscard]] QVariant data(const QModelIndex &index, int role) const override final;
};

} // namespace OCC

#endif // NMCFOLDERSTATUSMODEL_H
