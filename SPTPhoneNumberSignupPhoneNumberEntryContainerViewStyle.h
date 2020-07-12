//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUEGradientStyle, GLUELabelStyle, GLUETableViewCellStyle, NSString, SPTPhoneNumberSignupPhoneNumberEntryTableViewCellStyle, UIColor;

@interface SPTPhoneNumberSignupPhoneNumberEntryContainerViewStyle : NSObject <GLUEStyle>
{
    _Bool _scrollViewShowsScrollIndicator;
    _Bool _tableViewScrollEnabled;
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_helpLabelStyle;
    GLUELabelStyle *_subtitleLabelStyle;
    GLUEButtonStyle *_nextButtonStyle;
    UIColor *_tableViewBackgroundColor;
    UIColor *_tableViewSeparatorColor;
    SPTPhoneNumberSignupPhoneNumberEntryTableViewCellStyle *_phoneNumberEntryCellStyle;
    GLUETableViewCellStyle *_countrySelectorCellStyle;
    double _tableViewCornerRadius;
    double _titleLabelTopMargin;
    double _titleLabelHorizontalMargin;
    double _titleLabelBottomMargin;
    double _tableViewHeightCountrySelectionEnabled;
    double _tableViewHeightCountrySelectionDisabled;
    double _tableViewCellHeight;
    double _tableViewHorizontalMargin;
    double _helpLabelTopMargin;
    double _nextButtonTopMargin;
    double _nextButtonBottomMargin;
    double _subtitleLabelHorizontalMargin;
    double _scrollViewContentHeight;
    double _countrySelectorTitleLeadingMargin;
    struct UIEdgeInsets _tableViewSeparatorInsets;
    struct UIEdgeInsets _tableViewLayoutMargins;
}

- (void).cxx_destruct;
@property(nonatomic) double countrySelectorTitleLeadingMargin; // @synthesize countrySelectorTitleLeadingMargin=_countrySelectorTitleLeadingMargin;
@property(nonatomic) _Bool tableViewScrollEnabled; // @synthesize tableViewScrollEnabled=_tableViewScrollEnabled;
@property(nonatomic) struct UIEdgeInsets tableViewLayoutMargins; // @synthesize tableViewLayoutMargins=_tableViewLayoutMargins;
@property(nonatomic) struct UIEdgeInsets tableViewSeparatorInsets; // @synthesize tableViewSeparatorInsets=_tableViewSeparatorInsets;
@property(nonatomic) double scrollViewContentHeight; // @synthesize scrollViewContentHeight=_scrollViewContentHeight;
@property(nonatomic) double subtitleLabelHorizontalMargin; // @synthesize subtitleLabelHorizontalMargin=_subtitleLabelHorizontalMargin;
@property(nonatomic) double nextButtonBottomMargin; // @synthesize nextButtonBottomMargin=_nextButtonBottomMargin;
@property(nonatomic) double nextButtonTopMargin; // @synthesize nextButtonTopMargin=_nextButtonTopMargin;
@property(nonatomic) double helpLabelTopMargin; // @synthesize helpLabelTopMargin=_helpLabelTopMargin;
@property(nonatomic) double tableViewHorizontalMargin; // @synthesize tableViewHorizontalMargin=_tableViewHorizontalMargin;
@property(nonatomic) double tableViewCellHeight; // @synthesize tableViewCellHeight=_tableViewCellHeight;
@property(nonatomic) double tableViewHeightCountrySelectionDisabled; // @synthesize tableViewHeightCountrySelectionDisabled=_tableViewHeightCountrySelectionDisabled;
@property(nonatomic) double tableViewHeightCountrySelectionEnabled; // @synthesize tableViewHeightCountrySelectionEnabled=_tableViewHeightCountrySelectionEnabled;
@property(nonatomic) double titleLabelBottomMargin; // @synthesize titleLabelBottomMargin=_titleLabelBottomMargin;
@property(nonatomic) double titleLabelHorizontalMargin; // @synthesize titleLabelHorizontalMargin=_titleLabelHorizontalMargin;
@property(nonatomic) double titleLabelTopMargin; // @synthesize titleLabelTopMargin=_titleLabelTopMargin;
@property(nonatomic) double tableViewCornerRadius; // @synthesize tableViewCornerRadius=_tableViewCornerRadius;
@property(copy, nonatomic) GLUETableViewCellStyle *countrySelectorCellStyle; // @synthesize countrySelectorCellStyle=_countrySelectorCellStyle;
@property(copy, nonatomic) SPTPhoneNumberSignupPhoneNumberEntryTableViewCellStyle *phoneNumberEntryCellStyle; // @synthesize phoneNumberEntryCellStyle=_phoneNumberEntryCellStyle;
@property(copy, nonatomic) UIColor *tableViewSeparatorColor; // @synthesize tableViewSeparatorColor=_tableViewSeparatorColor;
@property(copy, nonatomic) UIColor *tableViewBackgroundColor; // @synthesize tableViewBackgroundColor=_tableViewBackgroundColor;
@property(nonatomic) _Bool scrollViewShowsScrollIndicator; // @synthesize scrollViewShowsScrollIndicator=_scrollViewShowsScrollIndicator;
@property(copy, nonatomic) GLUEButtonStyle *nextButtonStyle; // @synthesize nextButtonStyle=_nextButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *subtitleLabelStyle; // @synthesize subtitleLabelStyle=_subtitleLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *helpLabelStyle; // @synthesize helpLabelStyle=_helpLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

