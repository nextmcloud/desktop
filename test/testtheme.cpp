/*
 * Copyright (C) 2021 by Felix Weilbach <felix.weilbach@nextcloud.com>
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

#include <QTest>
#include "config.h"
#include "version.h"
#include "themeutils.h"

#define private public
#include "theme.h"
#include "syncresult.h"
#undef private

class TestTheme : public QObject
{
    Q_OBJECT

public:
    TestTheme()
    {
        Q_INIT_RESOURCE(resources);
        Q_INIT_RESOURCE(theme);
    }

private slots:
    void testHidpiFileName_darkBackground_returnPathToWhiteIcon()
    {
        FakePaintDevice paintDevice;
        const QColor backgroundColor("#000000");
        const QString iconName("icon-name");

        const auto iconPath = OCC::Theme::hidpiFileName(iconName + ".png", backgroundColor, &paintDevice);

        QCOMPARE(iconPath, ":/client/theme/white/" + iconName + ".png");
    }

    void testHidpiFileName_lightBackground_returnPathToBlackIcon()
    {
        FakePaintDevice paintDevice;
        const QColor backgroundColor("#ffffff");
        const QString iconName("icon-name");

        const auto iconPath = OCC::Theme::hidpiFileName(iconName + ".png", backgroundColor, &paintDevice);

        QCOMPARE(iconPath, ":/client/theme/black/" + iconName + ".png");
    }

    void testHidpiFileName_hidpiDevice_returnHidpiIconPath()
    {
        FakePaintDevice paintDevice;
        paintDevice.setHidpi(true);
        const QColor backgroundColor("#000000");
        const QString iconName("wizard-files");

        const auto iconPath = OCC::Theme::hidpiFileName(iconName + ".png", backgroundColor, &paintDevice);

        QCOMPARE(iconPath, ":/client/theme/white/" + iconName + "@2x.png");
    }

    void testIsDarkColor_nextcloudBlue_returnTrue()
    {
        const QColor color(0, 130, 201);

        const auto result = OCC::Theme::isDarkColor(color);

        QCOMPARE(result, true);
    }

    void testIsDarkColor_lightColor_returnFalse()
    {
        const QColor color(255, 255, 255);

        const auto result = OCC::Theme::isDarkColor(color);

        QCOMPARE(result, false);
    }

    void testIsDarkColor_darkColor_returnTrue()
    {
        const QColor color(0, 0, 0);

        const auto result = OCC::Theme::isDarkColor(color);

        QCOMPARE(result, true);
    }

    void testIsHidpi_hidpi_returnTrue()
    {
        FakePaintDevice paintDevice;
        paintDevice.setHidpi(true);

        QCOMPARE(OCC::Theme::isHidpi(&paintDevice), true);
    }

    void testIsHidpi_lowdpi_returnFalse()
    {
        FakePaintDevice paintDevice;
        paintDevice.setHidpi(false);

        QCOMPARE(OCC::Theme::isHidpi(&paintDevice), false);
    }

    void testfolderOverlayIcon_Undefined()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "state-warning,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->folderOverlayIcon(OCC::SyncResult::Status::Undefined, false);

        QCOMPARE(ret, expectedRet);
    }
    void testfolderOverlayIcon_NotYetStarted()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "state-sync,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->folderOverlayIcon(OCC::SyncResult::Status::NotYetStarted, false);

        QCOMPARE(ret, expectedRet);
    }
    void testfolderOverlayIcon_SyncRunning()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "state-sync,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->folderOverlayIcon(OCC::SyncResult::Status::SyncRunning, false);

        QCOMPARE(ret, expectedRet);
    }

    void testfolderOverlayIcon_SyncAbortRequested()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "state-pause,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->folderOverlayIcon(OCC::SyncResult::Status::SyncAbortRequested, false);

        QCOMPARE(ret, expectedRet);
    }
    void testfolderOverlayIcon_Paused()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "state-pause,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->folderOverlayIcon(OCC::SyncResult::Status::Paused, false);

        QCOMPARE(ret, expectedRet);
    }
    void testfolderOverlayIcon_SyncPrepare_True()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "magentacloud-logo,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->folderOverlayIcon(OCC::SyncResult::Status::SyncPrepare, true);

        QCOMPARE(ret, expectedRet);
    }

    void testfolderOverlayIcon_SyncPrepare_False()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "state-ok,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->folderOverlayIcon(OCC::SyncResult::Status::SyncPrepare, false);

        QCOMPARE(ret, expectedRet);
    }
    void testfolderOverlayIcon_Success_True()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "magentacloud-logo,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->folderOverlayIcon(OCC::SyncResult::Status::Success, true);

        QCOMPARE(ret, expectedRet);
    }

    void testfolderOverlayIcon_Success_False()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "state-ok,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->folderOverlayIcon(OCC::SyncResult::Status::Success, false);

        QCOMPARE(ret, expectedRet);
    }
    void testfolderOverlayIcon_Problem()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "state-warning,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->folderOverlayIcon(OCC::SyncResult::Status::Problem, false);

        QCOMPARE(ret, expectedRet);
    }
    void testfolderOverlayIcon_Error()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "state-error,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->folderOverlayIcon(OCC::SyncResult::Status::Error, false);

        QCOMPARE(ret, expectedRet);
    }
    void testfolderOverlayIcon_SetupError()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "state-error,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->folderOverlayIcon(OCC::SyncResult::Status::SetupError, false);

        QCOMPARE(ret, expectedRet);
    }
    void testfolderOverlayIcon_Other()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "state-error,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->folderOverlayIcon((OCC::SyncResult::Status)10, false);

        QCOMPARE(ret, expectedRet);
    }

    void testfolderOkIcon()
    {
        QString pixmapName = QString::fromLatin1(":/client/theme/%1/%2-%3.png").
                             arg("colored").arg("folder-ok").arg(64);
        QIcon expectedRet = QPixmap(pixmapName);
        OCC::Theme *themeObj = OCC::Theme::instance();

        QIcon ret = themeObj->folderOkIcon();

        QCOMPARE(ret.availableSizes(), expectedRet.availableSizes());
    }

    void testaddButtonIcon()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "circle-add-magenta,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->addButtonIcon();

        QCOMPARE(ret, expectedRet);
    }

    void testapplicationLogo()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString key = "magentacloud-logo,colored";
        QIcon expectedRet = QIcon("open.xpm");
        themeObj->_iconCache[key] = expectedRet;

        QIcon ret = themeObj->applicationLogo();

        QCOMPARE(ret, expectedRet);
    }

    void testAbout()
    {
        OCC::Theme *themeObj = OCC::Theme::instance();
        QString expectedDevString = tr("<p>%1 Desktop Client Version %2.</p>")
                                    .arg(APPLICATION_NAME)
                                    .arg(QString::fromLatin1(MIRALL_STRINGIFY(MIRALL_VERSION)));

        QString devString = themeObj->about();

        QCOMPARE(devString, expectedDevString);
    }
};

QTEST_MAIN(TestTheme)
#include "testtheme.moc"
