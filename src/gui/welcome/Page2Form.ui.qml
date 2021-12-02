import QtQuick 2.5
import QtQuick.Controls 2.3

Page {
    width: 400
    height: 400

    Text {
        id: text1
        anchors.centerIn: parent
        width: 60
        height: 31
        text: qsTr("Page2")
        font.pixelSize: 20
    }
}
