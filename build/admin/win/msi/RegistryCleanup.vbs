On Error goto 0

Const HKEY_LOCAL_MACHINE = &H80000002
Const HKEY_CURRENT_USER = &H80000001

Const strObjRegistry = "winmgmts:\\.\root\default:StdRegProv"

Function RegistryDeleteKeyRecursive(regRoot, strKeyPath)
  Set objRegistry = GetObject(strObjRegistry)
  objRegistry.EnumKey regRoot, strKeyPath, arrSubkeys
  If IsArray(arrSubkeys) Then
    For Each strSubkey In arrSubkeys
      RegistryDeleteKeyRecursive regRoot, strKeyPath & "\" & strSubkey
    Next
  End If
  objRegistry.DeleteKey regRoot, strKeyPath
End Function

Function RegistryListSubkeys(regRoot, strKeyPath)
  Set objRegistry = GetObject(strObjRegistry)
  objRegistry.EnumKey regRoot, strKeyPath, arrSubkeys
  RegistryListSubkeys = arrSubkeys
End Function

Function GetUserSID()
  Dim objWshNetwork, objUserAccount
  
  Set objWshNetwork = CreateObject("WScript.Network")

  Set objUserAccount = GetObject("winmgmts://" & objWshNetwork.UserDomain & "/root/cimv2").Get("Win32_UserAccount.Domain='" & objWshNetwork.ComputerName & "',Name='" & objWshNetwork.UserName & "'")
  GetUserSID = objUserAccount.SID
End Function

Function RegistryCleanupSyncRootManager()
  strSyncRootManagerKeyPath = "SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\SyncRootManager"

  arrSubKeys = RegistryListSubkeys(HKEY_LOCAL_MACHINE, strSyncRootManagerKeyPath)
  
  If IsArray(arrSubkeys) Then
    arrSubkeys=Filter(arrSubkeys, Session.Property("APPNAME"))
  End If
  If IsArray(arrSubkeys) Then
    arrSubkeys=Filter(arrSubkeys, GetUserSID())
  End If

  If IsArray(arrSubkeys) Then
    For Each strSubkey In arrSubkeys
      RegistryDeleteKeyRecursive HKEY_LOCAL_MACHINE, strSyncRootManagerKeyPath & "\" & strSubkey
    Next
  End If
End Function

Function RegistryCleanupCfApiShellExtensions()
  Set objRegistry = GetObject(strObjRegistry)

  strShellExtAppId = "Software\Classes\AppID\{E314A650-DCA4-416E-974E-18EA37C213EA}"

  strShellExtThumbnailHandlerClsId = "Software\Classes\CLSID\{6FF9B5B6-389F-444A-9FDD-A286C36EA079}"
  strShellExtCustomStateHandlerClsId = "Software\Classes\CLSID\{1E62D59A-6EA4-476C-B707-4A32E88ED822}"

  rootKey = HKEY_CURRENT_USER

  If objRegistry.EnumKey(rootKey, strShellExtAppId, arrSubKeys) = 0 Then
    RegistryDeleteKeyRecursive rootKey, strShellExtAppId
  End If

  If objRegistry.EnumKey(rootKey, strShellExtThumbnailHandlerClsId, arrSubKeys) = 0 Then
    RegistryDeleteKeyRecursive rootKey, strShellExtThumbnailHandlerClsId
  End If

  If objRegistry.EnumKey(rootKey, strShellExtCustomStateHandlerClsId, arrSubKeys) = 0 Then
    RegistryDeleteKeyRecursive rootKey, strShellExtCustomStateHandlerClsId
  End If

End Function

Function RegistryCleanup()
  RegistryCleanupSyncRootManager()
  RegistryCleanupCfApiShellExtensions()
End Function
