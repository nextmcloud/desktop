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

#ifndef NMCFLOW2AUTHWIDGET_H
#define NMCFLOW2AUTHWIDGET_H

#include "wizard/flow2authwidget.h"
#include <QPaintEvent>

namespace OCC {

class NMCFlow2AuthWidget : public Flow2AuthWidget
{
    Q_OBJECT

public:
    /**
     * @brief Constructs an NMCFlow2AuthWidget object.
     * @param parent The parent widget (default is nullptr).
     */
    explicit NMCFlow2AuthWidget(QWidget *parent = nullptr);

    /**
     * @brief Destructor for NMCFlow2AuthWidget.
     */
    ~NMCFlow2AuthWidget() override = default;

protected:
    /**
     * @brief Reimplemented from Flow2AuthWidget.
     * Paints the widget during the paint event.
     * @param event The paint event.
     */
    void paintEvent(QPaintEvent *event) override;

    /**
     * @brief Reimplemented from Flow2AuthWidget.
     * Customizes the style of the widget.
     */
    void customizeStyle() override;
};

} // namespace OCC

#endif // NMCFLOW2AUTHWIDGET_H
