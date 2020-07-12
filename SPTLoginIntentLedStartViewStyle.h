//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"
#import "SPTLoginViewWithActionButtonsStyleable-Protocol.h"

@class GLUELabelStyle, NSDictionary, NSString, UIColor;

@interface SPTLoginIntentLedStartViewStyle : NSObject <GLUEStyle, SPTLoginViewWithActionButtonsStyleable>
{
    NSDictionary *buttonStyles;
    UIColor *_backgroundColor;
    GLUELabelStyle *_buttonHeadingLabelStyle;
    double _buttonsHeadingBottomMargin;
    double _buttonSeparatorMargin;
    double _buttonsEdgeMargin;
    double _mainContainerWidth;
    double _mainContainerIPadWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double mainContainerIPadWidth; // @synthesize mainContainerIPadWidth=_mainContainerIPadWidth;
@property(nonatomic) double mainContainerWidth; // @synthesize mainContainerWidth=_mainContainerWidth;
@property(nonatomic) double buttonsEdgeMargin; // @synthesize buttonsEdgeMargin=_buttonsEdgeMargin;
@property(nonatomic) double buttonSeparatorMargin; // @synthesize buttonSeparatorMargin=_buttonSeparatorMargin;
@property(nonatomic) double buttonsHeadingBottomMargin; // @synthesize buttonsHeadingBottomMargin=_buttonsHeadingBottomMargin;
@property(copy, nonatomic) GLUELabelStyle *buttonHeadingLabelStyle; // @synthesize buttonHeadingLabelStyle=_buttonHeadingLabelStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSDictionary *buttonStyles; // @synthesize buttonStyles;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

