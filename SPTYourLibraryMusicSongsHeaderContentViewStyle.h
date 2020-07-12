//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEGradientStyle, GLUEHeaderBackgroundStyle, GLUELabelStyle, NSString, UIColor;
@protocol SPTSortingFilteringFilterBarStyle;

@interface SPTYourLibraryMusicSongsHeaderContentViewStyle : NSObject <GLUEStyle>
{
    id <SPTSortingFilteringFilterBarStyle> _filterBarStyle;
    double _height;
    double _filterContentHeight;
    GLUELabelStyle *_titleStyle;
    GLUELabelStyle *_collapsedTitleStyle;
    UIColor *_backgroundColor;
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUEHeaderBackgroundStyle *_backgroundOverlayStyle;
    double _collapsedHeaderOverlayAlpha;
    double _collapsedTitleBottomOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double collapsedTitleBottomOffset; // @synthesize collapsedTitleBottomOffset=_collapsedTitleBottomOffset;
@property(nonatomic) double collapsedHeaderOverlayAlpha; // @synthesize collapsedHeaderOverlayAlpha=_collapsedHeaderOverlayAlpha;
@property(retain, nonatomic) GLUEHeaderBackgroundStyle *backgroundOverlayStyle; // @synthesize backgroundOverlayStyle=_backgroundOverlayStyle;
@property(retain, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) GLUELabelStyle *collapsedTitleStyle; // @synthesize collapsedTitleStyle=_collapsedTitleStyle;
@property(copy, nonatomic) GLUELabelStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
@property(nonatomic) double filterContentHeight; // @synthesize filterContentHeight=_filterContentHeight;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) id <SPTSortingFilteringFilterBarStyle> filterBarStyle; // @synthesize filterBarStyle=_filterBarStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

