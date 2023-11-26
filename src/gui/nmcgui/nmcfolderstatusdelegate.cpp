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
#include "folderstatusmodel.h"
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

inline static QFont makeAliasFont(const QFont &normalFont)
{
    QFont aliasFont = normalFont;
    aliasFont.setBold(true);
    aliasFont.setPointSize(normalFont.pointSize() + 2);
    return aliasFont;
}

void NMCFolderStatusDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    //Use our logic if the button needs to be paited ->paint an icon instead. If not, then go to base class and paint everything else
    if (index.data(AddButton).toBool()) {
        auto textAlign = Qt::AlignLeft;
        const auto aliasFont = makeAliasFont(option.font);
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

        QStyleOptionButton opt;
        static_cast<QStyleOption &>(opt) = option;

        auto theme = Theme::instance();
        const auto addIcon = theme->addButtonIcon();
        const auto iconSize = 48;
        const auto topMargin = 8;
        const auto leftMargin = 8;

        painter->save();
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
}

QSize NMCFolderStatusDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    auto classif = dynamic_cast<const FolderStatusModel *>(index.model())->classify(index);
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
