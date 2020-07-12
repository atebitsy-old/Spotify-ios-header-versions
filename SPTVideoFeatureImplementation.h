//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"
#import "SPTVideoFeature-Protocol.h"

@class BMPlaybackRequestFactory, NSString, SPTAllocationContext, SPTVideoCDNLogger;
@protocol SPTAbbaService, SPTAudioPlayerMediaClockService, SPTContainerService, SPTCoreService, SPTEventSenderService, SPTNetworkService, SPTRemoteConfigurationService, SPTSessionService, SPTVideoFeaturePlayerFactory;

@interface SPTVideoFeatureImplementation : NSObject <SPTService, SPTVideoFeature>
{
    id <SPTAbbaService> _abbaService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkFeature;
    id <SPTAudioPlayerMediaClockService> _audioPlayerMediaClockService;
    id <SPTEventSenderService> _eventSenderService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTVideoFeaturePlayerFactory> _playerFactory;
    BMPlaybackRequestFactory *_playbackRequestFactory;
    SPTVideoCDNLogger *_videoCDNLogger;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTVideoCDNLogger *videoCDNLogger; // @synthesize videoCDNLogger=_videoCDNLogger;
@property(retain, nonatomic) BMPlaybackRequestFactory *playbackRequestFactory; // @synthesize playbackRequestFactory=_playbackRequestFactory;
@property(retain, nonatomic) id <SPTVideoFeaturePlayerFactory> playerFactory; // @synthesize playerFactory=_playerFactory;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(nonatomic) __weak id <SPTAudioPlayerMediaClockService> audioPlayerMediaClockService; // @synthesize audioPlayerMediaClockService=_audioPlayerMediaClockService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
- (id)providePlaybackRequestFactory;
- (id)providePlayerFactory;
- (id)provideVideoCacheOptionsFactory;
- (id)playerConfigurationWithPreventDisplaySleepDuringVideoPlayback:(_Bool)arg1 videoFeatureProperties:(id)arg2;
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

