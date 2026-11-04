/*
 * SPDX-FileCopyrightText: 2026 Mauro Mura
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import Style
import com.nextcloud.desktopclient
import "../../tray"

Item {
    id: root

    required property var controller

    readonly property bool hasLocalFolder:
        root.controller
        && root.controller.localSyncFolderRequired
        && root.controller.localSyncFolder !== ""

    Component.onCompleted: {
        // The old NMC wizard explicitly disabled virtual files.
        // stable-35 may select VirtualFiles by default on supported platforms,
        // therefore switch back to classic synchronization.
        if (root.controller
                && root.controller.syncMode === AccountWizardController.VirtualFiles
                && root.controller.canUseClassicSync) {
            root.controller.setSyncMode(AccountWizardController.SyncEverything)
        }
    }

    RowLayout {
        anchors.fill: parent
        anchors.leftMargin: 28
        anchors.rightMargin: 40
        anchors.topMargin: 32
        anchors.bottomMargin: 16

        spacing: 24

        ColumnLayout {
            Layout.preferredWidth: 480
            Layout.fillHeight: true

            spacing: 0

            // Telekom logo + MagentaCLOUD
            RowLayout {
                spacing: 8

                Image {
                    source: "qrc:/client/theme/NMCIcons/tlogocarrier.svg"

                    sourceSize.width: 36
                    sourceSize.height: 36

                    Layout.preferredWidth: 36
                    Layout.preferredHeight: 36
                }

                EnforcedPlainTextLabel {
                    text: "MagentaCLOUD"

                    font.pixelSize: 15
                    font.bold: true
                }

                Item {
                    Layout.fillWidth: true
                }
            }

            Item {
                Layout.preferredHeight: 24
            }

            // Headline
            EnforcedPlainTextLabel {
                text: qsTranslate("", "SETUP_HEADER_TEXT_2")

                font.pixelSize: 28
                font.weight: Font.Normal

                wrapMode: Text.WordWrap

                Layout.fillWidth: true
            }

            Item {
                Layout.preferredHeight: 16
            }

            // Selected local folder
            EnforcedPlainTextLabel {
                text: root.hasLocalFolder
                    ? root.controller.localSyncFolderDisplay
                    : qsTranslate("", "NO_STORAGE_LOCATION_SELECTED")

                font.pixelSize: 15
                font.weight: Font.Normal

                elide: Text.ElideMiddle
                wrapMode: Text.NoWrap

                Layout.fillWidth: true
            }

            // Free space or selection hint
            EnforcedPlainTextLabel {
                text: {
                    if (!root.hasLocalFolder) {
                        return qsTranslate("", "SELECT_FOLDER_ON_DEVICE")
                    }

                    return root.controller.localSyncFolderFreeSpace
                }

                visible: text !== ""

                font.pixelSize: 15
                font.weight: Font.Normal

                Layout.fillWidth: true
                elide: Text.ElideRight
            }

            // Validation error from stable-35 controller
            EnforcedPlainTextLabel {
                text: root.controller.localSyncFolderError

                visible: text !== ""

                color: Style.wizardErrorText

                font.pixelSize: 13

                wrapMode: Text.WordWrap

                Layout.fillWidth: true
            }

            Item {
                Layout.preferredHeight: 16
            }

            // Synchronize everything
            OptionRow {
                Layout.fillWidth: true

                enabled: root.controller.canUseClassicSync

                title: qsTr("Synchronize everything")
                description: root.controller.syncEverythingDescription

                selected:
                    root.controller.syncMode
                    === AccountWizardController.SyncEverything

                onClicked:
                    root.controller.setSyncMode(
                        AccountWizardController.SyncEverything)
            }

            // Selective sync
            OptionRow {
                Layout.fillWidth: true

                enabled: root.controller.canUseClassicSync

                title: qsTr("Choose what to sync")
                description: ""

                selected:
                    root.controller.syncMode
                    === AccountWizardController.SelectiveSync

                onClicked:
                    root.controller.openSelectiveSync()
            }

            Item {
                Layout.preferredHeight: 16
            }

            // Description changes depending on folder selection
            EnforcedPlainTextLabel {
                text: root.hasLocalFolder
                    ? qsTranslate("", "SETUP_DESCRIPTION_FOLDER_SELECTED")
                    : qsTranslate("", "SETUP_DESCRIPTION_SELECT_FOLDER")

                font.pixelSize: 15
                font.weight: Font.Normal

                wrapMode: Text.WordWrap

                Layout.preferredWidth: 480
                Layout.maximumWidth: 480
            }

            Item {
                Layout.preferredHeight: 16
            }

            RowLayout {
                spacing: 8

                // Folder selection
                Button {
                    id: selectFolderButton

                    text: root.hasLocalFolder
                        ? qsTranslate("", "CHANGE_STORAGE_LOCATION")
                        : qsTranslate("", "SELECT_STORAGE_LOCATION")

                    focusPolicy: Qt.NoFocus

                    Layout.preferredWidth: 180
                    Layout.preferredHeight: 32

                    background: Rectangle {
                        radius: 4

                        border.width: 1
                        border.color: "black"

                        color: selectFolderButton.hovered
                            ? "white"
                            : "#ededed"
                    }

                    contentItem: Text {
                        text: selectFolderButton.text

                        color: "black"
                        font.pixelSize: 13

                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                    }

                    onClicked:
                        root.controller.chooseLocalSyncFolder()
                }

                // Connect / finish
                Button {
                    id: connectButton

                    text: qsTranslate("", "CONNECT")

                    enabled:
                        root.controller
                        && root.controller.canFinish
                        && !root.controller.busy
                        && root.hasLocalFolder

                    focusPolicy: Qt.NoFocus

                    Layout.preferredWidth: 130
                    Layout.preferredHeight: 32

                    background: Rectangle {
                        radius: 4

                        color: !connectButton.enabled
                            ? "#d8d8d8"
                            : connectButton.hovered
                                ? "#c00063"
                                : "#E20074"
                    }

                    contentItem: Text {
                        text: connectButton.text

                        color: connectButton.enabled
                            ? "white"
                            : "#8a8a8a"

                        font.pixelSize: 15

                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                    }

                    onClicked:
                        root.controller.finish()
                }

                Item {
                    Layout.fillWidth: true
                }
            }

            Item {
                Layout.fillHeight: true
            }
        }

        Item {
            Layout.fillWidth: true
        }

        // Large folder logo
        Image {
            source: "qrc:/client/theme/NMCIcons/folderLogo.svg"

            sourceSize.width: 150
            sourceSize.height: 150

            fillMode: Image.PreserveAspectFit

            Layout.preferredWidth: 150
            Layout.preferredHeight: 150

            Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
        }
    }
}
