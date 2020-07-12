//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTPremiumDestinationExperiments-Protocol.h"

@class NSString, UIViewController;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTRemoteConfigurationResolver;

@interface SPTPremiumDestinationExperimentsImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTPremiumDestinationExperiments>
{
    _Bool _shouldUseDevEndpointSetting;
    _Bool _shouldPresentImplicitNotificationAlertController;
    UIViewController *_premiumDestinationTabBarBadgeViewController;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    id <SPTFeatureFlagSignal> _shouldUseDevEndpointSettingSignal;
    id <SPTFeatureFlagSignal> _shouldPresentImplicitNotificationSignal;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldPresentImplicitNotificationAlertController; // @synthesize shouldPresentImplicitNotificationAlertController=_shouldPresentImplicitNotificationAlertController;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> shouldPresentImplicitNotificationSignal; // @synthesize shouldPresentImplicitNotificationSignal=_shouldPresentImplicitNotificationSignal;
@property(nonatomic) _Bool shouldUseDevEndpointSetting; // @synthesize shouldUseDevEndpointSetting=_shouldUseDevEndpointSetting;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> shouldUseDevEndpointSettingSignal; // @synthesize shouldUseDevEndpointSettingSignal=_shouldUseDevEndpointSettingSignal;
@property(readonly, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(nonatomic) __weak UIViewController *premiumDestinationTabBarBadgeViewController; // @synthesize premiumDestinationTabBarBadgeViewController=_premiumDestinationTabBarBadgeViewController;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupImplicitNotificacion;
- (void)setupUseDevEndpointSetting;
- (id)featureProperties;
- (void)loadFlags;
@property(readonly, copy, nonatomic) NSString *offerTrialRibbonString;
@property(readonly, nonatomic) _Bool offerTrialRibbonExperienceEnabled;
@property(readonly, nonatomic) _Bool tabBarBadgeExperienceEnabled;
@property(readonly, nonatomic) _Bool shouldShowLegacyPD;
@property(readonly, nonatomic) _Bool shouldUseHeaderVoiceoverAccessible;
- (id)initWithFeatureFlagFactory:(id)arg1 remoteConfigurationResolver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

