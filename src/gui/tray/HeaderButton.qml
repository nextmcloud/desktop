import QtQml 2.1
import QtQml.Models 2.1
import QtQuick 2.9
import QtQuick.Window 2.3
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.2
import QtGraphicalEffects 1.0

// Custom qml modules are in /theme (and included by resources.qrc)
import Style 1.0

Button {
    id: root

    display: AbstractButton.TextUnderIcon
    flat: true
    padding: 0
    hoverEnabled: Style.hoverEffectsEnabled

    icon.width: Style.headerButtonIconSize
    icon.height: Style.headerButtonIconSize
    icon.color: root.hovered ? Style.magenta : Style.nmcTextColor

    font.family: "Segoe UI"
    font.pixelSize: 9


    Layout.alignment: Qt.AlignRight
    Layout.minimumWidth: 72
    Layout.preferredWidth:  72
    Layout.preferredHeight: Style.trayWindowHeaderHeight
}
