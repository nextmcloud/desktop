# MagentaCLOUD local branding overlay
#
# This file combines the common branding settings with the platform-specific
# values normally injected by the Nextcloud Branding Service.

# ---------------------------------------------------------------------------
# Common application branding
# ---------------------------------------------------------------------------

set(APPLICATION_NAME        "MagentaCLOUD")
set(APPLICATION_SHORTNAME   "MagentaCLOUD")
set(APPLICATION_EXECUTABLE  "magentacloud")
set(APPLICATION_CONFIG_NAME "magentacloud")

set(APPLICATION_DOMAIN "magentacloud.de")
set(APPLICATION_VENDOR "Deutsche Telekom AG")

set(
    APPLICATION_UPDATE_URL
    "https://customerupdates.nextcloud.com/client/"
    CACHE STRING
    "URL for updater"
)

set(
    APPLICATION_HELP_URL
    "https://cloud.telekom-dienste.de/hilfe"
    CACHE STRING
    "URL for the help menu"
)

set(
    APPLICATION_SERVER_URL
    [=[https://magentacloud.de]=]
    CACHE STRING
    "URL for the server to use. If entered the server can only connect to this instance"
)

set(APPLICATION_SERVER_URL_ENFORCE ON)

set(DO_NOT_USE_PROXY OFF)
set(DISABLE_ACCOUNT_MIGRATION ON)

set(LINUX_PACKAGE_SHORTNAME "magentacloud")
set(LINUX_APPLICATION_ID "com.t_systems.android.webdav.magentacloud")

set(THEME_CLASS "NextcloudTheme")

set(
    APPLICATION_REV_DOMAIN_DBUS
    "https://magentacloud.de"
)

set(
    WIN_SETUP_BITMAP_PATH
    "${CMAKE_SOURCE_DIR}/admin/win/nsi"
)

set(
    MAC_INSTALLER_BACKGROUND_FILE
    "${CMAKE_SOURCE_DIR}/admin/osx/installer-background.png"
    CACHE STRING
    "The MacOSX installer background image"
)

# ---------------------------------------------------------------------------
# Client behaviour
# ---------------------------------------------------------------------------

option(WITH_CRASHREPORTER "Build crashreporter" OFF)
option(WITH_PROVIDERS "Build with providers list" OFF)

set(WIZARD_HIDE_SELF_HOST_BUTTON ON)
set(WIZARD_HIDE_SIGNUP_BUTTON OFF)

set(APPLICATION_SIGNUP_URL [=[]=])

option(BUILD_UPDATER "Build with updater" ON)

set(
    NEXTCLOUD_BACKGROUND_COLOR
    "#E20074"
    CACHE STRING
    "Hex color of the wizard header background"
)

set(
    APPLICATION_WIZARD_HEADER_BACKGROUND_COLOR
    "#E20074"
    CACHE STRING
    "Hex color of the wizard header background"
)

set(
    APPLICATION_WIZARD_HEADER_TITLE_COLOR
    "#ffffff"
    CACHE STRING
    "Hex color of the text in the wizard header"
)

option(
    APPLICATION_WIZARD_USE_CUSTOM_LOGO
    "Use the logo from ':/client/theme/colored/wizard_logo.(png|svg)' else the default application icon is used"
    ON
)

set(ENCRYPTION_HARDWARE_TOKEN_DRIVER_PATH {})
set(CLIENTSIDEENCRYPTION_ENFORCE_USB_TOKEN false)

option(
    ENFORCE_VIRTUAL_FILES_SYNC_FOLDER
    "Enforce use of virtual files sync folder when available"
    OFF
)

option(
    DISABLE_VIRTUAL_FILES_SYNC_FOLDER
    "Disable use of virtual files sync folder even when available"
    ON
)

set(APPLICATION_DISPLAY_LEGACY_IMPORT_DIALOG OFF)

option(
    ENFORCE_SINGLE_ACCOUNT
    "Enforce use of a single account in desktop client"
    ON
)

set(APPLICATION_ICON_SET "SVG")


# ---------------------------------------------------------------------------
# macOS branding
# ---------------------------------------------------------------------------

if(APPLE)
    # The Branding Service supplies its macOS source assets under the historic
    # Nextcloud names. src/gui/CMakeLists.txt creates MagentaCLOUD aliases from
    # these source files for branded builds.
    set(APPLICATION_ICON_NAME "Nextcloud")

    set(
        APPLICATION_REV_DOMAIN
        "de.telekom.macOS.MagentaCLOUD"
    )

    set(
        DEVELOPMENT_TEAM
        "S5724FNY84"
        CACHE STRING
        "Apple Development Team ID"
    )

    option(
        BUILD_FILE_PROVIDER_MODULE
        "Build the macOS file provider module"
        OFF
    )

    set(
        CMAKE_OSX_DEPLOYMENT_TARGET
        "12.0"
        CACHE STRING
        "Minimum OS X deployment version"
    )


# ---------------------------------------------------------------------------
# Windows branding
# ---------------------------------------------------------------------------

elseif(WIN32)
    set(APPLICATION_ICON_NAME "magentacloud")

    set(
        APPLICATION_REV_DOMAIN
        "com.t_systems.android.webdav"
    )

    set(WIN_DISABLE_USERNAME_PREFILL OFF)

    set(
        WIN_SHELLEXT_CONTEXT_MENU_GUID
        "{C475B1E0-655A-4080-9D13-C3F0905740CF}"
    )

    set(
        WIN_SHELLEXT_OVERLAY_GUID_ERROR
        "{21A727D8-DF75-47AC-9B23-98CA9941E764}"
    )

    set(
        WIN_SHELLEXT_OVERLAY_GUID_OK
        "{5FB43024-D810-463E-8298-25AC18B4D657}"
    )

    set(
        WIN_SHELLEXT_OVERLAY_GUID_OK_SHARED
        "{207E0D58-A4D2-4BEA-B23F-74B275067FF4}"
    )

    set(
        WIN_SHELLEXT_OVERLAY_GUID_SYNC
        "{B7E41BEC-A46C-4536-A3B8-F20322BC4538}"
    )

    set(
        WIN_SHELLEXT_OVERLAY_GUID_WARNING
        "{EC74FC2C-CC25-4FF8-B860-8F98CB200CCE}"
    )

    set(
        WIN_MSI_UPGRADE_CODE
        "A53983CB-9D31-4B06-8E33-CE824AAC2C58"
    )

    option(
        BUILD_WIN_MSI
        "Build MSI scripts and helper DLL"
        ON
    )


# ---------------------------------------------------------------------------
# Linux / other platforms
# ---------------------------------------------------------------------------

else()
    set(APPLICATION_ICON_NAME "magentacloud")

    set(
        APPLICATION_REV_DOMAIN
        "com.t_systems.android.webdav"
    )
endif()
