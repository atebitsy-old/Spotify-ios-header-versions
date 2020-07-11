//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTLocalFilesImportManager;
@protocol CosmosFeature, SPTCollectionPlatformService, SPTContainerService, SPTContainerUIService, SPTNetworkService, SPTPlaylistPlatformService, SPTResolver, SPTSessionService, SPTSettingsFeature, SPTURIDispatchService, SPTUserBehaviourInstrumentationService;

@interface SPTLocalFilesServiceImplementation : NSObject <SPTService>
{
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTNetworkService> _networkService;
    id <SPTSettingsFeature> _settingsFeature;
    id <CosmosFeature> _cosmosService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTURIDispatchService> _dispatchService;
    id <SPTUserBehaviourInstrumentationService> _ubiService;
    SPTLocalFilesImportManager *_localFilesImportManager;
    id <SPTResolver> _cosmosRouter;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTResolver> cosmosRouter; // @synthesize cosmosRouter=_cosmosRouter;
@property(retain, nonatomic) SPTLocalFilesImportManager *localFilesImportManager; // @synthesize localFilesImportManager=_localFilesImportManager;
@property(nonatomic) __weak id <SPTUserBehaviourInstrumentationService> ubiService; // @synthesize ubiService=_ubiService;
@property(readonly, nonatomic) __weak id <SPTURIDispatchService> dispatchService; // @synthesize dispatchService=_dispatchService;
@property(readonly, nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(readonly, nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
@property(readonly, nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(readonly, nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(readonly, nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(readonly, nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(readonly, nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
- (void).cxx_destruct;
- (id)provideResolver;
- (id)provideLocalSettings;
- (id)provideImportMusicViewControllerWithURL:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

