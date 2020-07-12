//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEGradientStyle, GLUELabelStyle, GLUETableViewCellStyle, NSString, SPTPhoneNumberSignupSearchBarStyle;
@protocol GLUEStyle;

@interface SPTPhoneNumberSignupCallingCodeContainerViewStyle : NSObject <GLUEStyle>
{
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUEGradientStyle *_backgroundOverlayGradientStyle;
    GLUELabelStyle *_titleLabelStyle;
    double _titleLabelHorizontalMargin;
    double _titleLabelBottomMargin;
    long long _tableViewStyle;
    GLUETableViewCellStyle *_callingCodeCellStyle;
    SPTPhoneNumberSignupSearchBarStyle<GLUEStyle> *_searchBarStyle;
    double _tableViewRowHeight;
    double _tableViewEstimatedRowHeight;
    double _searchBarHeight;
    double _searchBarLeadingTrailingMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double searchBarLeadingTrailingMargin; // @synthesize searchBarLeadingTrailingMargin=_searchBarLeadingTrailingMargin;
@property(nonatomic) double searchBarHeight; // @synthesize searchBarHeight=_searchBarHeight;
@property(nonatomic) double tableViewEstimatedRowHeight; // @synthesize tableViewEstimatedRowHeight=_tableViewEstimatedRowHeight;
@property(nonatomic) double tableViewRowHeight; // @synthesize tableViewRowHeight=_tableViewRowHeight;
@property(copy, nonatomic) SPTPhoneNumberSignupSearchBarStyle<GLUEStyle> *searchBarStyle; // @synthesize searchBarStyle=_searchBarStyle;
@property(copy, nonatomic) GLUETableViewCellStyle *callingCodeCellStyle; // @synthesize callingCodeCellStyle=_callingCodeCellStyle;
@property(nonatomic) long long tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
@property(nonatomic) double titleLabelBottomMargin; // @synthesize titleLabelBottomMargin=_titleLabelBottomMargin;
@property(nonatomic) double titleLabelHorizontalMargin; // @synthesize titleLabelHorizontalMargin=_titleLabelHorizontalMargin;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundOverlayGradientStyle; // @synthesize backgroundOverlayGradientStyle=_backgroundOverlayGradientStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

