//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginTestManager;

@interface SPTLoginHiddenSignupScreenDataProvider : NSObject
{
    SPTLoginTestManager *_testManager;
}

+ (id)generateRandomPassword;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTLoginTestManager *testManager; // @synthesize testManager=_testManager;
- (id)providePassword;
- (id)defaultGender;
- (id)supplyDataForHiddenScreens:(id)arg1;
- (id)initWithTestManager:(id)arg1;

@end

