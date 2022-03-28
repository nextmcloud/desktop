/*
 * Copyright (C) by Daniel Molkentin <danimo@owncloud.com>
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

#include "settingsdialog.h"
#include "ui_settingsdialog.h"

#include "folderman.h"
#include "theme.h"
#include "generalsettings.h"
#include "networksettings.h"
#include "accountsettings.h"
#include "configfile.h"
#include "progressdispatcher.h"
#include "owncloudgui.h"
#include "accountmanager.h"

#include <QLabel>
#include <QStandardItemModel>
#include <QStackedWidget>
#include <QSvgRenderer>
#include <QPushButton>
#include <QSettings>
#include <QToolBar>
#include <QToolButton>
#include <QLayout>
#include <QVBoxLayout>
#include <QPixmap>
#include <QImage>
#include <QWidgetAction>
#include <QPainter>
#include <QPainterPath>

namespace {
const QString TOOLBAR_CSS()
{
    return QStringLiteral("QToolBar { background: %1; margin: 0; padding: 8px; padding-left: 0px; border: none; border-bottom: 1px solid %2; spacing: 16px; } "
                          "QToolBar QToolButton { background: %1; font: 14px; color: #191919; border: none; border-bottom: 1px solid %2; margin: 8px; padding: 8px; } "
                          "QToolBar QToolBarExtension { padding:0; } "
                          "QToolBar QToolButton:checked { background: %1; color: #e20074; }");
}

const float buttonSizeRatio = 1.618f; // golden ratio

/** display name with two lines that is displayed in the settings
 * If width is bigger than 0, the string will be ellided so it does not exceed that width
 */
QString shortDisplayNameForSettings(OCC::Account *account, int width)
{
    QString user = account->davDisplayName();
    if (user.isEmpty()) {
        user = account->credentials()->user();
    }
    QString host = account->url().host();
    int port = account->url().port();
    if (port > 0 && port != 80 && port != 443) {
        host.append(QLatin1Char(':'));
        host.append(QString::number(port));
    }
    if (width > 0) {
        QFont f;
        QFontMetrics fm(f);
        host = fm.elidedText(host, Qt::ElideMiddle, width);
        user = fm.elidedText(user, Qt::ElideRight, width);
    }
    return QStringLiteral("%1\n%2").arg(user, host);
}
}


namespace OCC {

SettingsDialog::SettingsDialog(ownCloudGui *gui, QWidget *parent)
    : QDialog(parent)
    , _ui(new Ui::SettingsDialog)
    , _gui(gui)
{
    ConfigFile cfg;

    _ui->setupUi(this);
    _toolBar = new QToolBar;
    _toolBar->setIconSize(QSize(32, 32));
    _toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    layout()->setMenuBar(_toolBar);

    // People perceive this as a Window, so also make Ctrl+W work
    auto *closeWindowAction = new QAction(this);
    closeWindowAction->setShortcut(QKeySequence("Ctrl+W"));
    connect(closeWindowAction, &QAction::triggered, this, &SettingsDialog::accept);
    addAction(closeWindowAction);

    setObjectName("Settings"); // required as group for saveGeometry call

    setWindowIcon(Theme::instance()->applicationLogo());

    //: This name refers to the application name e.g Nextcloud
    setWindowTitle(tr("%1 Settings").arg(Theme::instance()->appNameGUI()));

    connect(AccountManager::instance(), &AccountManager::accountAdded,
        this, &SettingsDialog::accountAdded);
    connect(AccountManager::instance(), &AccountManager::accountRemoved,
        this, &SettingsDialog::accountRemoved);


    _actionGroup = new QActionGroup(this);
    _actionGroup->setExclusive(true);
    connect(_actionGroup, &QActionGroup::triggered, this, &SettingsDialog::slotSwitchPage);
    //connect(_actionGroup, &QActionGroup::hovered, this, &SettingsDialog::slotHoverEffect);

    foreach(auto ai, AccountManager::instance()->accounts()) {
        accountAdded(ai.data());
    }

    QAction *generalAction = createColorAwareAction(QLatin1String(":/client/theme/magenta/service32x32.svg"), tr("General"));
    _actionGroup->addAction(generalAction);
    _toolBar->addAction(generalAction);
    auto *generalSettings = new GeneralSettings;
    _ui->stack->addWidget(generalSettings);

    // Connect styleChanged events to our widgets, so they can adapt (Dark-/Light-Mode switching)
    connect(this, &SettingsDialog::styleChanged, generalSettings, &GeneralSettings::slotStyleChanged);

    QAction *networkAction = createColorAwareAction(QLatin1String(":/client/theme/magenta/network32x32.svg"), tr("Network"));
    _actionGroup->addAction(networkAction);
    _toolBar->addAction(networkAction);
    auto *networkSettings = new NetworkSettings;
    _ui->stack->addWidget(networkSettings);

    _actionGroupWidgets.insert(generalAction, generalSettings);
    _actionGroupWidgets.insert(networkAction, networkSettings);

    customizeStyle();

    QTimer::singleShot(1, this, &SettingsDialog::showFirstPage);

    auto *showLogWindow = new QAction(this);
    showLogWindow->setShortcut(QKeySequence("F12"));
    connect(showLogWindow, &QAction::triggered, gui, &ownCloudGui::slotToggleLogBrowser);
    addAction(showLogWindow);

    auto *showLogWindow2 = new QAction(this);
    showLogWindow2->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_L));
    connect(showLogWindow2, &QAction::triggered, gui, &ownCloudGui::slotToggleLogBrowser);
    addAction(showLogWindow2);

    connect(this, &SettingsDialog::onActivate, gui, &ownCloudGui::slotSettingsDialogActivated);

    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    cfg.restoreGeometry(this);
}

