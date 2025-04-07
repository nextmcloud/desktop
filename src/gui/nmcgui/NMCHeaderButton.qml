/*
 * Copyright (C) 2024 by Eugen Fischer
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

import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

// Custom QML modules (e.g. from qrc:/theme)
import Style
import com.nextcloud.desktopclient

Item {
    id: rec

    width: 92
    height: Style.nmcTrayWindowHeaderHeight

    signal clickedButton

    property string iconText: ""
    property string iconSource: ""
    property bool iconHovered: false

    ColumnLayout {
        spacing: 0
        anchors.centerIn: parent

        Button {
            id: button
            flat: true
            Layout.alignment: Qt.AlignHCenter
            focusPolicy: Qt.NoFocus

            icon.source: rec.iconSource
            icon.width: Style.nmcTrayWindowIconWidth
            icon.height: Style.nmcTrayWindowIconWidth

            onClicked: rec.clickedButton()

            background: Rectangle {
                color: rec.iconHovered || button.visualFocus ? "black" : "transparent"
                opacity: 0.05
                radius: 4
            }
        }

        Text {
            width: rec.width
            text: rec.iconText
            elide: Text.ElideRight
            color: Style.nmcTrayWindowHeaderTextColor
            font.pixelSize: Style.nmcFontSizeIconText
            font.bold: false
            leftPadding: 8
            rightPadding: 8
            horizontalAlignment: Text.AlignHCenter
        }
    }
}
