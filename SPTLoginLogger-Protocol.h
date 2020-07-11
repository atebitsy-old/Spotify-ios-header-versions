//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol SPTLoginLogger <NSObject>
- (void)userDidCompleteRequestWithType:(NSString *)arg1 error:(NSError *)arg2 attemptId:(NSString *)arg3;
- (NSString *)userDidStartRequestWithType:(NSString *)arg1;
- (void)trackGuestAccountCreationFailedWithError:(long long)arg1;
- (void)trackGuestAccountCreated;
- (void)trackForcedLogoutWithError:(long long)arg1;
- (void)trackExplicitLogout;
- (void)userDidAttemptLoginWithSuccess:(_Bool)arg1 usingEmail:(_Bool)arg2 credentialsIdentifier:(long long)arg3;
- (void)trackEventWithName:(NSString *)arg1;
- (void)userIsAboutToSeeLoginFlow;
- (void)userDidRegister;
- (void)operationWithIdentifier:(NSString *)arg1 didFinishWithDuration:(double)arg2;
- (void)userDidAuthenticateFromScreen:(NSString *)arg1;
- (void)userAccountRecoveryCompleted:(_Bool)arg1;
- (void)accountRecoveryLinkParsed;
- (void)trackKeychainEventWithIdentifier:(NSString *)arg1;
- (void)userExperiencedError:(NSString *)arg1 withCode:(long long)arg2 onScreen:(NSString *)arg3;
- (void)userExperiencedError:(NSString *)arg1 withCode:(long long)arg2 onField:(NSString *)arg3 onScreen:(NSString *)arg4;
- (void)userInteractedWithField:(NSString *)arg1 onScreen:(NSString *)arg2 inDialog:(NSString *)arg3;
- (void)userInteractedWithField:(NSString *)arg1 onScreen:(NSString *)arg2;
- (void)userClickedButton:(NSString *)arg1 onScreen:(NSString *)arg2 inDialog:(NSString *)arg3;
- (void)userClickedButton:(NSString *)arg1 onScreen:(NSString *)arg2;
- (void)userDidSeeDialog:(NSString *)arg1 onScreen:(NSString *)arg2 withError:(long long)arg3;
- (void)userDidSeeDialog:(NSString *)arg1 onScreen:(NSString *)arg2;
- (void)userDidSeeScreen:(NSString *)arg1;
@end

