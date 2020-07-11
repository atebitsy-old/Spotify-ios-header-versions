//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, SPTRawConfiguration, SPTRemoteConfigurationMessageCreator;
@protocol SPTRemoteConfigurationContext, SPTRemoteConfigurationDebugLogger, SPTRemoteConfigurationEventLogger, SPTRemoteConfigurationPersistence, SPTRemoteConfigurationTransport;

@interface SPTRemoteConfiguration : NSObject
{
    SPTRawConfiguration *_activeConfiguration;
    id <SPTRemoteConfigurationTransport> _transport;
    id <SPTRemoteConfigurationEventLogger> _eventLogger;
    id <SPTRemoteConfigurationDebugLogger> _debugLogger;
    id <SPTRemoteConfigurationPersistence> _persistence;
    id <SPTRemoteConfigurationContext> _remoteConfigurationContext;
    NSDictionary *_localPropertyOverrides;
    SPTRemoteConfigurationMessageCreator *_messageCreator;
}

@property(retain, nonatomic) SPTRemoteConfigurationMessageCreator *messageCreator; // @synthesize messageCreator=_messageCreator;
@property(retain, nonatomic) NSDictionary *localPropertyOverrides; // @synthesize localPropertyOverrides=_localPropertyOverrides;
@property(readonly, nonatomic) id <SPTRemoteConfigurationContext> remoteConfigurationContext; // @synthesize remoteConfigurationContext=_remoteConfigurationContext;
@property(readonly, nonatomic) id <SPTRemoteConfigurationPersistence> persistence; // @synthesize persistence=_persistence;
@property(readonly, nonatomic) id <SPTRemoteConfigurationDebugLogger> debugLogger; // @synthesize debugLogger=_debugLogger;
@property(readonly, nonatomic) id <SPTRemoteConfigurationEventLogger> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) id <SPTRemoteConfigurationTransport> transport; // @synthesize transport=_transport;
@property(retain, nonatomic) SPTRawConfiguration *activeConfiguration; // @synthesize activeConfiguration=_activeConfiguration;
- (void).cxx_destruct;
- (void)logMessage:(id)arg1 level:(unsigned long long)arg2;
- (id)createResolverURLWithFetchType:(id)arg1;
- (void)handleFetchSuccessWithData:(id)arg1;
- (void)handleFetchSuccessNoData;
- (void)handleFetchError:(id)arg1;
- (id)mergedActiveAndOverridenProperties;
- (id)getWithClass:(Class)arg1;
- (void)sendEventsForConfiguration:(id)arg1;
- (id)clientAttributes;
- (void)activateConfiguration:(id)arg1;
- (id)updatePropertyModel:(id)arg1;
- (void)removeLocalOverrides:(id)arg1;
- (void)clearLocalOverrides;
- (id)localOverrides;
- (_Bool)isValidOverride:(id)arg1;
- (void)setLocalOverrides:(id)arg1;
- (void)clearPersistentStorage;
- (void)activateFetched;
- (void)fetchConfigurationWithFetchType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithTransport:(id)arg1 eventLogger:(id)arg2 debugLogger:(id)arg3 clientID:(id)arg4 clientVersion:(id)arg5;
- (id)initWithTransport:(id)arg1 eventLogger:(id)arg2 debugLogger:(id)arg3 remoteConfigurationContext:(id)arg4;

@end

