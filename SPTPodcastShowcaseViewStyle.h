//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUEGradientStyle, GLUEImageStyle, GLUELabelStyle, NSString;

@interface SPTPodcastShowcaseViewStyle : NSObject <GLUEStyle>
{
    double _interitemSpacing;
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUEImageStyle *_headerImageViewStyle;
    GLUEImageStyle *_imageViewStyle;
    GLUELabelStyle *_textLabelStyle;
    GLUEButtonStyle *_actionButtonStyle;
    GLUEButtonStyle *_dismissButtonStyle;
    struct CGSize _headerImageSize;
}

@property(copy, nonatomic) GLUEButtonStyle *dismissButtonStyle; // @synthesize dismissButtonStyle=_dismissButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *actionButtonStyle; // @synthesize actionButtonStyle=_actionButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *textLabelStyle; // @synthesize textLabelStyle=_textLabelStyle;
@property(copy, nonatomic) GLUEImageStyle *imageViewStyle; // @synthesize imageViewStyle=_imageViewStyle;
@property(copy, nonatomic) GLUEImageStyle *headerImageViewStyle; // @synthesize headerImageViewStyle=_headerImageViewStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
@property(nonatomic) struct CGSize headerImageSize; // @synthesize headerImageSize=_headerImageSize;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

