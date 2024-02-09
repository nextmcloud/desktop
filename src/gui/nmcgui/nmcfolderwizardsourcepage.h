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

#ifndef MIRALL_NMCFolderWizardSourcePage_H
#define MIRALL_NMCFolderWizardSourcePage_H

#include "ui_folderwizardsourcepage.h"

/**
 * @brief The NMCFolderWizardSourcePage class
 * @ingroup gui
 */

namespace OCC {

class NMCFolderWizardSourcePage : public ::Ui::FolderWizardSourcePage
{

public:
    explicit NMCFolderWizardSourcePage();
    ~NMCFolderWizardSourcePage() = default;

public:
    void setDefaultSettings();
    void changeLayout();
};


} // namespace OCC

#endif
