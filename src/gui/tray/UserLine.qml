import QtQuick 2.9
import QtQuick.Window 2.3
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.2
import QtGraphicalEffects 1.0

// Custom qml modules are in /theme (and included by resources.qrc)
import com.nextcloud.desktopclient 1.0
import Style 1.0


AbstractButton {
    id: userLine

    signal showUserStatusSelector(int id)

    property variant dialog;
    property variant comp;

    Accessible.role: Accessible.MenuItem
    Accessible.name: qsTr("Switch to account") + " " + model.name

    height: Style.trayWindowHeaderHeight

    background: Rectangle {
        anchors.fill: parent
        anchors.margins: 1
        color: (userLine.hovered || userLine.visualFocus) && !(userMoreButton.hovered || userMoreButton.visualFocus) ? Style.lightHover : Style.backgroundColor
    }

    contentItem: RowLayout {
        id: userLineLayout
        objectName: "userLineLayout"
        spacing: Style.userStatusSpacing

        Image {
            id: accountAvatar
            objectName: "accountAvatar"
            Layout.leftMargin: 7
            verticalAlignment: Qt.AlignCenter
            cache: false
            source: Style.accountAvatarIcon

            Rectangle {
                id: accountStatusIndicatorBackground
                visible: model.isConnected && model.serverHasUserStatus
                width: accountStatusIndicator.sourceSize.width + 2
                height: width
                anchors.bottom: accountAvatar.bottom
                anchors.right: accountAvatar.right
                // userLine.hovered || userLine.visualFocus ? "#f6f6f6" : "white"
                radius: width*0.5
            }

            Image {
                id: accountStatusIndicator
                visible: model.isConnected && model.serverHasUserStatus
                source: model.statusIcon
                cache: false
                x: accountStatusIndicatorBackground.x + 1
                y: accountStatusIndicatorBackground.y + 1
                sourceSize.width: Style.accountAvatarStateIndicatorSize
                sourceSize.height: Style.accountAvatarStateIndicatorSize

                Accessible.role: Accessible.Indicator
                Accessible.name: model.desktopNotificationsAllowed ? qsTr("Current account status is online") : qsTr("Current account status is do not disturb")
            }

        }

        ColumnLayout {
            id: accountLabels
            Layout.leftMargin: Style.accountLabelsSpacing
            Layout.fillWidth: true
            Layout.fillHeight: true

            EnforcedPlainTextLabel {
                id: accountUser
                objectName: "accountUser"
                Layout.fillWidth: true
                Layout.alignment: Qt.AlignLeft | Qt.AlignBottom
                verticalAlignment: Text.AlignBottom
                text: name
                elide: Text.ElideRight
                palette.windowText :hovered ? Style.magentaColor : Style.nmcTextColor
                font.pixelSize: Style.topLinePixelSize
                font.family: Style.magentaFont
            }
            RowLayout {
                id: statusLayout
                Layout.fillWidth: true
                height: visible ? implicitHeight : 0
                visible: model.isConnected &&
                         model.serverHasUserStatus &&
                         (model.statusEmoji !== "" || model.statusMessage !== "")

                EnforcedPlainTextLabel {
                    id: emoji
                    visible: model.statusEmoji !== ""
                    text: statusEmoji
                    topPadding: Style.accountLabelsSpacing
                }
                EnforcedPlainTextLabel {
                    id: message
                    Layout.fillWidth: true
                    visible: model.statusMessage !== ""
                    text: statusMessage
                    elide: Text.ElideRight
                    color: Style.ncTextColor
                    font.pixelSize: Style.subLinePixelSize
                    leftPadding: Style.accountLabelsSpacing
                }
            }

            EnforcedPlainTextLabel {
                id: accountServer
                Layout.fillWidth: true
                Layout.alignment: Qt.AlignLeft | Qt.AlignTop
                verticalAlignment: Text.AlignTop
                text: server
                elide: Text.ElideRight
                color: Style.ncTextColor
                font.pixelSize: Style.subLinePixelSize
                visible: false
            }
        }

        Button {
            id: userMoreButton
            Layout.preferredWidth: Style.headerButtonIconSize
            Layout.fillHeight: true
            flat: true

            icon.source: "qrc:///client/theme/more.svg"
            icon.color: Style.magentaColor//MagentaCustomizationV25

            Accessible.role: Accessible.ButtonMenu
            Accessible.name: qsTr("Account actions")
            Accessible.onPressAction: userMoreButtonMouseArea.clicked()

            onClicked: userMoreButtonMenu.visible ? userMoreButtonMenu.close() : userMoreButtonMenu.popup()
            background: Rectangle {
                anchors.fill: parent
                anchors.margins: 1
                color: userMoreButton.hovered || userMoreButton.visualFocus ? Style.lightHover : "transparent"
            }

            AutoSizingMenu {
                id: userMoreButtonMenu
                closePolicy: Menu.CloseOnPressOutsideParent | Menu.CloseOnEscape

                background: Rectangle {
                    border.color: Style.menuBorder
                    color: Style.backgroundColor
                    radius: 2
                }

                MenuItem {
                    visible: model.isConnected && model.serverHasUserStatus
                    height: visible ? implicitHeight : 0
                    text: qsTr("Set status")
                    font.pixelSize: Style.topLinePixelSize
                    palette.windowText: Style.ncTextColor
                    hoverEnabled: true
                    onClicked: showUserStatusSelector(index)

                    background: Item {
                        height: parent.height
                        width: parent.menu.width
                        Rectangle {
                            anchors.fill: parent
                            anchors.margins: 1
                            color: parent.parent.hovered ? Style.lightHover : "transparent"
                        }
                    }
                }

                MenuItem {
                    text: model.isConnected ? qsTr("Log out") : qsTr("Log in")
                    font.pixelSize: Style.topLinePixelSize
                    icon.source: Style.accountLogoutIcon //MagentaCustomizationV25
                    palette.windowText :hovered ? Style.magentaColor : Style.nmcTextColor
                    hoverEnabled: true
                    onClicked: {
                        model.isConnected ? UserModel.logout(index) : UserModel.login(index)
                        accountMenu.close()
                    }

                    background: Item {
                        height: parent.height
                        width: parent.menu.width
                        Rectangle {
                            anchors.fill: parent
                            anchors.margins: 1
                           color: parent.parent.hovered ? Style.lightHover : "transparent"
                        }
                    }

                    Accessible.role: Accessible.Button
                    Accessible.name: model.isConnected ? qsTr("Log out") : qsTr("Log in")

                    onPressed: {
                        if (model.isConnected) {
                            UserModel.logout(index)
                        } else {
                            UserModel.login(index)
                        }
                        accountMenu.close()
                    }
                }

                MenuItem {
                    id: removeAccountButton
                    text: qsTr("Remove account")
                    font.pixelSize: Style.topLinePixelSize
                    icon.source: Style.accountRemoveIcon //MagentaCustomizationV25
                    palette.windowText :hovered ? Style.magentaColor : Style.nmcTextColor//MagentaCustomizationV25
                    hoverEnabled: true
                    onClicked: {
                        UserModel.removeAccount(index)
                        accountMenu.close()
                    }

                    background: Item {
                        height: parent.height
                        width: parent.menu.width
                        Rectangle {
                            anchors.fill: parent
                            anchors.margins: 1
                            color: parent.parent.hovered ? Style.lightHover : "transparent"
                        }
                    }

                    Accessible.role: Accessible.Button
                    Accessible.name: text
                    Accessible.onPressAction: removeAccountButton.clicked()
                }
            }
        }
    }
}   // MenuItem userLine
