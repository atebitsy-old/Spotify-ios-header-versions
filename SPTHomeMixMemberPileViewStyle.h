//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class NSString, UIColor;

@interface SPTHomeMixMemberPileViewStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    double _maskLineWidth;
    UIColor *_maskColor;
    UIColor *_backgroundColor;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
@property(nonatomic) double maskLineWidth; // @synthesize maskLineWidth=_maskLineWidth;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

