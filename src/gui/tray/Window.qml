import QtQml 2.12
import QtQml.Models 2.1
import QtQuick 2.15
import QtQuick.Window 2.3
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.2
import QtGraphicalEffects 1.0
import "../"

// Custom qml modules are in /theme (and included by resources.qrc)
import Style 1.0

import com.nextcloud.desktopclient 1.0


Window {
    id:         trayWindow

    width:      Style.trayWindowWidth
    height:     Style.trayWindowHeight
    color:      "transparent"
    flags:      Qt.Dialog | Qt.FramelessWindowHint


    readonly property int maxMenuHeight: Style.trayWindowHeight - Style.trayWindowHeaderHeight - 2 * Style.trayWindowBorderWidth

    Accessible.role: Accessible.Application
    Accessible.name: qsTr("Nextcloud desktop main dialog")

    Component.onCompleted: Systray.forceWindowInit(trayWindow)

    // Close tray window when focus is lost (e.g. click somewhere else on the screen)
    onActiveChanged: {
        if(!active) {
            trayWindow.hide();
            Systray.setClosed();
        }
    }

    onVisibleChanged: {
        currentAccountStateIndicator.source = ""
        currentAccountStateIndicator.source = UserModel.isUserConnected(UserModel.currentUserId)
                ? Style.stateOnlineImageSource
                : Style.stateOfflineImageSource

        // HACK: reload account Instantiator immediately by restting it - could be done better I guess
        // see also id:accountMenu below
        userLineInstantiator.active = false;
        userLineInstantiator.active = true;
        syncStatus.model.load();
    }


    Connections {
        target: UserModel
        onRefreshCurrentUserGui: {
            currentAccountStateIndicator.source = ""
            currentAccountStateIndicator.source = UserModel.isUserConnected(UserModel.currentUserId)
                    ? Style.stateOnlineImageSource
                    : Style.stateOfflineImageSource
        }
        onNewUserSelected: {
            accountMenu.close();
            syncStatus.model.load();
        }
    }

    Connections {
        target: Systray
        onShowWindow: {
            accountMenu.close();

            Systray.positionWindow(trayWindow);

            trayWindow.show();
            trayWindow.raise();
            trayWindow.requestActivate();

            Systray.setOpened();
            UserModel.fetchCurrentActivityModel();
        }
        onHideWindow: {
            trayWindow.hide();
            Systray.setClosed();
        }
    }

    OpacityMask {
        anchors.fill: parent
        source: ShaderEffectSource {
            sourceItem: trayWindowBackground
            hideSource: true
        }
        maskSource: Rectangle {
            width: trayWindowBackground.width
            height: trayWindowBackground.height
            radius: trayWindowBackground.radius
        }
    }

    Rectangle {
        id: trayWindowBackground
        objectName: "trayWindowBackground"

        anchors.fill:   parent
        radius:         Style.trayWindowRadius
        border.width:   Style.trayWindowBorderWidth
        border.color:   Style.menuBorder

        Accessible.role: Accessible.Grouping
        Accessible.name: qsTr("Nextcloud desktop main dialog")

        Rectangle {
            id: trayWindowMagentaBarBackground
            objectName: "trayWindowMagentaBarBackground"

            anchors.left:   trayWindowBackground.left
            anchors.right:  trayWindowBackground.right
            anchors.top:    trayWindowBackground.top
            height:         100
            color:          Style.magenta


            Rectangle {
                id: trayWindowTLogoBarBackground
                objectName: "trayWindowTLogoBarBackground"

                anchors.left:   trayWindowMagentaBarBackground.left
                anchors.right:  trayWindowMagentaBarBackground.right
                anchors.top:    trayWindowMagentaBarBackground.top
                height:         48
                color:          Style.magenta

                Rectangle {
                    id: trayWindowTLogoBarTopSpacer
                    objectName: "trayWindowTLogoBarTopSpacer"

                    anchors.left:   trayWindowTLogoBarBackground.left
                    anchors.right:  trayWindowTLogoBarBackground.right
                    anchors.top:    trayWindowTLogoBarBackground.top
                    height:         12
                    color:          Style.magenta
                }
                Rectangle {
                    id: trayWindowTLogoBarLeftSpacer
                    objectName: "trayWindowTLogoBarLeftSpacer"

                    anchors.left:   trayWindowTLogoBarBackground.left
                    anchors.top:    trayWindowTLogoBarTopSpacer.bottom
                    height:         38
                    width:          24
                    color:          Style.magenta
                }
                Image {
                    id: magentaTLogo
                    objectName: "magentaTLogo"

                    anchors.left:   trayWindowTLogoBarLeftSpacer.right
                    anchors.top:    trayWindowTLogoBarTopSpacer.bottom
                    cache: false
                    source: "qrc:///client/theme/magenta/logomc.svg"
                }
            }


            Rectangle {
                id: trayWindowHeaderBackground
                objectName: "trayWindowHeaderBackground"

                anchors.left:   trayWindowMagentaBarBackground.left
                anchors.right:  trayWindowMagentaBarBackground.right
                anchors.top:    trayWindowTLogoBarBackground.bottom
                height:         Style.trayWindowHeaderHeight
                radius:         10
                color:          "white"

                RowLayout {
                    id: trayWindowHeaderLayout
                    objectName: "trayWindowHeaderLayout"

                    spacing:        0
                    anchors.fill:   parent

                    Button {
                        id: currentAccountButton
                        objectName: "currentAccountButton"

                        Layout.preferredWidth:  Style.currentAccountButtonWidth
                        Layout.preferredHeight: Style.trayWindowHeaderHeight
                        display:                AbstractButton.IconOnly
                        flat:                   true

                        Accessible.role: Accessible.ButtonMenu
                        Accessible.name: qsTr("Current account")
                        Accessible.onPressAction: currentAccountButton.clicked()

                       /* MouseArea {
                            id: accountBtnMouseArea
                            objectName: "accountBtnMouseArea"

                            anchors.fill:   parent
                            hoverEnabled:   Style.hoverEffectsEnabled*/

                            // We call open() instead of popup() because we want to position it
                            // exactly below the dropdown button, not the mouse
                            onClicked: {

                                syncPauseButton.text = Systray.syncIsPaused() ? qsTr("Resume sync") : qsTr("Pause sync")
                                if (accountMenu.visible) {
                                    accountMenu.close()
                                } else {
                                    accountMenu.open()
                                }
                            }

                            Menu {
                                id: accountMenu
                                objectName: "accountMenu"

                                // x coordinate grows towards the right
                                // y coordinate grows towards the bottom
                                x: (currentAccountButton.x + 2)
                                y: (currentAccountButton.y + Style.trayWindowHeaderHeight - 6)

                                width: 230
                                height: Math.min(implicitHeight, maxMenuHeight)
                                closePolicy: Menu.CloseOnPressOutsideParent | Menu.CloseOnEscape

                                background: Rectangle {
                                    border.color: Style.menuBorder
                                    radius: Style.currentAccountButtonRadius
                                }

                                contentItem: ScrollView {
                                    id: accMenuScrollView
                                    ScrollBar.horizontal.policy: ScrollBar.AlwaysOff

                                    data: WheelHandler {
                                        target: accMenuScrollView.contentItem
                                    }
                                    ListView {
                                        implicitHeight: contentHeight
                                        model: accountMenu.contentModel
                                        interactive: true
                                        clip: true
                                        currentIndex: accountMenu.currentIndex
                                    }
                                }

                                Accessible.role: PopupMenu
                                Accessible.name: qsTr("Account switcher and settings menu")

                                onClosed: {
                                    // HACK: reload account Instantiator immediately by restting it - could be done better I guess
                                    // see also onVisibleChanged above
                                    userLineInstantiator.active = false;
                                    userLineInstantiator.active = true;
                                }

                                Loader {
                                    id: userStatusSelectorDialogLoader

                                    property int userIndex

                                    function openDialog(newUserIndex) {
                                        console.log(`About to show dialog for user with index ${newUserIndex}`);
                                        userIndex = newUserIndex;
                                        active = true;
                                        item.show();
                                    }

                                    active: false
                                    sourceComponent: UserStatusSelectorDialog {
                                        userIndex: userStatusSelectorDialogLoader.userIndex
                                    }

                                    onLoaded: {
                                        item.model.load(userIndex);
                                        item.show();
                                    }
                                }

                                Instantiator {
                                    id: userLineInstantiator
                                    model: UserModel
                                    delegate: UserLine {
                                        onShowUserStatusSelectorDialog: {
                                            userStatusSelectorDialogLoader.openDialog(model.index);
                                            accountMenu.close();
                                        }
                                    }
                                    onObjectAdded: accountMenu.insertItem(index, object)
                                    onObjectRemoved: accountMenu.removeItem(object)
                                }

                                MenuItem {
                                    id: addAccountButton
                                    height: Style.addAccountButtonHeight
                                    display: AbstractButton.TextBesideIcon
                                    hoverEnabled: true
                                    icon.source: "qrc:///client/theme/black/add.svg"
                                    icon.color: addAccountButton.hovered ? Style.magenta : Style.nmcTextColor

                                    Text {
                                        objectName: "addAccountButton"
                                        anchors.verticalCenter: parent.verticalCenter
                                        //font.wordSpacing:  45
                                        text:  qsTr("            "+"Add account")
                                        font.family: "Segoe UI"
                                        font.pixelSize: Style.topLinePixelSize
                                        color: parent.hovered ? Style.magenta : Style.nmcTextColor
                                    }

                                    background: Item {
                                        height: parent.height
                                        width: parent.menu.width
                                        Rectangle {
                                            anchors.fill: parent
                                            anchors.margins: 1
                                            color: parent.parent.hovered || parent.parent.visualFocus ? Style.lightHover : "transparent"
                                        }
                                    }
                                    horizontalPadding: Style.accountMenuPadding
                                    verticalPadding: Style.accountMenuHalfPadding
                                    spacing: 4
                                    onClicked: UserModel.addAccount()

                                    Accessible.role: Accessible.MenuItem
                                    Accessible.name: qsTr("Add new account")
                                    Accessible.onPressAction: addAccountButton.clicked()
                                }

                                MenuSeparator {
                                    contentItem: Rectangle {
                                        implicitHeight: 1
                                        color: Style.menuBorder
                                    }
                                }

                                MenuItem {
                                    id: syncPauseButton
                                    objectName: "syncPauseButton"
                                    //display: AbstractButton.TextBesideIcon
                                    display: AbstractButton.IconOnly
                                    hoverEnabled: true
                                    icon.source: "qrc:///client/theme/magenta/action/pause/default.png"
                                    icon.color: syncPauseButton.hovered ? Style.magenta : Style.nmcTextColor
                                    Text {
                                        objectName: "syncPauseButtonText"
                                        anchors.verticalCenter: parent.verticalCenter
                                        //font.wordSpacing:  45
                                        text: "            " + syncPauseButton.text
                                        font.family: "Segoe UI"
                                        font.pixelSize: Style.topLinePixelSize
                                        color: syncPauseButton.hovered ? Style.magenta : Style.nmcTextColor
                                    }

                                    horizontalPadding: Style.accountMenuPadding
                                    verticalPadding: Style.accountMenuHalfPadding
                                    spacing: Style.accountMenuSpacing
                                    onClicked: Systray.pauseResumeSync()

                                    background: Item {
                                        height: parent.height
                                        width: parent.menu.width
                                        Rectangle {
                                            anchors.fill: parent
                                            anchors.margins: 1
                                            color: parent.parent.hovered ? Style.lightHover : "transparent"
                                        }

                                    }

                                    Accessible.role: Accessible.MenuItem
                                    Accessible.name: Systray.syncIsPaused() ? qsTr("Resume sync") : qsTr("Pause sync")
                                    Accessible.onPressAction: syncPauseButton.clicked()
                                }

                                MenuItem {
                                    id: settingsButton
                                    objectName: "settingsButton"
                                    display: AbstractButton.TextBesideIcon
                                    hoverEnabled: true
                                    icon.source: "qrc:///client/theme/magenta/action/settings/default.png"
                                    icon.color: settingsButton.hovered ? Style.magenta : Style.nmcTextColor
                                    Text {
                                        objectName: "settingsButtonText"
                                        anchors.verticalCenter: parent.verticalCenter
                                        font.wordSpacing:  45
                                        text:  qsTr(" "+"Settings")
                                        font.family: "Segoe UI"
                                        font.pixelSize: Style.topLinePixelSize
                                        color: parent.hovered ? Style.magenta : Style.nmcTextColor
                                    }
                                    horizontalPadding: Style.accountMenuPadding
                                    verticalPadding: Style.accountMenuHalfPadding
                                    spacing: 4
                                    onClicked: Systray.openSettings()

                                    background: Item {
                                        height: parent.height
                                        width: parent.menu.width
                                        Rectangle {
                                            anchors.fill: parent
                                            anchors.margins: 1
                                            color: parent.parent.hovered ? Style.lightHover : "transparent"
                                        }
                                    }

                                    Accessible.role: Accessible.MenuItem
                                    Accessible.name: text
                                    Accessible.onPressAction: settingsButton.clicked()
                                }

                                MenuItem {
                                    id: exitButton
                                    objectName: "exitButton"
                                    display: AbstractButton.TextBesideIcon
                                    hoverEnabled: true
                                    icon.source: "qrc:///client/theme/magenta/action/circle-close/default.png"
                                    icon.color: exitButton.hovered ? Style.magenta : Style.nmcTextColor

                                    Text {
                                        objectName: "exitButtonText"
                                        anchors.verticalCenter: parent.verticalCenter
                                        anchors.bottomMargin: Style.accountMenuPadding
                                        font.wordSpacing:  45
                                        text:  qsTr(" "+"Exit")
                                        font.family: "Segoe UI"
                                        font.pixelSize: Style.topLinePixelSize
                                        color: parent.hovered ? Style.magenta : Style.nmcTextColor
                                    }
                                    horizontalPadding: Style.accountMenuPadding
                                    topPadding: Style.accountMenuHalfPadding
                                    //bottomPadding: Style.accountMenuPadding
                                    bottomPadding: Style.accountMenuHalfPadding
                                    spacing: 4
                                   // hoverEnabled: true
                                    onClicked: Systray.shutdown()

                                    background: Item {
                                        height: parent.height
                                        width: parent.menu.width
                                        Rectangle {
                                            anchors.fill: parent
                                            anchors.margins: 1
                                            color: parent.parent.hovered ? Style.lightHover : "transparent"
                                        }
                                    }

                                    Accessible.role: Accessible.MenuItem
                                    Accessible.name: text
                                    Accessible.onPressAction: exitButton.clicked()
                                }
                            }
                       // }

                       /* background: Rectangle {
                            color: accountBtnMouseArea.containsMouse ? "white" : "transparent"
                            opacity: 0.2
                        }*/

                        RowLayout {
                            id: accountControlRowLayout
                            objectName: "accountControlRowLayout"

                            height: Style.trayWindowHeaderHeight
                            spacing: 0

                            Image {
                                id: currentAccountAvatar
                                objectName: "currentAccountAvatar"

                                Layout.leftMargin: Style.accountMenuPadding
                                verticalAlignment: Qt.AlignCenter
                                cache: false
                                source: "qrc:///client/theme/magenta/user/default.png"
                                width: Style.headerButtonIconSize
                                height: Style.headerButtonIconSize

                                Layout.preferredHeight: Style.headerButtonIconSize
                                Layout.preferredWidth: Style.headerButtonIconSize

                                Accessible.role: Accessible.Graphic
                                Accessible.name: qsTr("Current user avatar")

                                Rectangle {
                                    id: currentAccountStateIndicatorBackground
                                    objectName: "currentAccountStateIndicatorBackground"
                                    width: Style.accountAvatarStateIndicatorSize + 2
                                    height: width
                                    anchors.bottom: currentAccountAvatar.bottom
                                    anchors.right: currentAccountAvatar.right
                                    color: "transparent"
                                    radius: width*0.5
                                }

                                Rectangle {
                                    width: Style.accountAvatarStateIndicatorSize + 2
                                    height: width
                                    anchors.bottom: currentAccountAvatar.bottom
                                    anchors.right: currentAccountAvatar.right
                                    color: accountBtnMouseArea.containsMouse ? "white" : "transparent"
                                    opacity: 0.2
                                    radius: width*0.5
                                }

                                Image {
                                    id: currentAccountStateIndicator
                                    objectName: "currentAccountStateIndicator"
                                    source: UserModel.isUserConnected(UserModel.currentUserId)
                                            ? Style.stateOnlineImageSource
                                            : Style.stateOfflineImageSource
                                    cache: false
                                    x: currentAccountStateIndicatorBackground.x
                                    y: currentAccountStateIndicatorBackground.y
                                    sourceSize.width: Style.accountAvatarStateIndicatorSize
                                    sourceSize.height: Style.accountAvatarStateIndicatorSize

                                    Accessible.role: Accessible.Indicator
                                    Accessible.name: UserModel.isUserConnected(UserModel.currentUserId()) ? qsTr("Connected") : qsTr("Disconnected")
                                }
                            }

                            Label {
                                id: currentAccountUser
                                objectName: "currentAccountUser"

                                Layout.leftMargin: 8
                                verticalAlignment: Qt.AlignCenter
                                Layout.maximumWidth: Style.accountLabelWidth
                                text: UserModel.currentUser.name
                                elide: Text.ElideRight
                                color: Style.nmcTextColor
                                font.family: "Segoe UI"
                                font.pixelSize: Style.topLinePixelSize
                            }


                            ColorOverlay {
                                cached: true
                                color: Style.nmcTextColor
                                width: source.width
                                height: source.height
                                source: Image {
                                    Layout.leftMargin: Style.accountMenuPadding
                                    Layout.topMargin: Style.accountMenuPadding
                                    Layout.bottomMargin: Style.accountMenuPadding
                                    verticalAlignment: Qt.AlignCenter
                                    Layout.margins: Style.accountDropDownCaretMargin
                                    source: "qrc:///client/theme/black/caret-down.svg"
                                    sourceSize.width: Style.accountDropDownCaretSize
                                    sourceSize.height: Style.accountDropDownCaretSize
                                }
                            }
                        }
                    }

                    // Filler between account dropdown and header app buttons
                    Item {
                        id: trayWindowHeaderSpacer
                        Layout.fillWidth: true
                    }
                    // Left fixed filler between header items
                    Item {
                        id: trayWindowHeaderLeftSpacer
                        Layout.preferredWidth: Style.headerSpacerSize
                    }

                    HeaderButton {
                        id: openAccountServerButton
                        objectName: "openAccountServerButton"
                        spacing: 0;
                        visible: true
                        icon.source: "qrc:///client/theme/magenta/news/default@svg.svg"
                        text: qsTr("Open website")
                        font.family: "Segoe UI"
                        font.pixelSize: 8
                        onClicked: UserModel.openCurrentAccountServer()

                        Accessible.role: Accessible.Button
                        Accessible.name: qsTr("Open website of current account")
                        Accessible.onPressAction: openAccountServerButton.clicked()
                    }

                    // Fixed filler between header buttons
                    Item {
                        id: trayWindowHeaderButtonSpacer
                        Layout.preferredWidth: Style.headerSpacerSize
                    }

                    HeaderButton {
                        id: openLocalFolderButton
                        objectName: "openLocalFolderButton"
                        spacing: 0
                        visible: UserModel.currentUser.hasLocalFolder
                        icon.source: "qrc:///client/theme/magenta/folder/default@svg.svg"
                        text: qsTr("Local folder")
                        font.family: "Segoe UI"
                        font.pixelSize: 8
                        onClicked: UserModel.openCurrentAccountLocalFolder()

                        Accessible.role: Accessible.Button
                        Accessible.name: qsTr("Open local folder of current account")
                        Accessible.onPressAction: openLocalFolderButton.clicked()
                    }


                    // Right fixed filler between header items
                    Item {
                        id: trayWindowHeaderRightSpacer
                        Layout.preferredWidth: Style.headerSpacerSize
                    }

                }
            }   // Rectangle trayWindowHeaderBackground

        }

       /* Rectangle {
            id: trayWindowGradientBarBackground

            anchors.left:   trayWindowBackground.left
            anchors.right:  trayWindowBackground.right
            anchors.top:    trayWindowMagentaBarBackground.bottom
            height:         1
            gradient: Gradient {
                GradientStop { position: 0.0; color: "gray" }
                GradientStop { position: 10; color: "#e5e5e5" }
            }
            opacity: 1.0
        }*/
        MenuSeparator {
            id: trayWindowGradientBarBackground
            objectName: "trayWindowGradientBarBackground"
            padding: 0
            topPadding: 108
            bottomPadding: 8
            contentItem: Rectangle {
                implicitWidth: 380
                implicitHeight: 1
                color: "#e5e5e5"
            }
        }
        SyncStatus {
            id: syncStatus

            visible: !trayWindowBackground.isUnifiedSearchActive

            anchors.top: trayWindowGradientBarBackground.bottom
            anchors.left: trayWindowBackground.left
            anchors.right: trayWindowBackground.right
        }


        ListView {
            id: activityListView
            anchors.top: syncStatus.bottom
            anchors.left: trayWindowBackground.left
            anchors.right: trayWindowBackground.right
            anchors.bottom: trayWindowBackground.bottom
            clip: true
            ScrollBar.vertical: ScrollBar {
                id: listViewScrollbar
            }

            readonly property int maxActionButtons: 2

            keyNavigationEnabled: true

            Accessible.role: Accessible.List
            Accessible.name: qsTr("Activity list")

            model: activityModel

            delegate: RowLayout {
                id: activityItem

                readonly property variant links: model.links

                readonly property int itemIndex: model.index

                width: parent.width
                height: Style.trayWindowHeaderHeight
                anchors.rightMargin: 16
                spacing: 8

                Accessible.role: Accessible.ListItem
                Accessible.name: path !== "" ? qsTr("Open %1 locally").arg(displayPath)
                                             : message
                Accessible.onPressAction: activityMouseArea.clicked()

                MouseArea {
                    id: activityMouseArea
                    enabled: (path !== "" || link !== "")
                    anchors.left: activityItem.left
                    anchors.right: activityItem.right
                    height: parent.height
                    anchors.rightMargin: 16
                    hoverEnabled: true
                    onClicked: activityModel.triggerDefaultAction(model.index)

                    Rectangle {
                        id: listItemBackground
                        anchors.fill: parent
                        color: ((parent.containsMouse /*|| shareButton.hovered*/) ? Style.lightHover : "transparent")
                    }
                }

                Image {
                    id: activityIcon
                    anchors.left: activityItem.left
                    anchors.leftMargin: 16
                    anchors.rightMargin: 8
                    Layout.preferredWidth: Style.headerButtonIconSize
                    Layout.preferredHeight: Style.headerButtonIconSize
                    verticalAlignment: Qt.AlignCenter
                    cache: true
                    source: icon
                    sourceSize.height: 64
                    sourceSize.width: 64
                }

                Column {
                    id: activityTextColumn
                    anchors.left: activityIcon.right
                    anchors.right: activityActionsLayout.left
                    anchors.leftMargin: 8
                    spacing: 4
                    Layout.alignment: Qt.AlignLeft
                    Text {
                        id: activityTextTitle
                        text: (type === "Activity" || type === "Notification") ? subject : message
                        width: parent.width
                        elide: Text.ElideRight
                        font.pixelSize: Style.topLinePixelSize
                        color: activityTextTitleColor
                    }

                    Text {
                        id: activityTextInfo
                        text: (type === "Sync") ? displayPath
                            : (type === "File") ? subject
                            : (type === "Notification") ? message
                            : ""
                        height: (text === "") ? 0 : activityTextTitle.height
                        width: parent.width
                        elide: Text.ElideRight
                        font.pixelSize: Style.subLinePixelSize
                    }

                    Text {
                        id: activityTextDateTime
                        text: dateTime
                        height: (text === "") ? 0 : activityTextTitle.height
                        width: parent.width
                        elide: Text.ElideRight
                        font.pixelSize: Style.subLinePixelSize
                        color: "#808080"
                    }

                    ToolTip {
                        id: toolTip
                        visible: activityMouseArea.containsMouse
                        text: activityTextTitle.text + ((activityTextInfo.text !== "") ? "\n\n" + activityTextInfo.text : "")
                        delay: 250
                        timeout: 10000
                        // Can be dropped on more recent Qt, but on 5.12 it doesn't wrap...
                        contentItem: Text {
                            text: toolTip.text
                            font: toolTip.font
                            wrapMode: Text.Wrap
                            color: toolTip.palette.toolTipText
                        }
                    }
                }
                RowLayout {
                    id: activityActionsLayout
                    anchors.right: activityItem.right
                    spacing: 0
                    Layout.alignment: Qt.AlignRight
                    width: 16
                    height: 60

                    Rectangle {
                        id: activityActionsLayoutSpacer
                        width: 16
                        height: 60
                        visible: (path !== "" && (activityMouseArea.containsMouse /*|| shareButton.hovered*/)) ? false : true
                        color: activityMouseArea.containsMouse ? Style.lightHover : "transparent"
                    }
                    /*Button {
                        id: shareButton

                        Layout.preferredWidth: (path === "") ? 0 : parent.height
                        Layout.preferredHeight: parent.height
                        Layout.alignment: Qt.AlignRight
                        flat: true
                        hoverEnabled: true
                        visible: (path !== "" && (activityMouseArea.containsMouse || shareButton.hovered)) ? true : false
                        display: AbstractButton.IconOnly
                        icon.source: "qrc:///client/theme/magenta/share/default.png"
                        icon.color: shareButton.hovered ? Style.magenta : "transparent"
                        background: Rectangle {
                            color: parent.hovered ? Style.lightHover : "transparent"
                        }
                        ToolTip.visible: hovered
                        ToolTip.delay: 1000
                        ToolTip.text: qsTr("Open share dialog")
                        onClicked: Systray.openShareDialog(displayPath,absolutePath)

                        Accessible.role: Accessible.Button
                        Accessible.name: qsTr("Share %1").arg(displayPath)
                        Accessible.onPressAction: shareButton.clicked()
                    }*/
                }
            }

        }

    }       // Rectangle trayWindowBackground
}
