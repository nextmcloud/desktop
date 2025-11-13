/*
 * SPDX-FileCopyrightText: 2018 Nextcloud GmbH and Nextcloud contributors
 * SPDX-FileCopyrightText: 2014 ownCloud GmbH
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "configfile.h"

#include "folderman.h"
#include "generalsettings.h"
#include "ignorelisteditor.h"
#include "ui_ignorelisteditor.h"

#include <QFile>
#include <QDir>
#include <QListWidget>
#include <QListWidgetItem>
#include <QMessageBox>
#include <QInputDialog>
#include <QPushButton>

namespace OCC {

IgnoreListEditor::IgnoreListEditor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IgnoreListEditor)
{
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->setupUi(this);

    ConfigFile cfgFile;
    //FIXME This is not true. The entries are hardcoded below in setupTableReadOnlyItems
    readOnlyTooltip = tr("This entry is provided by the system at \"%1\" "
                         "and cannot be modified in this view.")
                          .arg(QDir::toNativeSeparators(cfgFile.excludeFile(ConfigFile::SystemScope)));

    setupTableReadOnlyItems();

    const auto userConfig = cfgFile.excludeFile(ConfigFile::Scope::UserScope);
    ui->ignoreTableWidget->readIgnoreFile(userConfig);

    _defaultPatterns = ui->ignoreTableWidget->patterns();
    _defaultIgnoreHidden = !FolderMan::instance()->ignoreHiddenFiles();
    ui->syncHiddenFilesCheckBox->setChecked(_defaultIgnoreHidden);

    connect(this, &QDialog::accepted, [=, this]() {
        ui->ignoreTableWidget->slotWriteIgnoreFile(userConfig);
        /* handle the hidden file checkbox */

        /* the ignoreHiddenFiles flag is a folder specific setting, but for now, it is
        * handled globally. Save it to every folder that is defined.
        * TODO this can now be fixed, simply attach this IgnoreListEditor to top-level account
        * settings
        */
        FolderMan::instance()->setIgnoreHiddenFiles(ignoreHiddenFiles());
    });

    connect(ui->buttonBox, &QDialogButtonBox::clicked,
            this, &IgnoreListEditor::slotRestoreDefaults);
    connect(ui->ignoreTableWidget, &IgnoreListTableWidget::changed,
            this, &IgnoreListEditor::updateRestoreDefaultsButtonState);
    connect(ui->syncHiddenFilesCheckBox, &QCheckBox::toggled,
            this, &IgnoreListEditor::updateRestoreDefaultsButtonState);

    updateRestoreDefaultsButtonState();
}

IgnoreListEditor::~IgnoreListEditor()
{
    delete ui;
}

void IgnoreListEditor::setupTableReadOnlyItems()
{
    ui->ignoreTableWidget->addPattern(".csync_journal.db*", /*deletable=*/false, /*readonly=*/true);
    ui->ignoreTableWidget->addPattern("._sync_*.db*", /*deletable=*/false, /*readonly=*/true);
    ui->ignoreTableWidget->addPattern(".sync_*.db*", /*deletable=*/false, /*readonly=*/true);
}

bool IgnoreListEditor::ignoreHiddenFiles()
{
    return !ui->syncHiddenFilesCheckBox->isChecked();
}

void IgnoreListEditor::slotRestoreDefaults(QAbstractButton *button)
{
    if(ui->buttonBox->buttonRole(button) != QDialogButtonBox::ResetRole)
        return;

    ui->ignoreTableWidget->slotRemoveAllItems();

    ConfigFile cfgFile;
    setupTableReadOnlyItems();
    ui->ignoreTableWidget->readIgnoreFile(cfgFile.excludeFile(ConfigFile::SystemScope), false);

    ui->syncHiddenFilesCheckBox->setChecked(true);

    _defaultPatterns = ui->ignoreTableWidget->patterns();
    _defaultIgnoreHidden = ui->syncHiddenFilesCheckBox->isChecked();

    updateRestoreDefaultsButtonState();
}

void IgnoreListEditor::updateRestoreDefaultsButtonState()
{
    bool changed = false;

    const auto currentPatterns = ui->ignoreTableWidget->patterns();
    if (currentPatterns != _defaultPatterns)
        changed = true;

    if (ui->syncHiddenFilesCheckBox->isChecked() != _defaultIgnoreHidden)
        changed = true;

    auto restoreButton = ui->buttonBox->button(QDialogButtonBox::RestoreDefaults);
    if (restoreButton)
        restoreButton->setEnabled(changed);
}

} // namespace OCC
