//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTHomeUIPromoV2PlayableInfoViewDelegate-Protocol.h"

@class GLUELabel, NSString, SPTHomeUIPromoV2PlayableInfoView, SPTHomeUIPromoV2ViewStyle, UIImage, UIStackView;
@protocol GLUETheme, SPTHomeUIPromoV2ContentViewDelegate;

@interface SPTHomeUIPromoV2ContentView : UIView <SPTHomeUIPromoV2PlayableInfoViewDelegate>
{
    id <SPTHomeUIPromoV2ContentViewDelegate> _delegate;
    id <GLUETheme> _theme;
    SPTHomeUIPromoV2ViewStyle *_style;
    UIStackView *_stackView;
    GLUELabel *_backgroundLabel;
    UIView *_spacerView;
    SPTHomeUIPromoV2PlayableInfoView *_playableInfoView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTHomeUIPromoV2PlayableInfoView *playableInfoView; // @synthesize playableInfoView=_playableInfoView;
@property(readonly, nonatomic) UIView *spacerView; // @synthesize spacerView=_spacerView;
@property(readonly, nonatomic) GLUELabel *backgroundLabel; // @synthesize backgroundLabel=_backgroundLabel;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) SPTHomeUIPromoV2ViewStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTHomeUIPromoV2ContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long imageDisplayState;
- (void)updateAccessibility:(unsigned long long)arg1;
@property(nonatomic) unsigned long long playButtonMode;
@property(nonatomic) _Bool showsPlayButton;
@property(copy, nonatomic) NSString *subtitleText;
@property(copy, nonatomic) NSString *titleText;
@property(copy, nonatomic) NSString *backgroundText;
@property(retain, nonatomic) UIImage *logoImage;
- (void)didTapPlayButtonInPlayableInfoView:(id)arg1;
- (void)updateMainColor:(id)arg1;
- (id)createSpacerView;
- (void)setupSubviews;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

