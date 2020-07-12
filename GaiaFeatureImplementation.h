//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GaiaFeature-Protocol.h"
#import "SPTGaiaDevicePickerControllerProvider-Protocol.h"
#import "SPTService-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class GaiaLocalAudioSessionController, GaiaMessageBarController, NSString, SPNavigationController, SPTAllocationContext, SPTCastManager, SPTGaiaAudioAPKeepAliveHandler, SPTGaiaConnectCosmosResolver, SPTGaiaConnectPublicStateCache, SPTGaiaConnectStateObservingManager, SPTGaiaDependencyInjectorImplementation, SPTGaiaDeviceAppearanceMapping, SPTGaiaDevicePickerAppearanceManager, SPTGaiaDevicePickerDeviceSpecificConfigurationManager, SPTGaiaDevicePickerDevicesProvider, SPTGaiaDevicePickerViewController, SPTGaiaDevicePickerViewModel, SPTGaiaDevicesAvailableViewFactory, SPTGaiaEducationDetailModelManager, SPTGaiaFeatureFlagsManager, SPTGaiaFeatureProperties, SPTGaiaFeatureSettingsManager, SPTGaiaHomeDeviceLocalNotificationManager, SPTGaiaHomeDeviceLogger, SPTGaiaHomeDeviceManager, SPTGaiaHomeDeviceTooltipConnectionTracker, SPTGaiaHomeDeviceTooltipManager, SPTGaiaHomeDeviceTransitionManager, SPTGaiaIconProviderImplementation, SPTGaiaInstrumentationRemotePlayingStateBinder, SPTGaiaLocalDevicePermissions, SPTGaiaLockScreenFeatureManager, SPTGaiaLogger, SPTGaiaOnboardingManagerImplementation, SPTGaiaPlaybackGrabberController, SPTGaiaPopupController, SPTGaiaSettingsManager, SPTGaiaSignpostInstrumentation, SPTGaiaSilentAudioPlayerProviderDefaultImplementation, SPTGaiaSocialListeningIntegrationManager, SPTGaiaUbiLogger;
@protocol CosmosFeature, SPTAbbaService, SPTAccountService, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTCrashReporterService, SPTEventSenderService, SPTGLUEService, SPTGaiaConnectAPI, SPTGaiaConnectManager, SPTGaiaDevicePickerPresenter, SPTGaiaWirelessRoutesAPI, SPTInstrumentationService, SPTNetworkService, SPTPlayer, SPTPlayerFeature, SPTPushMessagingService, SPTRemoteConfigurationService, SPTSessionService, SPTSettingsFeature, SPTSocialListeningService, SPTUBIService, SPTUIPresentationService, SPTURIDispatchService;

