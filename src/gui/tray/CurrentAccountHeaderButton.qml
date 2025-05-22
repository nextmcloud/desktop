/*
 * Copyright (C) 2024 by Claudio Cambra <claudio.cambra@nextcloud.com>
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

import Style
import com.nextcloud.desktopclient

Button {
    id: root

    readonly property alias userLineInstantiator: userLineInstantiator
    readonly property alias accountMenu: accountMenu
    property color parentBackgroundColor: "transparent"

    display: AbstractButton.IconOnly
    flat: true
    hoverEnabled: true

    background: Rectangle {
        color: root.hovered ? Style.nmcTrayWindowHeaderHighlightColor : "transparent"
        radius: 4
    }

    Layout.preferredWidth:  Style.nmcCurrentAccountButtonWidth
    Layout.preferredHeight: Style.nmcTrayWindowHeaderHeight

    Accessible.role: Accessible.ButtonMenu
    Accessible.name: qsTr("Current account")
    Accessible.onPressAction: root.clicked()

    // We call open() instead of popup() because we want to position it
    // exactly below the dropdown button, not the mouse
    onClicked: {
        syncPauseButton.text = Systray.syncIsPaused ? qsTr("Resume sync for all") : qsTr("Pause sync for all")
        if (accountMenu.visible) {
            accountMenu.close()
        } else {
            accountMenu.open()
        }
    }

    Menu {
        id: accountMenu

        // x coordinate grows towards the right
        // y coordinate grows towards the bottom
        x: (0 - Style.nmcTrayWindowLogoWidth)
        y: (root.y + Style.nmcTrayWindowHeaderHeight - Style.nmcTrayWindowMenuOverlayMargin)

        width: (Style.nmcCurrentAccountButtonWidth + Style.nmcTrayWindowLogoWidth + 30)
        height: Math.min(implicitHeight, maxMenuHeight)
        closePolicy: Menu.CloseOnPressOutsideParent | Menu.CloseOnEscape

        onClosed: {
            // HACK: reload account Instantiator immediately by restting it - could be done better I guess
            // see also onVisibleChanged above
            userLineInstantiator.active = false;
            userLineInstantiator.active = true;
        }

        Instantiator {
            id: userLineInstantiator
            model: UserModel
            delegate: NMCMenuItem {
                text: model.name
                icon.source: Style.nmcAccountAvatarIcon
                icon.width: Style.accountAvatarSize
                icon.height: Style.accountAvatarSize
                icon.color: Style.ncTextColor
                leftPadding: Style.nmcMenuSubItemLeftPadding
                height: Style.nmcMenuSubItemHeight

                onClicked: {
                    UserModel.currentUserId = model.index;
                }

                Accessible.role: Accessible.MenuItem
                Accessible.name: model.name
                Accessible.onPressAction: Qt.callLater(() => UserModel.currentUserId = model.index)
            }
            onObjectAdded: accountMenu.insertItem(index, object)
            onObjectRemoved: accountMenu.removeItem(object)
        }

        MenuItem {
            id: addAccountButton
            hoverEnabled: true
            visible: false

            icon.source: "image://svgimage-custom-color/add.svg/" + palette.windowText
            icon.width: Style.accountAvatarSize
            text: qsTr("Add account") 
            onClicked: UserModel.addAccount()

            Accessible.role: Accessible.MenuItem
            Accessible.name: qsTr("Add new account")
            Accessible.onPressAction: addAccountButton.clicked()
        }

        MenuSeparator {}

        NMCMenuItem {
            id: syncPauseButton

            icon.source: Style.nmcPauseIcon
            icon.height: Style.nmcTrayWindowIconWidth
            icon.width: Style.nmcTrayWindowIconWidth
            icon.color: Style.ncTextColor
            leftPadding: Style.nmcMenuSubItemLeftPadding
            height: Style.nmcMenuSubItemHeight
            
            enabled: Systray.anySyncFolders
            visible: Systray.anySyncFolders
            onClicked: Systray.syncIsPaused = !Systray.syncIsPaused
            Accessible.role: Accessible.MenuItem
            Accessible.name: Systray.syncIsPaused ? qsTr("Resume sync for all") : qsTr("Pause sync for all")
            Accessible.onPressAction: syncPauseButton.clicked()
        }

        NMCMenuItem {
            id: settingsButton
            text: qsTr("Settings")

            icon.source: Style.nmcSettingsIcon
            icon.height: Style.nmcTrayWindowIconWidth
            icon.width: Style.nmcTrayWindowIconWidth
            icon.color: Style.ncTextColor
            leftPadding: Style.nmcMenuSubItemLeftPadding
            height: Style.nmcMenuSubItemHeight
            
            onClicked: Systray.openSettings()
            Accessible.role: Accessible.MenuItem
            Accessible.name: text
            Accessible.onPressAction: settingsButton.clicked()
        }

        NMCMenuItem {
            id: exitButton
            text: qsTr("Exit");

            icon.source: Style.nmcCloseIcon
            icon.height: Style.nmcTrayWindowIconWidth
            icon.width: Style.nmcTrayWindowIconWidth
            icon.color: Style.ncTextColor
            leftPadding: Style.nmcMenuSubItemLeftPadding
            height: Style.nmcMenuSubItemHeight

            onClicked: Systray.shutdown()
            Accessible.role: Accessible.MenuItem
            Accessible.name: text
            Accessible.onPressAction: exitButton.clicked() 
        }

        // NMC customization: spacer at the bottom of the menu
        Rectangle {
            width: parent.width
            height: 8

            anchors.horizontalCenter: parent.horizontalCenter
        }
    }

    RowLayout {
        id: accountControlRowLayout

        height: Style.trayWindowHeaderHeight
        width:  Style.nmcCurrentAccountButtonWidth
        spacing: 0

        Image {
            id: currentAccountAvatar

            Layout.leftMargin: Style.trayHorizontalMargin
            verticalAlignment: Qt.AlignCenter
            cache: false
            source: Style.nmcAccountAvatarIcon

            Accessible.role: Accessible.Graphic
            Accessible.name: qsTr("Current account avatar")

            Rectangle {
                id: currentAccountStatusIndicatorBackground
                visible: UserModel.currentUser && UserModel.currentUser.isConnected
                         && UserModel.currentUser.serverHasUserStatus
                         && UserModel.currentUser.status !== UserStatus.Invisible
                         && UserModel.currentUser.status !== UserStatus.Offline
                width: Style.accountAvatarStateIndicatorSize + Style.trayFolderStatusIndicatorSizeOffset
                height: width
                color: root.parentBackgroundColor
                anchors.bottom: currentAccountAvatar.bottom
                anchors.right: currentAccountAvatar.right
                radius: width * Style.trayFolderStatusIndicatorRadiusFactor
            }

            Image {
                id: currentAccountStatusIndicator
                visible: UserModel.currentUser && UserModel.currentUser.isConnected
                         && UserModel.currentUser.serverHasUserStatus
                         && UserModel.currentUser.status !== UserStatus.Invisible
                         && UserModel.currentUser.status !== UserStatus.Offline
                source: UserModel.currentUser ? UserModel.currentUser.statusIcon : ""
                cache: false
                x: currentAccountStatusIndicatorBackground.x + 1
                y: currentAccountStatusIndicatorBackground.y + 1
                sourceSize.width: Style.accountAvatarStateIndicatorSize
                sourceSize.height: Style.accountAvatarStateIndicatorSize

                Accessible.role: Accessible.Indicator
                Accessible.name: UserModel.desktopNotificationsAllowed ? qsTr("Current account status is online") : qsTr("Current account status is do not disturb")
            }
        }

        Column {
            id: accountLabels
            spacing: 0
            Layout.alignment: Qt.AlignLeft | Qt.AlignVCenter
            Layout.leftMargin: Style.userStatusSpacing
            Layout.fillWidth: true

            EnforcedPlainTextLabel {
                id: currentAccountUser
                Layout.alignment: Qt.AlignLeft | Qt.AlignBottom
                Layout.fillWidth: true
                width: Style.currentAccountLabelWidth
                color: Style.nmcTrayWindowHeaderTextColor
                text: UserModel.currentUser ? UserModel.currentUser.name : ""
                elide: Text.ElideRight

                font.pixelSize: Style.topLinePixelSize
                font.bold: false
                palette.windowText: Style.nmcTrayWindowHeaderTextColor
            }

            EnforcedPlainTextLabel {
                id: currentAccountServer
                visible: false
                Layout.alignment: Qt.AlignLeft | Qt.AlignBottom
                width: Style.currentAccountLabelWidth
                color: Style.currentUserHeaderTextColor
                text: UserModel.currentUser ? UserModel.currentUser.server : ""
                elide: Text.ElideRight
            }

            RowLayout {
                id: currentUserStatus
                visible: UserModel.currentUser && UserModel.currentUser.isConnected &&
                         UserModel.currentUser.serverHasUserStatus
                spacing: Style.accountLabelsSpacing
                width: parent.width

                EnforcedPlainTextLabel {
                    id: emoji
                    visible: UserModel.currentUser && UserModel.currentUser.statusEmoji !== ""
                    width: Style.userStatusEmojiSize
                    color: Style.currentUserHeaderTextColor
                    text: UserModel.currentUser ? UserModel.currentUser.statusEmoji : ""
                }
                EnforcedPlainTextLabel {
                    id: message
                    Layout.alignment: Qt.AlignLeft | Qt.AlignBottom
                    Layout.fillWidth: true
                    visible: UserModel.currentUser && UserModel.currentUser.statusMessage !== ""
                    width: Style.currentAccountLabelWidth
                    color: Style.currentUserHeaderTextColor
                    text: UserModel.currentUser && UserModel.currentUser.statusMessage !== ""
                          ? UserModel.currentUser.statusMessage
                          : UserModel.currentUser ? UserModel.currentUser.server : ""
                    elide: Text.ElideRight
                    font.pixelSize: Style.subLinePixelSize
                }
            }
        }

        Loader {
            active: root.indicator === null
            sourceComponent: Image {
                anchors.verticalCenter: parent.verticalCenter
                anchors.right: parent.right
                anchors.rightMargin: 8
                source: "image://svgimage-custom-color/caret-down.svg/" + palette.windowText
                sourceSize.width: Style.accountDropDownCaretSize
                sourceSize.height: Style.accountDropDownCaretSize
                Accessible.role: Accessible.PopupMenu
                Accessible.name: qsTr("Account switcher and settings menu")
            }
        }
    }
}
