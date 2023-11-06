/*
 * Copyright (C) by Christian Kamm <mail@ckamm.de>
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

#ifndef MAGENTASTYLE_H
#define MAGENTASTYLE_H


#include "QtWidgets/qproxystyle.h"
#include <QStyle>

namespace OCC {

/// MagentaStyle
class MagentaStyle : public QProxyStyle
{
    Q_OBJECT

public:
    MagentaStyle(QWidget *widget);
    ~MagentaStyle() = default;

    // QStyle interface
public:
    QRect itemTextRect(const QFontMetrics &fm, const QRect &r, int flags, bool enabled, const QString &text) const;
    QRect itemPixmapRect(const QRect &r, int flags, const QPixmap &pixmap) const;
    void drawItemText(QPainter *painter, const QRect &rect, int flags, const QPalette &pal, bool enabled, const QString &text, QPalette::ColorRole textRole) const;
    void drawItemPixmap(QPainter *painter, const QRect &rect, int alignment, const QPixmap &pixmap) const;
    void drawPrimitive(PrimitiveElement pe, const QStyleOption *opt, QPainter *p, const QWidget *w) const;
    void drawControl(ControlElement element, const QStyleOption *opt, QPainter *p, const QWidget *w) const;
    QRect subElementRect(SubElement subElement, const QStyleOption *option, const QWidget *widget) const;
    void drawComplexControl(ComplexControl cc, const QStyleOptionComplex *opt, QPainter *p, const QWidget *widget) const;
    SubControl hitTestComplexControl(ComplexControl cc, const QStyleOptionComplex *opt, const QPoint &pt, const QWidget *widget) const;
    QRect subControlRect(ComplexControl cc, const QStyleOptionComplex *opt, SubControl sc, const QWidget *widget) const;
    int pixelMetric(PixelMetric metric, const QStyleOption *option, const QWidget *widget) const;
    QSize sizeFromContents(ContentsType ct, const QStyleOption *opt, const QSize &contentsSize, const QWidget *w) const;
    int styleHint(StyleHint stylehint, const QStyleOption *opt, const QWidget *widget, QStyleHintReturn *returnData) const;
    QPixmap standardPixmap(StandardPixmap standardPixmap, const QStyleOption *opt, const QWidget *widget) const;
    QIcon standardIcon(StandardPixmap standardIcon, const QStyleOption *option, const QWidget *widget) const;
    QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap &pixmap, const QStyleOption *opt) const;
    int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption *option, const QWidget *widget) const;
};
}

#endif
