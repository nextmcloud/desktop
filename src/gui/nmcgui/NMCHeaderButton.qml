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

import QtQml 2.15
import QtQml.Models 2.15
import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtGraphicalEffects 1.15

// Custom qml modules are in /theme (and included by resources.qrc)
import Style 1.0
import com.nextcloud.desktopclient 1.0

Item{
    id: rec

    width: 80
    height: Style.nmcTrayWindowHeaderHeight

    signal clickedButton

    property string iconText: ""
    property string iconSource: ""
    property bool iconHovered: false

    ColumnLayout{

        spacing: 0
        anchors.centerIn: parent

        Button {
            id: button
            flat: true
            icon.source: rec.iconSource
            icon.width: Style.nmcTrayWindowIconWidth
            icon.height: Style.nmcTrayWindowIconWidth

            onClicked: {
                rec.clickedButton()
            }

            background: Rectangle {
                    color: iconHovered || button.visualFocus ? "black" : "transparent"
                    opacity: 0.05
            }
            Layout.alignment: Qt.AlignHCenter
        }

        Text {
            width: rec.width
            text: rec.iconText
            elide: Text.ElideRight
            color: Style.nmcTrayWindowHeaderTextColor
            font.pixelSize: Style.nmcFontSizeIconText
            font.bold: false
            Layout.alignment: Qt.AlignHCenter
        }
    }
}

