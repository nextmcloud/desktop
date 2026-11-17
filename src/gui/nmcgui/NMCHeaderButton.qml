import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

import Style
import com.nextcloud.desktopclient

Item {
    id: rec

    implicitWidth: Math.max(92, buttonText.implicitWidth + 16)
    implicitHeight: Style.nmcTrayWindowHeaderHeight

    width: implicitWidth
    height: implicitHeight

    signal clickedButton

    property string iconText: ""
    property string iconSource: ""
    property bool iconHovered: false

    Column {
        width: parent.width
        anchors.centerIn: parent
        spacing: 0

        Button {
            id: button

            anchors.horizontalCenter: parent.horizontalCenter

            flat: true
            focusPolicy: Qt.NoFocus

            contentItem: Image {
                source: rec.iconSource
                width: Style.nmcTrayWindowIconWidth
                height: Style.nmcTrayWindowIconWidth
                fillMode: Image.PreserveAspectFit
            }

            background: Rectangle {
                color: rec.iconHovered || button.visualFocus ? "black" : "transparent"
                opacity: 0.05
                radius: 4
            }
        }

        Text {
            id: buttonText

            width: parent.width

            text: rec.iconText
            elide: Text.ElideNone

            color: Style.nmcTrayWindowHeaderTextColor
            font.pixelSize: Style.nmcFontSizeIconText

            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
    }

    MouseArea {
        anchors.fill: parent
        cursorShape: Qt.PointingHandCursor
        onClicked: rec.clickedButton()
    }
}
