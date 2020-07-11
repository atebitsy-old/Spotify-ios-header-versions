//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, SPTAppExtensionKeychainCredentials;
@protocol SPTLoginSession;

@protocol SPTAppExtensionCredentialsManager <NSObject>
- (NSString *)hermesAccessToken;
- (_Bool)deleteHermesAccessToken;
- (NSError *)setHermesAccessToken:(NSString *)arg1;
- (id <SPTLoginSession>)storedLoginSession;
- (_Bool)deleteStoredLoginSession;
- (NSError *)setStoredLoginSession:(id <SPTLoginSession>)arg1;
- (SPTAppExtensionKeychainCredentials *)appExtensionCredentials;
- (_Bool)deleteAppExtensionCredentials;
- (NSError *)setAppExtensionCredentials:(SPTAppExtensionKeychainCredentials *)arg1;
@end

