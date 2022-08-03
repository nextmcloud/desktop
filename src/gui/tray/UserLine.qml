import QtQuick 2.9
import QtQuick.Window 2.3
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.2
import QtGraphicalEffects 1.0

// Custom qml modules are in /theme (and included by resources.qrc)
import Style 1.0
import com.nextcloud.desktopclient 1.0

MenuItem {
    id: userLine
    height: Style.accountMenuTopItemHeight

    Accessible.role: Accessible.MenuItem
    Accessible.name: qsTr("Account entry")

        RowLayout {
            id: userLineLayout
            objectName: "userLineLayout"
            spacing: 0
            anchors.fill: parent

            Button {
                id: accountButton
                Layout.preferredWidth: (userLineLayout.width * (5/6) - 16)
                Layout.preferredHeight: (userLineLayout.height)
                display: AbstractButton.IconOnly
                hoverEnabled: true
                flat: true

                Accessible.role: Accessible.Button
                Accessible.name: qsTr("Switch to account") + " " + name

                onClicked: if (!isCurrentUser) {
                    UserModel.switchCurrentUser(id)
                } else {
                    accountMenu.close()
                }

                background: Item {
                    height: parent.height
                    width: userLine.menu ? userLine.menu.width : 0
                    Rectangle {
                        anchors.fill: parent
                        anchors.margins: 1
                        color: parent.parent.hovered ? Style.lightHover : "transparent"
                    }
                }

                RowLayout {
                    id: accountControlRowLayout
                    anchors.fill: parent
                    spacing: Style.userStatusSpacing
                    Image {
                        id: accountAvatar
                        Layout.topMargin: Style.accountMenuPadding
                        Layout.leftMargin: Style.accountMenuPadding
                        Layout.rightMargin: 0
                        Layout.bottomMargin: Style.accountMenuHalfPadding

                        verticalAlignment: Qt.AlignCenter
                        cache: false
                        visible: false
                        source: "qrc:///client/theme/magenta/user/default.png"
                        Layout.preferredHeight: Style.headerButtonIconSize
                        Layout.preferredWidth: Style.headerButtonIconSize
                        Rectangle {
                            id: accountStateIndicatorBackground
                            visible: model.isConnected &&
                                     model.serverHasUserStatus
                            width: accountStateIndicator.sourceSize.width + 2
                            height: width
                            anchors.bottom: accountAvatar.bottom
                            anchors.right: accountAvatar.right
                            color: "transparent"
                            radius: width*0.5
                        }
                        Image {
                            id: accountStateIndicator
                            visible: model.isConnected &&
                                     model.serverHasUserStatus
                            source: model.statusIcon
                            cache: false
                            x: accountStateIndicatorBackground.x + 1
                            y: accountStateIndicatorBackground.y + 1
                            sourceSize.width: Style.accountAvatarStateIndicatorSize
                            sourceSize.height: Style.accountAvatarStateIndicatorSize

                            Accessible.role: Accessible.Indicator
                            Accessible.name: model.desktopNotificationsAllowed ? qsTr("Current user status is online") : qsTr("Current user status is do not disturb")
                        }
                    }

                    ColorOverlay {
                        cached: true
                        color: hovered ? Style.magenta : Style.nmcTextColor
                        width: source.width
                        height: source.height
                        source: accountAvatar
                        anchors.leftMargin: 16
                        Layout.leftMargin: 16
                    }

                    Column {
                        id: accountLabels
                        Layout.leftMargin: Style.accountLabelsSpacing
                        Layout.fillWidth: true
                        Layout.maximumWidth: parent.width - Style.accountLabelsSpacing
                        Label {
                            id: accountUser
                            width: parent.width
                            text: name
                            elide: Text.ElideRight
                            color: hovered ? Style.magenta : Style.nmcTextColor
                            font.family: "Segoe UI"
                            font.pixelSize: Style.topLinePixelSize
                        }
                       /* Row {
                            visible: model.isConnected &&
                                     model.serverHasUserStatus
                            width: parent.width
                            Label {
                                id: emoji
                                visible: model.statusEmoji !== ""
                                text: statusEmoji
                                topPadding: -Style.accountLabelsSpacing
                            }
                            Label {
                                id: message
                                width: parent.width - parent.spacing - emoji.width
                                visible: model.statusMessage !== ""
                                text: statusMessage
                                elide: Text.ElideRight
                                color: hovered ? Style.magenta : Style.nmcTextColor
                                font.pixelSize: Style.subLinePixelSize
                                leftPadding: Style.accountLabelsSpacing
                            }
                        }*/
                        /*Label {
                            id: accountServer
                            width: Style.currentAccountLabelWidth
                            height: Style.topLinePixelSize
                            text: server
                            elide: Text.ElideRight
                            color: Style.nmcTextColor
                            font.pixelSize: Style.subLinePixelSize
                        }*/
                    }
                }
            } // accountButton

            Button {
                id: userMoreButton
                Layout.preferredWidth: (userLineLayout.width * (1/6)+16)
                Layout.preferredHeight: userLineLayout.height
                //Layout.topMargin: Style.accountMenuPadding
                //Layout.leftMargin: Style.accountMenuPadding
                Layout.rightMargin: Style.accountMenuPadding
                //Layout.bottomMargin: Style.accountMenuHalfPadding
                //display: AbstractButton.IconOnly
                //hoverEnabled: true
                //verticalAlignment: Qt.AlignCenter

                flat: true

                icon.source: "qrc:///client/theme/more.svg"
                icon.color: hovered ? Style.magenta : Style.nmcTextColor

                Accessible.role: Accessible.ButtonMenu
                Accessible.name: qsTr("Account actions")
                Accessible.onPressAction: userMoreButtonMouseArea.clicked()

                onClicked: {
                    if (userMoreButtonMenu.visible) {
                        userMoreButtonMenu.close()
                    } else {
                        userMoreButtonMenu.popup()
                    }
                }
                background:
                    Rectangle {
                    color: userMoreButton.hovered || userMoreButton.visualFocus ? "grey" : "transparent"
                    opacity: 0.2
                    height: userMoreButton.height - 2
                    y: userMoreButton.y + 1
                }

               // AutoSizingMenu {
                   // id: userMoreButtonMenu
                    //closePolicy: Menu.CloseOnPressOutsideParent | Menu.CloseOnEscape

                   /* background: Rectangle {
                        border.color: Style.menuBorder
                        color: Style.backgroundColor
                        radius: 2
                    }*/

                    Menu {
                        id: userMoreButtonMenu
                        objectName: "accountMenu"

                        // x coordinate grows towards the right
                        // y coordinate grows towards the bottom
                        x: (userMoreButton.x + 2)
                        y: (userMoreButton.y + Style.trayWindowHeaderHeight - 6)

                        width: 170
                        height: Math.min(implicitHeight, maxMenuHeight)
                        closePolicy: Menu.CloseOnPressOutsideParent | Menu.CloseOnEscape

                        background: Rectangle {
                            border.color: Style.menuBorder
                            radius: 2
                        }

                        contentItem: ScrollView {
                            id: accMenuScrollView
                            ScrollBar.horizontal.policy: ScrollBar.AlwaysOff

                            data: WheelHandler {
                                target: accMenuScrollView.contentItem
                            }
                            ListView {
                                implicitHeight: contentHeight
                                model: userMoreButtonMenu.contentModel
                                interactive: true
                                clip: true
                                currentIndex: userMoreButtonMenu.currentIndex
                            }
                        }

                        Accessible.role: PopupMenu
                        Accessible.name: qsTr("Account switcher and settings menu")

                    /*MenuItem {
                        visible: model.isConnected && model.serverHasUserStatus
                        height: visible ? implicitHeight : 0
                        text: qsTr("Set status")
                        font.pixelSize: Style.topLinePixelSize
                        palette.windowText: Style.nmcTextColor
                        hoverEnabled: true
                        onClicked: {
                            showUserStatusSelectorDialog(index)
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
                    }*/

                    MenuItem {
                        id: logoutButton
                        display: AbstractButton.IconOnly
                        hoverEnabled: true
                        icon.source: "qrc:///client/theme/magenta/action/logout/default.png"
                        icon.color: logoutButton.hovered ? Style.magenta : Style.nmcTextColor

                        Text {
                            anchors.verticalCenter: parent.verticalCenter
                            anchors.leftMargin: Style.accountMenuHalfPadding
                            anchors.topMargin: Style.accountMenuHalfPadding
                            anchors.bottomMargin: Style.accountMenuHalfPadding
                            anchors.rightMargin: Style.accountMenuPadding
                            //font.wordSpacing:  45
                            text: "              " + (model.isConnected ? qsTr("Log out") : qsTr("Log in"))
                            font.family: "Segoe UI"
                            font.pixelSize: Style.topLinePixelSize
                            color: logoutButton.hovered ? Style.magenta : Style.nmcTextColor
                        }

                        horizontalPadding: Style.accountMenuPadding
                        rightPadding: Style.accountMenuHalfPadding
                        topPadding: Style.accountMenuHalfPadding
                        bottomPadding: Style.accountMenuHalfPadding
                        //spacing: -4

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
                        Accessible.onPressAction: {
                            if (UserModel.isConnected) {
                                UserModel.logout(index)
                            } else {
                                UserModel.login(index)
                            }
                        }
                    }

                    MenuItem {
                        id: removeAccountButton
                        display: AbstractButton.TextBesideIcon
                        hoverEnabled: true
                        icon.source: "qrc:///client/theme/black/delete.svg"
                        icon.color: removeAccountButton.hovered ? Style.magenta : Style.nmcTextColor

                        Text {
                            anchors.verticalCenter: parent.verticalCenter
                            anchors.leftMargin: Style.accountMenuHalfPadding
                            anchors.topMargin: Style.accountMenuHalfPadding
                            anchors.bottomMargin: Style.accountMenuHalfPadding
                            anchors.rightMargin: Style.accountMenuPadding
                            //font.wordSpacing:  45
                            text: qsTr("              " + "Remove account")
                            font.family: "Segoe UI"
                            font.pixelSize: Style.topLinePixelSize
                            color: removeAccountButton.hovered ? Style.magenta : Style.nmcTextColor
                        }

                        horizontalPadding: Style.accountMenuPadding
                        rightPadding: Style.accountMenuHalfPadding
                        topPadding: Style.accountMenuHalfPadding
                        bottomPadding: Style.accountMenuHalfPadding
                        //spacing: Style.accountMenuSpacing
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
            } //more button

        }

        Connections {
            target: UserModel
            onRefreshCurrentUserGui: {
                accountStateIndicator.source = model.isConnected
                        ? Style.stateOnlineImageSource
                        : Style.stateOfflineImageSource
            }
        }
}   // MenuItem userLine
