//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class GLUELabel, SPTAdsContextMenuCustomAction, SPTTheme, UIView;

@interface SPTAdsMarqueeContextMenuActionRowView : UIStackView
{
    GLUELabel *_actionTitleLabel;
    UIView *_backgroundView;
    SPTTheme *_theme;
    SPTAdsContextMenuCustomAction *_contextMenuAction;
}

@property(readonly, nonatomic) SPTAdsContextMenuCustomAction *contextMenuAction; // @synthesize contextMenuAction=_contextMenuAction;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) GLUELabel *actionTitleLabel; // @synthesize actionTitleLabel=_actionTitleLabel;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didTapActionView:(id)arg1;
- (void)addConstraints;
- (id)initWithTheme:(id)arg1 action:(id)arg2;

@end

