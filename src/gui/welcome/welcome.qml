import QtQml 2.12
import QtQuick 2.5
import QtQuick.Controls 2.3
import Style 1.0

Rectangle {
    id: welcomeForm
    width: 640
    height: 480
    focus: true
    color: Style.magenta
    Text {
        id: titleText
        text: qsTr("MagentaCLOUD")
        font.family: "Segoe UI"
        font.pixelSize: 16
        color: Style.nmcTextColorLight
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.leftMargin: 8
        anchors.topMargin: 8

    }

    SwipeView {
        id: swipeView
        objectName: "swipeView"
        anchors.fill: parent
        anchors.topMargin: titleText.height + titleText.anchors.topMargin * 2
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
        text: qsTr("Skip introduction")
        font.family: "Segoe UI"
        font.pixelSize: 16

        /* Handled in Application::slotSwipeCancelClicked */
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
            color: Style.nmcTextColorLight
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

    // Timer works asyncroniously from user's actions so it can conflict with manual swipes
    Timer {
        id: timerSlideShow
        objectName: "timerSlideShow"
        running: false
        repeat: true
        /* Initial dealy before the slideshow starts */
        interval: 3000
        onTriggered: {
            var nextIndex = (swipeView.currentIndex + 1) % swipeView.count
            swipeView.setCurrentIndex(nextIndex)
            /* Slide show speed */
            interval: 5000
        }
    }

    Keys.onPressed: {
        if (event.key == Qt.Key_Left){
            if (swipeView.currentIndex == 0)
                swipeView.setCurrentIndex(swipeView.count - 1)
            else
                swipeView.setCurrentIndex(swipeView.currentIndex - 1)
        } else if (event.key == Qt.Key_Right) {
            swipeView.setCurrentIndex((swipeView.currentIndex + 1) % swipeView.count)
        }
    }
}
