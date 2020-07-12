//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAuthWebgateSession-Protocol.h"

@class NSString, SPTAuthSerializableCredentials;
@protocol SPTOauthClient;

@interface SPTAuthWebgateSessionImpl : NSObject <SPTAuthWebgateSession>
{
    unique_ptr_31f72f11 _authSession;
    id <SPTOauthClient> _oauthClient;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTOauthClient> oauthClient; // @synthesize oauthClient=_oauthClient;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) SPTAuthSerializableCredentials *reusableCredentials;
@property(readonly, nonatomic) shared_ptr_8d7bf210 cppOauthClient;
- (id)initWithSession:(unique_ptr_31f72f11)arg1 coreThreadScheduler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

