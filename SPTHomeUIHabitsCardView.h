//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStatefulView.h"

#import "GLUEStyleable-Protocol.h"
#import "SPTHomeUIHabitsCardViewModelDelegate-Protocol.h"

@class GLUEImageView, NSAttributedString, NSLayoutConstraint, NSString, SPTHomeUIHabitsCardViewModel, SPTHomeUILabel, UIView;
@protocol GLUEAnimationLoading><GLUEAnimationControlling, GLUETheme;

@interface SPTHomeUIHabitsCardView : GLUEStatefulView <GLUEStyleable, SPTHomeUIHabitsCardViewModelDelegate>
{
    SPTHomeUIHabitsCardViewModel *_viewModel;
    id <GLUETheme> _theme;
    SPTHomeUILabel *_titleLabel;
    GLUEImageView *_imageView;
    UIView *_accessoryView;
    GLUEImageView *_accessoryImageView;
    struct UIView *_playbackIndicatorAnimationView;
    NSLayoutConstraint *_titleLabelBottomEdgeConstraint;
    NSLayoutConstraint *_titleLabelLongTrailingEdgeConstraint;
    NSLayoutConstraint *_titleLabelShortTrailingEdgeConstraint;
    NSLayoutConstraint *_accessoryViewWidthConstraint;
}

+ (struct CGSize)sizeForAttributedTitle:(id)arg1 maxWidth:(double)arg2 style:(id)arg3;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewWidthConstraint; // @synthesize accessoryViewWidthConstraint=_accessoryViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelShortTrailingEdgeConstraint; // @synthesize titleLabelShortTrailingEdgeConstraint=_titleLabelShortTrailingEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelLongTrailingEdgeConstraint; // @synthesize titleLabelLongTrailingEdgeConstraint=_titleLabelLongTrailingEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelBottomEdgeConstraint; // @synthesize titleLabelBottomEdgeConstraint=_titleLabelBottomEdgeConstraint;
@property(retain, nonatomic) UIView<GLUEAnimationLoading><GLUEAnimationControlling> *playbackIndicatorAnimationView; // @synthesize playbackIndicatorAnimationView=_playbackIndicatorAnimationView;
@property(retain, nonatomic) GLUEImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(readonly, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) SPTHomeUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTHomeUIHabitsCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)addConstraints;
- (void)updateAccessibilityWithModel:(id)arg1;
- (id)paragraphStyleWithAlignment:(long long)arg1;
- (id)attributedTitleForModel:(id)arg1 theme:(id)arg2;
- (void)animateToHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)applyStateStyle:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)configureAccessoryViewWithViewModel:(id)arg1;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setAccessoryViewImage:(id)arg1;
@property(copy, nonatomic) NSAttributedString *attributedTitle;
- (void)prepareForReuse;
- (void)hidePlaybackIndicator;
- (void)showPlaybackIndicator;
- (void)habitsCardViewModelDidBecomeInactiveContext:(id)arg1;
- (void)habitsCardViewModelDidBecomeActiveContext:(id)arg1;
- (void)createPlaybackAnimationView;
- (void)createAccessoryImageView;
- (void)createAccessoryView;
- (void)createImageView;
- (void)createTitleLabel;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
