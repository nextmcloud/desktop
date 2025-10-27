import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

import Style
import com.nextcloud.desktopclient

Item {
    id: rec

    width: 92
    height: Style.nmcTrayWindowHeaderHeight

    signal clickedButton

    property string iconText: ""
    property string iconSource: ""
    property bool iconHovered: false

    ColumnLayout {
        spacing: 0
        anchors.centerIn: parent

        Button {
            id: button
            flat: true
            focusPolicy: Qt.NoFocus
            Layout.alignment: Qt.AlignHCenter

            contentItem: Image {
                source: rec.iconSource
                width: Style.nmcTrayWindowIconWidth
                height: Style.nmcTrayWindowIconWidth
                fillMode: Image.PreserveAspectFit
                anchors.centerIn: parent
            }

            background: Rectangle {
                color: rec.iconHovered || button.visualFocus ? "black" : "transparent"
                opacity: 0.05
                radius: 4
            }

            MouseArea {
                id: buttonArea
                anchors.fill: parent
                onClicked: rec.clickedButton()  // Trigger the button click signal
            }

            // Optional: Handle hover on icon to change its state
            onClicked: rec.clickedButton()
        }

        Text {
            width: rec.width
            text: rec.iconText
            elide: Text.ElideRight
            color: Style.nmcTrayWindowHeaderTextColor
            font.pixelSize: Style.nmcFontSizeIconText
            horizontalAlignment: Text.AlignHCenter
            leftPadding: 8
            rightPadding: 8
        }
    }
}
