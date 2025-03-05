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
import "../nmcgui"

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
    }    
    
    Rectangle {
        id: whiteMargin
        anchors.top: root.top
        anchors.left: root.left
        width: 10
        height: 64
        color: Style.nmcTrayWindowHeaderBackgroundColor
    }

    Rectangle {
        id: tLogo
        anchors.top: root.top
        anchors.left: whiteMargin.right
        width: Style.nmcTrayWindowLogoWidth
        height: Style.nmcTrayWindowLogoWidth

        Image {
            anchors.fill: parent
            cache: false
            source: Style.nmcTLogoPath
            fillMode: Image.Stretch
        }
    }

    RowLayout {
        id: trayWindowHeaderLayout

        spacing: 0
        anchors {
            left: tLogo.right
            top: root.top
            right: root.right
        }

        CurrentAccountHeaderButton {
            id: currentAccountHeaderButton
            parentBackgroundColor: root.color
            Layout.fillHeight: true
        }

        // Add space between items
        Item {
            Layout.fillWidth: true
        }

        Rectangle {
            id: trayWindowWebsiteButtonContainer
            width: 92
            height: Style.nmcTrayWindowHeaderHeight

            NMCHeaderButton {
                id: trayWindowWebsiteButton
                iconSource: "qrc:///client/theme/NMCIcons/website.svg"
                iconText: qsTranslate("", "OPEN_WEBSITE")
            }

            HoverHandler {
                id: websiteHover
                acceptedDevices: PointerDevice.Mouse
                onHoveredChanged: trayWindowWebsiteButtonContainer.color = hovered ? Style.nmcTrayWindowHeaderHighlightColor : "transparent"
            }

            TapHandler {
                onTapped: UserModel.openCurrentAccountServer()
            }
        }

        Rectangle {
            id: trayWindowLocalButtonContainer
            width: 92
            height: Style.nmcTrayWindowHeaderHeight

            NMCHeaderButton {
                id: trayWindowLocalButton
                iconSource: "qrc:///client/theme/black/folder.svg"
                iconText: qsTranslate("", "LOCAL_FOLDER")
            }

            HoverHandler {
                id: localHover
                acceptedDevices: PointerDevice.Mouse
                onHoveredChanged: trayWindowLocalButtonContainer.color = hovered ? Style.nmcTrayWindowHeaderHighlightColor : "transparent"
            }

            TapHandler {
                onTapped: UserModel.openCurrentAccountLocalFolder()
            }
        }

        Rectangle {
            width: 10
            color: Style.nmcTrayWindowHeaderBackgroundColor
        }

        TrayFoldersMenuButton {
            id: openLocalFolderButton
            visible: false
            Layout.alignment: Qt.AlignRight
            Layout.preferredWidth:  Style.trayWindowHeaderHeight
            Layout.fillHeight: true

            visible: currentUser.hasLocalFolder
            currentUser: UserModel.currentUser
            parentBackgroundColor: root.color

            onClicked: openLocalFolderButton.userHasGroupFolders ? openLocalFolderButton.toggleMenuOpen() : UserModel.openCurrentAccountLocalFolder()

            onFolderEntryTriggered: isGroupFolder ? UserModel.openCurrentAccountFolderFromTrayInfo(fullFolderPath) : UserModel.openCurrentAccountLocalFolder()

            Accessible.role: Accessible.Graphic
            Accessible.name: qsTr("Open local or group folders")
            Accessible.onPressAction: openLocalFolderButton.userHasGroupFolders ? openLocalFolderButton.toggleMenuOpen() : UserModel.openCurrentAccountLocalFolder() 
        }

        HeaderButton {
            id: trayWindowFeaturedAppButton
            visible: false
            Layout.alignment: Qt.AlignRight
            Layout.preferredWidth:  Style.trayWindowHeaderHeight
            Layout.fillHeight: true

            visible: UserModel.currentUser.isFeaturedAppEnabled
            icon.source: UserModel.currentUser.featuredAppIcon + "/" + palette.windowText
            onClicked: UserModel.openCurrentAccountFeaturedApp()

            Accessible.role: Accessible.Button
            Accessible.name: UserModel.currentUser.featuredAppAccessibleName
            Accessible.onPressAction: trayWindowFeaturedAppButton.clicked() 
        }

        HeaderButton {
            id: trayWindowAppsButton
            visible: false
            icon.source: "image://svgimage-custom-color/more-apps.svg/" + palette.windowText

            onClicked: {
                if(appsMenu.count <= 0) {
                    UserModel.openCurrentAccountServer()
                } else if (appsMenu.visible) {
                    appsMenu.close()
                } else {
                    appsMenu.open()
                }
            }

            Accessible.role: Accessible.ButtonMenu
            Accessible.name: qsTr("More apps")
            Accessible.onPressAction: trayWindowAppsButton.clicked()

            Menu {
                id: appsMenu
                x: Style.trayWindowMenuOffsetX
                y: (trayWindowAppsButton.y + trayWindowAppsButton.height + Style.trayWindowMenuOffsetY)
                width: Style.trayWindowWidth * Style.trayWindowMenuWidthFactor
                height: implicitHeight + y > Style.trayWindowHeight ? Style.trayWindowHeight - y : implicitHeight
                closePolicy: Menu.CloseOnPressOutsideParent | Menu.CloseOnEscape

                Repeater { 
                    model: UserAppsModel
                    delegate: MenuItem {
                        id: appEntry
                        anchors.left: parent.left
                        anchors.right: parent.right
                        text: model.appName
                        font.pixelSize: Style.topLinePixelSize
                        icon.source: model.appIconUrl
                        icon.color: palette.windowText
                        onTriggered: UserAppsModel.openAppUrl(appUrl)
                        hoverEnabled: true
                        Accessible.role: Accessible.MenuItem
                        Accessible.name: qsTr("Open %1 in browser").arg(model.appName)
                        Accessible.onPressAction: appEntry.triggered()
                    }
                }
            }
        }
    }
}
