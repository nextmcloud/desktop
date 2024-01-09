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
    _ui->slideShow->startShow(2500);

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

    const QString page1FileName = QString(":/client/theme/NMCIcons/page1.png");
    const QString page2FileName = QString(":/client/theme/NMCIcons/page2.png");
    const QString page3FileName = QString(":/client/theme/NMCIcons/page3.png");

    _ui->slideShow->addSlide(page1FileName, tr("Page 1"));
    _ui->slideShow->addSlide(page2FileName, tr("Page 2"));
    _ui->slideShow->addSlide(page3FileName, tr("Page 3"));

    const auto isDarkBackground = Theme::isDarkColor(backgroundColor);
    _ui->slideShowNextButton->setIcon(theme->uiThemeIcon(QString("control-next.svg"), isDarkBackground));
    _ui->slideShowPreviousButton->setIcon(theme->uiThemeIcon(QString("control-prev.svg"), isDarkBackground));
}

void MagentaWizardPage::setLoginButtonDefault()
{
    //No login button available, keep empty
}


} // namespace OCC
