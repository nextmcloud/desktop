import QtQml 2.12
import QtQuick 2.5
import QtQuick.Controls 2.3
import Style 1.0

Rectangle {
    id: welcomeForm
    width: firstPage.slide1.implicitWidth
    height: firstPage.slide1.implicitHeight
    focus: true
    color: Style.magenta
    Text {
        id: titleText
        text: qsTr("MagentaCLOUD")
        font.family: Style.swipeFontFamily
        font.pixelSize: Style.topLinePixelSize
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
        width: Style.skipButtonWidth
        height: Style.skipButtonHeight

        text: qsTr("Skip introduction")
        font.family: Style.swipeFontFamily
        font.pixelSize: Style.topLinePixelSize

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
            color: Style.magenta
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            elide: Text.ElideRight
        }

        background: Rectangle {
            implicitWidth: 100
            implicitHeight: 40
            opacity: enabled ? 1 : 0.3
            color: cancelButton.down ? "lightgray" : "white"
            border.width: 0
            radius: Style.skipButtonRadius
        }

    }

    PageIndicator {
        id: indicator
        count: swipeView.count
        currentIndex: swipeView.currentIndex
        interactive: true

        anchors.bottomMargin: 24
        anchors.bottom: cancelButton.top
        anchors.horizontalCenterOffset: 0
        anchors.horizontalCenter: parent.horizontalCenter

        delegate: Rectangle {
            width: 8
            height: 8
            radius: width / 2
            opacity: index == swipeView.currentIndex ? 1 : 0.4
            color: "white"
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
        interval: 5000
        onTriggered: {
            var nextIndex = (swipeView.currentIndex + 1) % swipeView.count
            swipeView.setCurrentIndex(nextIndex)
            /* Slide show speed */
            interval: 6000
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
