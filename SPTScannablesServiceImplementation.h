//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTScannablesService-Protocol.h"

@class NSMutableDictionary, NSString, SPTAllocationContext, SPTScannablesAuthorizationRequester, SPTScannablesDependencies, SPTScannablesImageLoaderRequestFactory, SPTScannablesScanViewModelFactory, SPTScannablesSlateFactory, SPTScannablesUserInterfaceFactoryImplementation;
@protocol SPTBarButtonItemManager, SPTContainerService, SPTContainerUIService, SPTFreeTierTooltipService, SPTGLUEService, SPTLocalSettings, SPTNavigationFeature, SPTNetworkService, SPTScannablesOnboardingPresenter, SPTScannablesPresenter, SPTScannablesRegistry, SPTScannablesShortcutItemProvider, SPTSessionService, SPTSettingsFeature, SPTUBIService, SPTUIPresentationService, SPTURIDispatchService, SlateFeature;

@interface SPTScannablesServiceImplementation : NSObject <SPTScannablesService>
{
    id <SPTNavigationFeature> _navigationService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTNetworkService> _networkFeature;
    id <SlateFeature> _slateFeature;
    id <SPTLocalSettings> _localSettings;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTFreeTierTooltipService> _tooltipService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTGLUEService> _glueService;
    id <SPTUIPresentationService> _UIPresentationService;
    id <SPTUBIService> _ubiService;
    SPTScannablesUserInterfaceFactoryImplementation *_userInterfaceFactory;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    SPTScannablesScanViewModelFactory *_scanViewModelFactory;
    SPTScannablesAuthorizationRequester *_authorizationRequester;
    SPTScannablesDependencies *_scannableDependencies;
    id <SPTScannablesOnboardingPresenter> _onboardingPresenter;
    SPTScannablesSlateFactory *_slateFactory;
    id <SPTScannablesRegistry> _scannablesRegistry;
    id <SPTScannablesShortcutItemProvider> _scannablesShortcutItemProvider;
    SPTScannablesImageLoaderRequestFactory *_imageLoaderFactory;
    id <SPTScannablesPresenter> _scannablesPresenter;
    NSMutableDictionary *_scannablesDataSources;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) NSMutableDictionary *scannablesDataSources; // @synthesize scannablesDataSources=_scannablesDataSources;
@property(retain, nonatomic) id <SPTScannablesPresenter> scannablesPresenter; // @synthesize scannablesPresenter=_scannablesPresenter;
@property(retain, nonatomic) SPTScannablesImageLoaderRequestFactory *imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) id <SPTScannablesShortcutItemProvider> scannablesShortcutItemProvider; // @synthesize scannablesShortcutItemProvider=_scannablesShortcutItemProvider;
@property(retain, nonatomic) id <SPTScannablesRegistry> scannablesRegistry; // @synthesize scannablesRegistry=_scannablesRegistry;
@property(retain, nonatomic) SPTScannablesSlateFactory *slateFactory; // @synthesize slateFactory=_slateFactory;
@property(retain, nonatomic) id <SPTScannablesOnboardingPresenter> onboardingPresenter; // @synthesize onboardingPresenter=_onboardingPresenter;
@property(retain, nonatomic) SPTScannablesDependencies *scannableDependencies; // @synthesize scannableDependencies=_scannableDependencies;
@property(retain, nonatomic) SPTScannablesAuthorizationRequester *authorizationRequester; // @synthesize authorizationRequester=_authorizationRequester;
@property(retain, nonatomic) SPTScannablesScanViewModelFactory *scanViewModelFactory; // @synthesize scanViewModelFactory=_scanViewModelFactory;
@property(retain, nonatomic) id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(retain, nonatomic) SPTScannablesUserInterfaceFactoryImplementation *userInterfaceFactory; // @synthesize userInterfaceFactory=_userInterfaceFactory;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTUIPresentationService> UIPresentationService; // @synthesize UIPresentationService=_UIPresentationService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTFreeTierTooltipService> tooltipService; // @synthesize tooltipService=_tooltipService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SlateFeature> slateFeature; // @synthesize slateFeature=_slateFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
- (void).cxx_destruct;
- (void)didTapCameraButton;
- (id)provideShortcutItemProvider;
- (id)provideRegistry;
- (id)provideSlateFactory;
- (id)provideOnboardingPresenter;
- (id)provideAuthorizationRequester;
- (id)provideScanViewModelFactory;
- (id)provideScanViewController;
- (id)provideScannablesPresenter;
- (id)provideDataSourceWithIdentifier:(id)arg1;
- (id)provideUserInterfaceFactory;
- (id)provideTestManager;
- (void)unload;
- (id)makeScannableBarButtonItem;
- (void)registerBarButtonItem;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

