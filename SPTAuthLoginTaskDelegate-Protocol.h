//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTAuthCodeChallenge, SPTAuthLoginTask, SPTAuthSession, SPTAuthSignupInfo;
@protocol SPTAuthWebgateSession;

@protocol SPTAuthLoginTaskDelegate <NSObject>
- (void)loginTask:(SPTAuthLoginTask *)arg1 didRequireBootstrapUsingWebgateSession:(id <SPTAuthWebgateSession>)arg2 completionCallback:(void (^)(_Bool, NSData *))arg3;
- (void)loginTask:(SPTAuthLoginTask *)arg1 didFailWithError:(NSError *)arg2;
- (void)loginTask:(SPTAuthLoginTask *)arg1 didRequireSignup:(SPTAuthSignupInfo *)arg2;
- (void)loginTask:(SPTAuthLoginTask *)arg1 didRequireCode:(SPTAuthCodeChallenge *)arg2;
- (void)loginTask:(SPTAuthLoginTask *)arg1 didFinishWithSession:(SPTAuthSession *)arg2;
- (void)loginTask:(SPTAuthLoginTask *)arg1 didFinishWithWebgateSession:(id <SPTAuthWebgateSession>)arg2;
@end

