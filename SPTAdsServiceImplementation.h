//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPSessionObserver-Protocol.h"
#import "SPTAdFeatureFlagChecksObserver-Protocol.h"
#import "SPTAdsService-Protocol.h"

@class NSString, NSURL, SPTAdContextManager, SPTAdContextManagerListener, SPTAdFeatureFlagChecks, SPTAdFeaturedActionHandler, SPTAdFocusManager, SPTAdLinkHandler, SPTAdMicPermissionsLogger, SPTAdMobileOverlayController, SPTAdNowPlayingAudioAdModeGenerator, SPTAdNowPlayingAuxiliaryActionsHandler, SPTAdNowPlayingManager, SPTAdNowPlayingVideoAdModeGenerator, SPTAdPlayerObservable, SPTAdRegistryInformationManager, SPTAdRulesManager, SPTAdStateLogger, SPTAdVideoEventReporter, SPTAdVoicePermissions, SPTAdVoiceSession, SPTAdsAutoDetectionController, SPTAdsFeatureProperties, SPTAdsInAppBrowserController, SPTAdsMarqueeController, SPTAdsMoatManager, SPTAdsRemindersManager, SPTAdsViewModel, SPTAllocationContext, SPTInterruptionVideoEventReporter, SPTSponsoredContextManager;
@protocol FollowFeature, GaiaFeature, SPContextMenuFeature, SPTAbbaService, SPTAccessoryManagerService, SPTAdsBaseService, SPTAdsManager, SPTAudioPreviewService, SPTBannerFeature, SPTCollectionPlatformService, SPTComScoreAnalyticsManager, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTCrashReporterService, SPTDebugService, SPTEventSender, SPTEventSenderService, SPTExternalIntegrationDriverDistractionService, SPTFreeTierPreCurationService, SPTGLUEService, SPTInAppMessageService, SPTLocalSettings, SPTNetworkService, SPTNowPlayingPlatformService, SPTPlayer, SPTPlayerFeature, SPTPlaylistPlatformService, SPTRemoteConfigurationResolver, SPTRemoteConfigurationService, SPTResolver, SPTSessionService, SPTSettingsFeature, SPTSnackbarService, SPTUIPresentationService, SPTURIDispatchService, SPTVideoCoordinatorService, SPTVoiceService, SPTWebViewFeature, SlateFeature;

