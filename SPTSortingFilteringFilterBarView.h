//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTSortingFilteringFilterBar-Protocol.h"

@class NSLayoutConstraint, NSString, SPTSortingFilteringClearFiltersControlView, SPTSortingFilteringSortButton, UIStackView, UITextField;

@interface SPTSortingFilteringFilterBarView : UIView <SPTSortingFilteringFilterBar>
{
    _Bool _backgroundViewHidden;
    _Bool _contextMenuButtonDisabled;
    SPTSortingFilteringSortButton *_contextMenuButton;
    UIStackView *_stackView;
    UIView *_backgroundView;
    double _textInputFilterBarHeight;
    double _clearFiltersHeight;
    UITextField *_searchField;
    SPTSortingFilteringClearFiltersControlView *_clearFiltersControl;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_clearFiltersLeadingConstraint;
    NSLayoutConstraint *_clearFiltersTrailingConstraint;
    NSLayoutConstraint *_clearFiltersTopConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *clearFiltersTopConstraint; // @synthesize clearFiltersTopConstraint=_clearFiltersTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *clearFiltersTrailingConstraint; // @synthesize clearFiltersTrailingConstraint=_clearFiltersTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *clearFiltersLeadingConstraint; // @synthesize clearFiltersLeadingConstraint=_clearFiltersLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) SPTSortingFilteringClearFiltersControlView *clearFiltersControl; // @synthesize clearFiltersControl=_clearFiltersControl;
@property(retain, nonatomic) UITextField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) double clearFiltersHeight; // @synthesize clearFiltersHeight=_clearFiltersHeight;
@property(nonatomic) double textInputFilterBarHeight; // @synthesize textInputFilterBarHeight=_textInputFilterBarHeight;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) SPTSortingFilteringSortButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(nonatomic) _Bool contextMenuButtonDisabled; // @synthesize contextMenuButtonDisabled=_contextMenuButtonDisabled;
@property(nonatomic) _Bool backgroundViewHidden; // @synthesize backgroundViewHidden=_backgroundViewHidden;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setClearFiltersHidden:(_Bool)arg1;
- (void)insertFiltersWithTitles:(id)arg1;
@property(readonly, nonatomic) double filterBarHeight;
- (void)setupConstraints;
- (id)initWithSearchPlaceholder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

