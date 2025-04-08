import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

import Style

MenuItem {
    id: root

    icon.color: hovered ? Style.ncBlue : Style.ncTextColor

    contentItem: Text {
        text: root.text
        color: hovered ? Style.nmcTrayWindowHeaderTextColor : Style.nmcTrayWindowHeaderTextColor
        font.pixelSize: Style.topLinePixelSize
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignLeft
        elide: Text.ElideRight
        anchors.fill: parent
        anchors.leftMargin: 12
    }

    // optional: hover background
    background: Rectangle {
        color: hovered ? "#f0f0f0" : "transparent"
    }
}
