//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTFreeTierPlaylistModel-Protocol.h"
#import "SPTFreeTierPlaylistSortingFilteringDelegate-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"

@class NSPointerArray, NSString, NSURL, SPTFreeTierPlaylistFeatureProperties, SPTFreeTierPlaylistModelEntityImplementation;
@protocol SPTClientSettings, SPTCollectionPlatform, SPTCollectionPlatformConfiguration, SPTExplicitContentAccessManager, SPTFreeTierPlaylistSortingFiltering, SPTFreeTierPlaylistTestManager, SPTOnDemandSet, SPTPlaylistModel, SPTPlaylistPlatformDataLoaderRequestToken, SPTPlaylistPlatformPlaylistDataLoader, SPTProductState, _TtP22AgeVerificationFeature26SPTAgeVerificationProvider_;

@interface SPTFreeTierPlaylistModelImplementation : NSObject <SPTProductStateObserver, SPTExplicitContentEnabledStateObserver, SPTFreeTierPlaylistModel, SPTFreeTierPlaylistSortingFilteringDelegate>
{
    _Bool _formatList;
    _Bool _excludeAllEpisodesOverride;
    _Bool _loadError;
    _Bool _hasMore;
    NSURL *_playlistURL;
    id <SPTFreeTierPlaylistSortingFiltering> _sortingFiltering;
    NSPointerArray *_observers;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTPlaylistModel> _playlistModel;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTOnDemandSet> _onDemandSet;
    id <SPTClientSettings> _clientSettings;
    id <SPTProductState> _productState;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> _ageVerificationProvider;
    id <SPTFreeTierPlaylistTestManager> _testManager;
    SPTFreeTierPlaylistFeatureProperties *_featureProperties;
    NSString *_formatListType;
    CDUnknownBlockType _navigationIdFactory;
    SPTFreeTierPlaylistModelEntityImplementation *_playlistEntity;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _metadataSubscription;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _followCountSubscription;
    unsigned long long _onDemandType;
    struct _NSRange _currentWindow;
    struct _NSRange _loadedWindow;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange loadedWindow; // @synthesize loadedWindow=_loadedWindow;
@property(nonatomic) struct _NSRange currentWindow; // @synthesize currentWindow=_currentWindow;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool loadError; // @synthesize loadError=_loadError;
@property(nonatomic) unsigned long long onDemandType; // @synthesize onDemandType=_onDemandType;
@property(retain, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> followCountSubscription; // @synthesize followCountSubscription=_followCountSubscription;
@property(retain, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> metadataSubscription; // @synthesize metadataSubscription=_metadataSubscription;
@property(retain, nonatomic) SPTFreeTierPlaylistModelEntityImplementation *playlistEntity; // @synthesize playlistEntity=_playlistEntity;
@property(readonly, copy, nonatomic) CDUnknownBlockType navigationIdFactory; // @synthesize navigationIdFactory=_navigationIdFactory;
@property(copy, nonatomic) NSString *formatListType; // @synthesize formatListType=_formatListType;
@property(retain, nonatomic) SPTFreeTierPlaylistFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(retain, nonatomic) id <SPTFreeTierPlaylistTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(retain, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTClientSettings> clientSettings; // @synthesize clientSettings=_clientSettings;
@property(retain, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(retain, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(nonatomic) _Bool excludeAllEpisodesOverride; // @synthesize excludeAllEpisodesOverride=_excludeAllEpisodesOverride;
@property(readonly, nonatomic, getter=isFormatList) _Bool formatList; // @synthesize formatList=_formatList;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistSortingFiltering> sortingFiltering; // @synthesize sortingFiltering=_sortingFiltering;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void)addPlaylistModelObserver:(id)arg1;
@property(readonly, copy, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)handleError:(id)arg1 withContext:(id)arg2;
- (void)fetchPlayContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)playWithWithPlayOptions:(id)arg1 platformPlayOptions:(id)arg2 interactionId:(id)arg3;
- (id)playOptionsWithShuffleOverride:(id)arg1 skipToTrack:(id)arg2;
- (id)playlistPlatformPlayOptionsForShufflePlay:(_Bool)arg1 playOrigin:(id)arg2;
- (void)addTrackURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeTracks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateModelWithPlaylistSortingFiltering:(id)arg1;
- (void)updateMetadataWithResponse:(id)arg1 tracksResponse:(id)arg2 recommendations:(id)arg3;
- (void)loadMetadataAndTracks;
- (_Bool)shouldIncludeEpisodes;
- (_Bool)showOnlyPlayableTracks;
- (void)fillCommonOptions:(id)arg1;
- (void)loadFollowCount;
- (void)playlistContainsTrackURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)toggleLikedStateOnTrackEntity:(id)arg1;
- (void)toggleBannedStateOnTrackEntity:(id)arg1;
- (_Bool)isPlaybackRestrictedForTrackEntity:(id)arg1 shouldDisplayExplainingAlert:(_Bool)arg2 coverArtURL:(id)arg3;
@property(readonly, nonatomic, getter=isOfflineSyncPermissionEnabled) _Bool offlineSyncPermissionEnabled;
- (void)changeOffline:(_Bool)arg1;
- (void)loadMore;
- (void)deletePlaylist;
- (_Bool)showUnfollowCollectionConfirmation;
- (_Bool)showFollowCollectionConfirmation;
- (_Bool)showCollectionConfirmation;
- (void)changeFollowState:(_Bool)arg1;
- (void)playWithPlayOptions:(id)arg1 andPlayOrigin:(id)arg2 interactionId:(id)arg3;
- (void)playTrack:(id)arg1 andPlayOrigin:(id)arg2 shuffleOverride:(id)arg3 interactionId:(id)arg4;
- (void)playTrackEntity:(id)arg1 andPlayOrigin:(id)arg2 shuffleOverride:(id)arg3 interactionId:(id)arg4;
- (void)playTrackURL:(id)arg1 andPlayOrigin:(id)arg2 interactionId:(id)arg3;
- (void)playWithPlayOrigin:(id)arg1 interactionId:(id)arg2;
- (void)shufflePlayWithPlayOrigin:(id)arg1 interactionId:(id)arg2;
- (void)prepareLoad;
- (unsigned long long)calculateOnDemandTypeWithMetadata:(id)arg1;
- (void)load;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (void)dealloc;
- (id)initWithPlaylistURL:(id)arg1 playlistDataLoader:(id)arg2 playlistModel:(id)arg3 collectionPlatform:(id)arg4 collectionConfiguration:(id)arg5 sortingFiltering:(id)arg6 onDemandSet:(id)arg7 clientSettings:(id)arg8 productState:(id)arg9 explicitContentAccessManager:(id)arg10 ageVerificationProvider:(id)arg11 testManager:(id)arg12 featureProperties:(id)arg13 formatListType:(id)arg14 navigationIdFactory:(CDUnknownBlockType)arg15;
@property(readonly, nonatomic, getter=isCappedOverridenByXCUITest) _Bool cappedOverridenByXCUITest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

