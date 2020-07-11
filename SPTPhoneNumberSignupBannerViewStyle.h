//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface SPTPhoneNumberSignupBannerViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    double _height;
    GLUELabelStyle *_textStyle;
    double _leadingMargin;
    double _trailingMargin;
    double _topMargin;
    double _bottomMargin;
    UIColor *_progressViewBackgroundColor;
    UIColor *_progressViewTintColor;
}

@property(copy, nonatomic) UIColor *progressViewTintColor; // @synthesize progressViewTintColor=_progressViewTintColor;
@property(copy, nonatomic) UIColor *progressViewBackgroundColor; // @synthesize progressViewBackgroundColor=_progressViewBackgroundColor;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(copy, nonatomic) GLUELabelStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

