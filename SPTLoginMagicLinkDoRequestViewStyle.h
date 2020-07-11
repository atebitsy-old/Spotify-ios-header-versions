//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString, SPTLoginTextFieldStyle, UIColor;

@interface SPTLoginMagicLinkDoRequestViewStyle : NSObject <GLUEStyle>
{
    double _mainContainerWidth;
    double _mainContainerIPadWidth;
    UIColor *_backgroundColor;
    GLUELabelStyle *_titleHeaderStyle;
    GLUELabelStyle *_labelTitleStyle;
    SPTLoginTextFieldStyle *_inputFieldStyle;
    GLUELabelStyle *_disclosureLabelStyle;
    GLUEButtonStyle *_nextButtonStyle;
    double _titleTopMargin;
    double _upperLabelTopMargin;
    double _inputFieldHeight;
    double _inputFieldHeightIPad;
    double _verticalSpacing;
    double _horizontalMargin;
    double _openEmailButtonTopMargin;
    double _lowerLabelTopMargin;
}

@property(nonatomic) double lowerLabelTopMargin; // @synthesize lowerLabelTopMargin=_lowerLabelTopMargin;
@property(nonatomic) double openEmailButtonTopMargin; // @synthesize openEmailButtonTopMargin=_openEmailButtonTopMargin;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;
@property(nonatomic) double inputFieldHeightIPad; // @synthesize inputFieldHeightIPad=_inputFieldHeightIPad;
@property(nonatomic) double inputFieldHeight; // @synthesize inputFieldHeight=_inputFieldHeight;
@property(nonatomic) double upperLabelTopMargin; // @synthesize upperLabelTopMargin=_upperLabelTopMargin;
@property(nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
@property(copy, nonatomic) GLUEButtonStyle *nextButtonStyle; // @synthesize nextButtonStyle=_nextButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *disclosureLabelStyle; // @synthesize disclosureLabelStyle=_disclosureLabelStyle;
@property(copy, nonatomic) SPTLoginTextFieldStyle *inputFieldStyle; // @synthesize inputFieldStyle=_inputFieldStyle;
@property(copy, nonatomic) GLUELabelStyle *labelTitleStyle; // @synthesize labelTitleStyle=_labelTitleStyle;
@property(copy, nonatomic) GLUELabelStyle *titleHeaderStyle; // @synthesize titleHeaderStyle=_titleHeaderStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double mainContainerIPadWidth; // @synthesize mainContainerIPadWidth=_mainContainerIPadWidth;
@property(nonatomic) double mainContainerWidth; // @synthesize mainContainerWidth=_mainContainerWidth;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

