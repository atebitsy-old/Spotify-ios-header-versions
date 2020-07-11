//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTAuthAppleSignInCredential, SPTAuthLoginCredentials, SPTAuthLoginOptions, SPTAuthOneTimeTokenCredential, SPTAuthParentChildCredential, SPTAuthPhoneNumberIdentifier, SPTAuthSerializableCredentials;
@protocol SPTCoreLoginControllerDelegate;

@protocol SPTCoreLoginController <NSObject>
@property(nonatomic) __weak id <SPTCoreLoginControllerDelegate> loginControllerDelegate;
- (void)eraseOfflineUser:(NSString *)arg1;
- (void)forgetStoredCredentials;
- (_Bool)hasStoredCredentials;
- (SPTAuthSerializableCredentials *)serializableCredentialsAndCanonicalUsername:(id *)arg1;
- (SPTAuthLoginCredentials *)storedCredentialsAndCanonicalUsername:(id *)arg1;
- (void)loginWithAppleSignInCredential:(SPTAuthAppleSignInCredential *)arg1 options:(SPTAuthLoginOptions *)arg2;
- (void)loginWithParentChildCredential:(SPTAuthParentChildCredential *)arg1 options:(SPTAuthLoginOptions *)arg2;
- (void)loginWithOneTimeTokenCredential:(SPTAuthOneTimeTokenCredential *)arg1 options:(SPTAuthLoginOptions *)arg2;
- (void)loginWithCredentials:(SPTAuthLoginCredentials *)arg1 options:(SPTAuthLoginOptions *)arg2;
- (void)loginWithPhoneNumberIdentifier:(SPTAuthPhoneNumberIdentifier *)arg1 options:(SPTAuthLoginOptions *)arg2;
@end

