//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLanguageOnboardingService-Protocol.h"
#import "SPTURISubtypeHandler-Protocol.h"

@class NSString, SPTAllocationContext, SPTLanguageOnboardingDataLoader, SPTLanguageOnboardingFlowCoordinator, SPTLanguageOnboardingTestManagerImplementation;
@protocol SPTContainerService, SPTFeatureFlaggingService, SPTGLUEService, SPTLanguageOnboardingUserDefaultsController, SPTNetworkService, SPTPageRegistrationToken, SPTSessionService, SPTSettingsFeature, SPTUIPresentationService, SPTURIDispatchService;

@interface SPTLanguageOnboardingServiceImplementation : NSObject <SPTURISubtypeHandler, SPTLanguageOnboardingService>
{
    id <SPTContainerService> _containerService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTUIPresentationService> _uiPresentationService;
    id <SPTNetworkService> _networkService;
    id <SPTGLUEService> _glueService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTSessionService> _clientSessionService;
    id <SPTLanguageOnboardingUserDefaultsController> _userDefaultsController;
    SPTLanguageOnboardingTestManagerImplementation *_testManager;
    SPTLanguageOnboardingFlowCoordinator *_flowCoordinator;
    SPTLanguageOnboardingDataLoader *_languageOnboardingDataLoader;
    id <SPTPageRegistrationToken> _featurePageToken;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPageRegistrationToken> featurePageToken; // @synthesize featurePageToken=_featurePageToken;
@property(retain, nonatomic) SPTLanguageOnboardingDataLoader *languageOnboardingDataLoader; // @synthesize languageOnboardingDataLoader=_languageOnboardingDataLoader;
@property(retain, nonatomic) SPTLanguageOnboardingFlowCoordinator *flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
@property(retain, nonatomic) SPTLanguageOnboardingTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTLanguageOnboardingUserDefaultsController> userDefaultsController; // @synthesize userDefaultsController=_userDefaultsController;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTUIPresentationService> uiPresentationService; // @synthesize uiPresentationService=_uiPresentationService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (id)provideLanguageSettingsViewController;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (void)unregisterPages;
- (void)registerPages;
- (void)unregisterLinkHandler;
- (void)registerLinkHandler;
- (void)setupFlowCoordinator;
- (void)setupDataLoader;
- (void)setupTestManager;
- (void)disableFeature;
- (void)setupUserDefaultsController;
- (void)enableFeature;
- (id)provideCoordinator;
@property(readonly, nonatomic) _Bool hasCompletedLanguageOnboarding;
@property(readonly, nonatomic, getter=isLanguageOnboardingEnabled) _Bool languageOnboardingEnabled;
- (id)provideTheme;
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

