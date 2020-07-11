//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEThemeBase.h"

@class SPTPhoneNumberSignupCallingCodeContainerViewStyle, SPTPhoneNumberSignupPhoneNumberEntryContainerViewStyle, SPTPhoneNumberSignupValidateOtpContainerViewStyle;
@protocol GLUEStyle;

@interface SPTPhoneNumberSignupTheme : GLUEThemeBase
{
}

- (id)nextButtonStyle;
- (id)createSearchBarStyle;
- (id)createCountrySelectorCellStyle;
- (id)createPhoneNumberEntryCellStyle;
@property(readonly, copy, nonatomic) SPTPhoneNumberSignupPhoneNumberEntryContainerViewStyle<GLUEStyle> *enterPhoneNumberContainerViewStyle;
- (id)createCallingCodeTitleLabelStyle;
- (id)createCallingCodeCellStyle;
@property(readonly, copy, nonatomic) SPTPhoneNumberSignupCallingCodeContainerViewStyle<GLUEStyle> *callingCodeContainerViewStyle;
- (id)createTextWithImageButtonStyleWithIcon:(long long)arg1;
- (id)createCodeInputFieldStyle;
- (id)createStackViewStyle;
- (id)createBannerViewStyle;
@property(readonly, copy, nonatomic) SPTPhoneNumberSignupValidateOtpContainerViewStyle<GLUEStyle> *enterOneTimePasswordContainerViewStyle;

@end

