/*
 * SPDX-FileCopyrightText: 2026 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

import QtQuick
import QtQuick.Controls.Basic

import Style
import "qrc:/qml/src/gui/tray"

Item {
    id: root

    required property var searchModel

    signal navigateBack()

    objectName: "searchDetailHeader"
    implicitHeight: Style.unifiedSearchDetailHeaderHeight

    Button {
        id: backButton

        objectName: "searchDetailBackButton"

        width: root.width
        height: Style.unifiedSearchDetailHeaderHeight

        flat: true
        text: "← " + qsTr("Back")
        font.bold: false
        font.pixelSize: Style.unifiedSearchResultTitleFontSize

        leftPadding: 0
        rightPadding: 0
        hoverEnabled: true
        activeFocusOnTab: true

        Accessible.role: Accessible.Button
        Accessible.name: text

        HoverHandler {
            cursorShape: Qt.PointingHandCursor
        }

        background: Rectangle {
            color: backButton.hovered
                ? Style.listItemHoverBackground
                : "transparent"
            radius: Style.mediumRoundedButtonRadius
        }

        contentItem: EnforcedPlainTextLabel {
            text: backButton.text
            color: Style.wizardPrimaryText
            font: backButton.font
            elide: Text.ElideRight
            horizontalAlignment: Text.AlignLeft
            verticalAlignment: Text.AlignVCenter
        }

        onClicked: {
            root.searchModel.closeProviderDetail()
            root.navigateBack()
        }
    }
}
