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

#ifndef MIRALL_NMCFolderWizard_H
#define MIRALL_NMCFolderWizard_H

#include "folderwizard.h"

/**
 * @brief The NMCFolderWizard class
 * @ingroup gui
 */

namespace OCC {

class NMCFolderWizard : public FolderWizard
{
    Q_OBJECT
public:
    explicit NMCFolderWizard(OCC::AccountPtr account, QWidget *parent = nullptr);
    ~NMCFolderWizard() = default;
};


} // namespace OCC

#endif
