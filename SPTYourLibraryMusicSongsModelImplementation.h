//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"
#import "SPTYourLibraryMusicFilterSortManagerDelegate-Protocol.h"
#import "SPTYourLibraryMusicRangeDataSourceDelegate-Protocol.h"
#import "SPTYourLibraryMusicSongsDataLoaderDelegate-Protocol.h"
#import "SPTYourLibraryMusicSongsModel-Protocol.h"

@class NSArray, NSMutableArray, NSSet, NSString, SPTYourLibraryMusicFilterSortManager;
@protocol SPTClientSettings, SPTCollectionPlatform, SPTCollectionPlatformDataLoaderRequestToken, SPTExplicitContentAccessManager, SPTFreeTierRecommendationsTracksDataLoader, SPTProductState, SPTSortingFilteringSortRule, SPTYourLibraryMusicRangeDataSource, SPTYourLibraryMusicSkippedRecommendedTracks, SPTYourLibraryMusicSongsModelDelegate, SPTYourLibraryMusicTestManager, _TtP22AgeVerificationFeature26SPTAgeVerificationProvider_;

@interface SPTYourLibraryMusicSongsModelImplementation : NSObject <SPTExplicitContentEnabledStateObserver, SPTProductStateObserver, SPTYourLibraryMusicFilterSortManagerDelegate, SPTYourLibraryMusicSongsModel, SPTYourLibraryMusicRangeDataSourceDelegate, SPTYourLibraryMusicSongsDataLoaderDelegate>
{
    _Bool _firstLoadPerformed;
    _Bool _loaded;
    id <SPTYourLibraryMusicSongsModelDelegate> delegate;
    NSString *_textFilter;
    NSArray *_activeFilters;
    id <SPTSortingFilteringSortRule> _selectedSortRule;
    NSArray *_availableSortRules;
    id <SPTYourLibraryMusicRangeDataSource> _rangeDataSource;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTFreeTierRecommendationsTracksDataLoader> _recommendationsTracksDataLoader;
    id <SPTClientSettings> _clientSettings;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> _ageVerificationProvider;
    id <SPTProductState> _productState;
    SPTYourLibraryMusicFilterSortManager *_filterSortManager;
    id <SPTYourLibraryMusicTestManager> _testManager;
    NSMutableArray *_recommendedTracks;
    id <SPTCollectionPlatformDataLoaderRequestToken> _bannedTrackSubscription;
    NSSet *_bannedTracks;
    unsigned long long _offlineAvailability;
    NSString *_currentUsername;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionStateRequestToken;
    id <SPTYourLibraryMusicSkippedRecommendedTracks> _skippedRecommendedTracks;
    NSArray *_availableFilters;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *availableFilters; // @synthesize availableFilters=_availableFilters;
@property(retain, nonatomic) id <SPTYourLibraryMusicSkippedRecommendedTracks> skippedRecommendedTracks; // @synthesize skippedRecommendedTracks=_skippedRecommendedTracks;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionStateRequestToken; // @synthesize collectionStateRequestToken=_collectionStateRequestToken;
@property(copy, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
@property(nonatomic) unsigned long long offlineAvailability; // @synthesize offlineAvailability=_offlineAvailability;
@property(copy, nonatomic) NSSet *bannedTracks; // @synthesize bannedTracks=_bannedTracks;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> bannedTrackSubscription; // @synthesize bannedTrackSubscription=_bannedTrackSubscription;
@property(retain, nonatomic) NSMutableArray *recommendedTracks; // @synthesize recommendedTracks=_recommendedTracks;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic, getter=isFirstLoadPerformed) _Bool firstLoadPerformed; // @synthesize firstLoadPerformed=_firstLoadPerformed;
@property(readonly, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTYourLibraryMusicFilterSortManager *filterSortManager; // @synthesize filterSortManager=_filterSortManager;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTClientSettings> clientSettings; // @synthesize clientSettings=_clientSettings;
@property(retain, nonatomic) id <SPTFreeTierRecommendationsTracksDataLoader> recommendationsTracksDataLoader; // @synthesize recommendationsTracksDataLoader=_recommendationsTracksDataLoader;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) id <SPTYourLibraryMusicRangeDataSource> rangeDataSource; // @synthesize rangeDataSource=_rangeDataSource;
@property(readonly, copy, nonatomic) NSArray *availableSortRules; // @synthesize availableSortRules=_availableSortRules;
@property(copy, nonatomic) id <SPTSortingFilteringSortRule> selectedSortRule; // @synthesize selectedSortRule=_selectedSortRule;
@property(copy, nonatomic) NSArray *activeFilters; // @synthesize activeFilters=_activeFilters;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
@property(nonatomic) __weak id <SPTYourLibraryMusicSongsModelDelegate> delegate; // @synthesize delegate;
- (void)filterSortManager:(id)arg1 error:(id)arg2;
- (void)filterSortManager:(id)arg1 updatedFilterRules:(id)arg2;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)songsDataLoader:(id)arg1 didUpdateOfflineAvailability:(unsigned long long)arg2;
- (void)rangeDataSource:(id)arg1 error:(id)arg2;
- (void)rangeDataSourceUpdated:(id)arg1 itemsCountChanged:(_Bool)arg2;
- (_Bool)filterDuplicatedRecommendations;
- (_Bool)filterBannedRecommentations;
- (void)subscribeBannedTracks;
- (id)collectionOptions;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered;
- (void)removeFilterAtIndex:(long long)arg1;
- (void)resetFilters;
- (void)playWithPlayOrigin:(id)arg1 options:(id)arg2 fallbackPlayer:(id)arg3;
- (void)playWithRecommendationsUsingPlayer:(id)arg1 options:(id)arg2;
- (void)removeObserverForTrackStateWithTrackURL:(id)arg1;
- (void)addObserverForTrackStateWithTrackURL:(id)arg1 inCollection:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)changeTrackURL:(id)arg1 likeState:(_Bool)arg2;
- (void)changeTrackURL:(id)arg1 banState:(_Bool)arg2;
- (void)setAvailableOffline:(_Bool)arg1;
- (void)playTrackEntity:(id)arg1 playOrigin:(id)arg2 fallbackPlayer:(id)arg3;
- (_Bool)isPlaybackPreventedByRestrictionsForSongEntity:(id)arg1 viewURI:(id)arg2;
- (void)shufflePlayWithPlayOrigin:(id)arg1 fallbackPlayer:(id)arg2;
- (void)loadRecommendationsIfNeeded;
- (void)notifyModelUpdateItemsCountChanged:(_Bool)arg1;
- (void)requestRecommendations;
@property(readonly, nonatomic, getter=isOfflineSyncAvailable) _Bool offlineSyncAvailable;
@property(readonly, nonatomic, getter=isPreviewsAvailable) _Bool previewsAvailable;
- (void)reloadData;
- (void)loadModel;
- (void)deleteRecommendedItemAtIndex:(unsigned long long)arg1;
- (void)addSkippedRecommendedTrackURL:(id)arg1;
- (id)recommendedItemAtIndex:(unsigned long long)arg1;
- (id)itemAtIndex:(unsigned long long)arg1 inSection:(unsigned long long)arg2;
- (unsigned long long)globalIndexFromIndex:(unsigned long long)arg1 inSection:(unsigned long long)arg2;
- (unsigned long long)numberItemsInSection:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberRecommendedItems;
@property(readonly, nonatomic) unsigned long long numberSections;
@property(readonly, nonatomic) unsigned long long numberItems;
- (void)dealloc;
- (id)initWithCollectionPlatform:(id)arg1 recommendedTracksDataLoader:(id)arg2 clientSettings:(id)arg3 explicitContentAccessManager:(id)arg4 ageVerificationProvider:(id)arg5 productState:(id)arg6 currentUsername:(id)arg7 filterSortManager:(id)arg8 testManager:(id)arg9 skippedRecommendedTracks:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

