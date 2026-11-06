/*
 * SPDX-FileCopyrightText: 2026 Deutsche Telekom AG
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

import Style
import "./tray"
import "nmcgui"

import com.nextcloud.desktopclient

Rectangle {
    id: root

    property var account: null
    property var user: null

    implicitHeight: Style.nmcTrayWindowHeaderHeight
    color: Style.nmcTrayWindowHeaderBackgroundColor

    RowLayout {
        anchors.fill: parent
        spacing: 0

        Item {
            Layout.preferredWidth: 10
            Layout.fillHeight: true
        }

        Image {
            id: tLogo

            Layout.preferredWidth: Style.nmcTrayWindowLogoWidth
            Layout.preferredHeight: Style.nmcTrayWindowHeaderHeight

            source: Style.nmcTLogoPath
            fillMode: Image.PreserveAspectFit
            cache: false

            Accessible.role: Accessible.Graphic
            Accessible.name: qsTr("MagentaCLOUD")
        }

        Item {
            Layout.preferredWidth: 10
            Layout.fillHeight: true
        }

        Item {
            id: accountContainer

            Layout.preferredWidth: Style.nmcCurrentAccountButtonWidth
            Layout.fillHeight: true

            RowLayout {
                anchors.fill: parent
                spacing: Style.userStatusSpacing

                Image {
                    id: accountAvatar

                    Layout.preferredWidth: Style.nmcTrayWindowIconWidth
                    Layout.preferredHeight: Style.nmcTrayWindowIconWidth

                    source: Style.nmcAccountAvatarIcon
                    fillMode: Image.PreserveAspectFit
                    cache: false

                    Accessible.role: Accessible.Graphic
                    Accessible.name: qsTr("Current account avatar")
                }

                ColumnLayout {
                    Layout.fillWidth: true
                    Layout.alignment: Qt.AlignVCenter
                    spacing: 0

                    EnforcedPlainTextLabel {
                        Layout.fillWidth: true

                        text: root.account ? root.account.name : ""
                        color: Style.nmcTrayWindowHeaderTextColor
                        font.pixelSize: Style.topLinePixelSize
                        font.bold: false
                        elide: Text.ElideRight
                    }

                    RowLayout {
                        Layout.fillWidth: true
                        spacing: Style.accountLabelsSpacing

                        visible: root.user
                            && root.user.isConnected
                            && root.user.serverHasUserStatus
                            && (root.user.statusEmoji !== "" || root.user.statusMessage !== "")

                        EnforcedPlainTextLabel {
                            visible: root.user && root.user.statusEmoji !== ""
                            text: root.user ? root.user.statusEmoji : ""
                            color: Style.nmcTrayWindowHeaderTextColor
                            font.pixelSize: Style.subLinePixelSize
                        }

                        EnforcedPlainTextLabel {
                            Layout.fillWidth: true

                            visible: root.user && root.user.statusMessage !== ""
                            text: root.user ? root.user.statusMessage : ""
                            color: Style.nmcTrayWindowHeaderTextColor
                            font.pixelSize: Style.subLinePixelSize
                            elide: Text.ElideRight
                        }
                    }
                }
            }
        }

        Item {
            Layout.fillWidth: true
        }

        Rectangle {
            id: websiteButtonContainer

            Layout.preferredWidth: 92
            Layout.fillHeight: true

            color: websiteHover.hovered
                ? Style.nmcTrayWindowHeaderHighlightColor
                : "transparent"

            NMCHeaderButton {
                anchors.fill: parent

                iconSource: Style.darkMode
                    ? "qrc:///client/theme/NMCIcons/website-white.svg"
                    : "qrc:///client/theme/NMCIcons/website.svg"

                iconText: qsTranslate("", "OPEN_WEBSITE")

                onClickedButton: UserModel.openCurrentAccountServer()
            }

            HoverHandler {
                id: websiteHover
                acceptedDevices: PointerDevice.Mouse
            }
        }

        Item {
            Layout.preferredWidth: 10
            Layout.fillHeight: true
        }

        Rectangle {
            id: localFolderButtonContainer

            Layout.preferredWidth: 92
            Layout.fillHeight: true

            color: localFolderHover.hovered
                ? Style.nmcTrayWindowHeaderHighlightColor
                : "transparent"

            NMCHeaderButton {
                anchors.fill: parent

                iconSource: Style.darkMode
                    ? "qrc:///client/theme/white/folder.svg"
                    : "qrc:///client/theme/black/folder.svg"

                iconText: qsTranslate("", "LOCAL_FOLDER")

                onClickedButton: UserModel.openCurrentAccountLocalFolder()
            }

            HoverHandler {
                id: localFolderHover
                acceptedDevices: PointerDevice.Mouse
            }
        }

        Item {
            Layout.preferredWidth: 10
            Layout.fillHeight: true
        }
    }
}
