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

#ifndef NMCADVERTWIDGET_H
#define NMCADVERTWIDGET_H

#include <QWidget>
#include <QLabel>

class NMCAdvertWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NMCAdvertWidget(QWidget *parent = nullptr);
    ~NMCAdvertWidget() = default;

private:
    void loadPNG(const QString &name);

private:
    QLabel m_imageLabel;

private:
    // Hier können Sie Mitgliedsvariablen und private Methoden hinzufügen
};

#endif // NMCADVERTWIDGET_H
