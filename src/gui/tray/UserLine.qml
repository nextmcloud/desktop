/*
 * SPDX-FileCopyrightText: 2019 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Layouts
import "qrc:/qml/NMCGui"

// Custom qml modules are in /theme (and included by resources.qrc)
import Style
import com.nextcloud.desktopclient

AbstractButton {
    id: userLine

    signal showUserStatusSelector(int id)
    signal showUserStatusMessageSelector(int id)


    Accessible.role: Accessible.MenuItem
    Accessible.name: qsTr("Switch to account") + " " + model.name

    height: Style.nmcMenuSubItemHeight

    contentItem: RowLayout {
        id: userLineLayout
        spacing: 8

        Image {
            id: accountAvatar
            visible: false
            Layout.leftMargin: Style.accountIconsMenuMargin
            verticalAlignment: Qt.AlignCenter
            cache: false
            source: model.avatar !== "" ? model.avatar : Style.darkMode ? "image://avatars/fallbackWhite" : "image://avatars/fallbackBlack"
            Layout.preferredHeight: Style.accountAvatarSize
            Layout.preferredWidth: Style.accountAvatarSize

            Rectangle {
                id: accountStatusIndicatorBackground
                visible: model.isConnected && model.serverHasUserStatus
                width: accountStatusIndicator.sourceSize.width + Style.trayFolderStatusIndicatorSizeOffset
                height: width
                color: "white"
                anchors.bottom: accountAvatar.bottom
                anchors.right: accountAvatar.right
                radius: width * Style.trayFolderStatusIndicatorRadiusFactor
            }

            Image {
                id: accountStatusIndicator
                visible: model.isConnected && model.serverHasUserStatus
                source: model.statusIcon
                cache: false
                x: accountStatusIndicatorBackground.x + Style.trayFolderStatusIndicatorSizeOffset / 2
                y: accountStatusIndicatorBackground.y + Style.trayFolderStatusIndicatorSizeOffset / 2
                sourceSize.width: Style.accountAvatarStateIndicatorSize
                sourceSize.height: Style.accountAvatarStateIndicatorSize

                Accessible.role: Accessible.Indicator
                Accessible.name: model.desktopNotificationsAllowed ? qsTr("Current account status is online") : qsTr("Current account status is do not disturb")
            }
        }

        RowLayout {
            id: accountLabels
            Layout.fillWidth: true
            Layout.fillHeight: true
            Layout.alignment: Qt.AlignVCenter
            spacing: 8

            Item { width: Style.nmcMenuSubItemLeftPadding }

            Image {
                id: accountIcon
                source: Style.nmcAccountAvatarIcon
                visible: true
                width: Style.nmcTrayWindowIconWidth
                height: Style.nmcTrayWindowIconWidth
                fillMode: Image.PreserveAspectFit
                Layout.alignment: Qt.AlignVCenter
            }

            EnforcedPlainTextLabel {
                id: accountUser
                Layout.fillWidth: true
                Layout.alignment: Qt.AlignVCenter
                verticalAlignment: Text.AlignVCenter
                text: name
                elide: Text.ElideRight
                font.pixelSize: Style.topLinePixelSize
                font.bold: false

                color: !userLine.parent.enabled
                    ? userLine.parent.palette.mid
                    : ((userLine.parent.highlighted || userLine.parent.down) && Qt.platform.os !== "windows"
                        ? userLine.parent.palette.highlightedText
                        : userLine.parent.palette.text)
            }

            RowLayout {
                id: statusLayout
                Layout.fillWidth: true
                Layout.preferredHeight: visible ? implicitHeight : 0
                visible: model.isConnected &&
                         model.serverHasUserStatus &&
                         (model.statusEmoji !== "" || model.statusMessage !== "")

                EnforcedPlainTextLabel {
                    id: emoji
                    visible: model.statusEmoji !== ""
                    text: statusEmoji

                    color: !userLine.parent.enabled
                        ? userLine.parent.palette.mid
                        : ((userLine.parent.highlighted || userLine.parent.down) && Qt.platform.os !== "windows"
                            ? userLine.parent.palette.highlightedText
                            : userLine.parent.palette.text)
                }

                EnforcedPlainTextLabel {
                    id: message
                    Layout.fillWidth: true
                    visible: model.statusMessage !== ""
                    text: statusMessage
                    elide: Text.ElideRight
                    font.pixelSize: Style.subLinePixelSize

                    color: !userLine.parent.enabled
                        ? userLine.parent.palette.mid
                        : ((userLine.parent.highlighted || userLine.parent.down) && Qt.platform.os !== "windows"
                            ? userLine.parent.palette.highlightedText
                            : userLine.parent.palette.text)
                }
            }

            EnforcedPlainTextLabel {
                id: accountServer
                visible: false
                Layout.fillWidth: true
                Layout.alignment: Qt.AlignLeft | Qt.AlignTop
                verticalAlignment: Text.AlignTop
                text: server
                elide: Text.ElideRight
                font.pixelSize: Style.subLinePixelSize

                color: !userLine.parent.enabled
                    ? userLine.parent.palette.mid
                    : ((userLine.parent.highlighted || userLine.parent.down) && Qt.platform.os !== "windows"
                        ? userLine.parent.palette.highlightedText
                        : userLine.parent.palette.text)
            }
        }

        Item { // Spacer
            Layout.fillWidth: true
        }

        Button {
            id: userMoreButton
            Layout.preferredWidth: Style.iconButtonWidth
            Layout.fillHeight: true
            Layout.rightMargin: Style.accountIconsMenuMargin
            flat: true
            visible: true
            opacity: 1

            Accessible.role: Accessible.ButtonMenu
            Accessible.name: qsTr("Account actions")
            Accessible.onPressAction: userMoreButtonMouseArea.clicked()

            onClicked: userMoreButtonMenu.visible ? userMoreButtonMenu.close() : userMoreButtonMenu.popup()

            icon.source: Style.darkMode 
                ? "qrc:///client/theme/more-white.svg"
                : "qrc:///client/theme/more.svg"

            AutoSizingMenu {
                id: userMoreButtonMenu
                closePolicy: Menu.CloseOnPressOutsideParent | Menu.CloseOnEscape
                height: implicitHeight

                MenuItem {
                    id: setStatusButton
                    visible: false
                    enabled: model.isConnected && model.serverHasUserStatus
                    text: qsTr("Set status")
                    font.pixelSize: Style.topLinePixelSize
                    hoverEnabled: true
                    height: visible ? implicitHeight : 0

                    onClicked: showUserStatusSelector(index)

                    Accessible.role: Accessible.Button
                    Accessible.name: text
                    Accessible.onPressAction: setStatusButton.clicked()
               }

                MenuItem {
                    id: statusMessageButton
                    visible: false
                    enabled: model.isConnected && model.serverHasUserStatus
                    text: qsTr("Status message")
                    font.pixelSize: Style.topLinePixelSize
                    hoverEnabled: true
                    height: visible ? implicitHeight : 0

                    onClicked: showUserStatusMessageSelector(index)

                    Accessible.role: Accessible.Button
                    Accessible.name: text
                    Accessible.onPressAction: statusMessageButton.clicked()
               }

                NMCMenuItem {
                    id: logInOutButton
                    enabled: model.canLogout
                    text: model.isConnected ? qsTr("Log out") : qsTr("Log in")
                    height: Style.nmcMenuSubItemHeight
                    icon.source: Style.nmcLogOutIcon
                    icon.height: Style.nmcTrayWindowIconWidth
                    icon.width: Style.nmcTrayWindowIconWidth
                    leftPadding: Style.nmcMenuSubItemLeftPadding

                    onClicked: {
                        if (model.isConnected) {
                            UserModel.logout(index)
                        } else {
                            UserModel.login(index)
                        }
                        accountMenu.close()
                    }

                    Accessible.role: Accessible.Button
                    Accessible.name: text
                    Accessible.onPressAction: clicked()
               }

                NMCMenuItem {
                    id: removeAccountButton
                    text: model.removeAccountText
                    height: Style.nmcMenuSubItemHeight
                    icon.source: Style.nmcRemoveIcon
                    icon.height: Style.nmcTrayWindowIconWidth
                    icon.width: Style.nmcTrayWindowIconWidth
                    leftPadding: Style.nmcMenuSubItemLeftPadding

                    onClicked: {
                        UserModel.removeAccount(index)
                        accountMenu.close()
                    }

                    Accessible.role: Accessible.Button
                    Accessible.name: text
                    Accessible.onPressAction: clicked()
               }
            }
        }
    }
}   // MenuItem userLine

