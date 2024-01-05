/*
 * Copyright (C) by Eugen Fischer
 *
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

#include "nmcfolderstatusdelegate.h"
#include "nmcfolderstatusmodel.h"
#include <theme.h>
#include <account.h>
#include <QFileIconProvider>
#include <QPainter>
#include <QApplication>
#include <QMouseEvent>
#include <QStyleFactory>


namespace OCC {

NMCFolderStatusDelegate::NMCFolderStatusDelegate()
    : FolderStatusDelegate()
{
}

void NMCFolderStatusDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    auto textAlign = Qt::AlignLeft;
    QFont aliasFont = option.font;
    aliasFont.setBold(true);
    aliasFont.setPointSize(option.font.pointSize() + 2);

    const auto subFont = option.font;
    auto progressFont = subFont;

    progressFont.setPointSize(subFont.pointSize() - 2);

    QFont addButtonFont = subFont;
    addButtonFont.setPointSize(subFont.pointSize() - 1);

    QFontMetrics subFm(subFont);
    QFontMetrics aliasFm(aliasFont);
    QFontMetrics addButtonFm(addButtonFont);

    const auto aliasMargin = aliasFm.height() / 2;
    const auto margin = subFm.height() / 4;

    //Use our logic if the button needs to be paited ->paint an icon instead. If not, then go to base class and paint everything else
    if (index.data(AddButton).toBool()) {
        painter->save();

        QStyleOptionButton opt;
        static_cast<QStyleOption &>(opt) = option;

        auto theme = Theme::instance();
        const auto addIcon = theme->addButtonIcon();
        const auto iconSize = 48;
        const auto topMargin = 8;
        const auto leftMargin = 8;

        auto addIconRect = opt.rect;
        auto headRect = opt.rect;

        const auto buttonMargin = (opt.rect.height() - topMargin - iconSize)/2;

        addIconRect.setLeft(opt.rect.left() + aliasMargin);
        addIconRect.setTop(addIconRect.top() + buttonMargin);
        auto iconRectHeight = aliasFm.height() + 2 * (margin + subFm.height());
        addIconRect.setHeight(iconRectHeight);
        addIconRect.setWidth(iconRectHeight);
        // headline box
        headRect.setTop(headRect.top() + topMargin + buttonMargin);
        headRect.setBottom(headRect.top() + aliasFm.height());
        headRect.setRight(headRect.right() - buttonMargin);

        // two text lines box
        auto textRect = headRect;
        textRect.setTop(headRect.bottom() + margin);
        textRect.setBottom(textRect.top() + 2*addButtonFm.height() + margin);

        auto nextToIcon = addIconRect.right() + aliasMargin;
        headRect.setLeft(nextToIcon);
        textRect.setLeft(nextToIcon);

        QPixmap pm = addIcon.pixmap(iconSize, iconSize, (opt.state & QStyle::State_Enabled) ? QIcon::Normal : QIcon::Disabled);
        painter->drawPixmap(QStyle::visualRect(option.direction, option.rect, addIconRect).left() + leftMargin,
                            addIconRect.top() + topMargin + buttonMargin, pm);

        if(!(opt.state & QStyle::State_Enabled))
        {
            painter->setPen(QColor(qRgb(0x86, 0x86, 0x86))); // set text color grey if add button is disabled
        }
        painter->setFont(aliasFont);
        const auto elidedHead = aliasFm.elidedText(addFolderText(AddButtonText::AB_Headline), Qt::ElideRight, headRect.width());
        painter->drawText(QStyle::visualRect(option.direction, headRect, headRect), textAlign, elidedHead);
        painter->setFont(addButtonFont);
        const auto textLine = addFolderText(AddButtonText::AB_Textline);
        painter->drawText(QStyle::visualRect(option.direction, textRect, textRect), textAlign|Qt::TextWordWrap, textLine);

        painter->restore();

        return;
    }
    else{
        FolderStatusDelegate::paint(painter, option, index);
    }
    //This one is for customized folder icons, the paint function in base class should be called before we draw the overlay icons,
    //so the folders are below the overlay icons
    if(index.data(FolderOverlayIconRole).isValid())
    {
        painter->save();

        auto statusIcon = qvariant_cast<QIcon>(index.data(FolderStatusIconRole));
        auto syncEnabled = qvariant_cast<bool>(index.data(FolderAccountConnected));

        auto iconRect = option.rect;
        //const auto iconSize = iconRect.width();
        const auto iconSize = 48;

        iconRect.setTop(iconRect.top() + aliasMargin); // (iconRect.height()-iconsize.height())/2);
        //const auto statusPixmap = statusIcon.pixmap(iconSize, iconSize, syncEnabled ? QIcon::Normal : QIcon::Disabled);

        auto overlayIcon = qvariant_cast<QIcon>(index.data(FolderOverlayIconRole));
        int ovlSize = 24;
        auto ovlRect = iconRect;
        // the overlay icon position depends on the (variable) status icon size
        ovlRect.setTop(iconRect.top() + iconSize - 3*margin);
        ovlRect.setLeft(iconRect.left() + iconSize - margin);
        QPixmap opm = overlayIcon.pixmap(ovlSize, ovlSize, syncEnabled ? QIcon::Normal : QIcon::Disabled);
        painter->drawPixmap(QStyle::visualRect(option.direction, option.rect, ovlRect).left(), ovlRect.top(), opm);

        painter->restore();
    }
}

QSize NMCFolderStatusDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    auto classif = dynamic_cast<const NMCFolderStatusModel *>(index.model())->classify(index);
    if (classif == FolderStatusModel::AddButton) {
        // quick hack for (fixed) button size
        return {520, 64};
    }
    else{
        return FolderStatusDelegate::sizeHint(option, index);
    }
}

QString NMCFolderStatusDelegate::addFolderText(AddButtonText selection)
{
    switch(selection)
    {
    case AddButtonText::AB_Textline:
        return tr("Synchronize any other local folder with your MagentaCLOUD.");
    case AddButtonText::AB_Headline:
    default:
        return tr("Add Live-Backup");
    }
}

} // namespace OCC
