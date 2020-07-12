//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEImageStyle, GLUELabelStyle, NSString;

@interface SPTFreeTierTasteOnboardingGenreCellStyle : NSObject <GLUEStyle>
{
    GLUEImageStyle *_imageViewStyle;
    GLUELabelStyle *_textLabelStyle;
    double _textLabelEdgeMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double textLabelEdgeMargin; // @synthesize textLabelEdgeMargin=_textLabelEdgeMargin;
@property(copy, nonatomic) GLUELabelStyle *textLabelStyle; // @synthesize textLabelStyle=_textLabelStyle;
@property(copy, nonatomic) GLUEImageStyle *imageViewStyle; // @synthesize imageViewStyle=_imageViewStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

