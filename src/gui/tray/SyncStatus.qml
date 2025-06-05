import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

import Style

import com.nextcloud.desktopclient as NC

RowLayout {
    id: root

    property alias model: syncStatus
    property color accentColor: Style.ncBlue

    spacing: Style.trayHorizontalMargin
    Layout.alignment: Qt.AlignVCenter

    NC.SyncStatusSummary {
        id: syncStatus
    }

    NCBusyIndicator {
        id: syncIcon
        property int size: Style.trayListItemIconSize * 0.6
        property int whiteSpace: (Style.trayListItemIconSize - size)

        Layout.preferredWidth: size
        Layout.preferredHeight: size

        Layout.alignment: Qt.AlignVCenter
        Layout.rightMargin: whiteSpace * (0.5 + Style.thumbnailImageSizeReduction)
        Layout.leftMargin: Style.nmcListViewLeftPadding

        padding: 0

        imageSource: syncStatus.syncIcon
        running: false // hotfix for download speed slowdown when tray is open
    }

    ColumnLayout {
        id: syncProgressLayout

        Layout.alignment: Qt.AlignVCenter
        Layout.rightMargin: Style.trayHorizontalMargin
        Layout.leftMargin: Style.nmcProgressFieldTextOffset
        Layout.fillWidth: true
        Layout.fillHeight: true

        EnforcedPlainTextLabel {
            id: syncProgressText

            Layout.fillWidth: true

            text: syncStatus.syncStatusString
            verticalAlignment: Text.AlignVCenter
            font.pixelSize: Style.nmcFontSizeSyncText
            font.bold: true
            wrapMode: Text.Wrap
        }

        Loader {
            Layout.fillWidth: true
            Layout.preferredHeight: Style.progressBarPreferredHeight

            active: syncStatus.syncing && syncStatus.totalFiles > 0
            visible: active

            sourceComponent: NCProgressBar {
                id: syncProgressBar
                value: syncStatus.syncProgress
                fillColor: root.accentColor
            }
        }

        EnforcedPlainTextLabel {
            id: syncProgressDetailText

            Layout.fillWidth: true

            text: syncStatus.syncStatusDetailString
            visible: false
            font.pixelSize: Style.subLinePixelSize
            wrapMode: Text.Wrap
        }
    }

    Button {
        id: syncNowButton

        Layout.rightMargin: Style.trayHorizontalMargin
        Layout.alignment: Qt.AlignVCenter

        text: qsTr("Sync now")
        padding: Style.smallSpacing

        visible: !activityModel.hasSyncConflicts &&
                !syncStatus.syncing &&
                NC.UserModel.currentUser.hasLocalFolder &&
                NC.UserModel.currentUser.isConnected
        enabled: visible

        HoverHandler {
            id: mouseSync
            acceptedDevices: PointerDevice.AllPointerTypes
        }

        background: Rectangle {
            color: mouseSync.hovered ? Style.nmcSyncHoverColor : Style.nmcTelekomMagentaColor
            radius: Style.nmcStandardRadius
            height: Style.nmcTraySyncButtonHeight
        }

        contentItem: Text {
            text: syncNowButton.text
            color: "white"
            font.pixelSize: Style.nmcFontSizeAccountName
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            elide: Text.ElideRight
        }

        onClicked: {
            if (!syncStatus.syncing) {
                NC.UserModel.currentUser.forceSyncNow();
            }
        }
    }

    Button {
        Layout.rightMargin: Style.trayHorizontalMargin
        Layout.alignment: Qt.AlignVCenter

        text: qsTr("Resolve conflicts")
        padding: Style.smallSpacing

        visible: activityModel.hasSyncConflicts &&
                !syncStatus.syncing &&
                NC.UserModel.currentUser.hasLocalFolder &&
                NC.UserModel.currentUser.isConnected
        enabled: visible

        onClicked: NC.Systray.createResolveConflictsDialog(activityModel.allConflicts)

        HoverHandler {
            id: mouseConflict
            acceptedDevices: PointerDevice.Mouse
        }

        contentItem: Text {
            text: parent.text
            color: Style.nmcTextInButtonColor
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            anchors.fill: parent
        }

        background: Rectangle {
            color: mouseConflict.hovered
                ? Style.nmcConflictHoverColor
                : Style.nmcConflictColor
            radius: Style.nmcStandardRadius
            height: Style.nmcTraySyncButtonHeight
            width: parent.width
        }
    }

    Button {
        Layout.rightMargin: Style.trayHorizontalMargin
        Layout.alignment: Qt.AlignVCenter

        text: qsTr("Open browser")

        visible: NC.UserModel.currentUser.needsToSignTermsOfService
        enabled: visible

        onClicked: NC.UserModel.openCurrentAccountServer()
    }
}
