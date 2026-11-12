/*
 * SPDX-FileCopyrightText: 2026 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

import QtQuick
import QtQuick.Controls.Basic
import QtQuick.Layouts

import Style
import com.nextcloud.desktopclient
import com.nextcloud.desktopclient.search
import "qrc:/qml/src/gui"
import "qrc:/qml/src/gui/tray"
import "qrc:/qml/src/gui/wizard/qml"

WizardStyledWindow {
    id: root

    property var account: null
    property int accountId: -1
    property var searchModel: UnifiedSearchResultsListModel {
        accountId: root.accountId
    }

    //: Name of the Search feature.
    readonly property string headline: qsTr("Search")
    readonly property bool aggregateView: searchModel && searchModel.viewMode === UnifiedSearchResultsListModel.Aggregate
    readonly property bool filtersVisible: aggregateView && searchModel && searchModel.providersReady
    readonly property int searchState: searchModel
        ? searchModel.searchState
        : UnifiedSearchResultsListModel.Placeholder
    readonly property bool isSearchInProgress: searchModel !== null && searchModel.isSearchInProgress
    readonly property bool canEditSearch: searchModel !== null && searchModel.canEditSearch
    readonly property bool isAccountConnected: searchModel !== null && searchModel.isAccountConnected
    readonly property bool customRangeDialogOpened: customRangeDialogLoader.status === Loader.Ready && customRangeDialogLoader.item.opened

    readonly property var displayedActiveFilters: {
        const filters = searchModel ? searchModel.activeFilters : []
        const displayedFilters = []

        for (let i = 0; i < filters.length; ++i) {
            if (filters[i].type !== "provider") {
                displayedFilters.push(filters[i])
            }
        }

        return displayedFilters
    }

    title: ""
    width: Style.activitiesWindowWidth
    height: Style.activitiesWindowHeight
    minimumWidth: Style.wizardStandaloneWindowMinimumWidth
    minimumHeight: Style.wizardStandaloneWindowMinimumHeight

    function focusSearchInput() {
        if (visible && searchInput.enabled) {
            searchInput.forceActiveFocus()
        }
    }

    function openCustomRangeDialog() {
        if (customRangeDialogLoader.status === Loader.Ready) {
            customRangeDialogLoader.item.open()
            return
        }

        customRangeDialogLoader.active = true
    }

    function enforceFilesProvider() {
        if (!searchModel || !searchModel.providersReady) {
            return
        }

        let filesProviderId = ""

        for (let i = 0; i < searchModel.providers.length; ++i) {
            const provider = searchModel.providers[i]
            const id = String(provider.id).toLowerCase()
            const name = String(provider.name).toLowerCase()

            if (id === "files" || name === "files") {
                filesProviderId = provider.id
                break
            }
        }

        if (filesProviderId === "") {
            return
        }

        for (let i = 0; i < searchModel.activeFilters.length; ++i) {
            const filter = searchModel.activeFilters[i]
            if (filter.type === "provider" && filter.id === filesProviderId) {
                return
            }
        }

        searchModel.clearTypeFilters()
        searchModel.toggleProviderFilter(filesProviderId)
    }

    Shortcut {
        sequences: [StandardKey.Cancel]
        enabled: !filterBar.opened && !root.customRangeDialogOpened
        onActivated: root.close()
    }

    Connections {
        target: root.searchModel

        function onProvidersReadyChanged() {
            root.enforceFilesProvider()
        }

        function onSelectedRowChanged() {
            if (root.searchModel
                    && root.searchModel.selectedRow >= 0
                    && root.searchModel.selectedRow < resultsList.count) {
                resultsList.positionViewAtIndex(root.searchModel.selectedRow, ListView.Contain)
            }
        }

        function onViewModeChanged() {
            Qt.callLater(function() {
                if (root.searchModel
                        && root.searchModel.selectedRow >= 0
                        && root.searchModel.selectedRow < resultsList.count) {
                    resultsList.positionViewAtIndex(root.searchModel.selectedRow, ListView.Beginning)
                }
            })
        }

        function onAccessibilityStatusChanged() {
            if (root.searchModel.accessibilityStatus.length > 0) {
                Accessible.announce(root.searchModel.accessibilityStatus, Accessible.Polite)
            }
        }
    }

    Component.onCompleted: {
        root.enforceFilesProvider()
        Qt.callLater(focusSearchInput)
    }

    onVisibleChanged: {
        if (visible) {
            Qt.callLater(focusSearchInput)
        }
    }

    ColumnLayout {
        anchors.fill: parent
        anchors.margins: Style.wizardWindowMargin
        anchors.topMargin: Style.wizardWindowTopMargin
        spacing: Style.smallSpacing

        NMCWindowAccountHeader {
            Layout.fillWidth: true

            account: root.account
            user: root.account

            accountTextYOffset: 8
            accountTextExtraSpacing: 6
        }

        UnifiedSearchInputContainer {
            id: searchInput

            Layout.fillWidth: true
            Layout.preferredHeight: Style.unifiedSearchInputContainerHeight
            Layout.topMargin: Math.max(0, Style.wizardSectionSpacing - Style.smallSpacing)

            enabled: root.searchModel !== null
            readOnly: !root.searchModel || !root.searchModel.canEditSearch
            text: root.searchModel ? root.searchModel.searchTerm : ""

            isSearchInProgress: root.searchModel
                && (root.searchModel.isSearchInProgress
                    || root.searchModel.waitingForSearchTermEditEnd
                    || root.searchModel.isFetchMoreInProgress)

            placeholderText: root.searchModel && !root.searchModel.isAccountConnected
                ? qsTr("Search is available when this account is connected")
                : qsTr("Search files …")

            onTextEdited: {
                if (root.searchModel) {
                    root.searchModel.searchTerm = text
                }
            }

            onClearText: {
                if (root.searchModel) {
                    root.searchModel.searchTerm = ""
                }
            }

            onMoveSelection: direction => root.searchModel.moveSelection(direction)
            onActivateSelection: root.searchModel.activateSelected()
        }

        UnifiedSearchDetailHeader {
            Layout.fillWidth: true
            Layout.preferredHeight: implicitHeight

            visible: root.searchModel && !root.aggregateView
            searchModel: root.searchModel

            onNavigateBack: root.focusSearchInput()
        }

        UnifiedSearchFilterBar {
            id: filterBar

            Layout.fillWidth: true
            Layout.preferredHeight: visible ? implicitHeight : 0

            visible: root.filtersVisible
            searchModel: root.searchModel

            onCustomDateRangeRequested: root.openCustomRangeDialog()
        }

        Flow {
            objectName: "activeFilterFlow"

            Layout.fillWidth: true
            Layout.preferredHeight: visible ? implicitHeight : 0

            visible: root.filtersVisible && root.displayedActiveFilters.length > 0
            spacing: Style.smallSpacing

            Repeater {
                model: root.displayedActiveFilters

                delegate: WizardChipButton {
                    id: chipButton

                    objectName: "activeFilterChip"

                    required property var modelData

                    text: modelData.label
                    textSuffix: "×"
                    iconBeforeText: true
                    iconSource: modelData.icon
                        ? "image://tray-image-provider/" + modelData.icon
                        : ""
                    tintIcon: true
                    iconTintColor: Style.wizardPrimaryText

                    //: %1 is an active search filter label, such as a date range.
                    Accessible.name: qsTr("Remove %1 filter").arg(modelData.label)

                    onClicked: root.searchModel.removeFilter(modelData.type, modelData.id)
                }
            }
        }

        Rectangle {
            Layout.fillWidth: true
            Layout.preferredHeight: Style.normalBorderWidth

            color: Style.wizardRowBorder
        }

        Item {
            Layout.fillWidth: true
            Layout.fillHeight: true

            ColumnLayout {
                anchors.centerIn: parent
                width: Math.min(parent.width, Style.wizardDialogMaximumWidth)

                visible: root.searchState === UnifiedSearchResultsListModel.SearchError

                ErrorBox {
                    Layout.fillWidth: true
                    text: root.searchModel ? root.searchModel.errorString : ""
                }

                WizardButton {
                    Layout.alignment: Qt.AlignHCenter

                    primary: true
                    text: qsTr("Retry")

                    onClicked: root.searchModel.retry()
                }
            }

            UnifiedSearchPlaceholderView {
                anchors.fill: parent
                visible: root.searchState === UnifiedSearchResultsListModel.Placeholder
            }

            UnifiedSearchResultNothingFound {
                anchors.fill: parent

                visible: root.searchState === UnifiedSearchResultsListModel.NothingFound
                text: root.searchModel ? root.searchModel.searchTerm : ""
            }

            ScrollView {
                anchors.fill: parent

                contentWidth: availableWidth

                visible: root.searchState === UnifiedSearchResultsListModel.Results
                    || root.searchState === UnifiedSearchResultsListModel.Skeleton

                ScrollBar.horizontal.policy: ScrollBar.AlwaysOff

                ListView {
                    id: resultsList

                    objectName: "searchResultsList"

                    clip: true
                    reuseItems: true
                    spacing: Style.extraSmallSpacing

                    model: root.searchModel
                    currentIndex: root.searchModel ? root.searchModel.selectedRow : -1

                    Accessible.role: Accessible.List
                    Accessible.name: qsTr("Search results")

                    delegate: UnifiedSearchResultDelegate {
                        width: resultsList.width
                        searchModel: root.searchModel
                    }

                    footer: Column {
                        objectName: "searchResultsLoadingFooter"

                        width: resultsList.width
                        height: visible ? implicitHeight : 0
                        spacing: Style.smallSpacing

                        visible: root.searchModel && root.searchModel.isSearchInProgress
                        Accessible.ignored: true

                        Repeater {
                            model: Style.unifiedSearchLoadingPlaceholderCount

                            Rectangle {
                                required property int index

                                width: resultsList.width
                                    * (Style.unifiedSearchLoadingPlaceholderInitialWidthRatio
                                        + index * Style.unifiedSearchLoadingPlaceholderWidthStep)
                                height: Style.unifiedSearchProviderHeaderHeight
                                radius: Style.mediumRoundedButtonRadius
                                color: palette.alternateBase
                                opacity: Style.unifiedSearchLoadingPlaceholderOpacity
                            }
                        }
                    }
                }
            }
        }

        RowLayout {
            objectName: "partialFailureFooter"

            Layout.fillWidth: true

            visible: root.aggregateView
                && root.searchModel
                && root.searchModel.hasPartialFailure

            EnforcedPlainTextLabel {
                Layout.fillWidth: true

                text: qsTr("Some sources unavailable")
                color: palette.placeholderText
            }

            WizardButton {
                text: qsTr("Retry")
                onClicked: root.searchModel.retryFailedProviders()
            }
        }

        WizardButton {
            Layout.fillWidth: true

            visible: root.searchModel && root.searchModel.showConnectedServicesAction

            text: root.searchModel && root.searchModel.externalProvidersEnabled
                ? qsTr("Less from connected services")
                : qsTr("More from connected services")

            onClicked: root.searchModel.setExternalProvidersEnabled(
                !root.searchModel.externalProvidersEnabled)
        }
    }

    Component {
        id: customRangeDialogComponent

        UnifiedSearchCustomDateRangeDialog {
            searchModel: root.searchModel
            onClosed: customRangeDialogLoader.active = false
        }
    }

    Loader {
        id: customRangeDialogLoader

        active: false
        sourceComponent: customRangeDialogComponent

        onLoaded: {
            if (status === Loader.Ready) {
                item.open()
            }
        }
    }
}
