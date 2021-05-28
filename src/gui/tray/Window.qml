import QtQml 2.1
import QtQml.Models 2.1
import QtQuick 2.9
import QtQuick.Window 2.3
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.2
import QtGraphicalEffects 1.0

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
        }
    }

    Connections {
        target: Systray
        onShowWindow: {
            accountMenu.close();
            appsMenu.close();

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

        anchors.fill:   parent
        radius:         Style.trayWindowRadius
        border.width:   Style.trayWindowBorderWidth
        border.color:   Style.menuBorder

        Accessible.role: Accessible.Grouping
        Accessible.name: qsTr("Nextcloud desktop main dialog")

        Rectangle {
            id: trayWindowMagentaBarBackground

            anchors.left:   trayWindowBackground.left
            anchors.right:  trayWindowBackground.right
            anchors.top:    trayWindowBackground.top
            height:         100
            color:          Style.magenta


            Rectangle {
                id: trayWindowTLogoBarBackground

                anchors.left:   trayWindowMagentaBarBackground.left
                anchors.right:  trayWindowMagentaBarBackground.right
                anchors.top:    trayWindowMagentaBarBackground.top
                height:         48
                color:          Style.magenta

                Image {
                    id: magentaTLogo

                    cache: false
                    source: "qrc:///client/theme/magenta/logo.png"
                    anchors.fill: parent
                }
            }


            Rectangle {
                id: trayWindowHeaderBackground

                anchors.left:   trayWindowMagentaBarBackground.left
                anchors.right:  trayWindowMagentaBarBackground.right
                anchors.top:    trayWindowTLogoBarBackground.bottom
                height:         Style.trayWindowHeaderHeight
                radius:         10
                color:          "white"

                RowLayout {
                    id: trayWindowHeaderLayout

                    spacing:        0
                    anchors.fill:   parent

                    Button {
                        id: currentAccountButton

                        Layout.preferredWidth:  Style.currentAccountButtonWidth
                        Layout.preferredHeight: Style.trayWindowHeaderHeight
                        display:                AbstractButton.IconOnly
                        flat:                   true

                        Accessible.role: Accessible.ButtonMenu
                        Accessible.name: qsTr("Current account")
                        Accessible.onPressAction: currentAccountButton.clicked()

                        MouseArea {
                            id: accountBtnMouseArea

                            anchors.fill:   parent
                            hoverEnabled:   Style.hoverEffectsEnabled

                            // We call open() instead of popup() because we want to position it
                            // exactly below the dropdown button, not the mouse
                            onClicked: {
                                syncPauseButton.text = Systray.syncIsPaused() ? qsTr("Resume sync for all") : qsTr("Pause sync for all")
                                if (accountMenu.visible) {
                                    accountMenu.close()
                                } else {
                                    accountMenu.open()
                                }
                            }

                            Menu {
                                id: accountMenu

                                // x coordinate grows towards the right
                                // y coordinate grows towards the bottom
                                x: (currentAccountButton.x + 2)
                                y: (currentAccountButton.y + Style.trayWindowHeaderHeight + 2)

                                width: (Style.currentAccountButtonWidth - 2)
                                height: Math.min(implicitHeight, maxMenuHeight)
                                closePolicy: Menu.CloseOnPressOutsideParent | Menu.CloseOnEscape

                                background: Rectangle {
                                    border.color: Style.menuBorder
                                    radius: Style.currentAccountButtonRadius
                                }

                                Accessible.role: PopupMenu
                                Accessible.name: qsTr("Account switcher and settings menu")

                                onClosed: {
                                    // HACK: reload account Instantiator immediately by restting it - could be done better I guess
                                    // see also onVisibleChanged above
                                    userLineInstantiator.active = false;
                                    userLineInstantiator.active = true;
                                }

                                Instantiator {
                                    id: userLineInstantiator
                                    model: UserModel
                                    delegate: UserLine {}
                                    onObjectAdded: accountMenu.insertItem(index, object)
                                    onObjectRemoved: accountMenu.removeItem(object)
                                }

                                /*MenuItem {
                                    id: addAccountButton
                                    height: Style.addAccountButtonHeight
                                    hoverEnabled: true

                                    background: Item {
                                        height: parent.height
                                        width: parent.menu.width
                                        Rectangle {
                                            anchors.fill: parent
                                            anchors.margins: 1
                                            color: parent.parent.hovered ? Style.lightHover : "transparent"
                                        }
                                    }

                                    RowLayout {
                                        anchors.fill: parent
                                        spacing: 0

                                        Image {
                                            Layout.leftMargin: 12
                                            verticalAlignment: Qt.AlignCenter
                                            source: "qrc:///client/theme/black/add.svg"
                                            sourceSize.width: Style.headerButtonIconSize
                                            sourceSize.height: Style.headerButtonIconSize
                                        }
                                        Label {
                                            Layout.leftMargin: 14
                                            text: qsTr("Add account")
                                            color: Style.nmcTextColor
                                            font.family: "Segoe UI"
                                            font.pixelSize: Style.topLinePixelSize
                                        }
                                        // Filler on the right
                                        Item {
                                            Layout.fillWidth: true
                                            Layout.fillHeight: true
                                        }
                                    }
                                    onClicked: UserModel.addAccount()

                                    Accessible.role: Accessible.MenuItem
                                    Accessible.name: qsTr("Add new account")
                                    Accessible.onPressAction: addAccountButton.clicked()
                                }*/

                                MenuSeparator {
                                    contentItem: Rectangle {
                                        implicitHeight: 1
                                        color: Style.menuBorder
                                    }
                                }

                                MenuItem {
                                    id: syncPauseButton
                                    font.family: "Segoe UI"
                                    font.pixelSize: Style.topLinePixelSize
                                    hoverEnabled: true
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
                                    Accessible.name: Systray.syncIsPaused() ? qsTr("Resume sync for all") : qsTr("Pause sync for all")
                                    Accessible.onPressAction: syncPauseButton.clicked()
                                }

                                MenuItem {
                                    id: settingsButton
                                    text: qsTr("Settings")
                                    font.family: "Segoe UI"
                                    font.pixelSize: Style.topLinePixelSize

                                    hoverEnabled: true
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
                                    text: qsTr("Exit");
                                    font.family: "Segoe UI"
                                    font.pixelSize: Style.topLinePixelSize
                                    hoverEnabled: true
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
                        }

                        background: Rectangle {
                            color: accountBtnMouseArea.containsMouse ? "white" : "transparent"
                            opacity: 0.2
                        }

                        RowLayout {
                            id: accountControlRowLayout

                            height: Style.trayWindowHeaderHeight
                            width:  Style.currentAccountButtonWidth
                            spacing: 0

                            Image {
                                id: currentAccountAvatar

                                Layout.leftMargin: 16
                                verticalAlignment: Qt.AlignCenter
                                cache: false
                                source: "qrc:///client/theme/magenta/user/default.png"
                                width: 24
                                height: 24

                                Layout.preferredHeight: 24//Style.accountAvatarSize
                                Layout.preferredWidth: 24//Style.accountAvatarSize

                                Accessible.role: Accessible.Graphic
                                Accessible.name: qsTr("Current user avatar")

                                Rectangle {
                                    id: currentAccountStateIndicatorBackground
                                    width: Style.accountAvatarStateIndicatorSize + 2
                                    height: width
                                    anchors.bottom: currentAccountAvatar.bottom
                                    anchors.right: currentAccountAvatar.right
                                    color: Style.ncBlue
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
                                    source: UserModel.isUserConnected(UserModel.currentUserId)
                                            ? Style.stateOnlineImageSource
                                            : Style.stateOfflineImageSource
                                    cache: false
                                    x: currentAccountStateIndicatorBackground.x + 1
                                    y: currentAccountStateIndicatorBackground.y + 1
                                    sourceSize.width: Style.accountAvatarStateIndicatorSize
                                    sourceSize.height: Style.accountAvatarStateIndicatorSize

                                    Accessible.role: Accessible.Indicator
                                    Accessible.name: UserModel.isUserConnected(UserModel.currentUserId()) ? qsTr("Connected") : qsTr("Disconnected")
                                }
                            }

                            Label {
                                id: currentAccountUser

                                //width: 88//Math.min(hiddenText.implicitWidth, 88)//Style.currentAccountLabelWidth
                                Layout.leftMargin: 6
                                Layout.maximumWidth: 100
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
                                    Layout.alignment: Qt.AlignRight
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
                        Layout.preferredWidth: 16
                    }

                    HeaderButton {
                        id: openAccountServerButton

                        visible: true    //UserModel.currentUser.currentUserServer() !== ""
                        icon.source: "qrc:///client/theme/magenta/news/default@svg.svg"
                        text: "Webseite öffnen"
                        onClicked: UserModel.openCurrentAccountServer()

                        Accessible.role: Accessible.Button
                        Accessible.name: qsTr("Open website of current account")
                        Accessible.onPressAction: openAccountServerButton.clicked()
                    }

                    // Fixed filler between header buttons
                    Item {
                        id: trayWindowHeaderButtonSpacer
                        Layout.preferredWidth: 16
                    }

                    HeaderButton {
                        id: openLocalFolderButton

                        visible: UserModel.currentUser.hasLocalFolder
                        icon.source: "qrc:///client/theme/magenta/folder/default@svg.svg"
                        text: "Ordner öffnen"
                        onClicked: UserModel.openCurrentAccountLocalFolder()

                        Accessible.role: Accessible.Button
                        Accessible.name: qsTr("Open local folder of current account")
                        Accessible.onPressAction: openLocalFolderButton.clicked()
                    }
/*
                    HeaderButton {
                        id: trayWindowTalkButton

                        visible: UserModel.currentUser.serverHasTalk
                        icon.source: "qrc:///client/theme/white/talk-app.svg"
                        onClicked: UserModel.openCurrentAccountTalk()

                        Accessible.role: Accessible.Button
                        Accessible.name: qsTr("Open Nextcloud Talk in browser")
                        Accessible.onPressAction: trayWindowTalkButton.clicked()
                    }
*/

                    HeaderButton {
                        id: trayWindowAppsButton

                        visible: false
                        icon.source: "qrc:///client/theme/white/more-apps.svg"
                        onClicked: {
                            if(appsMenu.count <= 0) {
                                UserModel.openCurrentAccountServer()
                            } else if (appsMenu.visible) {
                                appsMenu.close()
                            } else {
                                appsMenu.open()
                            }
                        }

                        Accessible.role: Accessible.ButtonMenu
                        Accessible.name: qsTr("More apps")
                        Accessible.onPressAction: trayWindowAppsButton.clicked()

                        Menu {
                            id: appsMenu
                            y: (trayWindowAppsButton.y + trayWindowAppsButton.height + 2)
                            readonly property Item listContentItem: contentItem.contentItem
                            width: Math.min(listContentItem.childrenRect.width + 4, Style.trayWindowWidth / 2)
                            height: Math.min(implicitHeight, maxMenuHeight)
                            closePolicy: Menu.CloseOnPressOutsideParent | Menu.CloseOnEscape

                            background: Rectangle {
                                border.color: Style.menuBorder
                                radius: 2
                            }

                            Accessible.role: Accessible.PopupMenu
                            Accessible.name: qsTr("Apps menu")

                            Instantiator {
                                id: appsMenuInstantiator
                                model: UserAppsModel
                                onObjectAdded: appsMenu.insertItem(index, object)
                                onObjectRemoved: appsMenu.removeItem(object)
                                delegate: MenuItem {
                                    id: appEntry
                                    text: appName
                                    font.pixelSize: Style.topLinePixelSize
                                    icon.source: appIconUrl
                                    width: contentItem.implicitWidth + leftPadding + rightPadding
                                    onTriggered: UserAppsModel.openAppUrl(appUrl)
                                    hoverEnabled: true

                                    background: Item {
                                        width: appsMenu.width
                                        height: parent.height

                                        Rectangle {
                                            anchors.fill: parent
                                            anchors.margins: 1
                                            color: appEntry.hovered ? Style.lightHover : "transparent"
                                        }
                                    }

                                    Accessible.role: Accessible.MenuItem
                                    Accessible.name: qsTr("Open %1 in browser").arg(appName)
                                    Accessible.onPressAction: appEntry.triggered()
                                }
                            }
                        }
                    }

                    // Right fixed filler between header items
                    Item {
                        id: trayWindowHeaderRightSpacer
                        Layout.preferredWidth: 16
                    }

                }
            }   // Rectangle trayWindowHeaderBackground

        }

        Rectangle {
            id: trayWindowGradientBarBackground

            anchors.left:   trayWindowBackground.left
            anchors.right:  trayWindowBackground.right
            anchors.top:    trayWindowMagentaBarBackground.bottom
            height:         8
            gradient: Gradient {
                GradientStop { position: 0.0; color: "black" }
                GradientStop { position: 1.0; color: "white" }
            }
            opacity: 0.1
        }

        ListView {
            id: activityListView
            anchors.top: trayWindowGradientBarBackground.bottom
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
                spacing: 0

                Accessible.role: Accessible.ListItem
                Accessible.name: path !== "" ? qsTr("Open %1 locally").arg(displayPath)
                                             : message
                Accessible.onPressAction: activityMouseArea.clicked()

                MouseArea {
                    id: activityMouseArea
                    enabled: (path !== "" || link !== "")
                    anchors.left: activityItem.left
                    anchors.right: activityActionsLayout.right
                    height: parent.height
                    anchors.margins: 2
                    hoverEnabled: true
                    onClicked: activityModel.triggerDefaultAction(model.index)

                    Rectangle {
                        anchors.fill: parent
                        color: (parent.containsMouse ? Style.lightHover : "transparent")
                    }
                }

                Image {
                    id: activityIcon
                    anchors.left: activityItem.left
                    anchors.leftMargin: 8
                    anchors.rightMargin: 8
                    Layout.preferredWidth: 24//shareButton.icon.width
                    Layout.preferredHeight: 24//shareButton.icon.height
                    verticalAlignment: Qt.AlignCenter
                    cache: true
                    source: icon
                    sourceSize.height: 64
                    sourceSize.width: 64
                }

                Column {
                    id: activityTextColumn
                    anchors.left: activityIcon.right
                    anchors.right: parent.right//activityActionsLayout.left
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
                /*RowLayout {
                    id: activityActionsLayout
                    anchors.right: activityItem.right
                    spacing: 0
                    Layout.alignment: Qt.AlignRight

                    function actionButtonIcon(actionIndex) {
                        const verb = String(model.links[actionIndex].verb);
                        if (verb === "WEB" && (model.objectType === "chat" || model.objectType === "call")) {
                            return "qrc:///client/theme/reply.svg";
                        } else if (verb === "DELETE") {
                            return "qrc:///client/theme/close.svg";
                        }

                        return "qrc:///client/theme/confirm.svg";
                    }

                    Repeater {
                        model: activityItem.links.length > activityListView.maxActionButtons ? 1 : activityItem.links.length

                        ActivityActionButton {
                            id: activityActionButton

                            readonly property int actionIndex: model.index
                            readonly property bool primary: model.index === 0 && String(activityItem.links[actionIndex].verb) !== "DELETE"

                            height: activityItem.height

                            text: !primary ? "" : activityItem.links[actionIndex].label

                            imageSource: !primary ? activityActionsLayout.actionButtonIcon(actionIndex) : ""

                            textColor: primary ? Style.ncBlue : "black"
                            textColorHovered: Style.lightHover

                            textBorderColor: Style.ncBlue

                            textBgColor: "transparent"
                            textBgColorHovered: Style.ncBlue

                            tooltipText: activityItem.links[actionIndex].label

                            Layout.minimumWidth: primary ? 80 : -1
                            Layout.minimumHeight: parent.height

                            Layout.preferredWidth: primary ? -1 : parent.height

                            onClicked: activityModel.triggerAction(activityItem.itemIndex, actionIndex)
                        }

                    }

                    Button {
                        id: moreActionsButton

                        Layout.preferredWidth: parent.height
                        Layout.preferredHeight: parent.height
                        Layout.alignment: Qt.AlignRight

                        flat: true
                        hoverEnabled: true
                        visible: activityItem.links.length > activityListView.maxActionButtons
                        display: AbstractButton.IconOnly
                        icon.source: "qrc:///client/theme/more.svg"
                        icon.color: "transparent"
                        background: Rectangle {
                            color: parent.hovered ? Style.lightHover : "transparent"
                        }
                        ToolTip.visible: hovered
                        ToolTip.delay: 1000
                        ToolTip.text: qsTr("Show more actions")

                        Accessible.role: Accessible.Button
                        Accessible.name: qsTr("Show more actions")
                        Accessible.onPressAction: moreActionsButton.clicked()

                        onClicked:  moreActionsButtonContextMenu.popup();

                        Connections {
                            target: trayWindow
                            onActiveChanged: {
                                if (!trayWindow.active) {
                                    moreActionsButtonContextMenu.close();
                                }
                            }
                        }

                        Connections {
                            target: activityListView

                            onMovementStarted: {
                                moreActionsButtonContextMenu.close();
                            }
                        }

                        Container {
                            id: moreActionsButtonContextMenuContainer
                            visible: moreActionsButtonContextMenu.opened

                            width: moreActionsButtonContextMenu.width
                            height: moreActionsButtonContextMenu.height
                            anchors.right: moreActionsButton.right
                            anchors.top: moreActionsButton.top

                            Menu {
                                id: moreActionsButtonContextMenu
                                anchors.centerIn: parent

                                // transform model to contain indexed actions with primary action filtered out
                                function actionListToContextMenuList(actionList) {
                                    // early out with non-altered data
                                    if (activityItem.links.length <= activityListView.maxActionButtons) {
                                        return actionList;
                                    }

                                    // add index to every action and filter 'primary' action out
                                    var reducedActionList = actionList.reduce(function(reduced, action, index) {
                                        if (!action.primary) {
                                           var actionWithIndex = { actionIndex: index, label: action.label };
                                           reduced.push(actionWithIndex);
                                        }
                                        return reduced;
                                    }, []);


                                    return reducedActionList;
                                }

                                Repeater {
                                    id: moreActionsButtonContextMenuRepeater

                                    model: moreActionsButtonContextMenu.actionListToContextMenuList(activityItem.links)

                                    delegate: MenuItem {
                                        id: moreActionsButtonContextMenuEntry
                                        readonly property int actionIndex: model.modelData.actionIndex
                                        readonly property string label: model.modelData.label
                                        text: label
                                        onTriggered: activityModel.triggerAction(activityItem.itemIndex, actionIndex)
                                    }
                                }
                            }
                        }
                    }

                    Button {
                        id: shareButton

                        Layout.preferredWidth: (path === "") ? 0 : parent.height
                        Layout.preferredHeight: parent.height
                        Layout.alignment: Qt.AlignRight
                        flat: true
                        hoverEnabled: true
                        visible: (path === "") ? false : true
                        display: AbstractButton.IconOnly
                        icon.source: "qrc:///client/theme/share.svg"
                        icon.color: "transparent"
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
                    }
                }*/
            }

            /*add: Transition {
                NumberAnimation { properties: "y"; from: -60; duration: 100; easing.type: Easing.Linear }
            }

            remove: Transition {
                NumberAnimation { property: "opacity"; from: 1.0; to: 0; duration: 100 }
            }

            removeDisplaced: Transition {
                SequentialAnimation {
                    PauseAnimation { duration: 100}
                    NumberAnimation { properties: "y"; duration: 100; easing.type: Easing.Linear }
                }
            }

            displaced: Transition {
                NumberAnimation { properties: "y"; duration: 100; easing.type: Easing.Linear }
            }*/
        }

    }       // Rectangle trayWindowBackground
}
