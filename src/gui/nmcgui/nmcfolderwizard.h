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

#ifndef MIRALL_NMCFOLDERWIZARD_H
#define MIRALL_NMCFOLDERWIZARD_H

#include "folderwizard.h"
#include "nmcfolderwizardsourcepage.h"  // Include für Unterklassen
#include "nmcfolderwizardtargetpage.h"  // Include für Unterklassen

#include <memory>  // falls du std::shared_ptr o.ä. in anderen Kontexten nutzt

namespace OCC {

class NMCFolderWizard : public FolderWizard
{
    Q_OBJECT

public:
    explicit NMCFolderWizard(OCC::AccountPtr account, QWidget *parent = nullptr);
    ~NMCFolderWizard() override = default;

private:
    NMCFolderWizardSourcePage* _folderWizardSourcePage;  // Zeiger auf Subklasse
    NMCFolderWizardTargetPage* _folderWizardTargetPage;  // Zeiger auf Subklasse
};

} // namespace OCC

#endif // MIRALL_NMCFOLDERWIZARD_H