@interface GaiaFeatureImplementation : NSObject <UIPopoverPresentationControllerDelegate, SPTService, GaiaFeature, SPTGaiaDevicePickerControllerProvider>
{
    id <SPTAccountService> _accountService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkFeature;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTAbbaService> _abbaService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTUIPresentationService> _UIPresentationService;
    id <SPTPushMessagingService> _pushMessagingService;
    id <SPTInstrumentationService> _instrumentationService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTGLUEService> _glueService;
    id <SPTSocialListeningService> _socialListeningService;
    id <CosmosFeature> _cosmosService;
    id <SPTUBIService> _ubiService;
    id <SPTEventSenderService> _eventSenderService;
    id <SPTRemoteConfigurationService> _remoteConfigService;
    GaiaLocalAudioSessionController *_localAudioSessionController;
    GaiaMessageBarController *_messageBarController;
    SPTGaiaPlaybackGrabberController *_playbackGrabberController;
    SPTGaiaDeviceAppearanceMapping *_iconMapper;
    SPTGaiaDevicePickerViewController *_devicePickerViewController;
    SPNavigationController *_devicePickerNavigationController;
    SPTGaiaLogger *_logger;
    SPTGaiaUbiLogger *_ubiLogger;
    SPTGaiaPopupController *_popupController;
    SPTCastManager *_castDeviceManager;
    SPTGaiaDevicePickerDevicesProvider *_devicesProvider;
    id <SPTPlayer> _player;
    id <SPTGaiaWirelessRoutesAPI> _wirelessRoutesManager;
    SPTGaiaConnectPublicStateCache *_connectPublicStateCache;
    SPTGaiaOnboardingManagerImplementation *_onboardingManager;
    SPTGaiaDevicePickerViewModel *_devicePickerModel;
    SPTGaiaHomeDeviceManager *_homeDeviceManager;
    SPTGaiaHomeDeviceTransitionManager *_homeDeviceNotificationManager;
    SPTGaiaHomeDeviceLogger *_homeDeviceLogger;
    SPTGaiaHomeDeviceTooltipManager *_homeDeviceEducationManager;
    SPTGaiaHomeDeviceTooltipConnectionTracker *_homeDeviceTooltipConnectionTracker;
    SPTGaiaFeatureFlagsManager *_featureFlagsManager;
    SPTGaiaFeatureSettingsManager *_featureSettingsManager;
    SPTGaiaSettingsManager *_settingsManager;
    SPTGaiaAudioAPKeepAliveHandler *_audioAPKeepAliveHandler;
    SPTGaiaLockScreenFeatureManager *_lockScreenFeatureManager;
    SPTGaiaEducationDetailModelManager *_educationModelManager;
    SPTGaiaDevicesAvailableViewFactory *_devicesAvailableViewFactory;
    SPTGaiaInstrumentationRemotePlayingStateBinder *_instrumentationRemotePlayingStateBinder;
    SPTGaiaSignpostInstrumentation *_signpostInstrumentation;
    SPTGaiaHomeDeviceLocalNotificationManager *_homeDeviceLocalNotificationManager;
    SPTGaiaSilentAudioPlayerProviderDefaultImplementation *_silentAudioPlayerProvider;
    SPTGaiaDevicePickerAppearanceManager *_appearanceManager;
    SPTGaiaLocalDevicePermissions *_localDevicePermissions;
    SPTGaiaDevicePickerDeviceSpecificConfigurationManager *_deviceSpecificConfiguration;
    SPTGaiaSocialListeningIntegrationManager *_socialListeningManager;
    SPTGaiaConnectCosmosResolver *_cosmosResolver;
    id <SPTGaiaConnectManager> _connectManager;
    id <SPTGaiaConnectAPI> _connectAPI;
    id <SPTGaiaDevicePickerPresenter> _devicePickerPresenter;
    SPTGaiaConnectStateObservingManager *_stateObservingManager;
    SPTGaiaIconProviderImplementation *_iconProvider;
    SPTGaiaDependencyInjectorImplementation *_gaiaDependencyInjector;
    SPTGaiaFeatureProperties *_remoteConfigProperties;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTGaiaFeatureProperties *remoteConfigProperties; // @synthesize remoteConfigProperties=_remoteConfigProperties;
@property(retain, nonatomic) SPTGaiaDependencyInjectorImplementation *gaiaDependencyInjector; // @synthesize gaiaDependencyInjector=_gaiaDependencyInjector;
@property(retain, nonatomic) SPTGaiaIconProviderImplementation *iconProvider; // @synthesize iconProvider=_iconProvider;
@property(retain, nonatomic) SPTGaiaConnectStateObservingManager *stateObservingManager; // @synthesize stateObservingManager=_stateObservingManager;
@property(retain, nonatomic) id <SPTGaiaDevicePickerPresenter> devicePickerPresenter; // @synthesize devicePickerPresenter=_devicePickerPresenter;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> connectAPI; // @synthesize connectAPI=_connectAPI;
@property(retain, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(retain, nonatomic) SPTGaiaConnectCosmosResolver *cosmosResolver; // @synthesize cosmosResolver=_cosmosResolver;
@property(retain, nonatomic) SPTGaiaSocialListeningIntegrationManager *socialListeningManager; // @synthesize socialListeningManager=_socialListeningManager;
@property(retain, nonatomic) SPTGaiaDevicePickerDeviceSpecificConfigurationManager *deviceSpecificConfiguration; // @synthesize deviceSpecificConfiguration=_deviceSpecificConfiguration;
@property(retain, nonatomic) SPTGaiaLocalDevicePermissions *localDevicePermissions; // @synthesize localDevicePermissions=_localDevicePermissions;
@property(retain, nonatomic) SPTGaiaDevicePickerAppearanceManager *appearanceManager; // @synthesize appearanceManager=_appearanceManager;
@property(retain, nonatomic) SPTGaiaSilentAudioPlayerProviderDefaultImplementation *silentAudioPlayerProvider; // @synthesize silentAudioPlayerProvider=_silentAudioPlayerProvider;
@property(retain, nonatomic) SPTGaiaHomeDeviceLocalNotificationManager *homeDeviceLocalNotificationManager; // @synthesize homeDeviceLocalNotificationManager=_homeDeviceLocalNotificationManager;
@property(readonly, nonatomic) SPTGaiaSignpostInstrumentation *signpostInstrumentation; // @synthesize signpostInstrumentation=_signpostInstrumentation;
@property(retain, nonatomic) SPTGaiaInstrumentationRemotePlayingStateBinder *instrumentationRemotePlayingStateBinder; // @synthesize instrumentationRemotePlayingStateBinder=_instrumentationRemotePlayingStateBinder;
@property(retain, nonatomic) SPTGaiaDevicesAvailableViewFactory *devicesAvailableViewFactory; // @synthesize devicesAvailableViewFactory=_devicesAvailableViewFactory;
@property(retain, nonatomic) SPTGaiaEducationDetailModelManager *educationModelManager; // @synthesize educationModelManager=_educationModelManager;
@property(retain, nonatomic) SPTGaiaLockScreenFeatureManager *lockScreenFeatureManager; // @synthesize lockScreenFeatureManager=_lockScreenFeatureManager;
@property(retain, nonatomic) SPTGaiaAudioAPKeepAliveHandler *audioAPKeepAliveHandler; // @synthesize audioAPKeepAliveHandler=_audioAPKeepAliveHandler;
@property(retain, nonatomic) SPTGaiaSettingsManager *settingsManager; // @synthesize settingsManager=_settingsManager;
@property(retain, nonatomic) SPTGaiaFeatureSettingsManager *featureSettingsManager; // @synthesize featureSettingsManager=_featureSettingsManager;
@property(retain, nonatomic) SPTGaiaFeatureFlagsManager *featureFlagsManager; // @synthesize featureFlagsManager=_featureFlagsManager;
@property(retain, nonatomic) SPTGaiaHomeDeviceTooltipConnectionTracker *homeDeviceTooltipConnectionTracker; // @synthesize homeDeviceTooltipConnectionTracker=_homeDeviceTooltipConnectionTracker;
@property(retain, nonatomic) SPTGaiaHomeDeviceTooltipManager *homeDeviceEducationManager; // @synthesize homeDeviceEducationManager=_homeDeviceEducationManager;
@property(retain, nonatomic) SPTGaiaHomeDeviceLogger *homeDeviceLogger; // @synthesize homeDeviceLogger=_homeDeviceLogger;
@property(retain, nonatomic) SPTGaiaHomeDeviceTransitionManager *homeDeviceNotificationManager; // @synthesize homeDeviceNotificationManager=_homeDeviceNotificationManager;
@property(retain, nonatomic) SPTGaiaHomeDeviceManager *homeDeviceManager; // @synthesize homeDeviceManager=_homeDeviceManager;
@property(retain, nonatomic) SPTGaiaDevicePickerViewModel *devicePickerModel; // @synthesize devicePickerModel=_devicePickerModel;
@property(retain, nonatomic) SPTGaiaOnboardingManagerImplementation *onboardingManager; // @synthesize onboardingManager=_onboardingManager;
@property(retain, nonatomic) SPTGaiaConnectPublicStateCache *connectPublicStateCache; // @synthesize connectPublicStateCache=_connectPublicStateCache;
@property(retain, nonatomic) id <SPTGaiaWirelessRoutesAPI> wirelessRoutesManager; // @synthesize wirelessRoutesManager=_wirelessRoutesManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTGaiaDevicePickerDevicesProvider *devicesProvider; // @synthesize devicesProvider=_devicesProvider;
@property(retain, nonatomic) SPTCastManager *castDeviceManager; // @synthesize castDeviceManager=_castDeviceManager;
@property(retain, nonatomic) SPTGaiaPopupController *popupController; // @synthesize popupController=_popupController;
@property(retain, nonatomic) SPTGaiaUbiLogger *ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(retain, nonatomic) SPTGaiaLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPNavigationController *devicePickerNavigationController; // @synthesize devicePickerNavigationController=_devicePickerNavigationController;
@property(retain, nonatomic) SPTGaiaDevicePickerViewController *devicePickerViewController; // @synthesize devicePickerViewController=_devicePickerViewController;
@property(retain, nonatomic) SPTGaiaDeviceAppearanceMapping *iconMapper; // @synthesize iconMapper=_iconMapper;
@property(retain, nonatomic) SPTGaiaPlaybackGrabberController *playbackGrabberController; // @synthesize playbackGrabberController=_playbackGrabberController;
@property(retain, nonatomic) GaiaMessageBarController *messageBarController; // @synthesize messageBarController=_messageBarController;
@property(retain, nonatomic) GaiaLocalAudioSessionController *localAudioSessionController; // @synthesize localAudioSessionController=_localAudioSessionController;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigService; // @synthesize remoteConfigService=_remoteConfigService;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
@property(nonatomic) __weak id <SPTSocialListeningService> socialListeningService; // @synthesize socialListeningService=_socialListeningService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTInstrumentationService> instrumentationService; // @synthesize instrumentationService=_instrumentationService;
@property(nonatomic) __weak id <SPTPushMessagingService> pushMessagingService; // @synthesize pushMessagingService=_pushMessagingService;
@property(nonatomic) __weak id <SPTUIPresentationService> UIPresentationService; // @synthesize UIPresentationService=_UIPresentationService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTAccountService> accountService; // @synthesize accountService=_accountService;
- (void).cxx_destruct;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)registerSettings;
- (id)provideLocalSettings;
- (void)registerFeatureSettingsPage;
- (id)provideSettingsProvider;
- (id)provideSocialListeningIntegrationAPI;
- (id)provideWirelessRoutesAPI;
- (id)provideIconProvider;
- (id)providePopupPresenter;
- (id)provideDependencyInjector;
- (id)provideDevicePresenter;
- (id)provideConnectAPI;
- (id)provideDevicesAvailableViewProvider;
- (id)provideLockScreenControlsStateProvider;
- (void)setupCastManager;
- (void)applicationWillChangeStatusBarOrientationNotification:(id)arg1;
- (void)setupConnectManager;
- (void)setupOnboardingManager;
- (void)setupSignpostInstrumentation;
- (void)setupInstrumentationBinder;
- (void)setupAudioAPKeepAliveHandler;
- (void)setupHomeDeviceNotificationManager;
- (void)setupPopupController;
- (void)setupPlaybackGrabberController;
- (void)setupLocalAudioSessionController;
- (void)registerForStatusBarOrientationChanges;
- (void)unload;
- (void)lookupSocialListeningSessionWithLink:(id)arg1;
- (id)handleDeepLink:(id)arg1;
- (id)provideDevicePickerVC;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

