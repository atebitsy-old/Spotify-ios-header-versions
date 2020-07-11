//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, RootSettingsViewController, SPTAllocationContext;
@protocol GaiaFeature, SPTAbbaFeatureFlags, SPTAbbaService, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTExplicitContentService, SPTLanguageOnboardingService, SPTLoginService, SPTNavigationFeature, SPTSessionService, SPTSettingsFeature, SPTURIDispatchService;

@interface SPTSettingsUIFeatureImplementation : NSObject <SPTService>
{
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTSessionService> _clientSessionService;
    id <SPTCoreService> _coreService;
    id <SPTLoginService> _loginService;
    id <GaiaFeature> _gaiaFeature;
    id <SPTAbbaService> _abbaService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTNavigationFeature> _navigationFeature;
    id <SPTLanguageOnboardingService> _languageOnboardingService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTURIDispatchService> _URIDispatchService;
    RootSettingsViewController *_settingsViewController;
    id <SPTAbbaFeatureFlags> _featureFlags;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) RootSettingsViewController *settingsViewController; // @synthesize settingsViewController=_settingsViewController;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTLanguageOnboardingService> languageOnboardingService; // @synthesize languageOnboardingService=_languageOnboardingService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationFeature; // @synthesize navigationFeature=_navigationFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideSectionViewControllerWithURL:(id)arg1 context:(id)arg2;
- (id)provideSettingsViewController;
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

