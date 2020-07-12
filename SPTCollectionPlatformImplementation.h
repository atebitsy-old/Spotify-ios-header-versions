//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatform-Protocol.h"

@class NSHashTable, NSString;
@protocol SPTAlertInterface, SPTCollectionPlatformConfiguration, SPTCollectionPlatformDataLoader, SPTCollectionPlatformLogger, SPTCollectionPlatformStateProvider, SPTCollectionPlatformTestManager, SPTCosmosDictionaryDataLoader, SPTCosmosDictionaryDataLoaderRequestToken, SPTMetaViewController;

@interface SPTCollectionPlatformImplementation : NSObject <SPTCollectionPlatform>
{
    id <SPTCosmosDictionaryDataLoader> _cosmosDataLoader;
    id <SPTCollectionPlatformLogger> _collectionLogger;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTCosmosDictionaryDataLoaderRequestToken> _collectionChangesSubscriptionToken;
    NSHashTable *_observers;
    id <SPTCollectionPlatformDataLoader> _dataLoader;
    id <SPTCollectionPlatformStateProvider> _stateProvider;
    id <SPTMetaViewController> _metaViewController;
    id <SPTAlertInterface> _alertInterface;
    CDUnknownBlockType _timeGetter;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType timeGetter; // @synthesize timeGetter=_timeGetter;
@property(retain, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(retain, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) id <SPTCollectionPlatformStateProvider> stateProvider; // @synthesize stateProvider=_stateProvider;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <SPTCosmosDictionaryDataLoaderRequestToken> collectionChangesSubscriptionToken; // @synthesize collectionChangesSubscriptionToken=_collectionChangesSubscriptionToken;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) id <SPTCollectionPlatformLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) id <SPTCosmosDictionaryDataLoader> cosmosDataLoader; // @synthesize cosmosDataLoader=_cosmosDataLoader;
- (id)setUpItemDictionaryForURLs:(id)arg1 source:(id)arg2 fromContext:(id)arg3;
- (id)setUpItemDictionaryForURL:(id)arg1 source:(id)arg2 fromContext:(id)arg3;
- (void)presentCollectionFullAlert;
- (void)offlineStateForEntityURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)offlineURLForEntityURL:(id)arg1;
- (void)removeOfflineURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addOfflineURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)loggingParams;
- (void)playEntityURL:(id)arg1 playPolicy:(id)arg2 replyOnMainThread:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyObservers;
- (void)subscribeToCollectionChanges;
- (void)removeURLs:(id)arg1 bySource:(id)arg2 fromContext:(id)arg3 showUIConfirmation:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeURL:(id)arg1 bySource:(id)arg2 fromContext:(id)arg3 showUIConfirmation:(_Bool)arg4 completion:(CDUnknownBlockType)arg5 entityName:(id)arg6;
- (void)removeURL:(id)arg1 bySource:(id)arg2 fromContext:(id)arg3 showUIConfirmation:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeBanURL:(id)arg1 bySource:(id)arg2 fromContext:(id)arg3 showUIConfirmation:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)banURL:(id)arg1 bySource:(id)arg2 fromContext:(id)arg3 showUIConfirmation:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addURLs:(id)arg1 bySource:(id)arg2 fromContext:(id)arg3 showUIConfirmation:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addURL:(id)arg1 bySource:(id)arg2 fromContext:(id)arg3 showUIConfirmation:(_Bool)arg4 completion:(CDUnknownBlockType)arg5 entityName:(id)arg6;
- (void)addURL:(id)arg1 bySource:(id)arg2 fromContext:(id)arg3 showUIConfirmation:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)canAddTrackWithURL:(id)arg1;
- (void)dealloc;
- (id)initWithCosmosDataLoader:(id)arg1 collectionLogger:(id)arg2 collectionStateProvider:(id)arg3 collectionTestManager:(id)arg4 metaViewController:(id)arg5 alertInterface:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

