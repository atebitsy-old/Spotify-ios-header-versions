//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFacebookSDK-Protocol.h"

@class FBSDKLoginManager, NSString;

@interface SPTFacebookSDKImplementation : NSObject <SPTFacebookSDK>
{
    FBSDKLoginManager *_facebookLoginManager;
    unsigned long long _facebookAuthKeepAliveBackgroundTask;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long facebookAuthKeepAliveBackgroundTask; // @synthesize facebookAuthKeepAliveBackgroundTask=_facebookAuthKeepAliveBackgroundTask;
@property(retain, nonatomic) FBSDKLoginManager *facebookLoginManager; // @synthesize facebookLoginManager=_facebookLoginManager;
- (id)errorForFacebookError:(id)arg1;
- (id)errorForUserCanceledAttempt;
- (void)endAuthBackgroundTask;
- (void)startAuthBackgroundTask;
- (id)profilePictureURLFromResponseDictionary:(id)arg1;
- (void)requestFacebookUserIdentifierForAccessToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestFacebookAccessToken:(CDUnknownBlockType)arg1;
- (void)clearFacebookData;
- (id)initWithFacebookLoginManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

