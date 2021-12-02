import QtQuick 2.5
import QtQuick.Controls 2.3

Rectangle {
    width: 640
    height: 480
    id: welcomeForm
    Text {
        id: titleText
        text: qsTr("MagentaCLOUD")
        font.family: "Segoe UI"
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.leftMargin: 8
        anchors.topMargin: 8

    }

    SwipeView {
        id: swipeView
        anchors.fill: parent
        anchors.topMargin: titleText.height + titleText.anchors.topMargin * 2
        anchors.bottomMargin: cancelButton.height + indicator.height + cancelButton.anchors.bottomMargin * 3
        currentIndex: indicator.currentIndex

        Page1Form {
            id: firstPage
        }

        Page2Form {
            id: secondPage
        }

        Page3Form {
            id: thirdPage
        }
    }


    Button {
        id: cancelButton
        objectName: "cancelButton"
        width: parent.width/4
        height: parent.height/12
        text: qsTr("Cancel")
        font.family: "Segoe UI"

        signal cancelClicked

        onClicked: cancelClicked()

        anchors.bottom: parent.bottom
        anchors.horizontalCenterOffset: 0
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottomMargin: 12
        contentItem: Text {
            text: cancelButton.text
            font: cancelButton.font
            opacity: enabled ? 1.0 : 0.3
            color: "white"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            elide: Text.ElideRight
        }

        background: Rectangle {
            implicitWidth: 100
            implicitHeight: 40
            opacity: enabled ? 1 : 0.3
            color: cancelButton.down ? "#bd0765" : "#E20074"
            border.color: cancelButton.down ? "#bd0765" : "#E20074"
            border.width: 1
            radius: 4
        }

    }

    PageIndicator {
        id: indicator
        y: 452
        count: swipeView.count
        currentIndex: swipeView.currentIndex
        interactive: true
        anchors.bottomMargin: cancelButton.anchors.bottomMargin
        anchors.bottom: cancelButton.top
        anchors.horizontalCenterOffset: 0
        anchors.horizontalCenter: parent.horizontalCenter

        delegate: Rectangle {
            width: 8
            height: 8
            radius: width / 2
            color: index == swipeView.currentIndex ? "#E20074" : "#CCC"
            Behavior on opacity {
                OpacityAnimator {
                    duration: 100
                }
            }
        }
    }
}
