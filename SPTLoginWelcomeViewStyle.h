//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTLoginWelcomeViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    GLUELabelStyle *_valuePropLabelStyle;
    GLUEButtonStyle *_signupButtonStyle;
    GLUEButtonStyle *_facebookButtonStyle;
    GLUEButtonStyle *_loginButtonStyle;
    double _valuePropLabelHorizontalEdgeMargin;
    double _spotifyLogoTopEdgeMargin;
    double _spotifyLogoTopEdgeMarginIPad;
    double _spotifyLogoLeadingEdgeMargin;
    double _spotifyLogoWidth;
    double _mainContainerWidth;
    double _mainContainerIPadWidth;
    double _spotifyLogoHeight;
    double _valuePropsTopMargin;
    double _valuePropsBottomMargin;
    double _valuePropsBottomSmallMargin;
    double _buttonRegularSizeClassWidth;
    double _buttonMinimumHorizontalEdgeMargin;
    double _buttonMaximumHorizontalEdgeMargin;
    double _buttonsContainerBottomEdgeMargin;
    double _buttonsContainerBottomEdgeSmallMargin;
    double _betweenButtonsMargin;
    double _titleMessageVerticalSpacing;
    double _minTitleMessageScale;
}

@property(nonatomic) double minTitleMessageScale; // @synthesize minTitleMessageScale=_minTitleMessageScale;
@property(nonatomic) double titleMessageVerticalSpacing; // @synthesize titleMessageVerticalSpacing=_titleMessageVerticalSpacing;
@property(nonatomic) double betweenButtonsMargin; // @synthesize betweenButtonsMargin=_betweenButtonsMargin;
@property(nonatomic) double buttonsContainerBottomEdgeSmallMargin; // @synthesize buttonsContainerBottomEdgeSmallMargin=_buttonsContainerBottomEdgeSmallMargin;
@property(nonatomic) double buttonsContainerBottomEdgeMargin; // @synthesize buttonsContainerBottomEdgeMargin=_buttonsContainerBottomEdgeMargin;
@property(nonatomic) double buttonMaximumHorizontalEdgeMargin; // @synthesize buttonMaximumHorizontalEdgeMargin=_buttonMaximumHorizontalEdgeMargin;
@property(nonatomic) double buttonMinimumHorizontalEdgeMargin; // @synthesize buttonMinimumHorizontalEdgeMargin=_buttonMinimumHorizontalEdgeMargin;
@property(nonatomic) double buttonRegularSizeClassWidth; // @synthesize buttonRegularSizeClassWidth=_buttonRegularSizeClassWidth;
@property(nonatomic) double valuePropsBottomSmallMargin; // @synthesize valuePropsBottomSmallMargin=_valuePropsBottomSmallMargin;
@property(nonatomic) double valuePropsBottomMargin; // @synthesize valuePropsBottomMargin=_valuePropsBottomMargin;
@property(nonatomic) double valuePropsTopMargin; // @synthesize valuePropsTopMargin=_valuePropsTopMargin;
@property(nonatomic) double spotifyLogoHeight; // @synthesize spotifyLogoHeight=_spotifyLogoHeight;
@property(nonatomic) double mainContainerIPadWidth; // @synthesize mainContainerIPadWidth=_mainContainerIPadWidth;
@property(nonatomic) double mainContainerWidth; // @synthesize mainContainerWidth=_mainContainerWidth;
@property(nonatomic) double spotifyLogoWidth; // @synthesize spotifyLogoWidth=_spotifyLogoWidth;
@property(nonatomic) double spotifyLogoLeadingEdgeMargin; // @synthesize spotifyLogoLeadingEdgeMargin=_spotifyLogoLeadingEdgeMargin;
@property(nonatomic) double spotifyLogoTopEdgeMarginIPad; // @synthesize spotifyLogoTopEdgeMarginIPad=_spotifyLogoTopEdgeMarginIPad;
@property(nonatomic) double spotifyLogoTopEdgeMargin; // @synthesize spotifyLogoTopEdgeMargin=_spotifyLogoTopEdgeMargin;
@property(nonatomic) double valuePropLabelHorizontalEdgeMargin; // @synthesize valuePropLabelHorizontalEdgeMargin=_valuePropLabelHorizontalEdgeMargin;
@property(copy, nonatomic) GLUEButtonStyle *loginButtonStyle; // @synthesize loginButtonStyle=_loginButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *facebookButtonStyle; // @synthesize facebookButtonStyle=_facebookButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *signupButtonStyle; // @synthesize signupButtonStyle=_signupButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *valuePropLabelStyle; // @synthesize valuePropLabelStyle=_valuePropLabelStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

