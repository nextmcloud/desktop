/*
 * Copyright (C) 2020 by Dominique Fuchs <32204802+DominiqueFuchs@users.noreply.github.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

import QtQml
import QtQuick
import QtQuick.Controls
import QtQuick.Window
import QtQuick.Layouts
import Qt5Compat.GraphicalEffects
import Qt.labs.platform as NativeDialogs

import "../"
import "../filedetails/"
import "../nmcgui"

// Custom qml modules are in /theme (and included by resources.qrc)
import Style

import com.nextcloud.desktopclient

ApplicationWindow {
    id:         trayWindow

    title:      Systray.windowTitle
    // If the main dialog is displayed as a regular window we want it to be quadratic
    width:      Systray.useNormalWindow ? Style.trayWindowHeight : Style.trayWindowWidth
    height:     Style.trayWindowHeight
    flags:      Systray.useNormalWindow ? Qt.Window : Qt.Dialog | Qt.FramelessWindowHint
    color: 'transparent'

    readonly property int maxMenuHeight: Style.trayWindowHeight - Style.trayWindowHeaderHeight - 2 * Style.trayWindowBorderWidth

    Component.onCompleted: Systray.forceWindowInit(trayWindow)

    // Close tray window when focus is lost (e.g. click somewhere else on the screen)
    onActiveChanged: {
        if (!Systray.useNormalWindow && !active) {
            hide();
            Systray.isOpen = false;
        }
    }

    onClosing: Systray.isOpen = false

    onVisibleChanged: {
        // HACK: reload account Instantiator immediately by restting it - could be done better I guess
        // see also id:accountMenu below
        userLineInstantiator.active = false;
        userLineInstantiator.active = true;
        syncStatus.model.load();
    }

    background: Rectangle {
        radius: Systray.useNormalWindow ? 0.0 : Style.trayWindowRadius
        border.width: Style.trayWindowBorderWidth
        border.color: palette.dark
        color: palette.window
    }

    Connections {
        target: UserModel
        function onCurrentUserChanged() {
            accountMenu.close();
            syncStatus.model.load();
        }
    }

    Component {
        id: errorMessageDialog

        NativeDialogs.MessageDialog {
            id: dialog

            title: Systray.windowTitle

            onAccepted: destroy()
            onRejected: destroy()
        }
    }

    Connections {
        target: Systray

        function onIsOpenChanged() {
            userStatusDrawer.close()
            fileDetailsDrawer.close();

            if(Systray.isOpen) {
                accountMenu.close();
                appsMenu.close();
                openLocalFolderButton.closeMenu()
            }
        }

        function onShowErrorMessageDialog(error) {
            var newErrorDialog = errorMessageDialog.createObject(trayWindow)
            newErrorDialog.text = error
            newErrorDialog.open()
        }

        function onShowFileDetails(accountState, localPath, fileDetailsPage) {
            fileDetailsDrawer.openFileDetails(accountState, localPath, fileDetailsPage);
        }
    }

    OpacityMask {
        anchors.fill: parent
        anchors.margins: Style.trayWindowBorderWidth
        source: ShaderEffectSource {
            sourceItem: trayWindowMainItem
            hideSource: true
        }
        maskSource: Rectangle {
            width: trayWindow.width
            height: trayWindow.height
            radius: Systray.useNormalWindow ? 0.0 : Style.trayWindowRadius
        }
    }

    Drawer {
        id: userStatusDrawer
        width: parent.width
        height: parent.height - Style.trayDrawerMargin
        padding: 0
        edge: Qt.BottomEdge
        modal: true
        visible: false

        background: Rectangle {
            radius: Systray.useNormalWindow ? 0.0 : Style.trayWindowRadius
            border.width: Style.trayWindowBorderWidth
            border.color: palette.dark
            color: palette.window
        }

        property int userIndex: 0

        function openUserStatusDrawer(index) {
            console.log(`About to show dialog for user with index ${index}`);
            userIndex = index;
            open();
        }

        Loader {
            id: userStatusContents
            anchors.fill: parent
            active: userStatusDrawer.visible
            sourceComponent: UserStatusSelectorPage {
                anchors.fill: parent
                userIndex: userStatusDrawer.userIndex
                onFinished: userStatusDrawer.close()
            }
        }
    }

    Drawer {
        id: fileDetailsDrawer
        width: parent.width - Style.trayDrawerMargin
        height: parent.height
        padding: 0
        edge: Qt.RightEdge
        modal: true
        visible: false
        clip: true

        background: Rectangle {
            radius: Systray.useNormalWindow ? 0.0 : Style.trayWindowRadius
            border.width: Style.trayWindowBorderWidth
            border.color: palette.dark
            color: palette.window
        }

        property var folderAccountState: ({})
        property string fileLocalPath: ""
        property var pageToShow: Systray.FileDetailsPage.Activity

        function openFileDetails(accountState, localPath, fileDetailsPage) {
            console.log(`About to show file details view in tray for ${localPath}`);
            folderAccountState = accountState;
            fileLocalPath = localPath;
            pageToShow = fileDetailsPage;

            if(!opened) {
                open();
            }
        }

        Loader {
            id: fileDetailsContents
            anchors.fill: parent
            active: fileDetailsDrawer.visible
            onActiveChanged: {
                if (active) {
                    Systray.showFileDetailsPage(fileDetailsDrawer.fileLocalPath,
                                                fileDetailsDrawer.pageToShow);
                }
            }
            sourceComponent: FileDetailsView {
                id: fileDetails

                width: parent.width
                height: parent.height

                backgroundsVisible: false
                accentColor: Style.currentUserHeaderColor
                accountState: fileDetailsDrawer.folderAccountState
                localPath: fileDetailsDrawer.fileLocalPath
                showCloseButton: true

                onCloseButtonClicked: fileDetailsDrawer.close()
            }
        }
    }

    Item {
        id: trayWindowMainItem

        property bool isUnifiedSearchActive: unifiedSearchResultsListViewSkeletonLoader.active
                                             || unifiedSearchResultNothingFound.visible
                                             || unifiedSearchResultsErrorLabel.visible
                                             || unifiedSearchResultsListView.visible

        anchors.fill: parent
        anchors.margins: Style.trayWindowBorderWidth
        clip: true

        Accessible.role: Accessible.Grouping
        Accessible.name: qsTr("Nextcloud desktop main dialog")

        Rectangle {
            id: trayWindowHeaderBackground

            anchors.left:   trayWindowMainItem.left
            anchors.right:  trayWindowMainItem.right
            anchors.top:    trayWindowMainItem.top
            // height:         Style.trayWindowHeaderHeight
            // color:          palette.window
            height:         Style.nmcTrayWindowHeaderHeight
            color:          Style.nmcTrayWindowHeaderBackgroundColor

            Rectangle {
                id: whiteMargin
                anchors.top: trayWindowHeaderBackground.top
                anchors.left: trayWindowHeaderBackground.left
                width: 10
                height: 64
                color: Style.nmcTrayWindowHeaderBackgroundColor
            }

            Rectangle {
                id: tLogo
                anchors.top: trayWindowHeaderBackground.top
                anchors.left: whiteMargin.right
                width: Style.nmcTrayWindowLogoWidth
                height: Style.nmcTrayWindowLogoWidth

                Image {
                    anchors.fill: parent
                    cache: false
                    source: Style.nmcTLogoPath
                    sourceSize: Qt.size(width, height)
                    fillMode: Image.Stretch
                }
            }

            RowLayout {
                id: trayWindowHeaderLayout

                spacing:        0
                // anchors.fill:   parent

                anchors {
                    left: tLogo.right
                    top: trayWindowHeaderBackground.top
                    right: trayWindowHeaderBackground.right
                }

                Button {
                    id: currentAccountButton

                    // Layout.preferredWidth:  Style.currentAccountButtonWidth
                    // Layout.preferredHeight: Style.trayWindowHeaderHeight
                    Layout.preferredWidth:  Style.nmcCurrentAccountButtonWidth
                    Layout.preferredHeight: trayWindowHeaderBackground.height
                    display:                AbstractButton.IconOnly
                    flat:                   true
                    hoverEnabled:           true

                    Accessible.role: Accessible.ButtonMenu
                    Accessible.name: qsTr("Current account")
                    Accessible.onPressAction: currentAccountButton.clicked()

                    // We call open() instead of popup() because we want to position it
                    // exactly below the dropdown button, not the mouse
                    onClicked: {
                        syncPauseButton.text = Systray.syncIsPaused ? qsTr("Resume sync for all") : qsTr("Pause sync for all")
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
                        // x: (currentAccountButton.x + 2)
                        // y: (currentAccountButton.y + Style.trayWindowHeaderHeight + 2)
                        x: (0 - tLogo.width)
                        y: (currentAccountButton.y + Style.nmcTrayWindowHeaderHeight - Style.nmcTrayWindowMenuOverlayMargin)

                        //width: (Style.currentAccountButtonWidth - 2)
                        width: (Style.nmcCurrentAccountButtonWidth + tLogo.width + 30)
                        height: Math.min(implicitHeight, maxMenuHeight)
                        closePolicy: Menu.CloseOnPressOutsideParent | Menu.CloseOnEscape

                        background: Rectangle {
                            id: menuBackground
                            border.color: palette.dark
                            color: palette.window
                            // radius: Style.halfTrayWindowRadius
                            radius: Style.nmcStandardRadius
                            layer.enabled: true
                            layer.effect: DropShadow {
                                transparentBorder: true
                                horizontalOffset: 0
                                verticalOffset: 0
                                radius: 6
                                color: "#40000000"
                            }
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

                        onClosed: {
                            // HACK: reload account Instantiator immediately by restting it - could be done better I guess
                            // see also onVisibleChanged above
                            userLineInstantiator.active = false;
                            userLineInstantiator.active = true;
                        }

                        Instantiator {
                            id: userLineInstantiator
                            model: UserModel
                            delegate: UserLine {
                                onShowUserStatusSelector: {
                                    userStatusDrawer.openUserStatusDrawer(model.index);
                                    accountMenu.close();
                                }
                                onClicked: UserModel.currentUserId = model.index;
                            }
                            onObjectAdded: accountMenu.insertItem(index, object)
                            onObjectRemoved: accountMenu.removeItem(object)
                        }

                        MenuItem {
                            id: addAccountButton
                            // height: Systray.enableAddAccount ? Style.addAccountButtonHeight : 0
                            height: Systray.enableAddAccount ? Style.nmcTrayWindowAddAccountButtonHeight : 0
                            hoverEnabled: true
                            visible: Systray.enableAddAccount
                            icon.color: Style.ncTextColor

                            RowLayout {
                                anchors.fill: parent
                                spacing: 0

                                Image {
                                    Layout.leftMargin: Style.accountIconsMenuMargin
                                    verticalAlignment: Qt.AlignVCenter
                                    horizontalAlignment: Qt.AlignCenter
                                    source: "image://svgimage-custom-color/add.svg/" + palette.windowText
                                    sourceSize.width: Style.addButtonIconSize
                                    sourceSize.height: Style.addButtonIconSize
                                }
                                EnforcedPlainTextLabel {
                                    Layout.leftMargin: 14
                                    text: qsTr("Add account")
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

                            background: Rectangle {
                                radius: Style.halfTrayWindowRadius
                                color: palette.highlight
                                visible: addAccountButton.hovered
                            }
                        }

                        Rectangle {
                            anchors.left: parent.left
                            anchors.right: parent.right
                            implicitHeight: 1
                            color: palette.dark
                        }

                        NMCMenuItem {
                            id: syncPauseButton
                            // font.pixelSize: Style.topLinePixelSize
                            // hoverEnabled: true
                            onClicked: Systray.syncIsPaused = !Systray.syncIsPaused
                            Accessible.role: Accessible.MenuItem
                            Accessible.name: Systray.syncIsPaused ? qsTr("Resume sync for all") : qsTr("Pause sync for all")
                            Accessible.onPressAction: syncPauseButton.clicked()

                            height: Style.nmcMenuSubItemHeight
                            icon.source: Style.nmcPauseIcon
                            icon.height: Style.nmcTrayWindowIconWidth
                            icon.width: Style.nmcTrayWindowIconWidth
                            icon.color: Style.ncTextColor
                            leftPadding: Style.nmcMenuSubItemLeftPadding

                            Text {
                                color: Style.nmcTrayWindowHeaderTextColor
                            }

                            background: Rectangle {
                                radius: Style.halfTrayWindowRadius
                                color: palette.highlight
                                visible: syncPauseButton.hovered
                            }
                        }

                        NMCMenuItem {
                            id: settingsButton
                            text: qsTr("Settings")
                            // font.pixelSize: Style.topLinePixelSize
                            // hoverEnabled: true
                            onClicked: Systray.openSettings()
                            Accessible.role: Accessible.MenuItem
                            Accessible.name: text
                            Accessible.onPressAction: settingsButton.clicked()

                            height: Style.nmcMenuSubItemHeight
                            icon.source: Style.nmcSettingsIcon
                            icon.height: Style.nmcTrayWindowIconWidth
                            icon.width: Style.nmcTrayWindowIconWidth
                            icon.color: Style.ncTextColor
                            leftPadding: Style.nmcMenuSubItemLeftPadding

                            Text {
                                color: Style.nmcTrayWindowHeaderTextColor
                            }

                            background: Rectangle {
                                radius: Style.halfTrayWindowRadius
                                color: palette.highlight
                                visible: settingsButton.hovered
                            }
                        }

                        NMCMenuItem {
                            id: exitButton
                            text: qsTr("Exit");
                            // font.pixelSize: Style.topLinePixelSize
                            // hoverEnabled: true
                            onClicked: Systray.shutdown()
                            Accessible.role: Accessible.MenuItem
                            Accessible.name: text
                            Accessible.onPressAction: exitButton.clicked()

                            height: Style.nmcMenuSubItemHeight
                            icon.source: Style.nmcCloseIcon
                            icon.height: Style.nmcTrayWindowIconWidth
                            icon.width: Style.nmcTrayWindowIconWidth
                            icon.color: Style.ncTextColor
                            leftPadding: Style.nmcMenuSubItemLeftPadding

                            Text {
                                color: Style.nmcTrayWindowHeaderTextColor
                            }

                            background: Rectangle {
                                radius: Style.halfTrayWindowRadius
                                color: palette.highlight
                                visible: exitButton.hovered
                            }
                        }

                        //NMC customization: spacer at the bottom of the menu
                        Rectangle {
                            height: 8
                            color: "white"
                            radius: Style.nmcStandardRadius
                        }
                    }

                    RowLayout {
                        id: accountControlRowLayout

                        height: Style.trayWindowHeaderHeight
                        // width:  Style.currentAccountButtonWidth
                        width:  Style.nmcCurrentAccountButtonWidth
                        spacing: 0

                        Image {
                            id: currentAccountAvatar

                            Layout.leftMargin: Style.trayHorizontalMargin
                            verticalAlignment: Qt.AlignCenter
                            cache: false
                            // source: (UserModel.currentUser && UserModel.currentUser.avatar !== "") ? UserModel.currentUser.avatar : "image://avatars/fallbackWhite"
                            // Layout.preferredHeight: Style.accountAvatarSize
                            // Layout.preferredWidth: Style.accountAvatarSize
                            source: Style.nmcAccountAvatarIcon
                            sourceSize.width: Style.nmcTrayWindowIconWidth
                            sourceSize.height: Style.nmcTrayWindowIconWidth

                            Accessible.role: Accessible.Graphic
                            Accessible.name: qsTr("Current account avatar")

                            Rectangle {
                                id: currentAccountStatusIndicatorBackground
                                visible: UserModel.currentUser && UserModel.currentUser.isConnected
                                         && UserModel.currentUser.serverHasUserStatus
                                width: Style.accountAvatarStateIndicatorSize +  + Style.trayFolderStatusIndicatorSizeOffset
                                height: width
                                anchors.bottom: currentAccountAvatar.bottom
                                anchors.right: currentAccountAvatar.right
                                radius: width * Style.trayFolderStatusIndicatorRadiusFactor
                            }

                            // TODO: check if we want add any hover effect
                            // Rectangle {
                            //     id: currentAccountStatusIndicatorMouseHover
                            //     visible: UserModel.currentUser && UserModel.currentUser.isConnected
                            //              && UserModel.currentUser.serverHasUserStatus
                            //     width: Style.accountAvatarStateIndicatorSize +  + Style.trayFolderStatusIndicatorSizeOffset
                            //     height: width
                            //     anchors.bottom: currentAccountAvatar.bottom
                            //     anchors.right: currentAccountAvatar.right
                            //     color: currentAccountButton.hovered ? palette.highlight : palette.window
                            //     opacity: Style.trayFolderStatusIndicatorMouseHoverOpacityFactor
                            //     radius: width * Style.trayFolderStatusIndicatorRadiusFactor
                            // }

                            Image {
                                id: currentAccountStatusIndicator
                                visible: UserModel.currentUser && UserModel.currentUser.isConnected
                                         && UserModel.currentUser.serverHasUserStatus
                                source: UserModel.currentUser ? UserModel.currentUser.statusIcon : ""
                                cache: false
                                x: currentAccountStatusIndicatorBackground.x + 1
                                y: currentAccountStatusIndicatorBackground.y + 1
                                sourceSize.width: Style.accountAvatarStateIndicatorSize
                                sourceSize.height: Style.accountAvatarStateIndicatorSize

                                Accessible.role: Accessible.Indicator
                                Accessible.name: UserModel.desktopNotificationsAllowed ? qsTr("Current account status is online") : qsTr("Current account status is do not disturb")
                            }
                        }

                        Column {
                            id: accountLabels
                            spacing: 0
                            Layout.alignment: Qt.AlignLeft | Qt.AlignVCenter
                            Layout.leftMargin: Style.userStatusSpacing
                            Layout.fillWidth: true
                            Layout.maximumWidth: parent.width

                            EnforcedPlainTextLabel {
                                id: currentAccountUser
                                Layout.alignment: Qt.AlignLeft | Qt.AlignBottom
                                width: Style.currentAccountLabelWidth
                                text: UserModel.currentUser ? UserModel.currentUser.name : ""
                                elide: Text.ElideRight

                                // font.pixelSize: Style.topLinePixelSize
                                // font.bold: true
                                font.pixelSize: Style.nmcFontSizeAccountName
                                font.bold: false
                                color: Style.nmcTrayWindowHeaderTextColor
                            }

                            EnforcedPlainTextLabel {
                                id: currentAccountServer
                                Layout.alignment: Qt.AlignLeft | Qt.AlignBottom
                                width: Style.currentAccountLabelWidth
                                text: UserModel.currentUser ? UserModel.currentUser.server : ""
                                elide: Text.ElideRight
                                visible: UserModel.numUsers() > 1
                            }

                            RowLayout {
                                id: currentUserStatus
                                visible: UserModel.currentUser && UserModel.currentUser.isConnected &&
                                         UserModel.currentUser.serverHasUserStatus
                                spacing: Style.accountLabelsSpacing
                                width: parent.width

                                EnforcedPlainTextLabel {
                                    id: emoji
                                    visible: UserModel.currentUser && UserModel.currentUser.statusEmoji !== ""
                                    width: Style.userStatusEmojiSize
                                    text: UserModel.currentUser ? UserModel.currentUser.statusEmoji : ""
                                }
                                EnforcedPlainTextLabel {
                                    id: message
                                    Layout.alignment: Qt.AlignLeft | Qt.AlignBottom
                                    Layout.fillWidth: true
                                    visible: UserModel.currentUser && UserModel.currentUser.statusMessage !== ""
                                    width: Style.currentAccountLabelWidth
                                    text: UserModel.currentUser && UserModel.currentUser.statusMessage !== ""
                                          ? UserModel.currentUser.statusMessage
                                          : UserModel.currentUser ? UserModel.currentUser.server : ""
                                    elide: Text.ElideRight
                                    font.pixelSize: Style.subLinePixelSize
                                }
                            }
                        }

                        Image {
                            Layout.alignment: Qt.AlignRight
                            verticalAlignment: Qt.AlignCenter
                            horizontalAlignment: Qt.AlignRight
                            Layout.leftMargin: Style.accountDropDownCaretMargin
                            source:  "image://svgimage-custom-color/caret-down.svg/" + palette.windowText
                            sourceSize.width: Style.accountDropDownCaretSize
                            sourceSize.height: Style.accountDropDownCaretSize
                            Accessible.role: Accessible.PopupMenu
                            Accessible.name: qsTr("Account switcher and settings menu")
                        }
                    }
                }

                // Add space between items
                Item {
                    Layout.fillWidth: true
                }

                Rectangle {
                    id: trayWindowWebsiteButtonContainer
                    width: 92
                    height: Style.nmcTrayWindowHeaderHeight

                    NMCHeaderButton {
                        id: trayWindowWebsiteButton
                        iconSource: "qrc:///client/theme/NMCIcons/website.svg"
                        iconText: qsTranslate("", "OPEN_WEBSITE")
                    }

                    MouseArea {
                        anchors.fill: parent
                        hoverEnabled: true
                        onClicked: UserModel.openCurrentAccountServer()
                        onEntered: {
                            trayWindowWebsiteButtonContainer.color = Style.nmcTrayWindowHeaderHighlightColor
                        }
                        onExited: {
                            trayWindowWebsiteButtonContainer.color = "transparent"
                        }
                    }
                }

                Rectangle {
                    id: trayWindowLocalButtonContainer
                    width: 92
                    height: Style.nmcTrayWindowHeaderHeight

                    NMCHeaderButton {
                        id: trayWindowLocalButton
                        iconSource: "qrc:///client/theme/black/folder.svg"
                        iconText: qsTranslate("", "LOCAL_FOLDER")
                    }

                    MouseArea {
                        anchors.fill: parent
                        hoverEnabled: true
                        onClicked: UserModel.openCurrentAccountLocalFolder()
                        onEntered: {
                            trayWindowLocalButtonContainer.color = Style.nmcTrayWindowHeaderHighlightColor
                        }
                        onExited: {
                            trayWindowLocalButtonContainer.color = "transparent"
                        }
                    }
                }

                Rectangle {
                    width: 10
                    color: Style.nmcTrayWindowHeaderBackgroundColor
                }
            }
        }   // Rectangle trayWindowHeaderBackground

        Rectangle {
            id: separator
            color: Style.nmcTrayWindowHeaderSeparatorColor
            anchors.top:    trayWindowHeaderBackground.bottom
            anchors.left:   trayWindowMainItem.left
            anchors.right:  trayWindowMainItem.right
            height: 1
        }

        UnifiedSearchInputContainer {
            id: trayWindowUnifiedSearchInputContainer
            height: Math.max(Style.talkReplyTextFieldPreferredHeight, contentHeight)
            visible: false

            anchors {
                top: trayWindowHeaderBackground.bottom
                left: trayWindowMainItem.left
                right: trayWindowMainItem.right

                // topMargin: Style.trayHorizontalMargin + controlRoot.padding
                topMargin: Style.nmcTrayWindowStandardMargin
                leftMargin: Style.trayHorizontalMargin + controlRoot.padding
                rightMargin: Style.trayHorizontalMargin + controlRoot.padding
            }

            text: UserModel.currentUser.unifiedSearchResultsListModel.searchTerm
            readOnly: !UserModel.currentUser.isConnected || UserModel.currentUser.unifiedSearchResultsListModel.currentFetchMoreInProgressProviderId
            isSearchInProgress: UserModel.currentUser.unifiedSearchResultsListModel.isSearchInProgress
            onTextEdited: { UserModel.currentUser.unifiedSearchResultsListModel.searchTerm = trayWindowUnifiedSearchInputContainer.text }
            onClearText: { UserModel.currentUser.unifiedSearchResultsListModel.searchTerm = "" }

            // TODO: consult designers, this line looks weird atm
            // Rectangle {
            //     id: bottomUnifiedSearchInputSeparator

            //     anchors.left: parent.left
            //     anchors.right: parent.right
            //     anchors.bottom: parent.bottom

            //     height: 1
            //     color: Style.menuBorder
            //     visible: trayWindowMainItem.isUnifiedSearchActive
            // }
        }

        ErrorBox {
            id: unifiedSearchResultsErrorLabel
            visible:  UserModel.currentUser.unifiedSearchResultsListModel.errorString && !unifiedSearchResultsListView.visible && ! UserModel.currentUser.unifiedSearchResultsListModel.isSearchInProgress && ! UserModel.currentUser.unifiedSearchResultsListModel.currentFetchMoreInProgressProviderId
            text:  UserModel.currentUser.unifiedSearchResultsListModel.errorString
            // anchors.top: trayWindowUnifiedSearchInputContainer.bottom
            anchors.top: trayWindowUnifiedSearchInputContainer.visible ? trayWindowUnifiedSearchInputContainer.bottom : separator.bottom
            anchors.left: trayWindowMainItem.left
            anchors.right: trayWindowMainItem.right
            anchors.margins: Style.trayHorizontalMargin
        }

        UnifiedSearchResultNothingFound {
            id: unifiedSearchResultNothingFound

            // anchors.top: trayWindowUnifiedSearchInputContainer.bottom
            anchors.top: trayWindowUnifiedSearchInputContainer.visible ? trayWindowUnifiedSearchInputContainer.bottom : separator.bottom
            anchors.left: trayWindowMainItem.left
            anchors.right: trayWindowMainItem.right
            anchors.topMargin: Style.trayHorizontalMargin

            text: UserModel.currentUser.unifiedSearchResultsListModel.searchTerm

            property bool isSearchRunning: UserModel.currentUser.unifiedSearchResultsListModel.isSearchInProgress
            property bool waitingForSearchTermEditEnd: UserModel.currentUser.unifiedSearchResultsListModel.waitingForSearchTermEditEnd
            property bool isSearchResultsEmpty: unifiedSearchResultsListView.count === 0
            property bool nothingFound: text && isSearchResultsEmpty && !UserModel.currentUser.unifiedSearchResultsListModel.errorString

            visible: !isSearchRunning && !waitingForSearchTermEditEnd && nothingFound
        }

        Loader {
            id: unifiedSearchResultsListViewSkeletonLoader

            // anchors.top: trayWindowUnifiedSearchInputContainer.bottom
            anchors.top: trayWindowUnifiedSearchInputContainer.visible ? trayWindowUnifiedSearchInputContainer.bottom : separator.bottom
            anchors.left: trayWindowMainItem.left
            anchors.right: trayWindowMainItem.right
            anchors.bottom: trayWindowMainItem.bottom
            anchors.margins: controlRoot.padding

            active: !unifiedSearchResultNothingFound.visible &&
                    !unifiedSearchResultsListView.visible &&
                    !UserModel.currentUser.unifiedSearchResultsListModel.errorString &&
                    UserModel.currentUser.unifiedSearchResultsListModel.searchTerm

            sourceComponent: UnifiedSearchResultItemSkeletonContainer {
                anchors.fill: parent
                spacing: unifiedSearchResultsListView.spacing
                animationRectangleWidth: trayWindow.width
            }
        }

        ScrollView {
            id: controlRoot
            contentWidth: availableWidth

            ScrollBar.horizontal.policy: ScrollBar.AlwaysOff

            data: WheelHandler {
                target: controlRoot.contentItem
            }
            visible: unifiedSearchResultsListView.count > 0

            // anchors.top: trayWindowUnifiedSearchInputContainer.bottom
            anchors.top: trayWindowUnifiedSearchInputContainer.visible ? trayWindowUnifiedSearchInputContainer.bottom : separator.bottom
            anchors.left: trayWindowMainItem.left
            anchors.right: trayWindowMainItem.right
            anchors.bottom: trayWindowMainItem.bottom

            ListView {
                id: unifiedSearchResultsListView
                spacing: 4
                clip: true

                keyNavigationEnabled: true

                reuseItems: true

                Accessible.role: Accessible.List
                Accessible.name: qsTr("Unified search results list")

                model: UserModel.currentUser.unifiedSearchResultsListModel

                delegate: UnifiedSearchResultListItem {
                    width: unifiedSearchResultsListView.width
                    isSearchInProgress:  unifiedSearchResultsListView.model.isSearchInProgress
                    currentFetchMoreInProgressProviderId: unifiedSearchResultsListView.model.currentFetchMoreInProgressProviderId
                    fetchMoreTriggerClicked: unifiedSearchResultsListView.model.fetchMoreTriggerClicked
                    resultClicked: unifiedSearchResultsListView.model.resultClicked
                    ListView.onPooled: isPooled = true
                    ListView.onReused: isPooled = false
                }

                section.property: "providerName"
                section.criteria: ViewSection.FullString
                section.delegate: UnifiedSearchResultSectionItem {
                    width: unifiedSearchResultsListView.width
                }
            }
        }

        SyncStatus {
            id: syncStatus

            visible: !trayWindowMainItem.isUnifiedSearchActive

            // anchors.top: trayWindowUnifiedSearchInputContainer.bottom
            anchors.top: trayWindowUnifiedSearchInputContainer.visible ? trayWindowUnifiedSearchInputContainer.bottom : separator.bottom
            anchors.left: trayWindowMainItem.left
            anchors.right: trayWindowMainItem.right

            Rectangle {
                id: syncStatusSeparator

                Layout.fillWidth: true
                Layout.preferredHeight: 1

                height: 1
                color: Style.menuBorder
            }
        }

        Loader {
            id: newActivitiesButtonLoader

            anchors.top: activityList.top
            anchors.topMargin: 5
            anchors.horizontalCenter: activityList.horizontalCenter

            width: Style.newActivitiesButtonWidth
            height: Style.newActivitiesButtonHeight

            z: 1

            active: false

            sourceComponent: CustomButton {
                id: newActivitiesButton
                hoverEnabled: true
                padding: Style.smallSpacing

                anchors.fill: parent

                text: qsTr("New activities")

                icon.source: "image://svgimage-custom-color/expand-less-black.svg" + "/" + Style.currentUserHeaderTextColor
                icon.width: Style.activityLabelBaseWidth
                icon.height: Style.activityLabelBaseWidth

                onClicked: {
                    activityList.scrollToTop();
                    newActivitiesButtonLoader.active = false
                }

                Timer {
                    id: newActivitiesButtonDisappearTimer
                    interval: Style.newActivityButtonDisappearTimeout
                    running: newActivitiesButtonLoader.active && !newActivitiesButton.hovered
                    repeat: false
                    onTriggered: fadeoutActivitiesButtonDisappear.running = true
                }

                OpacityAnimator {
                    id: fadeoutActivitiesButtonDisappear
                    target: newActivitiesButton;
                    from: 1;
                    to: 0;
                    duration: Style.newActivityButtonDisappearFadeTimeout
                    loops: 1
                    running: false
                    onFinished: newActivitiesButtonLoader.active = false
                }
            }
        }

        ActivityList {
            id: activityList
            ScrollBar.vertical.policy: contentHeight > activityList.height ? ScrollBar.AlwaysOn : ScrollBar.AlwaysOff
            visible: !trayWindowMainItem.isUnifiedSearchActive
            anchors.top: syncStatus.bottom
            anchors.left: trayWindowMainItem.left
            anchors.right: trayWindowMainItem.right
            anchors.bottom: trayWindowMainItem.bottom

            activeFocusOnTab: true
            model: activityModel
            onOpenFile: Qt.openUrlExternally(filePath);
            onActivityItemClicked: {
                model.slotTriggerDefaultAction(index)
            }
            Connections {
                target: activityModel
                function onInteractiveActivityReceived() {
                    if (!activityList.atYBeginning) {
                        newActivitiesButtonLoader.active = true;
                    }
                }
            }
        }
    } // Item trayWindowMainItem
}
