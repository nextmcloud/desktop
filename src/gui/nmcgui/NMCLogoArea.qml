/*
 * Copyright (C) 2022 by Eugen Fischer
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

Rectangle{
    id: trayWindowMagentaBarBackground
    anchors.left:   trayWindowMainItem.left
    anchors.right:  trayWindowMainItem.right
    height:         40//Style.trayWindowHeaderHeight
    color:          Style.ncBlue
    Rectangle {
        id: trayWindowTLogoBarBackground
        objectName: "trayWindowTLogoBarBackground"

        anchors.left:   trayWindowMagentaBarBackground.left
        anchors.right:  trayWindowMagentaBarBackground.right
        anchors.top:    trayWindowMagentaBarBackground.top
        height:         48
        color:          Style.ncBlue

        Rectangle {
            id: trayWindowTLogoBarTopSpacer
            objectName: "trayWindowTLogoBarTopSpacer"

            anchors.left:   trayWindowTLogoBarBackground.left
            anchors.right:  trayWindowTLogoBarBackground.right
            anchors.top:    trayWindowTLogoBarBackground.top
            height:         12
            color:          Style.ncBlue
        }
        Rectangle {
            id: trayWindowTLogoBarLeftSpacer
            objectName: "trayWindowTLogoBarLeftSpacer"

            anchors.left:   trayWindowTLogoBarBackground.left
            anchors.top:    trayWindowTLogoBarTopSpacer.bottom
            height:         38
            width:          24
            color:          Style.ncBlue
        }
        Image {
            id: magentaTLogo
            objectName: "magentaTLogo"

            anchors.left:   trayWindowTLogoBarLeftSpacer.right
            anchors.top:    trayWindowTLogoBarTopSpacer.bottom
            cache: false
            source: Style.nmcLogoMagenta
        }
    }
}
