//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAbbaFeatureFlagsObserver-Protocol.h"
#import "SPTLocalSettingsObserver-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, SPTObserverManager;
@protocol SPTAbbaFeatureFlags, SPTLocalSettings, SPTProductState, SPTResolver;

@interface SPTAdFeatureFlagChecks : NSObject <SPTProductStateObserver, SPTLocalSettingsObserver, SPTAbbaFeatureFlagsObserver>
{
    _Bool _noOfferCardEnabled;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    id <SPTResolver> _resolver;
    SPTObserverManager *_observerManager;
    NSArray *_observedFeatureFlagsKeys;
    NSArray *_observedLocalSettingsKeys;
    NSArray *_observedProductStateKeys;
    NSMutableDictionary *_observedLocalSettings;
    NSMutableDictionary *_observedFeatureFlags;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *observedFeatureFlags; // @synthesize observedFeatureFlags=_observedFeatureFlags;
@property(readonly, nonatomic) NSMutableDictionary *observedLocalSettings; // @synthesize observedLocalSettings=_observedLocalSettings;
@property(readonly, nonatomic) NSArray *observedProductStateKeys; // @synthesize observedProductStateKeys=_observedProductStateKeys;
@property(readonly, nonatomic) NSArray *observedLocalSettingsKeys; // @synthesize observedLocalSettingsKeys=_observedLocalSettingsKeys;
@property(readonly, nonatomic) NSArray *observedFeatureFlagsKeys; // @synthesize observedFeatureFlagsKeys=_observedFeatureFlagsKeys;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(readonly, nonatomic) __weak id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) _Bool noOfferCardEnabled; // @synthesize noOfferCardEnabled=_noOfferCardEnabled;
- (void)notifyObserversOfLoad;
- (void)notifyObserversOfChange;
- (void)localSettingsDidChange:(id)arg1;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)featureFlagsDidChange:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic, getter=isAudioPlusEnabled) _Bool audioPlusEnabled;
@property(readonly, nonatomic, getter=isLeaveBehindTopBannerEnabled) _Bool leaveBehindTopBannerEnabled;
@property(readonly, nonatomic, getter=isLeaveBehindCompanionBannerEnabled) _Bool leaveBehindCompanionBannerEnabled;
@property(readonly, nonatomic, getter=isInAppBrowserEnabled) _Bool inAppBrowserEnabled;
@property(readonly, nonatomic, getter=isMarqueeEnabled) _Bool marqueeEnabled;
@property(readonly, nonatomic, getter=isAdFeedbackEnabled) _Bool adFeedbackEnabled;
@property(readonly, nonatomic, getter=isNewVideoEventsEnabled) _Bool newVideoEventsEnabled;
@property(readonly, nonatomic, getter=isAudioAdClick2PlayCoreQueuingEnabled) _Bool audioAdClick2PlayCoreQueuingEnabled;
@property(readonly, nonatomic, getter=isAudioAdClick2PlayQueuingEnabled) _Bool audioAdClick2PlayQueuingEnabled;
@property(readonly, nonatomic, getter=isContextResumeEnabled) _Bool contextResumeEnabled;
@property(readonly, nonatomic, getter=isPrerollEnabled) _Bool prerollEnabled;
@property(readonly, nonatomic, getter=isMobiusVoiceEnabled) _Bool mobiusVoiceEnabled;
@property(readonly, nonatomic, getter=isVoiceEnabled) _Bool voiceEnabled;
- (void)requestNoOfferCardFlagValueFromCore;
@property(readonly, nonatomic, getter=isComscoreEnabled) _Bool comscoreEnabled;
@property(readonly, nonatomic, getter=isCosmosWatchNowEnabled) _Bool cosmosWatchNowEnabled;
- (void)dealloc;
- (id)initWithProductState:(id)arg1 localSetting:(id)arg2 abbaService:(id)arg3 resolver:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

