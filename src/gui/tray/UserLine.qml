import QtQuick 2.9
import QtQuick.Window 2.3
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.2

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
            spacing: 0
            width: Style.accountMenuWidth
            height: parent.height

            Button {
                id: accountButton
                Layout.preferredWidth: (userLineLayout.width * (5/6))
                Layout.preferredHeight: (userLineLayout.height)
                display: AbstractButton.IconOnly
                hoverEnabled: true
                flat: true

                Accessible.role: Accessible.Button
                Accessible.name: model.isConnected ? qsTr("Log out") : qsTr("Log in")
                Accessible.onPressAction: {
                    if (UserModel.isConnected) {
                        UserModel.logout(index)
                    } else {
                        UserModel.login(index)
                    }
                }

                MouseArea {
                    anchors.fill: parent
                    hoverEnabled: true
                    onContainsMouseChanged: {
                        accountStateIndicatorBackground.color = (containsMouse ? "#f6f6f6" : "white")
                    }
                    onClicked: {
                        model.isConnected ? UserModel.logout(index) : UserModel.login(index)
                        accountMenu.close()
                    }
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
                    height: accountButton.height
                    width: accountButton.width
                    spacing: 0
                    Image {
                        id: accountAvatar
                        Layout.topMargin: Style.accountMenuPadding
                        Layout.leftMargin: Style.accountMenuPadding
                        Layout.rightMargin: 0
                        Layout.bottomMargin: Style.accountMenuHalfPadding
                        verticalAlignment: Qt.AlignCenter
                        cache: false
                        source: "qrc:///client/theme/magenta/action/logout/default.png"
                        Layout.preferredHeight: Style.headerButtonIconSize
                        Layout.preferredWidth: Style.headerButtonIconSize
                    }

                    Column {
                        id: accountLabels
                        spacing: 0
                        Layout.alignment: Qt.AlignLeft
                        Layout.leftMargin: Style.accountMenuHalfPadding

                        Label {
                            id: accountUser
                            width: (Style.accountMenuWidth - Style.headerButtonIconSize - Style.accountMenuHalfPadding)

                            text: model.isConnected ? qsTr("Log out") : qsTr("Log in")

                            elide: Text.ElideRight
                            color: hovered ? Style.magenta : Style.nmcTextColor
                            font.family: "Segoe UI"
                            font.pixelSize: Style.topLinePixelSize
                        }
                    }
                }
            } // accountButton

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
