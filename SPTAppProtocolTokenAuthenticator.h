//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAppProtocolAuthenticator-Protocol.h"
#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTAppProtocolAuthenticatorDelegate, SPTAuthController;

@interface SPTAppProtocolTokenAuthenticator : NSObject <SPTDataLoaderDelegate, SPTAppProtocolAuthenticator>
{
    id <SPTAppProtocolAuthenticatorDelegate> _delegate;
    id <SPTAuthController> _authController;
    SPTDataLoader *_dataLoader;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTAuthController> authController; // @synthesize authController=_authController;
@property(nonatomic) __weak id <SPTAppProtocolAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)handleAuthenticateMessage:(id)arg1 forSessionWithID:(unsigned long long)arg2 andReply:(CDUnknownBlockType)arg3;
- (void)handleHelloMessage:(id)arg1 forSessionWithID:(unsigned long long)arg2 andReply:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) NSString *methodName;
- (id)initWithDataLoaderFactory:(id)arg1 authController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

