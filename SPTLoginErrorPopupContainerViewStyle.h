//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString;

@interface SPTLoginErrorPopupContainerViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_messageLabelStyle;
    double _stackViewSpacing;
    long long _stackViewAlignment;
}

- (void).cxx_destruct;
@property(nonatomic) long long stackViewAlignment; // @synthesize stackViewAlignment=_stackViewAlignment;
@property(nonatomic) double stackViewSpacing; // @synthesize stackViewSpacing=_stackViewSpacing;
@property(copy, nonatomic) GLUELabelStyle *messageLabelStyle; // @synthesize messageLabelStyle=_messageLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

