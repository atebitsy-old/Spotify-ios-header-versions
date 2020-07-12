//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistService-Protocol.h"

@class NSString, SPTAllocationContext, SPTFreeTierPlaylistFeatureProperties;
@protocol SPTAddToSpotifyPlaylistExperimentService, SPTCollectionPlatformService, SPTExplicitContentService, SPTFreeTierPlaylistTestManager, SPTOnDemandService, SPTPlaylistPlatformService, SPTRemoteConfigurationService, SPTSessionService, SPTSettingsFeature, SPTSortingFilteringService, SPTUBIService, _TtP22AgeVerificationFeature25SPTAgeVerificationService_;

@interface SPTFreeTierPlaylistServiceImplementation : NSObject <SPTFreeTierPlaylistService>
{
    id <SPTAddToSpotifyPlaylistExperimentService> _addToSpotifyPlaylistExperimentService;
    id <SPTSessionService> _clientSessionService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTExplicitContentService> _explicitContentService;
    id <_TtP22AgeVerificationFeature25SPTAgeVerificationService_> _ageVerificationService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTSortingFilteringService> _sortingFilteringService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTFreeTierPlaylistTestManager> _testManager;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    SPTFreeTierPlaylistFeatureProperties *_featureProperties;
    id <SPTUBIService> _ubiService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(retain, nonatomic) SPTFreeTierPlaylistFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(retain, nonatomic) id <SPTFreeTierPlaylistTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTSortingFilteringService> sortingFilteringService; // @synthesize sortingFilteringService=_sortingFilteringService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <_TtP22AgeVerificationFeature25SPTAgeVerificationService_> ageVerificationService; // @synthesize ageVerificationService=_ageVerificationService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTAddToSpotifyPlaylistExperimentService> addToSpotifyPlaylistExperimentService; // @synthesize addToSpotifyPlaylistExperimentService=_addToSpotifyPlaylistExperimentService;
- (id)provideSortingFilteringForPlaylistURL:(id)arg1;
- (id)provideTestManager;
- (id)providePlaylistModelForURL:(id)arg1 formatListType:(id)arg2;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

