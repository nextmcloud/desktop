/*
 * SPDX-FileCopyrightText: 2019 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#pragma once

#include <QWidget>
#include <QStringList>

namespace Ui {
class IgnoreListTableWidget;
}

namespace OCC {

class IgnoreListTableWidget : public QWidget
{
    Q_OBJECT

public:
    explicit IgnoreListTableWidget(QWidget *parent = nullptr);
    ~IgnoreListTableWidget() override;

    int addPattern(const QString &pattern, const bool deletable = false, const bool readOnly = false);
    void slotRemoveCurrentItem();
    void slotRemoveAllItems();
    void readIgnoreFile(const QString &file, const bool readOnly = true);
    void slotWriteIgnoreFile(const QString &file);

    QStringList patterns() const;

signals:
    void changed();

private slots:
    void slotItemSelectionChanged();
    void slotAddPattern();

private:
    Ui::IgnoreListTableWidget *ui;
};

} // namespace OCC
