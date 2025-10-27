/*
 * SPDX-FileCopyrightText: 2023 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Basic as BasicControls
import Style

BasicControls.ProgressBar {
    id: control

    property color fillColor: Style.ncBlue

    background: Rectangle {
        implicitWidth: Style.progressBarWidth
        implicitHeight: Style.progressBarBackgroundHeight
        radius: Style.nmcStandardRadius
        color: Style.nmcTrayWindowHeaderHighlightColor
        border.color: palette.dark
        border.width: 0
    }

    contentItem: Item {
        implicitWidth: Style.progressBarWidth
        implicitHeight: Style.progressBarContentHeight

        Rectangle {
            width: control.visualPosition * parent.width
            height: parent.height
            radius: Style.progressBarRadius
            color: Style.nmcTelekomMagentaColor
            border.color: palette.dark
            border.width: 0
        }
    }
}
