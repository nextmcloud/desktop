/*
 *
 * Copyright (C) by Duncan Mac-Vicar P. <duncan@kde.org>
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
#include <QtGlobal>

#include <cmath>
#include <csignal>

#ifdef Q_OS_UNIX
#include <sys/time.h>
#include <sys/resource.h>
#endif

#include "application.h"
#include "cocoainitializer.h"
#include "theme.h"
#include "common/utility.h"

#if defined(BUILD_UPDATER)
#include "updater/updater.h"
#endif

#include <QTimer>
#include <QMessageBox>
#include <QDebug>
#include <QQuickStyle>
#include <QQuickWindow>
#include <QSurfaceFormat>

using namespace OCC;

void warnSystray()
{
    QMessageBox::critical(nullptr, qApp->translate("main.cpp", "System Tray not available"),
        qApp->translate("main.cpp", "%1 requires on a working system tray. "
                                    "If you are running XFCE, please follow "
                                    "<a href=\"http://docs.xfce.org/xfce/xfce4-panel/systray\">these instructions</a>. "
                                    "Otherwise, please install a system tray application such as \"trayer\" and try again.")
            .arg(Theme::instance()->appNameGUI()));
}

int main(int argc, char **argv)
{
    qputenv("QTWEBENGINE_CHROMIUM_FLAGS", "--disable-gpu --no-sandbox");
    QCoreApplication::setAttribute(Qt::AA_UseOpenGLES);

#ifdef Q_OS_WIN
    SetDllDirectory(L"");
#endif
    bool resourceLoaded = false;
    const QString currentPath = QDir::currentPath();
    if(Utility::isMac())
    {
        resourceLoaded = QResource::registerResource(QDir::toNativeSeparators("/Applications/MagentaCLOUD.app/Contents/Resources/nmctheme_v1.rcc"));
    }
    else if(Utility::isWindows() || !resourceLoaded)
    {
        resourceLoaded = QResource::registerResource(QDir::toNativeSeparators(currentPath + "/nmctheme_v1.rcc"));
    }

    Q_INIT_RESOURCE(resources);
    Q_INIT_RESOURCE(theme);

    // OpenSSL 1.1.0: No explicit initialisation or de-initialisation is necessary.

    QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps, true);
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling, true);
#ifdef Q_OS_MAC
    Mac::CocoaInitializer cocoaInit; // RIIA
#endif

    auto surfaceFormat = QSurfaceFormat::defaultFormat();
    surfaceFormat.setOption(QSurfaceFormat::ResetNotification);
    QSurfaceFormat::setDefaultFormat(surfaceFormat);

    QQuickWindow::setTextRenderType(QQuickWindow::NativeTextRendering);
    QQuickStyle::setStyle(QStringLiteral("Fusion"));

    OCC::Application app(argc, argv);

#ifdef Q_OS_WIN
    // The Windows style still has pixelated elements with Qt 5.6,
    // it's recommended to use the Fusion style in this case, even
    // though it looks slightly less native. Check here after the
    // QApplication was constructed, but before any QWidget is
    // constructed.
    if (app.devicePixelRatio() > 1)
        QApplication::setStyle(QStringLiteral("fusion"));
#endif // Q_OS_WIN

#ifndef Q_OS_WIN
    signal(SIGPIPE, SIG_IGN);
#endif
    if (app.giveHelp()) {
        app.showHelp();
        return 0;
    }
    if (app.versionOnly()) {
        app.showVersion();
        return 0;
    }

// check a environment variable for core dumps
#ifdef Q_OS_UNIX
    if (!qEnvironmentVariableIsEmpty("OWNCLOUD_CORE_DUMP")) {
        struct rlimit core_limit{};
        core_limit.rlim_cur = RLIM_INFINITY;
        core_limit.rlim_max = RLIM_INFINITY;

        if (setrlimit(RLIMIT_CORE, &core_limit) < 0) {
            fprintf(stderr, "Unable to set core dump limit\n");
        } else {
            qCInfo(lcApplication) << "Core dumps enabled";
        }
    }
#endif

#if defined(BUILD_UPDATER)
    // if handleStartup returns true, main()
    // needs to terminate here, e.g. because
    // the updater is triggered
    Updater *updater = Updater::instance();
    if (updater && updater->handleStartup()) {
        return 1;
    }
#endif

    // if the application is already running, notify it.
    if (app.isRunning()) {
        qCInfo(lcApplication) << "Already running, exiting...";
        if (app.isSessionRestored()) {
            // This call is mirrored with the one in Application::slotParseMessage
            qCInfo(lcApplication) << "Session was restored, don't notify app!";
            return -1;
        }

        QStringList args = app.arguments();
        if (args.size() > 1) {
            QString msg = args.join(QLatin1String("|"));
            if (!app.sendMessage(QLatin1String("MSG_PARSEOPTIONS:") + msg))
                return -1;
        } else if (!app.backgroundMode() && !app.sendMessage(QLatin1String("MSG_SHOWMAINDIALOG"))) {
            return -1;
        }
        return 0;
    }

    // We can't call isSystemTrayAvailable with appmenu-qt5 begause it hides the systemtray
    // (issue #4693)
    if (qgetenv("QT_QPA_PLATFORMTHEME") != "appmenu-qt5")
    {
        if (!QSystemTrayIcon::isSystemTrayAvailable()) {
            // If the systemtray is not there, we will wait one second for it to maybe start
            // (eg boot time) then we show the settings dialog if there is still no systemtray.
            // On XFCE however, we show a message box with explainaition how to install a systemtray.
            qCInfo(lcApplication) << "System tray is not available, waiting...";
            Utility::sleep(1);

            auto desktopSession = qgetenv("XDG_CURRENT_DESKTOP").toLower();
            if (desktopSession.isEmpty()) {
                desktopSession = qgetenv("DESKTOP_SESSION").toLower();
            }
            if (desktopSession == "xfce") {
                int attempts = 0;
                while (!QSystemTrayIcon::isSystemTrayAvailable()) {
                    attempts++;
                    if (attempts >= 30) {
                        qCWarning(lcApplication) << "System tray unavailable (xfce)";
                        warnSystray();
                        break;
                    }
                    Utility::sleep(1);
                }
            }

            if (QSystemTrayIcon::isSystemTrayAvailable()) {
                app.tryTrayAgain();
            } else if (!app.backgroundMode() && !AccountManager::instance()->accounts().isEmpty()) {
                if (desktopSession != "ubuntu") {
                    qCInfo(lcApplication) << "System tray still not available, showing window and trying again later";
                    app.showMainDialog();
                    QTimer::singleShot(10000, &app, &Application::tryTrayAgain);
                } else {
                    qCInfo(lcApplication) << "System tray still not available, but assuming it's fine on 'ubuntu' desktop";
                }
            }
        }
    }

    // Holen Sie die aktuelle Palette
    QPalette palette = app.palette();

    // qDebug() << "WindowText: " << palette.color(QPalette::WindowText);
    // qDebug() << "Button: " << palette.color(QPalette::Button);
    // qDebug() << "Light: " << palette.color(QPalette::Light);
    // qDebug() << "Midlight: " << palette.color(QPalette::Midlight);
    // qDebug() << "Dark: " << palette.color(QPalette::Dark);
    // qDebug() << "Mid: " << palette.color(QPalette::Mid);
    // qDebug() << "Text: " << palette.color(QPalette::Text);
    // qDebug() << "BrightText: " << palette.color(QPalette::BrightText);
    // qDebug() << "ButtonText: " << palette.color(QPalette::ButtonText);
    // qDebug() << "Base: " << palette.color(QPalette::Base);
    // qDebug() << "Window: " << palette.color(QPalette::Window);
    // qDebug() << "Shadow: " << palette.color(QPalette::Shadow);
    // qDebug() << "Highlight: " << palette.color(QPalette::Highlight);
    // qDebug() << "HighlightedText: " << palette.color(QPalette::HighlightedText);
    // qDebug() << "Link: " << palette.color(QPalette::Link);
    // qDebug() << "LinkVisited: " << palette.color(QPalette::LinkVisited);
    // qDebug() << "AlternateBase: " << palette.color(QPalette::AlternateBase);
    // qDebug() << "NoRole: " << palette.color(QPalette::NoRole);
    // qDebug() << "ToolTipBase: " << palette.color(QPalette::ToolTipBase);
    // qDebug() << "ToolTipText: " << palette.color(QPalette::ToolTipText);
    // qDebug() << "PlaceholderText: " << palette.color(QPalette::PlaceholderText);
    // qDebug() << "NColorRoles: " << palette.color(QPalette::NColorRoles);



    //        // Ändern Sie die Hintergrundfarbe für den hellen Modus
    palette.setColor(QPalette::WindowText, QColor(0, 0, 0));
    palette.setColor(QPalette::Button, QColor(236, 236, 236));
    palette.setColor(QPalette::Light, QColor(255, 255, 255));
    palette.setColor(QPalette::Midlight, QColor(245, 245, 245));
    palette.setColor(QPalette::Dark, QColor(191, 191, 191));
    palette.setColor(QPalette::Mid, QColor(168, 168, 168));
    palette.setColor(QPalette::Text, QColor(0, 0, 0));
    palette.setColor(QPalette::BrightText, QColor(255, 255, 255));
    palette.setColor(QPalette::ButtonText, QColor(0, 0, 0));
    palette.setColor(QPalette::Base, QColor(255, 255, 255));
    palette.setColor(QPalette::Window, QColor(236, 236, 236));
    palette.setColor(QPalette::Shadow, QColor(0, 0, 0));
    palette.setColor(QPalette::Highlight, QColor(179, 215, 255));
    palette.setColor(QPalette::HighlightedText, QColor(0, 0, 0));
    palette.setColor(QPalette::Link, QColor(0, 104, 218));
    palette.setColor(QPalette::LinkVisited, QColor(255, 0, 255));
    palette.setColor(QPalette::AlternateBase, QColor(245, 245, 245));
    palette.setColor(QPalette::NoRole, QColor(0, 0, 0));
    palette.setColor(QPalette::ToolTipBase, QColor(255, 255, 255));
    palette.setColor(QPalette::ToolTipText, QColor(0, 0, 0));
    palette.setColor(QPalette::PlaceholderText, QColor(0, 0, 0));


    app.setPalette(palette);



    return app.exec();
}
