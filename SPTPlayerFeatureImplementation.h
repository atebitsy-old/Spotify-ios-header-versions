//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTAudioSessionControllerImpl, SPTPlaybackErrorPicker, SPTPlayerSubscription;
@protocol CosmosFeature, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTDebugService, SPTFeatureFlaggingService, SPTNetworkService, SPTPlaybackErrorDialogs, SPTPlayer, SPTPlayerLocalObservers, SPTResolver, SPTSessionService, SPTSettingsFeature;

@interface SPTPlayerFeatureImplementation : NSObject <SPTPlayerFeature>
{
    id <SPTNetworkService> _networkService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _container;
    id <SPTContainerUIService> _containerUIService;
    id <SPTCoreService> _core;
    id <SPTDebugService> _debugService;
    id <CosmosFeature> _cosmos;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    _Bool _initialized;
    SPTPlayerSubscription *_playerSubscription;
    id <SPTPlayerLocalObservers> _localObservers;
    SPTAudioSessionControllerImpl *_audioSessionController;
    SPTPlaybackErrorPicker *_playbackErrorPicker;
    id <SPTPlayer> _observationPlayer;
    id <SPTPlaybackErrorDialogs> _playbackErrorDialogs;
    id <SPTResolver> _resolver;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
- (void)loadPlaybackErrorPicker;
- (id)provideAudioSessionController;
- (id)providePlayerQueue;
- (void)removePlayerObserver:(id)arg1;
- (void)addPlayerObserver:(id)arg1;
- (void)fetchPlayerState:(CDUnknownBlockType)arg1 on:(id)arg2;
- (void)loadObservationPlayer;
- (id)providePlayerWithViewURI:(id)arg1 playerSubscription:(id)arg2 resolver:(id)arg3 featureIdentifier:(id)arg4 referrerIdentifier:(id)arg5;
- (id)providePlayerWithViewURI:(id)arg1 featureIdentifier:(id)arg2 referrerIdentifier:(id)arg3;
- (id)providePlayerWithViewURI:(id)arg1 featureIdentifier:(id)arg2 referrerIdentifier:(id)arg3 queue:(id)arg4;
- (id)playerSubscription;
- (id)resolver;
- (void)loadLazily;
- (void)loadTAUtilities;
- (id)providePlaybackErrorDialogs;
- (void)loadAudioSessionController;
- (id)cosmosRouter;
- (long long)offlineState;
- (void)loadPlayerSubscriptionWithResolver:(id)arg1;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

