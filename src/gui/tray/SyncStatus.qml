import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

import Style 1.0

import com.nextcloud.desktopclient 1.0 as NC

RowLayout {
    id: root

    property alias model: syncStatus

    spacing: Style.trayHorizontalMargin

    NC.SyncStatusSummary {
        id: syncStatus
    }

    NCBusyIndicator {
        id: syncIcon
        property int size: Style.trayListItemIconSize * 0.6
        property int whiteSpace: (Style.trayListItemIconSize - size)

        Layout.preferredWidth: size
        Layout.preferredHeight: size

        Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
        Layout.topMargin: 16
        Layout.rightMargin: whiteSpace * (0.5 + Style.thumbnailImageSizeReduction)
        Layout.bottomMargin: 16
        Layout.leftMargin: Style.nmcListViewLeftPadding

        padding: 0

        imageSource: syncStatus.syncIcon
        running: false // hotfix for download speed slowdown when tray is open
    }

    ColumnLayout {
        id: syncProgressLayout

        Layout.alignment: Qt.AlignVCenter
        Layout.topMargin: 8
        Layout.rightMargin: Style.trayHorizontalMargin
        Layout.bottomMargin: 8
        Layout.fillWidth: true
        Layout.fillHeight: true

        Layout.leftMargin: Style.nmcProgressFieldTextOffset

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
            }
        }

        EnforcedPlainTextLabel {
            id: syncProgressDetailText

            Layout.fillWidth: true

            text: syncStatus.syncStatusDetailString
            visible: false
            color: palette.midlight
            font.pixelSize: Style.subLinePixelSize
            wrapMode: Text.Wrap
        }
    }

    CustomButton {
        id: syncNowButton

        // FontMetrics {
        //     id: syncNowFm
        //     font: syncNowButton.contentsFont
        // }

        Layout.rightMargin: Style.trayHorizontalMargin

        text: qsTr("Sync now")

        padding: Style.smallSpacing
        textColor: Style.nmcTextInButtonColor
        textColorHovered: Style.currentUserHeaderTextColor
        contentsFont.bold: true
        bgColor: Style.currentUserHeaderColor

        visible: !activityModel.hasSyncConflicts &&
                 !syncStatus.syncing &&
                 NC.UserModel.currentUser.hasLocalFolder &&
                 NC.UserModel.currentUser.isConnected
        enabled: visible
        onClicked: {
            if(!syncStatus.syncing) {
                NC.UserModel.currentUser.forceSyncNow();
            }
        }

        HoverHandler {
            id: mouseSync
            acceptedDevices: PointerDevice.Mouse
        }

        background: Rectangle {
            color: mouseSync.hovered? Style.nmcSyncHoverColor : Style.nmcTelekomMagentaColor
            radius: Style.nmcStandardRadius
            height: Style.nmcTraySyncButtonHeight
        }
    }

    CustomButton {
        Layout.preferredWidth: syncNowFm.boundingRect(text).width +
                               leftPadding +
                               rightPadding +
                               Style.standardSpacing * 2
        Layout.rightMargin: Style.trayHorizontalMargin

        text: qsTr("Resolve conflicts")
        padding: Style.smallSpacing
        textColor: Style.nmcTextInButtonColor
        textColorHovered: Style.nmcTextInButtonColor
        contentsFont.bold: true
        bgColor: Style.currentUserHeaderColor

        visible: activityModel.hasSyncConflicts &&
                 !syncStatus.syncing &&
                 NC.UserModel.currentUser.hasLocalFolder &&
                 NC.UserModel.currentUser.isConnected
        enabled: visible
        onClicked: NC.Systray.createResolveConflictsDialog(activityModel.allConflicts);

        HoverHandler {
            id: mouseConflict
            acceptedDevices: PointerDevice.Mouse
        }

        background: Rectangle {
            color: mouseConflict.hovered? Style.nmcConflictHoverColor : Style.nmcConflictColor
            radius: Style.nmcStandardRadius
            height: Style.nmcTraySyncButtonHeight
        }
    }
}
