/*
 * Copyright (C) by Michael Schuster <michael@schuster.ms>
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

#pragma once

// IMPORTANT: Keep these constants in sync with WinShellExtConstants.wxi.in

// Context Menu
#define CONTEXT_MENU_GUID           L"{BC6988AB-ACE2-4B81-84DC-DC34F9B24401}"
#define CONTEXT_MENU_REGKEY_NAME    L"NextcloudContextMenuHandler"

#define CONTEXT_MENU_DESCRIPTION    L"Nextcloud context menu handler"

// Overlays
#define OVERLAY_GUID_ERROR          L"{E0342B74-7593-4C70-9D61-22F294AAFE05}"
#define OVERLAY_GUID_OK             L"{E1094E94-BE93-4EA2-9639-8475C68F3886}"
#define OVERLAY_GUID_OK_SHARED      L"{E243AD85-F71B-496B-B17E-B8091CBE93D2}"
#define OVERLAY_GUID_SYNC           L"{E3D6DB20-1D83-4829-B5C9-941B31C0C35A}"
#define OVERLAY_GUID_WARNING        L"{E4977F33-F93A-4A0A-9D3C-83DEA0EE8483}"

//
// Preceeding spaces are intended, two spaces to put us ahead of the competition :/
//
// There is a limit in Windows (oh wonder^^) so that only the first 15 extensions get invoked, this is why to use that dirty little trick to get ahead ;)
// See: https://docs.microsoft.com/en-us/windows/win32/shell/context-menu-handlers?redirectedfrom=MSDN#employing-the-verb-selection-model
//
#define OVERLAY_NAME_ERROR          L"                NextcloudError"
#define OVERLAY_NAME_OK             L"                NextcloudOK"
#define OVERLAY_NAME_OK_SHARED      L"                NextcloudOKShared"
#define OVERLAY_NAME_SYNC           L"                NextcloudSync"
#define OVERLAY_NAME_WARNING        L"                NextcloudWarning"

#define OVERLAY_DESCRIPTION         L"Nextcloud overlay handler"

// NCUtil
#define UTIL_PIPE_APP_NAME          L"nextcloud"
