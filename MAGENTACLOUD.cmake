set( APPLICATION_NAME           "MagentaCLOUD" )
set( APPLICATION_SHORTNAME      "MagentaCLOUD" )
set( APPLICATION_EXECUTABLE     "magentacloud" )
set( APPLICATION_CONFIG_NAME    "magentacloud" )
set( LINUX_APPLICATION_ID       "de.telekom.macOS.MagentaCLOUD.magentacloud" )
set( APPLICATION_DOMAIN         "magentacloud.de" )
set( APPLICATION_VENDOR         "MagentaCLOUD" )
set( APPLICATION_UPDATE_URL     "https://customerupdates.nextcloud.com/client/" CACHE string "URL for updater" )
set( APPLICATION_HELP_URL       "https://cloud.telekom-dienste.de/hilfe" CACHE string "URL for the help menu" )
set( APPLICATION_ICON_NAME      "MagentaCLOUD" )
set( APPLICATION_ICON_SET       "SVG" )

if(APPLE AND EXISTS "${CMAKE_SOURCE_DIR}/theme/colored/MagentaCLOUD-macOS-icon.png")
    set( APPLICATION_ICON_NAME "MagentaCLOUD-macOS" )
    set( APPLICATION_ICON_SET "PNG" )
    message("Using macOS-specific application icon: ${APPLICATION_ICON_NAME}")
endif()

set( APPLICATION_SERVER_URL [=[https://magentacloud.de]=] CACHE string "URL for the server to use. If entered the server can only connect to this instance" )
set( APPLICATION_SERVER_URL_ENFORCE ON )
set( DO_NOT_USE_PROXY OFF )
set( DISABLE_ACCOUNT_MIGRATION ON )

set( LINUX_PACKAGE_SHORTNAME    "magentacloud" )
set( THEME_CLASS                "NextcloudTheme" )
set( APPLICATION_REV_DOMAIN     "de.telekom.macOS.MagentaCLOUD" )
set( WIN_SETUP_BITMAP_PATH      "${CMAKE_SOURCE_DIR}/admin/win/nsi" )
set( MAC_INSTALLER_BACKGROUND_FILE "${CMAKE_SOURCE_DIR}/admin/osx/installer-background.png" CACHE STRING "The MacOSX installer background image")

option( WITH_CRASHREPORTER "Build crashreporter" OFF )
option( WITH_PROVIDERS "Build with providers list" OFF )
option( BUILD_UPDATER "Build with updater" ON )

set( NEXTCLOUD_BACKGROUND_COLOR "#E20074" CACHE string "Hex color of the wizard header background")
set( APPLICATION_WIZARD_HEADER_BACKGROUND_COLOR "#E20074" CACHE string "Hex color of the wizard header background")
set( APPLICATION_WIZARD_HEADER_TITLE_COLOR "#ffffff" CACHE string "Hex color of the text in the wizard header")
option( APPLICATION_WIZARD_USE_CUSTOM_LOGO "Use the logo from ':/client/theme/colored/wizard_logo.png' else the default application icon is used" ON )

set(ENCRYPTION_HARDWARE_TOKEN_DRIVER_PATH {})
set (CLIENTSIDEENCRYPTION_ENFORCE_USB_TOKEN false)
set( APPLICATION_DISPLAY_LEGACY_IMPORT_DIALOG OFF )
option(ENFORCE_SINGLE_ACCOUNT "Enforce use of a single account in desktop client" ON)
set(CMAKE_OSX_DEPLOYMENT_TARGET "12.0" CACHE STRING "Minimum OS X deployment version")

#
## Windows Shell Extensions & MSI - IMPORTANT: Generate new GUIDs for custom builds with "guidgen" or "uuidgen"
#
if(WIN32)
    # Context Menu
    set( WIN_SHELLEXT_CONTEXT_MENU_GUID      "{BC6988AB-ACE2-4B81-84DC-DC34F9B24401}" )

    # Overlays
    set( WIN_SHELLEXT_OVERLAY_GUID_ERROR     "{E0342B74-7593-4C70-9D61-22F294AAFE05}" )
    set( WIN_SHELLEXT_OVERLAY_GUID_OK        "{E1094E94-BE93-4EA2-9639-8475C68F3886}" )
    set( WIN_SHELLEXT_OVERLAY_GUID_OK_SHARED "{E243AD85-F71B-496B-B17E-B8091CBE93D2}" )
    set( WIN_SHELLEXT_OVERLAY_GUID_SYNC      "{E3D6DB20-1D83-4829-B5C9-941B31C0C35A}" )
    set( WIN_SHELLEXT_OVERLAY_GUID_WARNING   "{E4977F33-F93A-4A0A-9D3C-83DEA0EE8483}" )

    # MSI Upgrade Code (without brackets)
    set( WIN_MSI_UPGRADE_CODE                "FD2FCCA9-BB8F-4485-8F70-A0621B84A7F4" )

    # Windows build options
    option( BUILD_WIN_MSI "Build MSI scripts and helper DLL" OFF )
    option( BUILD_WIN_TOOLS "Build Win32 migration tools" OFF )
endif()

if (APPLE AND CMAKE_OSX_DEPLOYMENT_TARGET VERSION_GREATER_EQUAL 11.0)
    option( BUILD_FILE_PROVIDER_MODULE "Build the macOS virtual files File Provider module" OFF )
endif()
