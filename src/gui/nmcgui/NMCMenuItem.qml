/*
 * Copyright (C) 2023 by Eugen Fischer
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

import QtQml 2.15
import QtQuick 2.15
import QtQuick.Controls 2.15

import Style 1.0

MenuItem {
    icon.color: hovered ? Style.ncBlue : Style.ncTextColor
    palette.windowText: hovered ? Style.ncBlue : Style.ncTextColor
    hoverEnabled: true
    font.pixelSize: Style.topLinePixelSize
}