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

#include <memory>  // falls du std::shared_ptr o.ä. in anderen Kontexten nutzt

/**
 * @brief The NMCFolderWizard class represents a specific folder wizard for the NMC application.
 * @ingroup gui
 *
 * Derived from FolderWizard, this class provides NMC-specific behavior
 * for the folder synchronization wizard.
 */
namespace OCC {

class NMCFolderWizard : public FolderWizard
{
    Q_OBJECT

public:
    /**
     * @brief Constructs an instance of NMCFolderWizard.
     * @param account The account associated with the wizard.
     * @param parent The parent widget (optional).
     */
    explicit NMCFolderWizard(OCC::AccountPtr account, QWidget *parent = nullptr);

    /**
     * @brief Destructor.
     */
    ~NMCFolderWizard() override = default;
};

} // namespace OCC

#endif // MIRALL_NMCFOLDERWIZARD_H 