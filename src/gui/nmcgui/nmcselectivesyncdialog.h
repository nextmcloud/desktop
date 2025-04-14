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

#pragma once

#include "selectivesyncdialog.h"

namespace OCC {

/**
 * @brief Widget für die selektive Synchronisation, angepasst für NMC.
 *
 * Der NMCSelectiveSyncWidget erweitert den SelectiveSyncWidget um spezielle Darstellung
 * und Texte für die NMC-Anwendung.
 */
class NMCSelectiveSyncWidget : public SelectiveSyncWidget
{
    Q_OBJECT

public:
    /**
     * @brief Konstruktor.
     * @param account Das zugehörige Account-Objekt.
     * @param parent Das Parent-Widget (optional).
     */
    explicit NMCSelectiveSyncWidget(AccountPtr account, QWidget *parent = nullptr);
};

} // namespace OCC 