//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierRecommendationsService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTCollectionPlatformService, SPTFreeTierRecommendationsPlaylistViewProvider, SPTGLUEService, SPTHubFrameworkService, SPTNetworkService, SPTOnDemandService, SPTSessionService;

@interface SPTFreeTierRecommendationsServiceImplementation : NSObject <SPTFreeTierRecommendationsService>
{
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTGLUEService> _glueService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTSessionService> _clientSessionService;
    id <SPTNetworkService> _networkService;
    id <SPTFreeTierRecommendationsPlaylistViewProvider> _playlistProvider;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTFreeTierRecommendationsPlaylistViewProvider> playlistProvider; // @synthesize playlistProvider=_playlistProvider;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
- (id)provideRecommendedTracksDataLoader;
- (id)recommenedPlaylistViewProvider;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

