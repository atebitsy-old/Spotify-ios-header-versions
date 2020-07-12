//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStatefulView.h"

#import "GLUEEntityRow-Protocol.h"

@class NSLayoutConstraint, NSString, UIView;
@protocol GLUEEntityRowContent;

@interface GLUEEntityRowView : GLUEStatefulView <GLUEEntityRow>
{
    _Bool _shouldHideTrailingView;
    UIView<GLUEEntityRowContent> *_entityContentView;
    UIView *_leadingAccessoryView;
    UIView *_trailingAccessoryView;
    UIView *_contentContainerView;
    UIView *_leadingAccessoryContainerView;
    UIView *_trailingAccessoryContainerView;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_contentViewLeadingConstraint;
    NSLayoutConstraint *_contentViewTrailingConstraint;
    NSLayoutConstraint *_leadingViewLeadingConstraint;
    NSLayoutConstraint *_trailingViewTrailingConstraint;
    NSLayoutConstraint *_contentViewToLeadingViewConstraint;
    NSLayoutConstraint *_contentViewToTrailingViewConstraint;
    NSLayoutConstraint *_leadingAccessoryViewMaxWidthConstraint;
    NSLayoutConstraint *_trailingAccessoryViewMaxWidthConstraint;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldHideTrailingView; // @synthesize shouldHideTrailingView=_shouldHideTrailingView;
@property(retain, nonatomic) NSLayoutConstraint *trailingAccessoryViewMaxWidthConstraint; // @synthesize trailingAccessoryViewMaxWidthConstraint=_trailingAccessoryViewMaxWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingAccessoryViewMaxWidthConstraint; // @synthesize leadingAccessoryViewMaxWidthConstraint=_leadingAccessoryViewMaxWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewToTrailingViewConstraint; // @synthesize contentViewToTrailingViewConstraint=_contentViewToTrailingViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewToLeadingViewConstraint; // @synthesize contentViewToLeadingViewConstraint=_contentViewToLeadingViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingViewTrailingConstraint; // @synthesize trailingViewTrailingConstraint=_trailingViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingViewLeadingConstraint; // @synthesize leadingViewLeadingConstraint=_leadingViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewTrailingConstraint; // @synthesize contentViewTrailingConstraint=_contentViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewLeadingConstraint; // @synthesize contentViewLeadingConstraint=_contentViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewTopConstraint; // @synthesize contentViewTopConstraint=_contentViewTopConstraint;
@property(retain, nonatomic) UIView *trailingAccessoryContainerView; // @synthesize trailingAccessoryContainerView=_trailingAccessoryContainerView;
@property(retain, nonatomic) UIView *leadingAccessoryContainerView; // @synthesize leadingAccessoryContainerView=_leadingAccessoryContainerView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) UIView *trailingAccessoryView; // @synthesize trailingAccessoryView=_trailingAccessoryView;
@property(retain, nonatomic) UIView *leadingAccessoryView; // @synthesize leadingAccessoryView=_leadingAccessoryView;
@property(retain, nonatomic) UIView<GLUEEntityRowContent> *entityContentView; // @synthesize entityContentView=_entityContentView;
- (void)setTrailingViewHidden:(_Bool)arg1;
- (_Bool)isAccessibilityElement;
- (void)prepareForReuse;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)applyStateStyle:(id)arg1;
- (void)setEntityContentView:(id)arg1 forContainer:(id)arg2;
- (void)setAccessoryView:(id)arg1 forContainer:(id)arg2;
- (void)updateConstraintsWithStyle;
- (void)addViewConstraints;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly) Class superclass;

@end