SettingsDialog::~SettingsDialog()
{
    delete _ui;
}

QWidget* SettingsDialog::currentPage()
{
    return _ui->stack->currentWidget();
}

// close event is not being called here
void SettingsDialog::reject()
{
    ConfigFile cfg;
    cfg.saveGeometry(this);
    QDialog::reject();
}

void SettingsDialog::accept()
{
    ConfigFile cfg;
    cfg.saveGeometry(this);
    QDialog::accept();
}

void SettingsDialog::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::StyleChange:
    case QEvent::PaletteChange:
    case QEvent::ThemeChange:
        customizeStyle();
        // Notify the other widgets (Dark-/Light-Mode switching)
        emit styleChanged();
        break;
    case QEvent::ActivationChange:
        if(isActiveWindow())
            emit onActivate();
        break;
    default:
        break;
    }

    QDialog::changeEvent(e);
}

void SettingsDialog::slotSwitchPage(QAction *action)
{
    _ui->stack->setCurrentWidget(_actionGroupWidgets.value(action));
    customizeStyle();
    if((action->text() == "Synchronization") || (action->text() == "Synchronisieren"))
    {
    const QIcon openIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/localFolder_magenta.svg"));
    action->setIcon(openIcon);
    }
    else if((action->text() == "Allgemein") || (action->text() == "General"))
    {
    const QIcon openIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/service_magenta.svg"));
    action->setIcon(openIcon);
    }
    else if((action->text() == "Netzwerk") || (action->text() == "Network"))
    {
    const QIcon openIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/network_magenta32x32.svg"));
    action->setIcon(openIcon);
    }
}

/*void SettingsDialog::slotHoverEffect(QAction *action)
{
    customizeStyle();
    if(action->text() == "Synchronization")
    {
        const QIcon openIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/localFolder_magenta.svg"));
        action->setIcon(openIcon);
    }
    else if(action->text() == "General")
    {
        const QIcon openIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/service_magenta.svg"));
        action->setIcon(openIcon);
    }
    else if(action->text() == "Network")
    {
        const QIcon openIcon = QIcon::fromTheme("iconPath", QIcon(":/client/theme/magenta/network_magenta32x32.svg"));
        action->setIcon(openIcon);
    }

}*/

void SettingsDialog::showFirstPage()
{
    QList<QAction *> actions = _toolBar->actions();
    if (!actions.empty()) {
        actions.first()->trigger();
    }
}

void SettingsDialog::showIssuesList(AccountState *account)
{
    const auto userModel = UserModel::instance();
    const auto id = userModel->findUserIdForAccount(account);
    UserModel::instance()->switchCurrentUser(id);
    emit Systray::instance()->showWindow();
}

