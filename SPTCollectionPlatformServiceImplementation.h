//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatformService-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTCollectionPlatformLoggerImplementation;
@protocol CosmosFeature, SPTAbbaService, SPTCollectionPlatform, SPTCollectionPlatformConfiguration, SPTCollectionPlatformStateProvider, SPTCollectionPlatformTestManager, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTCosmosDataLoaderService, SPTFeatureFlaggingService, SPTFreeTierService, SPTNowPlayingPlatformService, SPTPlaylistPlatformService, SPTRemoteConfigurationService, SPTResolver, SPTSessionService, SPTSnackbarService;

@interface SPTCollectionPlatformServiceImplementation : NSObject <SPTService, SPTCollectionPlatformService>
{
    id <SPTAbbaService> _abbaService;
    id <SPTSessionService> _clientSessionService;
    id <CosmosFeature> _cosmosFeature;
    id <SPTCosmosDataLoaderService> _cosmosDataLoaderService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTSnackbarService> _snackbarService;
    id <SPTCoreService> _coreService;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTCollectionPlatformTestManager> _testManager;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformStateProvider> _collectionPlatformState;
    SPTCollectionPlatformLoggerImplementation *_collectionLogger;
    id <SPTResolver> _collectionCosmosRouter;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTResolver> collectionCosmosRouter; // @synthesize collectionCosmosRouter=_collectionCosmosRouter;
@property(retain, nonatomic) SPTCollectionPlatformLoggerImplementation *collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) id <SPTCollectionPlatformStateProvider> collectionPlatformState; // @synthesize collectionPlatformState=_collectionPlatformState;
@property(retain, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(retain, nonatomic) id <SPTCollectionPlatformTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSnackbarService> snackbarService; // @synthesize snackbarService=_snackbarService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTCosmosDataLoaderService> cosmosDataLoaderService; // @synthesize cosmosDataLoaderService=_cosmosDataLoaderService;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
- (id)provideCollectionResolver;
- (id)provideCollectionLogger;
- (id)provideCollectionPlatform;
- (id)provideTestManager;
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

