//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class GLUEAccessoryIconViewStyle, GLUELabelStyle, NSString, UIColor;

@interface GLUENavigationRowUIStateStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    double _alpha;
    UIColor *_backgroundColor;
    GLUEAccessoryIconViewStyle *_disclosureIndicatorStyle;
    double _disclosureIndicatorMargin;
    GLUEAccessoryIconViewStyle *_accessoryIconViewStyle;
    double _accessoryIconViewMargin;
    GLUELabelStyle *_titleLabelStyle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(nonatomic) double accessoryIconViewMargin; // @synthesize accessoryIconViewMargin=_accessoryIconViewMargin;
@property(copy, nonatomic) GLUEAccessoryIconViewStyle *accessoryIconViewStyle; // @synthesize accessoryIconViewStyle=_accessoryIconViewStyle;
@property(nonatomic) double disclosureIndicatorMargin; // @synthesize disclosureIndicatorMargin=_disclosureIndicatorMargin;
@property(copy, nonatomic) GLUEAccessoryIconViewStyle *disclosureIndicatorStyle; // @synthesize disclosureIndicatorStyle=_disclosureIndicatorStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToNavigationRowUIStateStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

