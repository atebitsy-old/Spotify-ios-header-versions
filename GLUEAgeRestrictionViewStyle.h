//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor, UIFont;

@interface GLUEAgeRestrictionViewStyle : NSObject <GLUEStyle>
{
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_borderColor19;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *borderColor19; // @synthesize borderColor19=_borderColor19;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToAgeRestrictionViewStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

