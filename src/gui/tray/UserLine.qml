/*
 * Copyright (C) 2019 by Dominique Fuchs <32204802+DominiqueFuchs@users.noreply.github.com>
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

import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtGraphicalEffects 1.0

import "../nmcgui/"

// Custom qml modules are in /theme (and included by resources.qrc)
import Style 1.0
import com.nextcloud.desktopclient 1.0

AbstractButton {
    id: userLine

    signal showUserStatusSelector(int id)

    property variant dialog;
    property variant comp;

    Accessible.role: Accessible.MenuItem
    Accessible.name: qsTr("Switch to account") + " " + model.name

    height: Style.trayWindowHeaderHeight

    background: Rectangle {
        anchors.fill: parent
        anchors.margins: 1
        color: (userLine.hovered || userLine.visualFocus) ?
                   palette.highlight : palette.base
    }

    contentItem: RowLayout {
        id: userLineLayout
        spacing: Style.userStatusSpacing

        Image {
            id: accountAvatar
            Layout.leftMargin: 7
            verticalAlignment: Qt.AlignCenter
            cache: false
            visible:false
            source: Style.nmcAccountAvatarIcon
            sourceSize.width: Style.nmcTrayWindowIconWidth // NMC Customization: These changes sharpen the image 
            sourceSize.height: Style.nmcTrayWindowIconWidth

            Rectangle {
                id: accountStatusIndicatorBackground
                visible: model.isConnected && model.serverHasUserStatus
                width: accountStatusIndicator.sourceSize.width + 2
                height: width
                anchors.bottom: accountAvatar.bottom
                anchors.right: accountAvatar.right
                color: userLine.hovered || userLine.visualFocus ? "#f6f6f6" : "white"
                radius: width*0.5
            }

            Image {
                id: accountStatusIndicator
                visible: model.isConnected && model.serverHasUserStatus
                source: model.statusIcon
                cache: false
                x: accountStatusIndicatorBackground.x + 1
                y: accountStatusIndicatorBackground.y + 1
                sourceSize.width: Style.accountAvatarStateIndicatorSize
                sourceSize.height: Style.accountAvatarStateIndicatorSize

                Accessible.role: Accessible.Indicator
                Accessible.name: model.desktopNotificationsAllowed ? qsTr("Current account status is online") : qsTr("Current account status is do not disturb")
            }
        }

        //NMC Customization: This section adds hover effect to account avatar image
        ColorOverlay {
            cached: true
            color: Style.ncTextColor
            width: source.width
            height: source.height
            source: accountAvatar
            anchors.leftMargin: 16
            Layout.leftMargin: 16
        }

        ColumnLayout {
            id: accountLabels
            Layout.leftMargin: Style.accountLabelsSpacing
            Layout.fillWidth: true
            Layout.fillHeight: true

            EnforcedPlainTextLabel {
                id: accountUser
                Layout.fillWidth: true
                Layout.alignment: Qt.AlignLeft | Qt.AlignBottom
                verticalAlignment: Text.AlignBottom
                text: name
                elide: Text.ElideRight
                font.pixelSize: Style.topLinePixelSize
                font.bold: false
                palette.windowText: Style.ncTextColor
            }

            RowLayout {
                id: statusLayout
                Layout.fillWidth: true
                height: visible ? implicitHeight : 0
                visible: model.isConnected &&
                         model.serverHasUserStatus &&
                         (model.statusEmoji !== "" || model.statusMessage !== "")

                EnforcedPlainTextLabel {
                    id: emoji
                    visible: model.statusEmoji !== ""
                    text: statusEmoji
                    topPadding: -Style.accountLabelsSpacing
                }

                EnforcedPlainTextLabel {
                    id: message
                    Layout.fillWidth: true
                    visible: model.statusMessage !== ""
                    text: statusMessage
                    elide: Text.ElideRight
                    font.pixelSize: Style.subLinePixelSize
                    leftPadding: Style.accountLabelsSpacing
                }
            }

            EnforcedPlainTextLabel {
                id: accountServer
                Layout.fillWidth: true
                Layout.alignment: Qt.AlignLeft | Qt.AlignTop
                verticalAlignment: Text.AlignTop
                text: server
                elide: Text.ElideRight
                font.pixelSize: Style.subLinePixelSize
                visible: false
            }
        }

        Button {
            id: userMoreButton
            Layout.preferredWidth: Style.headerButtonIconSize
            Layout.fillHeight: true
            flat: true

            icon.source: "qrc:///client/theme/more.svg"
            icon.color: Style.ncTextColor

            Accessible.role: Accessible.ButtonMenu
            Accessible.name: qsTr("Account actions")
            Accessible.onPressAction: userMoreButtonMouseArea.clicked()

            onClicked: userMoreButtonMenu.visible ? userMoreButtonMenu.close() : userMoreButtonMenu.popup()
            background: Rectangle {
                anchors.fill: parent
                anchors.margins: 1
                color: userMoreButton.hovered || userMoreButton.visualFocus ? Style.nmcMenuMoreItemsColor : "transparent"
            }

            contentItem: Image {
                anchors.fill: parent
                source: "image://svgimage-custom-color/more.svg" + "/" + palette.buttonText
                fillMode: Image.PreserveAspectFit
            }

            AutoSizingMenu {
                id: userMoreButtonMenu
                closePolicy: Menu.CloseOnPressOutsideParent | Menu.CloseOnEscape
                width: 170
                height: Math.min(implicitHeight, maxMenuHeight)

                background: Rectangle {
                    id:menuBackground
                    border.color: palette.dark
                    color: palette.base
                    radius: Style.nmcStandardRadius
                    layer.enabled: true
                    layer.effect: DropShadow {
                        transparentBorder: true
                        horizontalOffset: 0
                        verticalOffset: 0
                        radius: 6
                        color: "#40000000"
                    }
                }

                MenuItem {
                    visible: model.isConnected && model.serverHasUserStatus
                    height: visible ? implicitHeight : 0
                    text: qsTr("Set status")
                    font.pixelSize: Style.topLinePixelSize
                    palette.windowText: Style.ncTextColor
                    hoverEnabled: true
                    onClicked: showUserStatusSelector(index)
                }

                NMCMenuItem {
                    text: model.isConnected ? qsTr("Log out") : qsTr("Log in")
                    height: Style.nmcMenuSubItemHeight
                    icon.source: Style.nmcLogOutIcon
                    icon.color: Style.ncTextColor
                    icon.height: Style.nmcTrayWindowIconWidth
                    icon.width: Style.nmcTrayWindowIconWidth
                    leftPadding: Style.nmcMenuSubItemLeftPadding
                    onClicked: {
                        model.isConnected ? UserModel.logout(index) : UserModel.login(index)
                        accountMenu.close()
                    }

                    background: Item {
                        height: parent.height
                        width: parent.menu.width
                        Rectangle {
                            anchors.fill: parent
                            anchors.margins: 1
                            color: parent.parent.hovered ? palette.highlight : "transparent"
                        }
                    }

                    Accessible.role: Accessible.Button
                    Accessible.name: model.isConnected ? qsTr("Log out") : qsTr("Log in")

                    onPressed: {
                        if (model.isConnected) {
                            UserModel.logout(index)
                        } else {
                            UserModel.login(index)
                        }
                        accountMenu.close()
                    }
                }

                NMCMenuItem {
                    id: removeAccountButton
                    text: qsTr("Remove account")
                    height: Style.nmcMenuSubItemHeight
                    icon.source: Style.nmcRemoveIcon
                    icon.color: Style.ncTextColor
                    icon.height: Style.nmcTrayWindowIconWidth
                    icon.width: Style.nmcTrayWindowIconWidth
                    leftPadding: Style.nmcMenuSubItemLeftPadding
                    onClicked: {
                        UserModel.removeAccount(index)
                        accountMenu.close()
                    }

                    background: Item {
                        height: parent.height
                        width: parent.menu.width
                        Rectangle {
                            anchors.fill: parent
                            anchors.margins: 1
                            color: parent.parent.hovered ? palette.highlight : "transparent"
                        }
                    }

                    Accessible.role: Accessible.Button
                    Accessible.name: text
                    Accessible.onPressAction: removeAccountButton.clicked()
                }

                //NMC Customization: spacer at the bottom of the menu
                Rectangle {
                    height: 8
                    color: "white"
                    radius: Style.nmcStandardRadius
                }
            }
        }
    }
}   // MenuItem userLine
