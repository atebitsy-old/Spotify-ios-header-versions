//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEButton, GLUEImageView, GLUELabel, NSArray, SPTTheme, UIButton, UIStackView;
@protocol SPTAdsBaseMarqueeEntity, SPTMarqueeTestManager;

@interface SPTMarqueeContentView : UIView
{
    GLUEButton *_actionButton;
    UIButton *_optOutButton;
    GLUEImageView *_albumImageView;
    SPTTheme *_theme;
    UIView *_backgroundOverlayView;
    GLUELabel *_headerTitle;
    GLUELabel *_artistTitleLabel;
    GLUELabel *_albumTitleLabel;
    GLUELabel *_informationTextLabel;
    UIStackView *_informationContainerView;
    NSArray *_adsDisabledConstraints;
    NSArray *_adsEnabledConstraints;
    id <SPTMarqueeTestManager> _testManager;
    id <SPTAdsBaseMarqueeEntity> _adEntity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTAdsBaseMarqueeEntity> adEntity; // @synthesize adEntity=_adEntity;
@property(readonly, nonatomic) id <SPTMarqueeTestManager> testManager; // @synthesize testManager=_testManager;
@property(copy, nonatomic) NSArray *adsEnabledConstraints; // @synthesize adsEnabledConstraints=_adsEnabledConstraints;
@property(copy, nonatomic) NSArray *adsDisabledConstraints; // @synthesize adsDisabledConstraints=_adsDisabledConstraints;
@property(readonly, nonatomic) UIStackView *informationContainerView; // @synthesize informationContainerView=_informationContainerView;
@property(readonly, nonatomic) GLUELabel *informationTextLabel; // @synthesize informationTextLabel=_informationTextLabel;
@property(readonly, nonatomic) GLUELabel *albumTitleLabel; // @synthesize albumTitleLabel=_albumTitleLabel;
@property(readonly, nonatomic) GLUELabel *artistTitleLabel; // @synthesize artistTitleLabel=_artistTitleLabel;
@property(readonly, nonatomic) GLUELabel *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(readonly, nonatomic) UIView *backgroundOverlayView; // @synthesize backgroundOverlayView=_backgroundOverlayView;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) GLUEImageView *albumImageView; // @synthesize albumImageView=_albumImageView;
@property(readonly, nonatomic) UIButton *optOutButton; // @synthesize optOutButton=_optOutButton;
@property(readonly, nonatomic) GLUEButton *actionButton; // @synthesize actionButton=_actionButton;
- (_Bool)isAccessibilityElement;
- (void)applyThemeLayout;
- (void)addConstraintsWithAdsEnabled:(_Bool)arg1;
- (id)initWithArtistTitle:(id)arg1 albumTitle:(id)arg2 albumImage:(id)arg3 adsEnabled:(_Bool)arg4 theme:(id)arg5 testManager:(id)arg6 adEntity:(id)arg7;

@end

