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

import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Layouts
import QtQuick.Effects 6.0 
import "../nmcgui/"

// Custom qml modules are in /theme (and included by resources.qrc)
import Style
import com.nextcloud.desktopclient

AbstractButton {
    id: userLine

    signal showUserStatusSelector(int id)


    Accessible.role: Accessible.MenuItem
    Accessible.name: qsTr("Switch to account") + " " + model.name

    height: Style.trayWindowHeaderHeight

    contentItem: RowLayout {
        id: userLineLayout
        spacing: Style.userLineSpacing

        Image {
            id: accountAvatar
            Layout.leftMargin: Style.accountIconsMenuMargin
            verticalAlignment: Qt.AlignCenter
            cache: false
            source: Style.nmcAccountAvatarIcon
            Layout.preferredHeight: Style.accountAvatarSize
            Layout.preferredWidth: Style.accountAvatarSize
            visible: false
            sourceSize.width: Style.nmcTrayWindowIconWidth
            sourceSize.height: Style.nmcTrayWindowIconWidth

            Rectangle {
                id: accountStatusIndicatorBackground
                visible: model.isConnected && model.serverHasUserStatus
                width: accountStatusIndicator.sourceSize.width + 2
                height: width
                anchors.bottom: accountAvatar.bottom
                anchors.right: accountAvatar.right
                radius:  width * Style.trayFolderStatusIndicatorRadiusFactor
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

        // this is added to add a hover effect on the account avatar image
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

            Accessible.role: Accessible.ButtonMenu
            Accessible.name: qsTr("Account actions")
            Accessible.onPressAction: userMoreButtonMouseArea.clicked()

            onClicked: userMoreButtonMenu.visible ? userMoreButtonMenu.close() : userMoreButtonMenu.popup()

            icon.source: "qrc:///client/theme/more.svg" + palette.windowText

            AutoSizingMenu {
                id: userMoreButtonMenu
                closePolicy: Menu.CloseOnPressOutsideParent | Menu.CloseOnEscape

                MenuItem {
                    visible: model.isConnected && model.serverHasUserStatus
                    height: visible ? implicitHeight : 0
                    text: qsTr("Set status")
                    font.pixelSize: Style.topLinePixelSize
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

                    Accessible.role: Accessible.Button
                    Accessible.name: text
                    Accessible.onPressAction: removeAccountButton.clicked()
               }
            }
        }
    }
}   // MenuItem userLine