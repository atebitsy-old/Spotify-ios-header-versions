//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VISREFTopAndBodyContentView.h"

#import "SPTPodcastHeaderContentView-Protocol.h"

@class NSLayoutConstraint, NSString, SPTEncoreLabel, UIImage, UIImageView, UILayoutGuide, UIView;

@interface SPTPodcastHeaderContentViewCompactImplemetation : VISREFTopAndBodyContentView <SPTPodcastHeaderContentView>
{
    UILayoutGuide *titlePositionLayoutGuide;
    UIImageView *_imageView;
    UIView *_imageShadowView;
    SPTEncoreLabel *_titleLabel;
    SPTEncoreLabel *_publisherLabel;
    NSLayoutConstraint *_headerHeightConstraint;
    NSLayoutConstraint *_imageTopConstraint;
    NSLayoutConstraint *_imageTopConstraintWithMargin;
    NSLayoutConstraint *_imageBottomConstraint;
    NSLayoutConstraint *_noTitleConstraint;
    double _imageTopMargin;
    double _navigationBarGradientEndPoint;
    CDStruct_5a28e70a _imageAlphaProgressRange;
    CDStruct_5a28e70a _titleLabelAlphaProgressRange;
}

@property(nonatomic) double navigationBarGradientEndPoint; // @synthesize navigationBarGradientEndPoint=_navigationBarGradientEndPoint;
@property(nonatomic) CDStruct_5a28e70a titleLabelAlphaProgressRange; // @synthesize titleLabelAlphaProgressRange=_titleLabelAlphaProgressRange;
@property(nonatomic) CDStruct_5a28e70a imageAlphaProgressRange; // @synthesize imageAlphaProgressRange=_imageAlphaProgressRange;
@property(nonatomic) double imageTopMargin; // @synthesize imageTopMargin=_imageTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *noTitleConstraint; // @synthesize noTitleConstraint=_noTitleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageBottomConstraint; // @synthesize imageBottomConstraint=_imageBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageTopConstraintWithMargin; // @synthesize imageTopConstraintWithMargin=_imageTopConstraintWithMargin;
@property(retain, nonatomic) NSLayoutConstraint *imageTopConstraint; // @synthesize imageTopConstraint=_imageTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // @synthesize headerHeightConstraint=_headerHeightConstraint;
@property(retain, nonatomic) SPTEncoreLabel *publisherLabel; // @synthesize publisherLabel=_publisherLabel;
@property(retain, nonatomic) SPTEncoreLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *imageShadowView; // @synthesize imageShadowView=_imageShadowView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILayoutGuide *titlePositionLayoutGuide; // @synthesize titlePositionLayoutGuide;
- (void).cxx_destruct;
- (void)updateAccessibilityLabels;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setPublisherName:(id)arg1;
- (void)setTitle:(id)arg1;
@property(retain, nonatomic) UIImage *image;
- (void)setNavigationBarHeight:(double)arg1;
- (void)headerViewDidRemountHeaderComponents:(id)arg1;
- (void)fullHeaderViewNormalizedProgressUpdate:(double)arg1;
- (void)updateProgressPositions;
- (void)updateTitleConstraint;
- (void)setupLayout;
- (void)setup;
- (id)initWithNaturalHeight:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

