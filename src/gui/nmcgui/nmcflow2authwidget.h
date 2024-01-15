/*
 * Copyright (C) by Michael Schuster <michael@schuster.ms>
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

#ifndef NMCFLOW2AUTHWIDGET_H
#define NMCFLOW2AUTHWIDGET_H

#include "wizard/flow2authwidget.h"

namespace OCC {

class NMCFlow2AuthWidget : public Flow2AuthWidget
{
    Q_OBJECT
public:
    NMCFlow2AuthWidget(QWidget *parent = nullptr);
    ~NMCFlow2AuthWidget() = default;

protected:
    void paintEvent(QPaintEvent *event) override;
};

} // namespace OCC

#endif // NMCFLOW2AUTHWIDGET_H
