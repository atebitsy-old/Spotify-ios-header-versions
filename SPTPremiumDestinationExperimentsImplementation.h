//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTPremiumDestinationExperiments-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTProductState, SPTRemoteConfigurationResolver;

@interface SPTPremiumDestinationExperimentsImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTPremiumDestinationExperiments>
{
    _Bool _shouldUseDevEndpointSetting;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    id <SPTProductState> _productState;
    id <SPTFeatureFlagSignal> _shouldUseDevEndpointSettingSignal;
}

@property(nonatomic) _Bool shouldUseDevEndpointSetting; // @synthesize shouldUseDevEndpointSetting=_shouldUseDevEndpointSetting;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> shouldUseDevEndpointSettingSignal; // @synthesize shouldUseDevEndpointSettingSignal=_shouldUseDevEndpointSettingSignal;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupUseDevEndpointSetting;
- (id)featureProperties;
- (void)loadFlags;
- (id)premiumOnlyMarkets;
@property(readonly, nonatomic) _Bool isPremiumOnlyMarket;
@property(readonly, nonatomic) _Bool shouldShowLegacyPD;
@property(readonly, nonatomic) _Bool shouldFetchPremiumDestinationHubsFromBackendV4;
@property(readonly, nonatomic) _Bool shouldFetchPremiumDestinationHubsFromBackendV3;
@property(readonly, nonatomic) _Bool shouldUseHeaderVoiceoverAccessible;
- (id)initWithFeatureFlagFactory:(id)arg1 remoteConfigurationResolver:(id)arg2 productState:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

