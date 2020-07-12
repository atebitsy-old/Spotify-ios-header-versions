//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPodcastSectionTableViewCell.h"

@class NSArray, UIStackView, UIView;
@protocol GLUETheme, SPTPodcastChipsSectionTableViewCellDelegate;

@interface SPTPodcastChipsSectionTableViewCell : SPTPodcastSectionTableViewCell
{
    id <SPTPodcastChipsSectionTableViewCellDelegate> _delegate;
    UIView *_containerView;
    id <GLUETheme> _glueTheme;
    NSArray *_layoutConstraints;
    NSArray *_topicCategories;
    UIStackView *_upperContainerView;
    UIStackView *_bottomContainerView;
    NSArray *_chipsViews;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *chipsViews; // @synthesize chipsViews=_chipsViews;
@property(retain, nonatomic) UIStackView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) UIStackView *upperContainerView; // @synthesize upperContainerView=_upperContainerView;
@property(copy, nonatomic) NSArray *topicCategories; // @synthesize topicCategories=_topicCategories;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SPTPodcastChipsSectionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)chipButtonTapped:(id)arg1;
- (id)createActionButtonWithTitle:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)updateContainersLayout;
- (double)addChipToContainer:(id)arg1 currentContentWidth:(double)arg2;
- (void)constructButtonsUsingCategories:(id)arg1;
- (void)updateWithViewModel:(id)arg1 atIndexPath:(id)arg2;
- (void)createConstraints;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

