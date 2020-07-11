//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTPodcastEpisodeViewModelSectionDelegate-Protocol.h"
#import "SPTPodcastFollowSectionViewModelDelegate-Protocol.h"
#import "SPTPodcastPlayerDelegate-Protocol.h"
#import "SPTPodcastTopicCategoryViewModelDelegate-Protocol.h"
#import "SPTPodcastTrailerSectionViewModelDelegate-Protocol.h"

@class NSArray, NSPredicate, NSSortDescriptor, NSString, NSURL, SPTPodcastEpisodeSectionViewModel, SPTPodcastFeatureProperties, SPTPodcastHeaderViewModel, SPTPodcastLogger, SPTPodcastTopicCategoryViewModel, SPTPodcastTrailerSectionViewModel, SPTPodcastViewSectionConfiguration;
@protocol SPTCollectionPlatform, SPTExplicitContentAccessManager, SPTPodcast, SPTPodcastDataLoader, SPTPodcastDataLoaderRequestToken, SPTPodcastFactory, SPTPodcastPlayer, SPTPodcastUITestManager, SPTPodcastViewModelDelegate2;

@interface SPTPodcastViewModel2 : NSObject <SPTPodcastEpisodeViewModelSectionDelegate, SPTPodcastTopicCategoryViewModelDelegate, SPTPodcastFollowSectionViewModelDelegate, SPTExplicitContentEnabledStateObserver, SPTPodcastPlayerDelegate, SPTPodcastTrailerSectionViewModelDelegate>
{
    _Bool _isLoading;
    _Bool _isLoaded;
    _Bool _topicsEmpty;
    _Bool _topicsDidLoad;
    _Bool _initialLoadComplete;
    _Bool _trailerWasShown;
    id <SPTPodcastViewModelDelegate2> _delegate;
    NSURL *_URL;
    id <SPTPodcast> _podcast;
    SPTPodcastHeaderViewModel *_headerViewModel;
    SPTPodcastViewSectionConfiguration *_configuration;
    id <SPTPodcastDataLoaderRequestToken> _podcastRequestToken;
    NSPredicate *_filterPredicate;
    NSSortDescriptor *_sortDescriptor;
    SPTPodcastTopicCategoryViewModel *_topicCategoryViewModel;
    id <SPTPodcastUITestManager> _uiTestManager;
    SPTPodcastFeatureProperties *_featureProperties;
    id <SPTPodcastFactory> _podcastFactory;
    id <SPTPodcastPlayer> _podcastPlayer;
    id <SPTPodcastDataLoader> _dataLoader;
    SPTPodcastLogger *_logger;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    SPTPodcastEpisodeSectionViewModel *_episodeSectionViewModel;
    SPTPodcastTrailerSectionViewModel *_trailerSectionViewModel;
}

@property(nonatomic) __weak SPTPodcastTrailerSectionViewModel *trailerSectionViewModel; // @synthesize trailerSectionViewModel=_trailerSectionViewModel;
@property(nonatomic) __weak SPTPodcastEpisodeSectionViewModel *episodeSectionViewModel; // @synthesize episodeSectionViewModel=_episodeSectionViewModel;
@property(nonatomic) _Bool trailerWasShown; // @synthesize trailerWasShown=_trailerWasShown;
@property(retain, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(nonatomic, getter=isInitialLoadComplete) _Bool initialLoadComplete; // @synthesize initialLoadComplete=_initialLoadComplete;
@property(nonatomic) _Bool topicsDidLoad; // @synthesize topicsDidLoad=_topicsDidLoad;
@property(retain, nonatomic) SPTPodcastLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPTPodcastPlayer> podcastPlayer; // @synthesize podcastPlayer=_podcastPlayer;
@property(retain, nonatomic) id <SPTPodcastFactory> podcastFactory; // @synthesize podcastFactory=_podcastFactory;
@property(retain, nonatomic) SPTPodcastFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(retain, nonatomic) id <SPTPodcastUITestManager> uiTestManager; // @synthesize uiTestManager=_uiTestManager;
@property(retain, nonatomic) SPTPodcastTopicCategoryViewModel *topicCategoryViewModel; // @synthesize topicCategoryViewModel=_topicCategoryViewModel;
@property(retain, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(retain, nonatomic) id <SPTPodcastDataLoaderRequestToken> podcastRequestToken; // @synthesize podcastRequestToken=_podcastRequestToken;
@property(readonly, nonatomic) SPTPodcastViewSectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic, getter=isTopicsEmpty) _Bool topicsEmpty; // @synthesize topicsEmpty=_topicsEmpty;
@property(readonly, copy, nonatomic) SPTPodcastHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(retain) id <SPTPodcast> podcast; // @synthesize podcast=_podcast;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTPodcastViewModelDelegate2> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)indexPathForEpisodeIndex:(long long)arg1;
- (id)indexForEpisodeURL:(id)arg1;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)didFinishLoadingTopicsViewModel:(id)arg1 withError:(id)arg2;
- (void)followSectionViewModelDidUpdatePlaybackState:(id)arg1;
- (void)followSectionViewModel:(id)arg1 didSelectContextMenuButton:(id)arg2;
- (void)followSectionViewModelDidUpdateFollowedState:(id)arg1;
- (void)viewModelPodcastDidUpdatePlayingEpisode:(id)arg1 atIndexPath:(id)arg2;
- (void)viewModel:(id)arg1 willPresentFilterContextViewController:(id)arg2 fromSender:(id)arg3;
- (void)sectionViewModelDidUpdateFilterSorting:(id)arg1;
- (void)trailerSectionViewModel:(id)arg1 didPressPlayTrailerEpisode:(id)arg2;
- (void)toggleFollowedState;
- (void)followedStateWasUpdated;
- (void)resetFilters;
- (void)reloadActiveEpisodeRow:(id)arg1;
- (_Bool)canPlayEpisode:(id)arg1;
- (void)updateTrailerSectionLayoutWithPlayer:(id)arg1;
- (_Bool)isPlayingTrailer:(id)arg1;
- (_Bool)isPlayingAnyEpisode;
- (void)unsubscribe;
- (void)updateSectionViewModelsWithPlayer:(id)arg1;
- (void)podcastPlayer:(id)arg1 didUpdateProgressForTrackURL:(id)arg2;
- (double)podcastPlayer:(id)arg1 updateProgressIntervalForTrackURL:(id)arg2;
- (void)podcastPlayerStateDidChange:(id)arg1;
- (void)podcastPlayer:(id)arg1 didChangePlayingTrackURL:(id)arg2;
- (id)deserializationQueue;
- (void)handleFirstLoadUpdates;
- (void)didReachEndOfContent;
- (void)viewDidDisappear;
- (void)logTrailerWasShownIfNecessaryForSection:(long long)arg1;
- (void)viewWillDisplayCellAtIndexPath:(id)arg1;
- (void)loadAndSubscribe;
- (id)allEpisodes;
- (id)sectionViewModelForIndexPath:(id)arg1;
- (id)episodeForIndexPath:(id)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (double)heightForHeaderInSection:(long long)arg1;
- (id)headerForSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)arg1;
- (void)obtainDelegation;
@property(readonly, copy, nonatomic) NSArray *viewSections;
- (id)initWithURL:(id)arg1 headerViewModel:(id)arg2 configuration:(id)arg3 topicCategoryViewModel:(id)arg4 dataLoader:(id)arg5 collectionPlatform:(id)arg6 uiTestManager:(id)arg7 explicitContentAccessManager:(id)arg8 podcastPlayer:(id)arg9 podcastLogger:(id)arg10 featureProperties:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

