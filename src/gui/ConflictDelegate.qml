/*
 * Copyright (C) 2023 by Matthieu Gallien <matthieu.gallien@nextcloud.com>
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

import QtQml 2.15
import QtQuick 2.15
import QtQuick.Layouts 1.15
import QtQuick.Controls 2.15
import Style 1.0
import com.nextcloud.desktopclient 1.0
import "./tray"

Item {
    id: root

    required property string existingFileName
    required property string existingSize
    required property string conflictSize
    required property string existingDate
    required property string conflictDate
    required property bool existingSelected
    required property bool conflictSelected
    required property url existingPreviewUrl
    required property url conflictPreviewUrl
    required property var model

    EnforcedPlainTextLabel {
        id: existingFileNameLabel

        anchors.top: parent.top
        anchors.left: parent.left

        text: root.existingFileName

        font.weight: Font.Bold
        font.pixelSize: Style.fontPixelSizeResolveConflictsDialog
    }

    RowLayout {
        anchors.top: existingFileNameLabel.bottom
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottomMargin: 8

        ConflictItemFileInfo {
            Layout.fillWidth: true
            Layout.fillHeight: true

            itemSelected: root.existingSelected
            itemPreviewUrl: root.existingPreviewUrl
            itemVersionLabel: qsTr('Local version')
            itemDateLabel: root.existingDate
            itemFileSizeLabel: root.existingSize

            onSelectedChanged: function() {
                model.existingSelected = itemSelected
            }
        }

        ConflictItemFileInfo {
            Layout.fillWidth: true
            Layout.fillHeight: true

            itemSelected: root.conflictSelected
            itemPreviewUrl: root.conflictPreviewUrl
            itemVersionLabel: qsTr('Server version')
            itemDateLabel: root.conflictDate
            itemFileSizeLabel: root.conflictSize

            onSelectedChanged: function() {
                model.conflictSelected = itemSelected
            }
        }
    }
}
