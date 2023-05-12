@echo off
set HarvestAppDir=%~1
set BuildArch=x64

if "%HarvestAppDir%" == "" (
    echo "Missing parameter: Please specify file collection source path (HarvestAppDir)."
    exit 1
)

if "%WIX%" == "" (
    echo "WiX Toolset path not set (environment variable 'WIX'). Please install the WiX Toolset."
    exit 1
)

Rem Generate collect.wxs
"%WIX%\bin\heat.exe" dir "%HarvestAppDir%" -dr INSTALLDIR -sreg -srd -sfrag -ag -cg ClientFiles -var var.HarvestAppDir -platform='%BuildArch%' -t collect-transform.xsl -out collect.wxs
if %ERRORLEVEL% neq 0 exit %ERRORLEVEL%

Rem Compile en-US (https://www.firegiant.com/wix/tutorial/transforms/morphing-installers/)
"%WIX%\bin\candle.exe" -dcodepage=1252 -dPlatform=%BuildArch% -arch %BuildArch% -dHarvestAppDir="%HarvestAppDir%" -ext WixUtilExtension NCMsiHelper.wxs WinShellExt.wxs collect.wxs Nextcloud.wxs RegistryCleanupCustomAction.wxs
if %ERRORLEVEL% neq 0 exit %ERRORLEVEL%

Rem Link MSI package
"%WIX%\bin\light.exe" -sw1076 -ext WixUIExtension -ext WixUtilExtension -cultures:en-us NCMsiHelper.wixobj WinShellExt.wixobj collect.wixobj Nextcloud.wixobj RegistryCleanupCustomAction.wixobj -out "Nextcloud-3.8.50.20230512-daily-Win64-x64.msi"

exit %ERRORLEVEL%