void SettingsDialog::accountAdded(AccountState *s)
{
    auto height = _toolBar->sizeHint().height();
   // bool brandingSingleAccount = !Theme::instance()->multiAccount();

    QAction *accountAction = nullptr;
   //QImage avatar = s->account()->avatar();
    //const QString actionText = brandingSingleAccount ? tr("Account") : s->account()->displayName();
    //if (avatar.isNull()) {
        accountAction = createColorAwareAction(QLatin1String(":/client/theme/magenta/localFolder32x32.svg"),
            tr("Synchronization"));
   // } else {
       // QIcon icon(QPixmap::fromImage(AvatarJob::makeCircularAvatar(avatar)));
       // accountAction = createActionWithIcon(icon, actionText);
   // }

    //if (!brandingSingleAccount) {
       // accountAction->setToolTip(s->account()->displayName());
       // accountAction->setIconText(shortDisplayNameForSettings(s->account().data(), static_cast<int>(height * buttonSizeRatio)));
    //}
    // Adds space before users + activities
    /*auto *spacer = new QWidget();
    spacer->setFixedWidth(8);
    spacer->setMinimumWidth(0);
    spacer->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    _toolBar->insertWidget(accountAction, spacer);*/

    //_toolBar->insertAction(_toolBar->actions().at(0), accountAction);
    _toolBar->addAction(accountAction);
    auto accountSettings = new AccountSettings(s, this);
    QString objectName = QLatin1String("Synchronization_");
    //objectName += s->account()->displayName();
    accountSettings->setObjectName(objectName);
    _ui->stack->insertWidget(0 , accountSettings);

    _actionGroup->addAction(accountAction);
    _actionGroupWidgets.insert(accountAction, accountSettings);
   // _actionForAccount.insert(s->account().data(), accountAction);
    accountAction->trigger();

    connect(accountSettings, &AccountSettings::folderChanged, _gui, &ownCloudGui::slotFoldersChanged);
    connect(accountSettings, &AccountSettings::openFolderAlias,
        _gui, &ownCloudGui::slotFolderOpenAction);
    connect(accountSettings, &AccountSettings::showIssuesList, this, &SettingsDialog::showIssuesList);
    connect(s->account().data(), &Account::accountChangedAvatar, this, &SettingsDialog::slotAccountAvatarChanged);
    connect(s->account().data(), &Account::accountChangedDisplayName, this, &SettingsDialog::slotAccountDisplayNameChanged);

    // Connect styleChanged event, to adapt (Dark-/Light-Mode switching)
    connect(this, &SettingsDialog::styleChanged, accountSettings, &AccountSettings::slotStyleChanged);
}

void SettingsDialog::slotAccountAvatarChanged()
{
    auto *account = static_cast<Account *>(sender());
    if (account && _actionForAccount.contains(account)) {
        QAction *action = _actionForAccount[account];
        if (action) {
            QImage pix = account->avatar();
            if (!pix.isNull()) {
                action->setIcon(QPixmap::fromImage(AvatarJob::makeCircularAvatar(pix)));
            }
        }
    }
}

void SettingsDialog::slotAccountDisplayNameChanged()
{
    auto *account = static_cast<Account *>(sender());
    if (account && _actionForAccount.contains(account)) {
        QAction *action = _actionForAccount[account];
        if (action) {
            QString displayName = account->displayName();
            action->setText(displayName);
            auto height = _toolBar->sizeHint().height();
            action->setIconText(shortDisplayNameForSettings(account, static_cast<int>(height * buttonSizeRatio)));
        }
    }
}

void SettingsDialog::accountRemoved(AccountState *s)
{
    for (auto it = _actionGroupWidgets.begin(); it != _actionGroupWidgets.end(); ++it) {
        auto as = qobject_cast<AccountSettings *>(*it);
        if (!as) {
            continue;
        }
        if (as->accountsState() == s) {
            _toolBar->removeAction(it.key());

            if (_ui->stack->currentWidget() == it.value()) {
                showFirstPage();
            }

            it.key()->deleteLater();
            it.value()->deleteLater();
            _actionGroupWidgets.erase(it);
            break;
        }
    }

    if (_actionForAccount.contains(s->account().data())) {
        _actionForAccount.remove(s->account().data());
    }

    // Hide when the last account is deleted. We want to enter the same
    // state we'd be in the client was started up without an account
    // configured.
    if (AccountManager::instance()->accounts().isEmpty()) {
        hide();
    }
}

