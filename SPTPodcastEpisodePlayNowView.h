//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStatefulView.h"

#import "SPTPodcastEpisodeView-Protocol.h"

@class GLUEImageView, GLUELabel, GLUETrackAccessoryLabel, NSArray, NSLayoutConstraint, NSMutableArray, NSString, SPTTheme, UIControl, UILabel, UIProgressView, UIStackView, UIView;
@protocol GLUEImageLoader;

@interface SPTPodcastEpisodePlayNowView : GLUEStatefulView <SPTPodcastEpisodeView>
{
    _Bool _editing;
    _Bool _explicit;
    _Bool shouldTruncateDescription;
    UILabel *_statusLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    GLUELabel *_descriptionLabel;
    UIView *_mainActionView;
    NSArray *_secondaryActionViewsLeft;
    NSArray *_secondaryActionViewsRight;
    GLUEImageView *_imageView;
    UIProgressView *_progressView;
    UIControl *_playControl;
    GLUETrackAccessoryLabel *_accessoryLabel;
    SPTTheme *_theme;
    NSArray *_layoutConstraints;
    NSLayoutConstraint *_progressViewHeightConstraint;
    NSMutableArray *_mainActionViewConstraints;
    UIView *_upperContainerView;
    UIView *_mainActionContainerView;
    UIView *_headerContainerView;
    UIStackView *_subheaderContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *subheaderContainerView; // @synthesize subheaderContainerView=_subheaderContainerView;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(retain, nonatomic) UIView *mainActionContainerView; // @synthesize mainActionContainerView=_mainActionContainerView;
@property(retain, nonatomic) UIView *upperContainerView; // @synthesize upperContainerView=_upperContainerView;
@property(retain, nonatomic) NSMutableArray *mainActionViewConstraints; // @synthesize mainActionViewConstraints=_mainActionViewConstraints;
@property(retain, nonatomic) NSLayoutConstraint *progressViewHeightConstraint; // @synthesize progressViewHeightConstraint=_progressViewHeightConstraint;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) _Bool shouldTruncateDescription; // @synthesize shouldTruncateDescription;
@property(readonly, nonatomic) GLUETrackAccessoryLabel *accessoryLabel; // @synthesize accessoryLabel=_accessoryLabel;
@property(nonatomic, getter=isExplicit) _Bool explicit; // @synthesize explicit=_explicit;
@property(retain, nonatomic) UIControl *playControl; // @synthesize playControl=_playControl;
@property(readonly, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSArray *secondaryActionViewsRight; // @synthesize secondaryActionViewsRight=_secondaryActionViewsRight;
@property(copy, nonatomic) NSArray *secondaryActionViewsLeft; // @synthesize secondaryActionViewsLeft=_secondaryActionViewsLeft;
@property(retain, nonatomic) UIView *mainActionView; // @synthesize mainActionView=_mainActionView;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) GLUELabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
- (void)applyStateStyle:(id)arg1;
@property(copy, nonatomic) NSString *descriptionText;
- (double)progressViewHeight;
- (_Bool)shouldShowProgressView;
@property(nonatomic) double listeningProgress;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader;
- (void)createConstraints;
- (void)addMainActionViewViewToViewHierarchy;
- (void)layoutSubviews;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

