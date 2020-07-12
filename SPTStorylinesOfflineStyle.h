//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class GLUELabelStyle, NSString;

@interface SPTStorylinesOfflineStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    GLUELabelStyle *_offlineLabelStyle;
    GLUELabelStyle *_offlineSublabelStyle;
}

+ (id)styleWithTheme:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) GLUELabelStyle *offlineSublabelStyle; // @synthesize offlineSublabelStyle=_offlineSublabelStyle;
@property(copy, nonatomic) GLUELabelStyle *offlineLabelStyle; // @synthesize offlineLabelStyle=_offlineLabelStyle;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

