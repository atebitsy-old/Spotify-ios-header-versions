//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTDataLoaderFactory, SPTPersistentCache;
@protocol HUBImageLoaderFactory, SPTAgeVerificationProvider, SPTCollectionPlatformStateProvider, SPTCollectionPlatformTestManager, SPTExplicitContentAccessManager, SPTFreeTierAlbumTestManager, SPTHubContentOperationFactory, SPTNetworkConnectivityController, SPTOnDemandService, SPTOnDemandTrialService, SPTPlayerFeature, SPTProductState, SPTSessionService;

@interface SPTFreeTierAlbumContentOperationFactory : NSObject
{
    id <SPTHubContentOperationFactory> _hubContentOperationFactory;
    id <SPTPlayerFeature> _playerService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTOnDemandTrialService> _onDemandTrialService;
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    id <SPTSessionService> _clientSessionService;
    id <HUBImageLoaderFactory> _imageLoaderFactory;
    id <SPTProductState> _productState;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTAgeVerificationProvider> _ageVerificationProvider;
    id <SPTCollectionPlatformStateProvider> _collectionPlaformStateProvider;
    id <SPTCollectionPlatformTestManager> _collectionPlatformTestManager;
    SPTPersistentCache *_persistentCache;
    id <SPTFreeTierAlbumTestManager> _testManager;
}

@property(readonly, nonatomic) id <SPTFreeTierAlbumTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionPlatformTestManager; // @synthesize collectionPlatformTestManager=_collectionPlatformTestManager;
@property(readonly, nonatomic) id <SPTCollectionPlatformStateProvider> collectionPlaformStateProvider; // @synthesize collectionPlaformStateProvider=_collectionPlaformStateProvider;
@property(readonly, nonatomic) __weak id <SPTAgeVerificationProvider> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(readonly, nonatomic) __weak id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <HUBImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(readonly, nonatomic) __weak id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) __weak SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) __weak id <SPTOnDemandTrialService> onDemandTrialService; // @synthesize onDemandTrialService=_onDemandTrialService;
@property(readonly, nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(readonly, nonatomic) id <SPTHubContentOperationFactory> hubContentOperationFactory; // @synthesize hubContentOperationFactory=_hubContentOperationFactory;
- (void).cxx_destruct;
- (id)createContentOperationsForViewURI:(id)arg1 referrerIdentifier:(id)arg2 offlineModel:(id)arg3 reloadPageSignal:(id)arg4;
- (id)initWithHubContentOperationFactory:(id)arg1 playerService:(id)arg2 onDemandService:(id)arg3 onDemandTrialService:(id)arg4 clientSessionService:(id)arg5 dataLoaderFactory:(id)arg6 networkConnectivityController:(id)arg7 imageLoaderFactory:(id)arg8 productState:(id)arg9 explicitContentAccessManager:(id)arg10 ageVerificationProvider:(id)arg11 collectionPlaformStateProvider:(id)arg12 collectionPlatformTestManager:(id)arg13 persistantCache:(id)arg14 testManager:(id)arg15;

@end

