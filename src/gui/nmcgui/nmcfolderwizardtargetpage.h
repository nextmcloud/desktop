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

#ifndef MIRALL_NMCFOLDERWIZARDTARGETPAGE_H
#define MIRALL_NMCFOLDERWIZARDTARGETPAGE_H

#include <QWizardPage>
#include "ui_folderwizardtargetpage.h"

namespace OCC {

/**
 * @brief Customized target page for NMC folder wizard.
 */
class NMCFolderWizardTargetPage : public QWizardPage
{
    Q_OBJECT
public:
    explicit NMCFolderWizardTargetPage(QWidget *parent = nullptr);
    ~NMCFolderWizardTargetPage() override = default;

    void setDefaultSettings();
    void setLayout();

    Ui::FolderWizardTargetPage *getUi();

private:
    Ui::FolderWizardTargetPage _ui;
};

} // namespace OCC

#endif // MIRALL_NMCFOLDERWIZARDTARGETPAGE_H