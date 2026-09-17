import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

import Style

MenuItem {
    id: root

    contentItem: RowLayout {
        spacing: 8
        anchors.fill: parent
        anchors.leftMargin: 12

        Image {
            source: root.icon.source
            visible: root.icon.source !== ""
            width: Style.nmcTrayWindowIconWidth
            height: Style.nmcTrayWindowIconWidth
            fillMode: Image.PreserveAspectFit
        }

        Text {
            text: root.text
            color: hovered ? Style.nmcTrayWindowHeaderTextColor : Style.nmcTrayWindowHeaderTextColor
            font.pixelSize: Style.topLinePixelSize
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignLeft
            elide: Text.ElideRight
            Layout.fillWidth: true
        }
    }

    background: Rectangle {
        color: root.hovered ? Style.nmcTrayWindowHeaderHighlightColor : "transparent"
    }
}
