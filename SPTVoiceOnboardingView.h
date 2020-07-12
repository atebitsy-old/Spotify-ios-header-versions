//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEButton, UIButton, UIImageView, UILabel;
@protocol GLUETheme, SPTVoiceOnboardingPageElements, SPTVoiceOnboardingViewDelegate;

@interface SPTVoiceOnboardingView : UIView
{
    id <SPTVoiceOnboardingPageElements> _pageElement;
    id <GLUETheme> _glueTheme;
    id <SPTVoiceOnboardingViewDelegate> _delegate;
    UIView *_containerView;
    UIImageView *_onboardingImageView;
    UIView *_detailView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    GLUEButton *_microphoneAccessButton;
    UIButton *_additionalLinkButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *additionalLinkButton; // @synthesize additionalLinkButton=_additionalLinkButton;
@property(retain, nonatomic) GLUEButton *microphoneAccessButton; // @synthesize microphoneAccessButton=_microphoneAccessButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIImageView *onboardingImageView; // @synthesize onboardingImageView=_onboardingImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) __weak id <SPTVoiceOnboardingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) id <SPTVoiceOnboardingPageElements> pageElement; // @synthesize pageElement=_pageElement;
- (void)didTapAdditionalLinkButton:(id)arg1;
- (void)didTapActionButton:(id)arg1;
- (void)setupLayout;
- (void)setupAdditionalViewsForMicrophoneAccessPage:(id)arg1;
- (void)setupAdditionalLink:(id)arg1;
- (void)setupPageViewsWithElement:(id)arg1;
- (id)initWithPageElement:(id)arg1 glueTheme:(id)arg2 delegate:(id)arg3;

@end

