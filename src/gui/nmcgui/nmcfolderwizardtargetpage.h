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

#ifndef MIRALL_NMCFolderWizardTargetPage_H
#define MIRALL_NMCFolderWizardTargetPage_H

#include "nmcgui/nmcguiinterface.h"
#include "ui_folderwizardtargetpage.h"

/**
 * @brief The NMCFolderWizardTargetPage class
 * @ingroup gui
 */

namespace OCC {

class NMCFolderWizardTargetPage : public Ui_FolderWizardTargetPage, public NMCGuiInterface
{

public:
    explicit NMCFolderWizardTargetPage();
    ~NMCFolderWizardTargetPage() = default;

    // NMCGuiInterface interface
protected:
    void setDefaultSettings() override final;
    void setLayout() override final;
    void setLogic() override final;
};


} // namespace OCC

#endif
