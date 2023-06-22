import QtQuick 2.5
import QtQuick.Controls 2.3

Page {
    property alias slide1: slide1

    Image {
        id: slide1
        source: "qrc:/theme/swipe/page1.png"
        // Image is scaled down to fit this dimentions
        // if it's too big. Aspect ratio is kept
        sourceSize.width: 720
    }
}
