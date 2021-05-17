pragma Singleton

// Minimum for this is Qt 5.5
import QtQuick 2.5

import com.nextcloud.desktopclient 1.0

QtObject {
    // Colors
    property color ncBlue:      Theme.wizardHeaderBackgroundColor
    property color ncTextColor: Theme.wizardHeaderTitleColor
    property color nmcTextColor:"#191919"
	property color magenta:		"#e20074"
    property color lightHover:  "#f7f7f7"
    property color menuBorder:  "#bdbdbd"

    // Fonts
    // We are using pixel size because this is cross platform comparable, point size isn't
    property int topLinePixelSize: 13
    property int subLinePixelSize: 10

    // Dimensions and sizes
    property int trayWindowWidth: 360
    property int trayWindowHeight: 600
    property int trayWindowRadius: 0 //10
    property int trayWindowBorderWidth: 0
    property int trayWindowHeaderHeight: 60

    property int currentAccountButtonWidth: 220
    property int currentAccountButtonRadius: 2
    property int currentAccountLabelWidth: 128

    property url stateOnlineImageSource: Theme.stateOnlineImageSource
    property url stateOfflineImageSource: Theme.stateOfflineImageSource

    property int accountAvatarSize: (trayWindowHeaderHeight - 16)
    property int accountAvatarStateIndicatorSize: 12
    property int accountLabelWidth: 128

    property int accountDropDownCaretSize: 20
    property int accountDropDownCaretMargin: 8

    property int addAccountButtonHeight: 50

    property int headerButtonIconSize: 24

    property int activityLabelBaseWidth: 240

    // Visual behaviour
    property bool hoverEffectsEnabled: true
}
