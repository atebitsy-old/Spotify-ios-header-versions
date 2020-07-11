//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginNavigationCoordinator-Protocol.h"

@class NSString, SPTSignupAttemptTrackerImplementation;
@protocol SPTNavigationRouter;

@interface SPTLoginFeatureNavigationCoordinator : NSObject <SPTLoginNavigationCoordinator>
{
    id <SPTNavigationRouter> _navigationRouter;
    SPTSignupAttemptTrackerImplementation *_signupAttemptTracker;
}

@property(readonly, nonatomic) SPTSignupAttemptTrackerImplementation *signupAttemptTracker; // @synthesize signupAttemptTracker=_signupAttemptTracker;
@property(readonly, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
- (void).cxx_destruct;
- (void)openPhoneNumberScreen;
- (void)openPhoneNumberContinueWithEmailScreen;
- (void)openFacebookConfirmationScreenWithUserInfo:(id)arg1;
- (void)openMagicLinkSentConfirmationScreenWithEmail:(id)arg1;
- (void)openRequestMagicLinkScreenWithEmail:(id)arg1 error:(id)arg2;
- (void)openLoginScreenWithEmail:(id)arg1;
- (void)openSignupFlowWithSignupInfo:(id)arg1 type:(unsigned long long)arg2 navigationCompletion:(CDUnknownBlockType)arg3;
- (void)openDisplayNameScreen;
- (void)openAgeScreen;
- (void)openPasswordScreen;
- (void)openGenderScreen;
- (void)openEmailScreen;
- (id)initWithNavigatonRouter:(id)arg1 signupAttemptTracker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

