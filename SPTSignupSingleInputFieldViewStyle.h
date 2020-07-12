//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString, SPTLoginInputFormViewStyle, SPTSignupTermsAndPolicyViewStyle, UIColor, UIFont;

@interface SPTSignupSingleInputFieldViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    GLUELabelStyle *_titleLabelStyle;
    SPTLoginInputFormViewStyle *_inputFormStyle;
    GLUEButtonStyle *_nextButtonStyle;
    double _titleTopMargin;
    double _inputFormTopMargin;
    double _horizontalMargin;
    double _nextButtonTopMargin;
    double _mainContainerWidth;
    double _mainContainerIPadWidth;
    SPTSignupTermsAndPolicyViewStyle *_termsViewStyle;
    UIColor *_customPickerButtonColor;
    UIFont *_customPickerButtonFont;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIFont *customPickerButtonFont; // @synthesize customPickerButtonFont=_customPickerButtonFont;
@property(copy, nonatomic) UIColor *customPickerButtonColor; // @synthesize customPickerButtonColor=_customPickerButtonColor;
@property(copy, nonatomic) SPTSignupTermsAndPolicyViewStyle *termsViewStyle; // @synthesize termsViewStyle=_termsViewStyle;
@property(nonatomic) double mainContainerIPadWidth; // @synthesize mainContainerIPadWidth=_mainContainerIPadWidth;
@property(nonatomic) double mainContainerWidth; // @synthesize mainContainerWidth=_mainContainerWidth;
@property(nonatomic) double nextButtonTopMargin; // @synthesize nextButtonTopMargin=_nextButtonTopMargin;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) double inputFormTopMargin; // @synthesize inputFormTopMargin=_inputFormTopMargin;
@property(nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
@property(copy, nonatomic) GLUEButtonStyle *nextButtonStyle; // @synthesize nextButtonStyle=_nextButtonStyle;
@property(copy, nonatomic) SPTLoginInputFormViewStyle *inputFormStyle; // @synthesize inputFormStyle=_inputFormStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

