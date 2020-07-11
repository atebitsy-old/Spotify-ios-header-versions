//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSArray, NSString;

@interface SPTLogMessageClientAuthEventStart1 : SPTLogMessage
{
    _Bool _isOfflineValue;
    _Bool _integrationInitiatedValue;
    NSString *_clientIdValue;
    NSString *_responseTypeValue;
    NSString *_redirectUriValue;
    NSArray *_scopesValue;
    NSString *_appIdValue;
    NSString *_authIdValue;
}

+ (id)messageWithClientId:(id)arg1 responseType:(id)arg2 redirectUri:(id)arg3 scopes:(id)arg4 isOffline:(_Bool)arg5 appId:(id)arg6 integrationInitiated:(_Bool)arg7 authId:(id)arg8;
@property(copy, nonatomic) NSString *authIdValue; // @synthesize authIdValue=_authIdValue;
@property(nonatomic) _Bool integrationInitiatedValue; // @synthesize integrationInitiatedValue=_integrationInitiatedValue;
@property(copy, nonatomic) NSString *appIdValue; // @synthesize appIdValue=_appIdValue;
@property(nonatomic) _Bool isOfflineValue; // @synthesize isOfflineValue=_isOfflineValue;
@property(copy, nonatomic) NSArray *scopesValue; // @synthesize scopesValue=_scopesValue;
@property(copy, nonatomic) NSString *redirectUriValue; // @synthesize redirectUriValue=_redirectUriValue;
@property(copy, nonatomic) NSString *responseTypeValue; // @synthesize responseTypeValue=_responseTypeValue;
@property(copy, nonatomic) NSString *clientIdValue; // @synthesize clientIdValue=_clientIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

