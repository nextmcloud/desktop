import QtQml
import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import Style
import com.nextcloud.desktopclient

Repeater {
    id: root

    property string objectType: ""
    property variant linksForActionButtons: []
    property variant linksContextMenu: []
    property bool displayActions: false

    property color moreActionsButtonColor: palette.base

    property int maxActionButtons: 0

    property Flickable flickable

    property bool talkReplyButtonVisible: true

    signal triggerAction(int actionIndex)
    signal showReplyField()

    model: root.linksForActionButtons

    Button {
        id: activityActionButton

        property string verb: model.modelData.verb
        property bool isTalkReplyButton: verb === "REPLY"

        Layout.alignment: Qt.AlignTop | Qt.AlignRight
        hoverEnabled: true
        padding: Style.smallSpacing
        display: Button.TextOnly
        text: model.modelData.label
        icon.source: model.modelData.imageSource ? model.modelData.imageSource + Style.adjustedCurrentUserHeaderColor : ""

        onClicked: isTalkReplyButton ? root.showReplyField() : root.triggerAction(model.index)

        color: mouse.hovered ? Style.nmcTextInButtonColorHovered : Style.nmcTextInButtonColor

        visible: verb !== "REPLY" || (verb === "REPLY" && root.talkReplyButtonVisible)

        HoverHandler {
            id: mouse
            acceptedDevices: PointerDevice.AllPointerTypes
        }

        background: Rectangle {
            color: mouse.hovered ? Style.nmcConflictHoverColor : Style.nmcConflictColor
            radius: Style.nmcStandardRadius
            height: Style.nmcTraySyncButtonHeight
        }

        contentItem: Text {
            text: activityActionButton.text
            color: mouse.hovered ? Style.nmcTextInButtonColorHovered : Style.nmcTextInButtonColor
            font.pixelSize: Style.fontSizeSmall
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            elide: Text.ElideRight
        }
    }
}
