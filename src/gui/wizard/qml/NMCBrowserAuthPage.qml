/*
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Item {
    id: root

    required property QtObject controller

    RowLayout {
        anchors.fill: parent
        anchors.margins: 16
        spacing: 24

        // Linker Bereich
        ColumnLayout {
            Layout.preferredWidth: 282
            Layout.fillHeight: true
            spacing: 0

            // Telekom Logo + MagentaCLOUD
            RowLayout {
                spacing: 8

                Image {
                    source: "qrc:/client/theme/NMCIcons/tlogocarrier.svg"
                    sourceSize.width: 36
                    sourceSize.height: 36

                    Layout.preferredWidth: 36
                    Layout.preferredHeight: 36
                }

                Label {
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

            // Überschrift
            Label {
                text: qsTranslate("", "SETUP_HEADER_TEXT_1")
                font.pixelSize: 24
                font.weight: Font.Normal
                wrapMode: Text.WordWrap

                Layout.fillWidth: true
            }

            Item {
                Layout.preferredHeight: 16
            }

            // Beschreibung
            Label {
                text: qsTranslate("", "SETUP_DESCRIPTION_TEXT_1")
                font.pixelSize: 14
                wrapMode: Text.WordWrap

                Layout.fillWidth: true
            }

            Item {
                Layout.preferredHeight: 24
            }

            // Login
            Button {
                id: loginButton

                text: qsTranslate("", "LOGIN")
                focusPolicy: Qt.NoFocus

                Layout.preferredWidth: 130
                Layout.preferredHeight: 32

                background: Rectangle {
                    radius: 4
                    color: loginButton.hovered ? "#c00063" : "#E20074"
                }

                contentItem: Text {
                    text: loginButton.text
                    color: "white"
                    font.pixelSize: 15

                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                }

                onClicked: root.controller.openBrowserLogin()
            }

            Item {
                Layout.fillHeight: true
            }
        }

        Item {
            Layout.fillWidth: true
        }

        // Großes MagentaCLOUD Logo rechts
        Image {
            source: "qrc:/client/theme/NMCIcons/applicationLogo.svg"

            sourceSize.width: 175
            sourceSize.height: 175
            fillMode: Image.PreserveAspectFit

            Layout.preferredWidth: 175
            Layout.preferredHeight: 175
            Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
        }
    }
}
