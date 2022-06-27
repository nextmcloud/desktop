set( APPLICATION_NAME       "MagentaCLOUD" )
set( APPLICATION_SHORTNAME  "MagentaCLOUD" )
set( APPLICATION_EXECUTABLE "magentacloud" )
set( LINUX_APPLICATION_ID "de.magentacloud.magentacloud" )
set( APPLICATION_DOMAIN     "magentacloud.de" )
set( APPLICATION_VENDOR     "Deutsche Telekom AG" )
set( APPLICATION_UPDATE_URL "https://customerupdates.nextcloud.com/client/" CACHE string "URL for updater" )
set( APPLICATION_HELP_URL   "https://cloud.telekom-dienste.de/hilfe" CACHE string "URL for the help menu" )
set( APPLICATION_IMPRINT_URL   "https://www.telekom.de/impressum" CACHE string "URL for the imprint" )
set( APPLICATION_PRIVACY_URL   "https://static.magentacloud.de/privacy/datenschutzhinweise_software.pdf" CACHE string "URL for the privacy policy" )
set( APPLICATION_OPEN_SOURCE_URL   "https://static.magentacloud.de/licences/windowsdesktop.html" CACHE string "URL for the open source software" )
set( APPLICATION_ICON_NAME  "magentacloud" )
set( APPLICATION_ICON_SET  "SVG" )
set( APPLICATION_SERVER_URL "https://magentacloud.de" CACHE string "URL for the server to use. If entered the server can only connect to this instance" )
set( APPLICATION_SERVER_URL_ENFORCE ON )
set( DO_NOT_USE_PROXY OFF )
set( LINUX_PACKAGE_SHORTNAME "magentacloud" )
set( THEME_CLASS            "NextcloudTheme" )
set( APPLICATION_REV_DOMAIN "de.magentacloud" )
set( WIN_SETUP_BITMAP_PATH  "${CMAKE_SOURCE_DIR}/admin/win/nsi" )
set( MAC_INSTALLER_BACKGROUND_FILE "${CMAKE_SOURCE_DIR}/admin/osx/installer-background.png" CACHE STRING "The MacOSX installer background image")
option( WITH_CRASHREPORTER "Build crashreporter" OFF )
option( WITH_PROVIDERS "Build with providers list" OFF )
option( BUILD_UPDATER "Build with updater" ON )
set( NEXTCLOUD_BACKGROUND_COLOR "#E20074" CACHE string "Hex color of the wizard header background")
set( APPLICATION_WIZARD_HEADER_BACKGROUND_COLOR "#E20074" CACHE string "Hex color of the wizard header background")
set( APPLICATION_WIZARD_HEADER_TITLE_COLOR "#ffffff" CACHE string "Hex color of the text in the wizard header")
option( APPLICATION_WIZARD_USE_CUSTOM_LOGO "Use the logo from ':/client/theme/colored/wizard_logo.png' else the default application icon is used" ON )
option( ENFORCE_VIRTUAL_FILES_SYNC_FOLDER "Enforce use of virtual files sync folder when available" OFF )
set( WIN_SHELLEXT_CONTEXT_MENU_GUID      "{C475B1E0-655A-4080-9D13-C3F0905740CF}" )
set( WIN_SHELLEXT_OVERLAY_GUID_ERROR     "{21A727D8-DF75-47AC-9B23-98CA9941E764}" )
set( WIN_SHELLEXT_OVERLAY_GUID_OK        "{5FB43024-D810-463E-8298-25AC18B4D657}" )
set( WIN_SHELLEXT_OVERLAY_GUID_OK_SHARED "{207E0D58-A4D2-4BEA-B23F-74B275067FF4}" )
set( WIN_SHELLEXT_OVERLAY_GUID_SYNC      "{B7E41BEC-A46C-4536-A3B8-F20322BC4538}" )
set( WIN_SHELLEXT_OVERLAY_GUID_WARNING   "{EC74FC2C-CC25-4FF8-B860-8F98CB200CCE}" )
set( WIN_MSI_UPGRADE_CODE                "A53983CB-9D31-4B06-8E33-CE824AAC2C58" )
option( BUILD_WIN_MSI "Build MSI scripts and helper DLL" ON )