void SettingsDialog::customizeStyle()
{
    QString highlightColor(palette().highlight().color().name());
    QString highlightTextColor(palette().highlightedText().color().name());
    QString dark(palette().dark().color().name());
    QString background(palette().base().color().name());
    _toolBar->setStyleSheet(TOOLBAR_CSS().arg(background, dark, highlightColor, highlightTextColor));

    Q_FOREACH (QAction *a, _actionGroup->actions()) {
       // QIcon icon = Theme::createColorAwareIcon(a->property("iconPath").toString(), palette());
        /*QSvgRenderer renderer(a->property("iconPath").toString());
           QImage img(64, 64, QImage::Format_ARGB32);
           img.fill(Qt::GlobalColor::transparent);
           QPainter imgPainter(&img);
           QImage magenta(64, 64, QImage::Format_ARGB32);
           magenta.fill(Qt::GlobalColor::transparent);
           QPainter mgPainter(&magenta);

           magenta.setColorCount(16);
           magenta.setColor(1,qRgb(0xe2,00,74));

           renderer.render(&imgPainter);
           renderer.render(&mgPainter);

           //inverted.invertPixels(QImage::InvertRgb);
          // magenta.setColorCount(16);
          // magenta.setColor(1,qRgb(0xe2,00,74));

           QIcon icon;
           //if (Theme::isDarkColor(palette().color(QPalette::Base))) {
               //icon.addPixmap(QPixmap::fromImage(img));
          // } else {
               //icon.addPixmap(QPixmap::fromImage(magenta));
          // }
           if (Theme::isDarkColor(palette().color(QPalette::HighlightedText))) {
               icon.addPixmap(QPixmap::fromImage(magenta), QIcon::Normal, QIcon::On);
           } else {
               icon.addPixmap(QPixmap::fromImage(img), QIcon::Normal, QIcon::On);
           }*/
        const QIcon icon = QIcon::fromTheme("iconPath", QIcon(a->property("iconPath").toString()));
        a->setIcon(icon);
        auto *btn = qobject_cast<QToolButton *>(_toolBar->widgetForAction(a));
        if (btn)
            btn->setIcon(icon);
    }
}

class ToolButtonAction : public QWidgetAction
{
public:
    explicit ToolButtonAction(const QIcon &icon, const QString &text, QObject *parent)
        : QWidgetAction(parent)
    {
        setText(text);
        setIcon(icon);
    }


    QWidget *createWidget(QWidget *parent) override
    {
        auto toolbar = qobject_cast<QToolBar *>(parent);
        if (!toolbar) {
            // this means we are in the extention menu, no special action here
            return nullptr;
        }

        auto *btn = new QToolButton(parent);
        QString objectName = QLatin1String("settingsdialog_toolbutton_");
        objectName += text();
        btn->setObjectName(objectName);
        btn->setFixedSize(134,80);

        btn->setDefaultAction(this);
        btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        return btn;
    }
};

QAction *SettingsDialog::createActionWithIcon(const QIcon &icon, const QString &text, const QString &iconPath)
{
    QAction *action = new ToolButtonAction(icon, text, this);
    action->setCheckable(true);
    if (!iconPath.isEmpty()) {
        action->setProperty("iconPath", iconPath);
    }
    return action;
}

QAction *SettingsDialog::createColorAwareAction(const QString &iconPath, const QString &text)
{
    // all buttons must have the same size in order to keep a good layout
   // QIcon coloredIcon = Theme::createColorAwareIcon(iconPath, palette());
    const QIcon openIcon = QIcon::fromTheme("iconPath", QIcon(iconPath));
   // QIcon icon = QIcon(iconPath);

    return createActionWithIcon(openIcon, text, iconPath);
}

} // namespace OCC
