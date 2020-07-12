//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConcertsService-Protocol.h"

@class NSSet, NSString, SPTAllocationContext, SPTConcertsDateFormatter, SPTConcertsLocalDataManager;
@protocol SPContextMenuFeature, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTGLUEService, SPTHubFrameworkService, SPTLocalSettings, SPTNavigationFeature, SPTNetworkService, SPTNowPlayingPlatformService, SPTNowPlayingScrollDataSource, SPTPerformanceMetricsService, SPTPlayer, SPTPlayerFeature, SPTRemoteConfigurationResolver, SPTRemoteConfigurationService, SPTSessionService, SPTUBIService, SPTURIDispatchService;

@interface SPTConcertsServiceImplementation : NSObject <SPTConcertsService>
{
    SPTConcertsDateFormatter *_dateFormatterProvider;
    id <SPTSessionService> _clientSessionService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkFeature;
    id <SPTGLUEService> _glueService;
    id <SPTContainerService> _containerService;
    id <SPTHubFrameworkService> _hubsRendererService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTNavigationFeature> _navigationService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTUBIService> _ubiService;
    id <SPTLocalSettings> _localSettings;
    SPTConcertsLocalDataManager *_localDataManager;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    id <SPTPlayer> _player;
    NSSet *_pageRegistrations;
    id <SPTNowPlayingScrollDataSource> _dataSource;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTNowPlayingScrollDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSSet *pageRegistrations; // @synthesize pageRegistrations=_pageRegistrations;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(retain, nonatomic) SPTConcertsLocalDataManager *localDataManager; // @synthesize localDataManager=_localDataManager;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubsRendererService; // @synthesize hubsRendererService=_hubsRendererService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (id)providePlayer;
- (id)provideArtistConcertsPageForURI:(id)arg1 context:(id)arg2;
- (void)registerAllArtistConcertsPage;
- (id)provideConcertsConcertsViewControllerWithEventEntityModel:(id)arg1;
- (id)provideConcertEntityPageForURL:(id)arg1 context:(id)arg2;
- (id)createEntityResolver;
- (id)provideConcertsLocationSearchVC;
- (id)provideConcertsVCForURI:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) SPTConcertsDateFormatter *dateFormatterProvider; // @synthesize dateFormatterProvider=_dateFormatterProvider;
- (void)unregisterPages;
- (void)registerPages;
- (void)unloadLocalDataManager;
- (void)loadLocalDataManager;
- (void)loadLocalSettings;
- (id)concertsViewController;
- (void)registerNowPlayingScrollPivotsProvider;
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

