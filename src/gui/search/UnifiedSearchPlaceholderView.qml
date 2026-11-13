/*
 * SPDX-FileCopyrightText: 2024 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

import QtQml
import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import Style
import "qrc:/qml/src/gui/tray"

ColumnLayout {
    id: root

    spacing: Style.standardSpacing

    Item {
        Layout.fillWidth: true
        Layout.fillHeight: true
    }

    Image {
        source: `image://svgimage-custom-color/magnifying-glass.svg/${palette.windowText}`
        sourceSize.width: Style.trayWindowHeaderHeight
        sourceSize.height: Style.trayWindowHeaderHeight
        Layout.alignment: Qt.AlignHCenter
    }

    EnforcedPlainTextLabel {
        text: qsTr("Start typing to search")
        font.bold: true
        wrapMode: Text.Wrap
        Layout.fillWidth: true
        horizontalAlignment: Text.AlignHCenter
    }

    Item {
        Layout.fillWidth: true
        Layout.fillHeight: true
    }
}
