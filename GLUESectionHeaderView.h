//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, GLUESectionHeaderStyle, NSLayoutConstraint, NSString, UIView;

@interface GLUESectionHeaderView : UICollectionReusableView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    GLUESectionHeaderStyle *_style;
    UIView *_contentView;
    NSLayoutConstraint *_contentToLeadingViewConstraint;
    NSLayoutConstraint *_contentToTrailingViewConstraint;
    NSLayoutConstraint *_titleBaselineFromContentTopEdgeConstraint;
    NSLayoutConstraint *_titleBaselineToContentBottomEdgeConstraint;
    NSLayoutConstraint *_subtitleBaselineToTitleBaselineConstraint;
    NSLayoutConstraint *_subtitleBaselineFromContentBottomEdgeConstraint;
}

+ (double)subtitleHeightForWidth:(double)arg1 text:(id)arg2 style:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *subtitleBaselineFromContentBottomEdgeConstraint; // @synthesize subtitleBaselineFromContentBottomEdgeConstraint=_subtitleBaselineFromContentBottomEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleBaselineToTitleBaselineConstraint; // @synthesize subtitleBaselineToTitleBaselineConstraint=_subtitleBaselineToTitleBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleBaselineToContentBottomEdgeConstraint; // @synthesize titleBaselineToContentBottomEdgeConstraint=_titleBaselineToContentBottomEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleBaselineFromContentTopEdgeConstraint; // @synthesize titleBaselineFromContentTopEdgeConstraint=_titleBaselineFromContentTopEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentToTrailingViewConstraint; // @synthesize contentToTrailingViewConstraint=_contentToTrailingViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentToLeadingViewConstraint; // @synthesize contentToLeadingViewConstraint=_contentToLeadingViewConstraint;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) GLUESectionHeaderStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)glue_applyStyle:(id)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateLabelMaxWidthForBoundingSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)addViewConstraints;
- (id)accessibilityTextForTitle:(id)arg1 subtitle:(id)arg2;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)shouldGroupAccessibilityChildren;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

