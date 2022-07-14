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
    property color nmcTextColorLight: "white"

    // Fonts
    // We are using pixel size because this is cross platform comparable, point size isn't
    property int topLinePixelSize: 13
    property int subLinePixelSize: 10
    property string swipeFontFamily: "Segoe UI"

    // Dimensions and sizes
    property int trayWindowWidth: 360
    property int trayWindowHeight: 600
    property int trayWindowRadius: 0 //10
    property int trayWindowBorderWidth: 0
    property int trayWindowHeaderHeight: 60

    property int currentAccountButtonWidth: 160
    property int currentAccountButtonRadius: 2
    property int currentAccountLabelWidth: 128

    property url stateOnlineImageSource: Theme.stateOnlineImageSource
    property url stateOfflineImageSource: Theme.stateOfflineImageSource

    property int accountAvatarSize: (trayWindowHeaderHeight - 16)
    property int accountAvatarStateIndicatorSize: 12
    property int accountLabelWidth: 100

    property int accountDropDownCaretSize: 20
    property int accountDropDownCaretMargin: 8

    property int addAccountButtonHeight: 50

    property int accountMenuWidth: 300
    property int accountMenuTopItemHeight: 48
    property int accountMenuPadding: 16
    property int accountMenuHalfPadding: 8
    property int accountMenuSpacing: 8

    property int headerButtonIconSize: 24
	property int headerSpacerSize: 16

    property int activityLabelBaseWidth: 240
    
    property int userStatusEmojiSize: 8
    property int userStatusSpacing: 6
    property int userStatusAnchorsMargin: 2
    property int accountServerAnchorsMargin: 10
    property int accountLabelsSpacing: 4
    property int accountLabelsAnchorsMargin: 7
    property int accountLabelsLayoutMargin: 12
    property int accountLabelsLayoutTopMargin: 10

    property int skipButtonWidth: 160
    property int skipButtonHeight: 32
    property int skipButtonRadius: 8

    property int syncStatusFontSize: 16
    property int syncStatusSublineFontSize: 13
    property int trayHorizontalMargin: 10
    property int trayListItemIconSize: accountAvatarSize
    property real thumbnailImageSizeReduction: 0.2  // We reserve some space within the thumbnail "item", here about 20%.
                                                    // This is because we need to also add the added/modified icon and we
                                                    // want them to fit within the general icon size. We also need to know
                                                    // this amount to properly center the sync status icon to the thumbnail
                                                    // images, which will work so long as the thumbnails are left aligned


    // Visual behaviour
    property bool hoverEffectsEnabled: true
}
