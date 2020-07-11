//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTAuthCodeChallenge, SPTAuthSignupInfo;
@protocol SPTCoreLoginController;

@protocol SPTCoreLoginControllerLoginDelegate <NSObject>
- (void)core:(id <SPTCoreLoginController>)arg1 failedLoginWithError:(NSError *)arg2 legacyError:(NSError *)arg3;
- (void)coreDidLogin:(id <SPTCoreLoginController>)arg1;
- (void)core:(id <SPTCoreLoginController>)arg1 didReceiveSignupInformation:(SPTAuthSignupInfo *)arg2;
- (void)core:(id <SPTCoreLoginController>)arg1 didReceiveChallenge:(SPTAuthCodeChallenge *)arg2;
@end

