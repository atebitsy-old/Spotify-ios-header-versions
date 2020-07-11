//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearch2ContextProvider-Protocol.h"

@class NSString, NSURL, SPTDataLoaderFactory, SPTNetworkConnectivityController;
@protocol SPTAgeVerificationProvider, SPTCollectionPlatformDataLoader, SPTExplicitContentAccessManager, SPTHubsRendererFactory, SPTHugsFactory, SPTOfflineManager, SPTPlayer, SPTSearch2ContentOperationsFactory, SPTSearch2DateProviding, SPTSearch2EmptyStatePropertiesProvider, SPTSearch2URLProviding, SPTSearch2UserTierProviding, SPTSearchOfflineEpisodeDataLoader, SPTSearchOfflinePlaylistDataLoader, SPTSearchPlatformTestManager, SPTSearchRecentsDataSource, SPTSearchUBILocationSerializer;

@interface SPTSearch2ContextProviderImplementation : NSObject <SPTSearch2ContextProvider>
{
    _Bool _offlineSearchEnabled;
    _Bool _playRecentTracksEnabled;
    id <SPTSearch2URLProviding> _urlProvider;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    SPTDataLoaderFactory *_dataLoaderFactory;
    unsigned long long _entityVersion;
    SPTNetworkConnectivityController *_connectivityController;
    id <SPTSearch2ContentOperationsFactory> _postProcessContentOperationsFactory;
    id <SPTSearch2EmptyStatePropertiesProvider> _emptyStatePropertiesProvider;
    id <SPTPlayer> _player;
    id <SPTSearchRecentsDataSource> _recentsDataSource;
    id <SPTOfflineManager> _offlineManager;
    id <SPTSearchOfflinePlaylistDataLoader> _offlinePlaylistDataLoader;
    id <SPTCollectionPlatformDataLoader> _collectionDataLoader;
    id <SPTSearchOfflineEpisodeDataLoader> _episodeDataLoader;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTAgeVerificationProvider> _ageVerificationProvider;
    NSString *_recentsCommandName;
    id <SPTSearchPlatformTestManager> _searchTestManager;
    id <SPTSearch2DateProviding> _dateProvider;
    id <SPTSearch2UserTierProviding> _userTierProvider;
    id <SPTSearchUBILocationSerializer> _ubiLocationSerializer;
    NSString *_featureID;
    NSURL *_pageURI;
    NSString *_referrerIdentifier;
}

@property(readonly, copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(readonly, copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, copy, nonatomic) NSString *featureID; // @synthesize featureID=_featureID;
@property(readonly, nonatomic) id <SPTSearchUBILocationSerializer> ubiLocationSerializer; // @synthesize ubiLocationSerializer=_ubiLocationSerializer;
@property(readonly, nonatomic) id <SPTSearch2UserTierProviding> userTierProvider; // @synthesize userTierProvider=_userTierProvider;
@property(readonly, nonatomic) id <SPTSearch2DateProviding> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) id <SPTSearchPlatformTestManager> searchTestManager; // @synthesize searchTestManager=_searchTestManager;
@property(readonly, nonatomic) _Bool playRecentTracksEnabled; // @synthesize playRecentTracksEnabled=_playRecentTracksEnabled;
@property(readonly, nonatomic) _Bool offlineSearchEnabled; // @synthesize offlineSearchEnabled=_offlineSearchEnabled;
@property(readonly, copy, nonatomic) NSString *recentsCommandName; // @synthesize recentsCommandName=_recentsCommandName;
@property(readonly, nonatomic) id <SPTAgeVerificationProvider> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTSearchOfflineEpisodeDataLoader> episodeDataLoader; // @synthesize episodeDataLoader=_episodeDataLoader;
@property(readonly, nonatomic) id <SPTCollectionPlatformDataLoader> collectionDataLoader; // @synthesize collectionDataLoader=_collectionDataLoader;
@property(readonly, nonatomic) id <SPTSearchOfflinePlaylistDataLoader> offlinePlaylistDataLoader; // @synthesize offlinePlaylistDataLoader=_offlinePlaylistDataLoader;
@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(readonly, nonatomic) id <SPTSearchRecentsDataSource> recentsDataSource; // @synthesize recentsDataSource=_recentsDataSource;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTSearch2EmptyStatePropertiesProvider> emptyStatePropertiesProvider; // @synthesize emptyStatePropertiesProvider=_emptyStatePropertiesProvider;
@property(readonly, nonatomic) id <SPTSearch2ContentOperationsFactory> postProcessContentOperationsFactory; // @synthesize postProcessContentOperationsFactory=_postProcessContentOperationsFactory;
@property(readonly, nonatomic) SPTNetworkConnectivityController *connectivityController; // @synthesize connectivityController=_connectivityController;
@property(readonly, nonatomic) unsigned long long entityVersion; // @synthesize entityVersion=_entityVersion;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) id <SPTSearch2URLProviding> urlProvider; // @synthesize urlProvider=_urlProvider;
- (void).cxx_destruct;
- (id)makeProtobufResponseParserWithQuery:(id)arg1 isDrillDown:(_Bool)arg2;
- (id)makeAssistedCurationHubsResponseParser;
- (id)makePostProcessContentOperations;
- (id)makeHUBS2MigrationContentOperation;
- (id)makeConnectivityMonitor;
- (id)makeViewModelBuilderFactory;
- (id)makeOfflineFetcherForQuery:(id)arg1;
- (id)assistedCurationPatcher;
- (id)makeOnlineFetcherForQuery:(id)arg1;
- (id)makeOfflineResultsContextForQuery:(id)arg1;
- (id)makeOnlineResultsContextForQuery:(id)arg1;
- (id)makeEmptyStateContext;
- (id)makeResultsContextForQuery:(id)arg1;
- (id)provideContextForQuery:(id)arg1;
- (id)initWithURLProvider:(id)arg1 hubsRendererFactory:(id)arg2 hugsFactory:(id)arg3 dataLoaderFactory:(id)arg4 connectivityController:(id)arg5 entityVersion:(unsigned long long)arg6 postProcessContentOperationsFactory:(id)arg7 emptyStatePropertiesProvider:(id)arg8 recentsDataSource:(id)arg9 player:(id)arg10 offlineManager:(id)arg11 offlinePlaylistDataLoader:(id)arg12 collectionDataLoader:(id)arg13 episodeDataLoader:(id)arg14 explicitContentAccessManager:(id)arg15 ageVerificationProvider:(id)arg16 recentsCommandName:(id)arg17 offlineSearchEnabled:(_Bool)arg18 playRecentTracksEnabled:(_Bool)arg19 searchTestManager:(id)arg20 dateProvider:(id)arg21 userTierProvider:(id)arg22 ubiLocationSerializer:(id)arg23 featureID:(id)arg24 pageURI:(id)arg25 referrerIdentifier:(id)arg26;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

