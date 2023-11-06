/*
 * Copyright (C) by Eugen Fischer
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

#include "magentastyle.h"
#include <QProxyStyle>

namespace OCC {

MagentaStyle::MagentaStyle(QWidget *parent)
    : QProxyStyle()
{
    Q_UNUSED(parent)
}

QRect MagentaStyle::itemTextRect(const QFontMetrics &fm, const QRect &r, int flags, bool enabled, const QString &text) const
{
    return QProxyStyle::itemTextRect(fm, r, flags, enabled, text);
}

QRect MagentaStyle::itemPixmapRect(const QRect &r, int flags, const QPixmap &pixmap) const
{
    return QProxyStyle::itemPixmapRect(r, flags, pixmap);
}

void MagentaStyle::drawItemText(QPainter *painter, const QRect &rect, int flags, const QPalette &pal, bool enabled, const QString &text, QPalette::ColorRole textRole) const
{
    return QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
}

void MagentaStyle::drawItemPixmap(QPainter *painter, const QRect &rect, int alignment, const QPixmap &pixmap) const
{
    return QProxyStyle::drawItemPixmap(painter, rect, alignment, pixmap);
}

void MagentaStyle::drawPrimitive(PrimitiveElement pe, const QStyleOption *opt, QPainter *p, const QWidget *w) const
{
    return QProxyStyle::drawPrimitive(pe, opt, p, w);
}

void MagentaStyle::drawControl(ControlElement element, const QStyleOption *opt, QPainter *p, const QWidget *w) const
{
    return QProxyStyle::drawControl(element, opt, p, w);
}

QRect MagentaStyle::subElementRect(SubElement subElement, const QStyleOption *option, const QWidget *widget) const
{
    return QProxyStyle::subElementRect(subElement, option, widget);
}

void MagentaStyle::drawComplexControl(ComplexControl cc, const QStyleOptionComplex *opt, QPainter *p, const QWidget *widget) const
{
    return QProxyStyle::drawComplexControl(cc, opt, p, widget);
}

QStyle::SubControl MagentaStyle::hitTestComplexControl(ComplexControl cc, const QStyleOptionComplex *opt, const QPoint &pt, const QWidget *widget) const
{
    return QProxyStyle::hitTestComplexControl(cc, opt, pt, widget);
}

QRect MagentaStyle::subControlRect(ComplexControl cc, const QStyleOptionComplex *opt, SubControl sc, const QWidget *widget) const
{
    return QProxyStyle::subControlRect(cc, opt, sc, widget);
}

int MagentaStyle::pixelMetric(PixelMetric metric, const QStyleOption *option, const QWidget *widget) const
{
    return QProxyStyle::pixelMetric(metric, option, widget);
}

QSize MagentaStyle::sizeFromContents(ContentsType ct, const QStyleOption *opt, const QSize &contentsSize, const QWidget *w) const
{
    return QProxyStyle::sizeFromContents(ct, opt, contentsSize, w);
}

int MagentaStyle::styleHint(StyleHint stylehint, const QStyleOption *opt, const QWidget *widget, QStyleHintReturn *returnData) const
{
    return QProxyStyle::styleHint(stylehint, opt, widget, returnData);
}

QPixmap MagentaStyle::standardPixmap(StandardPixmap standardPixmap, const QStyleOption *opt, const QWidget *widget) const
{
    return QProxyStyle::standardPixmap(standardPixmap, opt, widget);
}

QIcon MagentaStyle::standardIcon(StandardPixmap standardIcon, const QStyleOption *option, const QWidget *widget) const
{
    return QProxyStyle::standardIcon(standardIcon, option, widget);
}

QPixmap MagentaStyle::generatedIconPixmap(QIcon::Mode iconMode, const QPixmap &pixmap, const QStyleOption *opt) const
{
    return QProxyStyle::generatedIconPixmap(iconMode, pixmap, opt);
}

int MagentaStyle::layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption *option, const QWidget *widget) const
{
    return QProxyStyle::layoutSpacing(control1, control2, orientation, option, widget);
}

}
