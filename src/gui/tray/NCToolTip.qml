/*
 * Copyright (C) 2022 by Claudio Cambra <claudio.cambra@nextcloud.com>
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

ToolTip {
    id: toolTip
    clip: true
    delay: Qt.styleHints.mousePressAndHoldInterval
    contentItem: Label {
        text: toolTip.text
        color: Style.ncTextColor
        wrapMode: Text.Wrap
    }
    background: Rectangle {
        border.color: Style.menuBorder
        color: Style.backgroundColor
    }
}