@interface SPTAdsServiceImplementation : NSObject <SPTAdFeatureFlagChecksObserver, SPSessionObserver, SPTAdsService>
{
    _Bool _partnerPreferencesSettingsSectionRegistered;
    id <SPTAudioPreviewService> _audioPreviewService;
    id <SPTAbbaService> _abbaService;
    id <SPTExternalIntegrationDriverDistractionService> _driverDistractionService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTVideoCoordinatorService> _videoCoordinatorService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SlateFeature> _slateFeature;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTAccessoryManagerService> _accessoryManagerService;
    id <SPTCoreService> _coreService;
    id <FollowFeature> _followService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTVoiceService> _voiceService;
    id <SPTWebViewFeature> _webviewFeature;
    id <GaiaFeature> _gaiaFeature;
    id <SPTUIPresentationService> _presentationService;
    id <SPTInAppMessageService> _inappmessageService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTBannerFeature> _bannerService;
    id <SPTFreeTierPreCurationService> _freeTierCurationService;
    id <SPTResolver> _adResolver;
    SPTAdLinkHandler *_adLinkHandler;
    id <SPTLocalSettings> _localSettings;
    id <SPTPlayer> _adsPlayer;
    id <SPTAdsManager> _adsManager;
    SPTAdsViewModel *_adsViewModel;
    SPTAdContextManager *_adContextManager;
    SPTAdRulesManager *_adRulesManager;
    SPTAdNowPlayingManager *_adNowPlayingManager;
    SPTAdFocusManager *_adFocusManager;
    SPTAdContextManagerListener *_adContextManagerListener;
    SPTAdsMarqueeController *_adsMarqueeController;
    SPTAdFeaturedActionHandler *_adActionHandler;
    SPTSponsoredContextManager *_sponsoredContextManager;
    SPTAdFeatureFlagChecks *_featureChecker;
    SPTAdsAutoDetectionController *_autoDetectionController;
    SPTAdVideoEventReporter *_videoEventReporter;
    SPTInterruptionVideoEventReporter *_interruptionEventReporter;
    SPTAdsMoatManager *_moatManager;
    SPTAdNowPlayingAudioAdModeGenerator *_audioAdModeGenerator;
    SPTAdNowPlayingVideoAdModeGenerator *_videoAdModeGenerator;
    SPTAdPlayerObservable *_adPlayerObserver;
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTSnackbarService> _snackbarService;
    SPTAdNowPlayingAuxiliaryActionsHandler *_actionsHandler;
    SPTAdVoiceSession *_adVoiceSession;
    SPTAdVoicePermissions *_voicePermission;
    SPTAdStateLogger *_adStateLogger;
    id <SPTComScoreAnalyticsManager> _comScoreAnalyticsManager;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTAdsFeatureProperties *_featureProperties;
    SPTAdsInAppBrowserController *_adsinAppBrowserController;
    id <SPTEventSenderService> _eventSenderService;
    id <SPTEventSender> _eventSender;
    SPTAdMicPermissionsLogger *_micPermsLogger;
    SPTAdsRemindersManager *_adsReminderManager;
    id <SPTAdsBaseService> _adsBaseService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTDebugService> _debugService;
    id <SPTGLUEService> _glueService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTNetworkService> _networkFeature;
    id <SPTURIDispatchService> _URIDispatchService;
    SPTAdRegistryInformationManager *_adRegistryInformationManager;
    SPTAdMobileOverlayController *_mobileOverlayController;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTAdMobileOverlayController *mobileOverlayController; // @synthesize mobileOverlayController=_mobileOverlayController;
@property(retain, nonatomic) SPTAdRegistryInformationManager *adRegistryInformationManager; // @synthesize adRegistryInformationManager=_adRegistryInformationManager;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTAdsBaseService> adsBaseService; // @synthesize adsBaseService=_adsBaseService;
@property(retain, nonatomic) SPTAdsRemindersManager *adsReminderManager; // @synthesize adsReminderManager=_adsReminderManager;
@property(retain, nonatomic) SPTAdMicPermissionsLogger *micPermsLogger; // @synthesize micPermsLogger=_micPermsLogger;
@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(retain, nonatomic) id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(retain, nonatomic) SPTAdsInAppBrowserController *adsinAppBrowserController; // @synthesize adsinAppBrowserController=_adsinAppBrowserController;
@property(retain, nonatomic) SPTAdsFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(retain, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(retain, nonatomic) id <SPTComScoreAnalyticsManager> comScoreAnalyticsManager; // @synthesize comScoreAnalyticsManager=_comScoreAnalyticsManager;
@property(retain, nonatomic) SPTAdStateLogger *adStateLogger; // @synthesize adStateLogger=_adStateLogger;
@property(nonatomic) _Bool partnerPreferencesSettingsSectionRegistered; // @synthesize partnerPreferencesSettingsSectionRegistered=_partnerPreferencesSettingsSectionRegistered;
@property(retain, nonatomic) SPTAdVoicePermissions *voicePermission; // @synthesize voicePermission=_voicePermission;
@property(retain, nonatomic) SPTAdVoiceSession *adVoiceSession; // @synthesize adVoiceSession=_adVoiceSession;
@property(retain, nonatomic) SPTAdNowPlayingAuxiliaryActionsHandler *actionsHandler; // @synthesize actionsHandler=_actionsHandler;
@property(nonatomic) __weak id <SPTSnackbarService> snackbarService; // @synthesize snackbarService=_snackbarService;
@property(retain, nonatomic) id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
@property(retain, nonatomic) SPTAdPlayerObservable *adPlayerObserver; // @synthesize adPlayerObserver=_adPlayerObserver;
@property(retain, nonatomic) SPTAdNowPlayingVideoAdModeGenerator *videoAdModeGenerator; // @synthesize videoAdModeGenerator=_videoAdModeGenerator;
@property(retain, nonatomic) SPTAdNowPlayingAudioAdModeGenerator *audioAdModeGenerator; // @synthesize audioAdModeGenerator=_audioAdModeGenerator;
@property(retain, nonatomic) SPTAdsMoatManager *moatManager; // @synthesize moatManager=_moatManager;
@property(retain, nonatomic) SPTInterruptionVideoEventReporter *interruptionEventReporter; // @synthesize interruptionEventReporter=_interruptionEventReporter;
@property(retain, nonatomic) SPTAdVideoEventReporter *videoEventReporter; // @synthesize videoEventReporter=_videoEventReporter;
@property(retain, nonatomic) SPTAdsAutoDetectionController *autoDetectionController; // @synthesize autoDetectionController=_autoDetectionController;
@property(retain, nonatomic) SPTAdFeatureFlagChecks *featureChecker; // @synthesize featureChecker=_featureChecker;
@property(retain, nonatomic) SPTSponsoredContextManager *sponsoredContextManager; // @synthesize sponsoredContextManager=_sponsoredContextManager;
@property(retain, nonatomic) SPTAdFeaturedActionHandler *adActionHandler; // @synthesize adActionHandler=_adActionHandler;
@property(retain, nonatomic) SPTAdsMarqueeController *adsMarqueeController; // @synthesize adsMarqueeController=_adsMarqueeController;
@property(retain, nonatomic) SPTAdContextManagerListener *adContextManagerListener; // @synthesize adContextManagerListener=_adContextManagerListener;
@property(retain, nonatomic) SPTAdFocusManager *adFocusManager; // @synthesize adFocusManager=_adFocusManager;
@property(retain, nonatomic) SPTAdNowPlayingManager *adNowPlayingManager; // @synthesize adNowPlayingManager=_adNowPlayingManager;
@property(retain, nonatomic) SPTAdRulesManager *adRulesManager; // @synthesize adRulesManager=_adRulesManager;
@property(retain, nonatomic) SPTAdContextManager *adContextManager; // @synthesize adContextManager=_adContextManager;
@property(retain, nonatomic) SPTAdsViewModel *adsViewModel; // @synthesize adsViewModel=_adsViewModel;
@property(retain, nonatomic) id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(retain, nonatomic) id <SPTPlayer> adsPlayer; // @synthesize adsPlayer=_adsPlayer;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTAdLinkHandler *adLinkHandler; // @synthesize adLinkHandler=_adLinkHandler;
@property(retain, nonatomic) id <SPTResolver> adResolver; // @synthesize adResolver=_adResolver;
@property(nonatomic) __weak id <SPTFreeTierPreCurationService> freeTierCurationService; // @synthesize freeTierCurationService=_freeTierCurationService;
@property(nonatomic) __weak id <SPTBannerFeature> bannerService; // @synthesize bannerService=_bannerService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTInAppMessageService> inappmessageService; // @synthesize inappmessageService=_inappmessageService;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(nonatomic) __weak id <SPTWebViewFeature> webviewFeature; // @synthesize webviewFeature=_webviewFeature;
@property(nonatomic) __weak id <SPTVoiceService> voiceService; // @synthesize voiceService=_voiceService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <FollowFeature> followService; // @synthesize followService=_followService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTAccessoryManagerService> accessoryManagerService; // @synthesize accessoryManagerService=_accessoryManagerService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SlateFeature> slateFeature; // @synthesize slateFeature=_slateFeature;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTVideoCoordinatorService> videoCoordinatorService; // @synthesize videoCoordinatorService=_videoCoordinatorService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTExternalIntegrationDriverDistractionService> driverDistractionService; // @synthesize driverDistractionService=_driverDistractionService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTAudioPreviewService> audioPreviewService; // @synthesize audioPreviewService=_audioPreviewService;
- (void).cxx_destruct;
- (void)createSlot:(id)arg1 queue:(id)arg2 group:(id)arg3;
- (void)createSlotsWithCompletion:(CDUnknownBlockType)arg1;
- (void)didCompleteAPLogin;
- (void)sessionLoginModeChanged:(id)arg1;
- (void)removeAPConnectionObserver;
- (void)addAPConnectionObserver;
- (void)adsFeatureFlagsDidLoad:(id)arg1;
- (void)adsFeatureFlagsDidChange:(id)arg1;
- (id)providePlayerSource;
- (id)provideEventSender;
- (id)provideFeatureProperties;
- (id)provideVoiceSession;
- (id)provideActionsHandler;
- (id)provideFeatureChecker;
- (id)createNewInterruptionEventReporter:(id)arg1 timeObservable:(id)arg2;
- (id)provideInterruptionVideoEventReporter;
- (id)createNewAdVideoEventReporterWithIdentity:(id)arg1 timeObservable:(id)arg2;
- (id)provideAdVideoEventReporter;
- (id)provideAdsPlayer;
- (id)provideAdsInAppBrowserController;
- (id)provideFocusManager;
- (id)provideSponsoredContextManager;
- (id)provideAdActionHandler;
- (id)provideAdResolver;
- (id)provideAdNowPlayingManager;
- (id)provideAdRulesManager;
- (id)provideAdContextManager;
- (id)provideComScoreAnalyticsManager;
- (id)provideAdsViewModel;
- (id)provideVoicePermissionChecker;
- (id)provideAdVoiceTermsSettingSection:(id)arg1;
- (id)provideSavedAdsPreferencesSettingSection:(id)arg1;
- (id)providAdVoicePreferencesSettingSection:(id)arg1;
- (id)provideAdPartnerPreferencesSettingSection:(id)arg1;
- (id)provideAdLinkHandler;
- (id)provideSponsoredContextViewModelForContext:(id)arg1;
- (id)provideAdsManager;
- (void)loadMicPermissionsLogger;
- (void)loadComScoreAnalyticsManager;
- (id)provideBookmarkSettingsViewController;
- (id)provideAdPlayerObserver;
- (id)provideAudioAdModeGenerator;
- (id)provideVideoAdModeGenerator;
- (void)loadMoatManager;
- (void)loadAdReminderManager;
- (void)loadAdSettings;
- (void)loadSponsoredContextManager;
- (void)loadAdStateLogger;
- (id)loadMarqueeController;
- (void)loadMobileOverlayController;
- (void)loadAdContextListner;
- (void)loadAutoDetectionController;
@property(readonly, nonatomic) NSURL *playerViewURI;
- (void)idleStateWasReached;
- (void)initialViewDidAppear;
- (void)loadAdsForFeatureFlags:(id)arg1;
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

