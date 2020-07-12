//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString, NSURL;

@protocol SPTCrashReporter <NSObject>
- (void)recordCustomExceptionName:(NSString *)arg1 reason:(NSString *)arg2 callStack:(NSArray *)arg3;
- (NSURL *)lastCrashURL;
- (NSString *)lastCrashIdentifier;
- (void)userDidEnterAuthenticationFlow;
- (void)appOperational;
- (void)appShutdown;
- (void)userDidLogIn:(NSString *)arg1;
- (void)setUserIdentifier:(NSString *)arg1;
- (void)setValue:(NSString *)arg1 forStateKey:(NSString *)arg2;
- (void)leaveBreadcrumb:(NSString *)arg1;
- (void)recordNonFatalError:(NSError *)arg1;
@end

