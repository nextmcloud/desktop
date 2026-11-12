/*
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#pragma once

#import "../macOS/trayaccountpopup/ncaccountrow.h"
#import "../macOS/trayaccountpopup/trayaccountpopupmetrics.h"
#import "../macOS/trayaccountpopup/trayaccountpopupviewutils.h"

static inline void configureNMCAccountRow(NCAccountRow *row, NSString *name, NSImage *syncStatusImage)
{
    NSString *iconPath = [[NSBundle mainBundle] pathForResource:@"nmc-account-icon" ofType:@"png"];
    NSImage *accountIcon = iconPath != nil ? [[NSImage alloc] initWithContentsOfFile:iconPath] : nil;
    [accountIcon setTemplate:YES];

    NSImageView *accountIconView = [[NSImageView alloc] init];
    accountIconView.image = accountIcon;
    accountIconView.imageScaling = NSImageScaleProportionallyUpOrDown;
    accountIconView.contentTintColor = NSColor.secondaryLabelColor;
    accountIconView.translatesAutoresizingMaskIntoConstraints = NO;

    NSTextField *nameLabel = [NSTextField labelWithString:name];
    nameLabel.font = [NSFont systemFontOfSize:13 weight:NSFontWeightSemibold];
    nameLabel.textColor = NSColor.labelColor;
    nameLabel.lineBreakMode = NSLineBreakByTruncatingTail;
    nameLabel.translatesAutoresizingMaskIntoConstraints = NO;

    NSImageView *statusView = [[NSImageView alloc] init];
    statusView.image = syncStatusImage;
    statusView.imageScaling = NSImageScaleProportionallyUpOrDown;
    statusView.translatesAutoresizingMaskIntoConstraints = NO;

    NSImageView *chevron = [[NSImageView alloc] init];
    chevron.image = [[NSImage imageWithSystemSymbolName:@"chevron.right" accessibilityDescription:nil]
        imageWithSymbolConfiguration:[NSImageSymbolConfiguration configurationWithPointSize:11 weight:NSFontWeightMedium]];
    chevron.contentTintColor = NSColor.tertiaryLabelColor;
    chevron.translatesAutoresizingMaskIntoConstraints = NO;

    [row addSubview:accountIconView];
    [row addSubview:nameLabel];
    [row addSubview:statusView];
    [row addSubview:chevron];

    constexpr CGFloat accountIconSize = 18.0;

    [NSLayoutConstraint activateConstraints:@[
        [accountIconView.leadingAnchor constraintEqualToAnchor:row.leadingAnchor constant:kHPad],
        [accountIconView.centerYAnchor constraintEqualToAnchor:row.centerYAnchor],
        [accountIconView.widthAnchor constraintEqualToConstant:accountIconSize],
        [accountIconView.heightAnchor constraintEqualToConstant:accountIconSize],
        [nameLabel.leadingAnchor constraintEqualToAnchor:accountIconView.trailingAnchor constant:10],
        [nameLabel.centerYAnchor constraintEqualToAnchor:row.centerYAnchor],
        [nameLabel.trailingAnchor constraintLessThanOrEqualToAnchor:statusView.leadingAnchor constant:-8],
        [chevron.trailingAnchor constraintEqualToAnchor:row.trailingAnchor constant:-kHPad],
        [chevron.centerYAnchor constraintEqualToAnchor:row.centerYAnchor],
        [chevron.widthAnchor constraintEqualToConstant:8],
        [chevron.heightAnchor constraintEqualToConstant:13],
        [statusView.trailingAnchor constraintEqualToAnchor:chevron.leadingAnchor constant:-8],
        [statusView.centerYAnchor constraintEqualToAnchor:row.centerYAnchor],
        [statusView.widthAnchor constraintEqualToConstant:18],
        [statusView.heightAnchor constraintEqualToConstant:18],
        [row.heightAnchor constraintEqualToConstant:kRowHeight],
        [row.widthAnchor constraintEqualToConstant:kPopupWidth],
    ]];

    const auto labelAvailableWidth = kPopupWidth - kHPad - accountIconSize - 10.0 - 8.0 - 18.0 - 8.0 - 8.0 - kHPad;
    if (OCC::Mac::TrayPopupViewUtils::labelLikelyClipsText(nameLabel, name, labelAvailableWidth)) {
        OCC::Mac::TrayPopupViewUtils::setSharedToolTip(name, @[ row, nameLabel ]);
    }
}
