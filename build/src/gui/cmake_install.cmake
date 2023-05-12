# Install script for directory: C:/NextCloud/client-building/desktop/src/gui

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/NextCloud/client-building/install/Release/Win64")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/NextCloud/client-building/desktop/build/src/gui/updater/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/NextCloud/client-building/desktop/build/src/gui/socketapi/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/visualelements" TYPE FILE FILES
    "C:/NextCloud/client-building/desktop/theme/colored/150-Nextcloud-w10startmenu.png"
    "C:/NextCloud/client-building/desktop/theme/colored/70-Nextcloud-w10startmenu.png"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "C:/NextCloud/client-building/desktop/theme/nextcloud.VisualElementsManifest.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/i18n" TYPE FILE FILES
    "C:/NextCloud/client-building/desktop/build/src/gui/client_TW.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_af.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_bg.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_br.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_ca.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_cs.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_da.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_de.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_el.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_en.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_en_GB.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_eo.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_es.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_es_AR.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_es_CL.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_es_CO.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_es_CR.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_es_DO.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_es_EC.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_es_GT.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_es_HN.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_es_MX.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_es_SV.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_et.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_eu.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_fa.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_fi.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_fr.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_gl.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_he.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_hr.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_hu.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_id.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_is.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_it.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_ja.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_ko.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_lt_LT.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_lv.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_mk.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_nb_NO.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_nl.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_oc.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_pl.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_pt.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_pt_BR.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_ro.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_ru.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_sc.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_sk.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_sl.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_sr.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_sv.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_th.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_tr.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_uk.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_zh_CN.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_zh_HK.qm"
    "C:/NextCloud/client-building/desktop/build/src/gui/client_zh_TW.qm"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/NextCloud/client-building/desktop/build/bin/Debug/nextcloud.exe")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/NextCloud/client-building/desktop/build/bin/Release/nextcloud.exe")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/NextCloud/client-building/desktop/build/bin/MinSizeRel/nextcloud.exe")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/NextCloud/client-building/desktop/build/bin/RelWithDebInfo/nextcloud.exe")
  endif()
endif()

