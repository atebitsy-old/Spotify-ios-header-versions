//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUELabel, NSLayoutConstraint, NSString, SPTFreeTierAllSongsHeaderContentViewStyle;

@interface SPTFreeTierAllSongsHeaderContentView : UIView <GLUEStyleable>
{
    _Bool _titleHiddenWhenCollapsed;
    SPTFreeTierAllSongsHeaderContentViewStyle *_style;
    GLUELabel *_titleLabel;
    GLUELabel *_collapsedTitleLabel;
    GLUELabel *_subtitleLabel;
    GLUEButton *_actionButton;
    UIView *_contentView;
    NSLayoutConstraint *_contentConstraint;
    NSLayoutConstraint *_collapsedTitleConstraint;
    NSLayoutConstraint *_containerSubtitleBottomConstraint;
    NSLayoutConstraint *_containerActionButtonBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *containerActionButtonBottomConstraint; // @synthesize containerActionButtonBottomConstraint=_containerActionButtonBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerSubtitleBottomConstraint; // @synthesize containerSubtitleBottomConstraint=_containerSubtitleBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *collapsedTitleConstraint; // @synthesize collapsedTitleConstraint=_collapsedTitleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentConstraint; // @synthesize contentConstraint=_contentConstraint;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) GLUEButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *collapsedTitleLabel; // @synthesize collapsedTitleLabel=_collapsedTitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) SPTFreeTierAllSongsHeaderContentViewStyle *style; // @synthesize style=_style;
@property(nonatomic, getter=isTitleHiddenWhenCollapsed) _Bool titleHiddenWhenCollapsed; // @synthesize titleHiddenWhenCollapsed=_titleHiddenWhenCollapsed;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)updateOffset:(double)arg1;
- (void)updateVisibleRect:(struct CGRect)arg1 minimumHeight:(double)arg2;
- (void)setupConstraints;
- (void)initializeInterface;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)addSubtitle:(id)arg1;
- (void)reset;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

