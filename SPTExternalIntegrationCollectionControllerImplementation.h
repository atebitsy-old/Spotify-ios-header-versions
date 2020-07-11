//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatformObserver-Protocol.h"
#import "SPTExternalIntegrationCollectionController-Protocol.h"

@class NSString, SPTExternalIntegrationPlatformLoggerImplementation, SPTObserverManager;
@protocol SPTCollectionPlatform, SPTCollectionPlatformConfiguration, SPTCollectionPlatformDataLoaderRequestToken, SPTCollectionPlatformTestManager, SPTExternalIntegrationDebugLog, SPTExternalIntegrationPlaybackController, SPTPlaylistPlatformDataLoaderRequestToken, SPTPlaylistPlatformService;

@interface SPTExternalIntegrationCollectionControllerImplementation : NSObject <SPTCollectionPlatformObserver, SPTExternalIntegrationCollectionController>
{
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformTestManager> _collectionPlatformTestManager;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    SPTObserverManager *_observerManager;
    SPTExternalIntegrationPlatformLoggerImplementation *_logger;
    id <SPTExternalIntegrationDebugLog> _debugLog;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionPodcastRequestToken;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _playlistPlatformRequestToken;
    unsigned long long _collectionPlaylistCount;
    unsigned long long _collectionPodcastCount;
}

@property(nonatomic) unsigned long long collectionPodcastCount; // @synthesize collectionPodcastCount=_collectionPodcastCount;
@property(nonatomic) unsigned long long collectionPlaylistCount; // @synthesize collectionPlaylistCount=_collectionPlaylistCount;
@property(retain, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> playlistPlatformRequestToken; // @synthesize playlistPlatformRequestToken=_playlistPlatformRequestToken;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionPodcastRequestToken; // @synthesize collectionPodcastRequestToken=_collectionPodcastRequestToken;
@property(readonly, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(readonly, nonatomic) SPTExternalIntegrationPlatformLoggerImplementation *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionPlatformTestManager; // @synthesize collectionPlatformTestManager=_collectionPlatformTestManager;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
- (void).cxx_destruct;
- (void)collectionPlatformDidChange:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> configuration;
- (void)removeContentFromCollectionWithURI:(id)arg1 accessorySessionID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addContentToCollectionWithURI:(id)arg1 fromContext:(id)arg2 accessorySessionID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)canAddTrackToCollectionWithURI:(id)arg1;
- (void)collectionContainsContentWithURI:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setupSubscriptions;
- (void)dealloc;
- (id)initWithCollectionPlatform:(id)arg1 collectionPlatformTestManager:(id)arg2 playlistPlatformService:(id)arg3 playbackController:(id)arg4 debugLog:(id)arg5 logger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

