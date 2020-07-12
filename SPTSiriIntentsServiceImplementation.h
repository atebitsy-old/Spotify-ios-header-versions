//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSiriIntentsService-Protocol.h"

@class NSString, SPTAllocationContext, SPTSiriIntentsFeatureProperties, SPTSiriIntentsKeepAliveHandler, SPTSiriIntentsVocabularyManager;
@protocol GaiaFeature, SPTCoreService, SPTEventSenderService, SPTLoginService, SPTNetworkService, SPTPlayerFeature, SPTPlaylistPlatformService, SPTRemoteConfigurationService, SPTSiriIntentsHandler;

@interface SPTSiriIntentsServiceImplementation : NSObject <SPTSiriIntentsService>
{
    SPTSiriIntentsVocabularyManager *_vocabularyManager;
    SPTSiriIntentsFeatureProperties *_featureProperties;
    id <SPTSiriIntentsHandler> _intentsHandler;
    id <SPTCoreService> _coreService;
    id <GaiaFeature> _gaiaService;
    id <SPTLoginService> _loginService;
    id <SPTNetworkService> _networkFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTEventSenderService> _eventSenderService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    SPTSiriIntentsKeepAliveHandler *_keepAliveHandler;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTSiriIntentsKeepAliveHandler *keepAliveHandler; // @synthesize keepAliveHandler=_keepAliveHandler;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <GaiaFeature> gaiaService; // @synthesize gaiaService=_gaiaService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(retain, nonatomic) id <SPTSiriIntentsHandler> intentsHandler; // @synthesize intentsHandler=_intentsHandler;
- (void).cxx_destruct;
- (long long)deferralModeForRemoteConfigValue:(id)arg1;
- (id)provideSiriIntentsHandler;
@property(readonly, nonatomic) SPTSiriIntentsVocabularyManager *vocabularyManager; // @synthesize vocabularyManager=_vocabularyManager;
@property(readonly, nonatomic) SPTSiriIntentsFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
- (void)unload;
- (void)setupSiriIntentsHandler;
- (void)setupKeepAliveHandler;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

