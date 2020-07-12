//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTUIPageService.h"

@class SPTFreeTierArtistHubManager;
@protocol FollowFeature, SPContextMenuFeature, SPTArtistAboutService, SPTCollectionPlatformService, SPTEncoreIntegrationService, SPTEntitySeeAllSongsService, SPTExplicitContentService, SPTFreeTierUIService, SPTGLUEService, SPTHubFrameworkService, SPTInAppMessageService, SPTModerationService, SPTNavigationFeature, SPTNetworkService, SPTOnDemandService, SPTOnDemandTrialService, SPTPermissionsService, SPTPlayerFeature, SPTPodcastEpisodeFeaturedContentService, SPTRemoteConfigurationService, SPTSessionService, SPTShelfService, SPTVisualRefreshIntegrationService, _TtP22AgeVerificationFeature25SPTAgeVerificationService_;

@interface SPTFreeTierArtistService : SPTUIPageService
{
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTGLUEService> _glueService;
    id <SPTFreeTierUIService> _freeTierUIService;
    id <SPTEntitySeeAllSongsService> _entitySeeAllSongsService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <FollowFeature> _followService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTOnDemandTrialService> _onDemandTrialService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTPlayerFeature> _playerService;
    id <SPTNetworkService> _networkService;
    id <SPTArtistAboutService> _artistAboutService;
    id <SPTSessionService> _clientSessionService;
    id <SPTPermissionsService> _permissionService;
    id <SPTNavigationFeature> _navigationFeature;
    id <SPTShelfService> _shelfService;
    id <SPTVisualRefreshIntegrationService> _visualRefreshIntegrationService;
    id <SPTExplicitContentService> _explicitContentService;
    id <_TtP22AgeVerificationFeature25SPTAgeVerificationService_> _ageVerificationService;
    id <SPTModerationService> _moderationFeature;
    id <SPTPodcastEpisodeFeaturedContentService> _podcastFeaturedService;
    id <SPTEncoreIntegrationService> _encoreService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTInAppMessageService> _inAppMessageService;
    SPTFreeTierArtistHubManager *_hubManager;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTFreeTierArtistHubManager *hubManager; // @synthesize hubManager=_hubManager;
@property(nonatomic) __weak id <SPTInAppMessageService> inAppMessageService; // @synthesize inAppMessageService=_inAppMessageService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTEncoreIntegrationService> encoreService; // @synthesize encoreService=_encoreService;
@property(nonatomic) __weak id <SPTPodcastEpisodeFeaturedContentService> podcastFeaturedService; // @synthesize podcastFeaturedService=_podcastFeaturedService;
@property(nonatomic) __weak id <SPTModerationService> moderationFeature; // @synthesize moderationFeature=_moderationFeature;
@property(nonatomic) __weak id <_TtP22AgeVerificationFeature25SPTAgeVerificationService_> ageVerificationService; // @synthesize ageVerificationService=_ageVerificationService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTVisualRefreshIntegrationService> visualRefreshIntegrationService; // @synthesize visualRefreshIntegrationService=_visualRefreshIntegrationService;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationFeature; // @synthesize navigationFeature=_navigationFeature;
@property(nonatomic) __weak id <SPTPermissionsService> permissionService; // @synthesize permissionService=_permissionService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTArtistAboutService> artistAboutService; // @synthesize artistAboutService=_artistAboutService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTOnDemandTrialService> onDemandTrialService; // @synthesize onDemandTrialService=_onDemandTrialService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <FollowFeature> followService; // @synthesize followService=_followService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTEntitySeeAllSongsService> entitySeeAllSongsService; // @synthesize entitySeeAllSongsService=_entitySeeAllSongsService;
@property(nonatomic) __weak id <SPTFreeTierUIService> freeTierUIService; // @synthesize freeTierUIService=_freeTierUIService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (_Bool)claimsURI:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

@end

