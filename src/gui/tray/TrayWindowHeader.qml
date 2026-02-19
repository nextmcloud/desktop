/*
 * SPDX-FileCopyrightText: 2020 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
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

    signal featuredAppButtonClicked

    readonly property alias currentAccountHeaderButton: currentAccountHeaderButton

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
            Layout.preferredWidth:  Style.currentAccountButtonWidth
            Layout.fillHeight: true
        }

        // Add space between items
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
                iconSource: Style.darkMode 
                    ? "qrc:///client/theme/NMCIcons/website-white.svg"
                    : "qrc:///client/theme/NMCIcons/website.svg"
                iconText: qsTranslate("", "OPEN_WEBSITE")

            onClicked: openLocalFolderButton.userHasGroupFolders ? openLocalFolderButton.toggleMenuOpen() : UserModel.openCurrentAccountLocalFolder()

            onFolderEntryTriggered: isGroupFolder ? UserModel.openCurrentAccountFolderFromTrayInfo(fullFolderPath) : UserModel.openCurrentAccountLocalFolder()

            Accessible.role: Accessible.Graphic
            Accessible.name: qsTr("Open local or group folders")
            Accessible.onPressAction: openLocalFolderButton.userHasGroupFolders ? openLocalFolderButton.toggleMenuOpen() : UserModel.openCurrentAccountLocalFolder() 
        }

        HeaderButton {
            id: trayWindowFeaturedAppButton

            Layout.alignment: Qt.AlignRight
            Layout.preferredWidth: Style.trayWindowHeaderHeight
            Layout.fillHeight: true

            visible: UserModel.currentUser.isAssistantEnabled
            icon.source: UserModel.currentUser.featuredAppIcon + "/" + palette.windowText
            onClicked: root.featuredAppButtonClicked()

            Accessible.role: Accessible.Button
            Accessible.name: UserModel.currentUser.featuredAppAccessibleName
            Accessible.onPressAction: trayWindowFeaturedAppButton.clicked() 
        }

        HeaderButton {
            id: trayWindowAppsButton
            icon.source: "image://svgimage-custom-color/more-apps.svg/" + palette.windowText

            onClicked: {
                if(appsMenu.count <= 0) {
                    UserModel.openCurrentAccountServer()
                } else if (appsMenu.visible) {
                    appsMenu.close()
                } else {
                    appsMenu.open()
                MouseArea {
                    anchors.fill: parent
                    onClicked: UserModel.openCurrentAccountServer()
                }
            }

            HoverHandler {
                id: websiteHover
                acceptedDevices: PointerDevice.Mouse
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
                iconSource: Style.darkMode 
                    ? "qrc:///client/theme/white/folder.svg"
                    : "qrc:///client/theme/black/folder.svg"
                iconText: qsTranslate("", "LOCAL_FOLDER")

                MouseArea {
                    anchors.fill: parent
                    onClicked: UserModel.openCurrentAccountLocalFolder()
                }
            }

            HoverHandler {
                id: localHover
                acceptedDevices: PointerDevice.Mouse
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
