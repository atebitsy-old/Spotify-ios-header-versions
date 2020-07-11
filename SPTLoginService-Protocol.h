//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class SPTLoginDelayedSignupAccountSwitcher, SPTLoginNavigationRouter, SPTLoginSlideUpModalPresenter;
@protocol SPTCredentialSource, SPTDialogController, SPTLoginKeychainManager, SPTLoginLogoutHandler, SPTLoginNavigationCoordinator, SPTLoginServiceObserver, SPTLoginStateController, SPTSignupAttemptTracker;

@protocol SPTLoginService <SPTService>
@property(readonly, nonatomic) _Bool userDidAuthenticateWithGuestAccount;
- (id <SPTSignupAttemptTracker>)provideSignupAttemptTracker;
- (id <SPTLoginNavigationCoordinator>)provideNavigationCoordinator;
- (SPTLoginDelayedSignupAccountSwitcher *)provideAccountSwitcher;
- (SPTLoginNavigationRouter *)provideNavigationRouter;
- (void)didLoginWithPhoneNumber;
- (void)removeObserver:(id <SPTLoginServiceObserver>)arg1;
- (void)addObserver:(id <SPTLoginServiceObserver>)arg1;
- (id <SPTCredentialSource>)provideCredentialSource;
- (SPTLoginSlideUpModalPresenter *)provideSlideUpModalPresenter;
- (id <SPTLoginLogoutHandler>)provideLogoutHandler;
- (id <SPTLoginKeychainManager>)provideKeychainManager;
- (id <SPTLoginStateController>)provideLoginStateController;
- (id <SPTDialogController>)provideDialogController;
@end

