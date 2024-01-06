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

#include "nmcgui/magentaWizardPage.h"
#include "QtWidgets/qpushbutton.h"
#include "theme.h"
#include "wizard/ui_welcomepage.h"
#include "wizard/welcomepage.h"

namespace OCC {

MagentaWizardPage::MagentaWizardPage(OwncloudWizard *ocWizard)
    : WelcomePage(ocWizard)
{
    this->layout()->removeItem(_ui->horizontalLayout);
    _ui->hostYourOwnServerLabel->setVisible(false);
    _ui->loginButton->setVisible(false);
    _ui->createAccountButton->setVisible(false);
    _ui->slideShow->startShow();
    _ui->slideShow->setInterval(2500);

    setFinalPage(true);
}

int MagentaWizardPage::nextId() const
{
    return -1;
}

bool MagentaWizardPage::isComplete() const
{
    return true;
}

void MagentaWizardPage::styleSlideShow()
{
    const auto theme = Theme::instance();
    const auto backgroundColor = palette().window().color();

    QPixmap page1Pixmap = QString(":/client/theme/NMCIcons/page1.png");
    QPixmap page2Pixmap = QString(":/client/theme/NMCIcons/page2.png");
    QPixmap page3Pixmap = QString(":/client/theme/NMCIcons/page3.png");

    _ui->slideShow->addSlide(page1Pixmap.scaled(page1Pixmap.size()*0.33, Qt::KeepAspectRatio,Qt::SmoothTransformation), tr("PAGE_1_WIZARD"));
    _ui->slideShow->addSlide(page2Pixmap.scaled(page2Pixmap.size()*0.33, Qt::KeepAspectRatio,Qt::SmoothTransformation), tr("PAGE_2_WIZARD"));
    _ui->slideShow->addSlide(page3Pixmap.scaled(page3Pixmap.size()*0.33, Qt::KeepAspectRatio,Qt::SmoothTransformation), tr("PAGE_3_WIZARD"));

    const auto isDarkBackground = Theme::isDarkColor(backgroundColor);
    _ui->slideShowNextButton->setIcon(theme->uiThemeIcon(QString("control-next.svg"), isDarkBackground));
    _ui->slideShowPreviousButton->setIcon(theme->uiThemeIcon(QString("control-prev.svg"), isDarkBackground));
}

void MagentaWizardPage::setLoginButtonDefault()
{
    //No login button available, keep empty
}


} // namespace OCC
