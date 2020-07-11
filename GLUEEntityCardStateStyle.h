//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class GLUECardDetailsStyle, GLUEImageStyle, NSString, UIColor;

@interface GLUEEntityCardStateStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    double _defaultWidth;
    double _alpha;
    UIColor *_backgroundColor;
    GLUEImageStyle *_imageStyle;
    long long _decoration;
    double _defaultDetailsHeight;
    GLUECardDetailsStyle *_detailsStyle;
}

@property(copy, nonatomic) GLUECardDetailsStyle *detailsStyle; // @synthesize detailsStyle=_detailsStyle;
@property(nonatomic) double defaultDetailsHeight; // @synthesize defaultDetailsHeight=_defaultDetailsHeight;
@property(nonatomic) long long decoration; // @synthesize decoration=_decoration;
@property(copy, nonatomic) GLUEImageStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double defaultWidth; // @synthesize defaultWidth=_defaultWidth;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToEntityCardStateStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

