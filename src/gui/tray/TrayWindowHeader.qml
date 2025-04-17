/*
 * Copyright (C) 2020 by Dominique Fuchs <32204802+DominiqueFuchs@users.noreply.github.com>
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

import "../"
import "../filedetails/"
import "qrc:/qml/NMCGui"

import Style
import com.nextcloud.desktopclient

Rectangle {
    id: root

    readonly property alias currentAccountHeaderButton: currentAccountHeaderButton
    readonly property alias openLocalFolderButton: openLocalFolderButton
    readonly property alias appsMenu: appsMenu

    color: Style.nmcTrayWindowHeaderBackgroundColor
    height: Style.nmcTrayWindowHeaderHeight

    palette {
        text: Style.currentUserHeaderTextColor
        windowText: Style.currentUserHeaderTextColor
        buttonText: Style.currentUserHeaderTextColor
        button: Style.adjustedCurrentUserHeaderColor
    }

    Rectangle {
        id: whiteMargin
        width: 10
        height: Style.nmcTrayWindowHeaderHeight
        color: Style.nmcTrayWindowHeaderBackgroundColor

        anchors {
            top: parent.top
            left: parent.left
        }
    }

    Rectangle {
        id: tLogo
        width: Style.nmcTrayWindowLogoWidth
        height: Style.nmcTrayWindowHeaderHeight

        anchors {
            top: parent.top
            left: whiteMargin.right
        }

        Image {
            anchors.fill: parent
            source: Style.nmcTLogoPath
            fillMode: Image.Stretch
            cache: false
        }
    }

    RowLayout {
        id: trayWindowHeaderLayout
        spacing: 0
        height: Style.nmcTrayWindowHeaderHeight

        anchors {
            top: parent.top
            left: tLogo.right
            right: parent.right
        }

        Rectangle {
            id: whiteMarginLeft1
            Layout.preferredWidth: 10
            Layout.fillHeight: true
            color: Style.nmcTrayWindowHeaderBackgroundColor
        }

        CurrentAccountHeaderButton {
            id: currentAccountHeaderButton
            parentBackgroundColor: root.color
            Layout.preferredWidth: Style.currentAccountButtonWidth
            Layout.fillHeight: true
        }

        Item {
            Layout.fillWidth: true
        }

        Rectangle {
            id: trayWindowWebsiteButtonContainer
            Layout.preferredWidth: 92
            Layout.fillHeight: true
            color: websiteHover.hovered ? Style.nmcTrayWindowHeaderHighlightColor : "transparent"

            NMCHeaderButton {
                id: trayWindowWebsiteButton
                iconSource: "qrc:///client/theme/NMCIcons/website.svg"
                iconText: qsTranslate("", "OPEN_WEBSITE")
            }

            HoverHandler {
                id: websiteHover
                acceptedDevices: PointerDevice.Mouse
            }

            TapHandler {
                onTapped: UserModel.openCurrentAccountServer()
            }
        }

        Rectangle {
            id: whiteMarginRight1
            Layout.preferredWidth: 10
            Layout.fillHeight: true
            color: Style.nmcTrayWindowHeaderBackgroundColor
        }

        Rectangle {
            id: trayWindowLocalButtonContainer
            Layout.preferredWidth: 92
            Layout.fillHeight: true
            color: localHover.hovered ? Style.nmcTrayWindowHeaderHighlightColor : "transparent"

            NMCHeaderButton {
                id: trayWindowLocalButton
                iconSource: "qrc:///client/theme/black/folder.svg"
                iconText: qsTranslate("", "LOCAL_FOLDER")
            }

            HoverHandler {
                id: localHover
                acceptedDevices: PointerDevice.Mouse
            }

            TapHandler {
                onTapped: UserModel.openCurrentAccountLocalFolder()
            }
        }

        Rectangle {
            id: whiteMarginRight2
            Layout.preferredWidth: 10
            Layout.fillHeight: true
            color: Style.nmcTrayWindowHeaderBackgroundColor
        }
    }

}
