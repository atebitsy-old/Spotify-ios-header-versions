//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRecentlyPlayedService-Protocol.h"
#import "SPTService-Protocol.h"

@class NSMutableArray, NSString, SPTAllocationContext, SPTRecentlyPlayedEntityModel, SPTRecentlyPlayedTestManager;
@protocol CosmosFeature, SPTAddToSpotifyPlaylistExperimentService, SPTCollectionPlatformService, SPTCoreService, SPTCosmosDataLoaderService, SPTFeatureFlagFactory, SPTFeatureFlaggingService, SPTFreeTierService, SPTRecentlyPlayedList, SPTSessionService, SPTURIDispatchService;

@interface SPTRecentlyPlayedServiceImplementation : NSObject <SPTService, SPTRecentlyPlayedService>
{
    id <SPTAddToSpotifyPlaylistExperimentService> _addToSpotifyPlaylistExperimentService;
    id <SPTSessionService> _clientSessionService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTCoreService> _coreService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    SPTRecentlyPlayedEntityModel *_recentlyPlayedEntityModel;
    SPTRecentlyPlayedEntityModel *_noSongsRecentlyPlayedEntityModel;
    id <CosmosFeature> _cosmosFeature;
    id <SPTCosmosDataLoaderService> _cosmosDataLoaderService;
    id <SPTRecentlyPlayedList> _recentlyPlayedList;
    id <SPTRecentlyPlayedList> _noSongsRecentlyPlayedList;
    SPTRecentlyPlayedTestManager *_testManager;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    NSMutableArray *_registeredOptionalContentTypes;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) NSMutableArray *registeredOptionalContentTypes; // @synthesize registeredOptionalContentTypes=_registeredOptionalContentTypes;
@property(retain, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(retain, nonatomic) SPTRecentlyPlayedTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTRecentlyPlayedList> noSongsRecentlyPlayedList; // @synthesize noSongsRecentlyPlayedList=_noSongsRecentlyPlayedList;
@property(retain, nonatomic) id <SPTRecentlyPlayedList> recentlyPlayedList; // @synthesize recentlyPlayedList=_recentlyPlayedList;
@property(nonatomic) __weak id <SPTCosmosDataLoaderService> cosmosDataLoaderService; // @synthesize cosmosDataLoaderService=_cosmosDataLoaderService;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(retain, nonatomic) SPTRecentlyPlayedEntityModel *noSongsRecentlyPlayedEntityModel; // @synthesize noSongsRecentlyPlayedEntityModel=_noSongsRecentlyPlayedEntityModel;
@property(retain, nonatomic) SPTRecentlyPlayedEntityModel *recentlyPlayedEntityModel; // @synthesize recentlyPlayedEntityModel=_recentlyPlayedEntityModel;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTAddToSpotifyPlaylistExperimentService> addToSpotifyPlaylistExperimentService; // @synthesize addToSpotifyPlaylistExperimentService=_addToSpotifyPlaylistExperimentService;
- (void).cxx_destruct;
- (void)registerAllCollectionEntityContentTypes;
- (id)provideTestManager;
- (id)recentlyPlayedDataLoader;
- (id)provideRecentlyPlayedEntityModel;
- (id)provideRecentlyPlayedEntityModelWithoutSongs;
- (id)provideShortcutItemsProvider;
- (void)registerOptionalContentType:(unsigned long long)arg1;
- (id)provideRecentlyPlayedListWithoutSongs;
- (id)provideRecentlyPlayedList;
- (void)configureWithServices:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

