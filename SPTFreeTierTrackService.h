//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTUIPageService.h"

@class SPTFreeTierTrackHubManager;
@protocol SPContextMenuFeature, SPTCollectionPlatformService, SPTEntitySeeAllSongsService, SPTFreeTierService, SPTFreeTierUIService, SPTGLUEService, SPTHubFrameworkService, SPTNetworkService, SPTOnDemandService, SPTPlayerFeature, SPTURIDispatchService, SPTUserBehaviourInstrumentationService, SPTVisualRefreshIntegrationService;

@interface SPTFreeTierTrackService : SPTUIPageService
{
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTGLUEService> _glueService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTFreeTierUIService> _freeTierUIService;
    id <SPTEntitySeeAllSongsService> _entitySeeAllSongsService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTNetworkService> _networkService;
    id <SPTPlayerFeature> _playerService;
    id <SPTUserBehaviourInstrumentationService> _ubiService;
    SPTFreeTierTrackHubManager *_hubManager;
    id <SPTVisualRefreshIntegrationService> _visualRefreshIntegrationService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTVisualRefreshIntegrationService> visualRefreshIntegrationService; // @synthesize visualRefreshIntegrationService=_visualRefreshIntegrationService;
@property(retain, nonatomic) SPTFreeTierTrackHubManager *hubManager; // @synthesize hubManager=_hubManager;
@property(nonatomic) __weak id <SPTUserBehaviourInstrumentationService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTEntitySeeAllSongsService> entitySeeAllSongsService; // @synthesize entitySeeAllSongsService=_entitySeeAllSongsService;
@property(nonatomic) __weak id <SPTFreeTierUIService> freeTierUIService; // @synthesize freeTierUIService=_freeTierUIService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
- (void).cxx_destruct;
- (void)configureMasterFeatureFlag:(id)arg1;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (_Bool)claimsURI:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

@end

