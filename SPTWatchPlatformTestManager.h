//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTWatchConnectivitySessionObserver-Protocol.h"

@class NSString, NSUserDefaults, SPTObserverManager, SPTWatchConnectivitySession;
@protocol SPTExternalIntegrationDebugLog, SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTProductState, SPTRemoteConfigurationResolver;

@interface SPTWatchPlatformTestManager : NSObject <SPTFeatureFlagSignalObserver, SPTWatchConnectivitySessionObserver>
{
    _Bool _watchAccessoryLoggingEnabled;
    _Bool _watchIntegrationEnabled;
    _Bool _watchAppStreamingEnabled;
    _Bool _watchAppLibraryEnabled;
    _Bool _watchAppLibraryOnboardingEnabled;
    _Bool _watchAppOfflineEnabled;
    _Bool _watchIntegrationSignalEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTWatchConnectivitySession *_watchConnectivitySession;
    NSUserDefaults *_userDefaults;
    id <SPTProductState> _productState;
    id <SPTExternalIntegrationDebugLog> _debugLog;
    id <SPTFeatureFlagSignal> _watchAccessoryLoggingEnabledSignal;
    id <SPTFeatureFlagSignal> _watchIntegrationEnabledSignal;
    id <SPTFeatureFlagSignal> _streamingEnabledSignal;
    id <SPTFeatureFlagSignal> _watchAppLibraryEnabledSignal;
    id <SPTFeatureFlagSignal> _watchAppLibraryOnboardingEnabledSignal;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> watchAppLibraryOnboardingEnabledSignal; // @synthesize watchAppLibraryOnboardingEnabledSignal=_watchAppLibraryOnboardingEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> watchAppLibraryEnabledSignal; // @synthesize watchAppLibraryEnabledSignal=_watchAppLibraryEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> streamingEnabledSignal; // @synthesize streamingEnabledSignal=_streamingEnabledSignal;
@property(nonatomic, getter=isWatchIntegrationSignalEnabled) _Bool watchIntegrationSignalEnabled; // @synthesize watchIntegrationSignalEnabled=_watchIntegrationSignalEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> watchIntegrationEnabledSignal; // @synthesize watchIntegrationEnabledSignal=_watchIntegrationEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> watchAccessoryLoggingEnabledSignal; // @synthesize watchAccessoryLoggingEnabledSignal=_watchAccessoryLoggingEnabledSignal;
@property(readonly, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) __weak SPTWatchConnectivitySession *watchConnectivitySession; // @synthesize watchConnectivitySession=_watchConnectivitySession;
@property(readonly, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, nonatomic, getter=isWatchAppOfflineEnabled) _Bool watchAppOfflineEnabled; // @synthesize watchAppOfflineEnabled=_watchAppOfflineEnabled;
@property(readonly, nonatomic, getter=isWatchAppLibraryOnboardingEnabled) _Bool watchAppLibraryOnboardingEnabled; // @synthesize watchAppLibraryOnboardingEnabled=_watchAppLibraryOnboardingEnabled;
@property(readonly, nonatomic, getter=isWatchAppLibraryEnabled) _Bool watchAppLibraryEnabled; // @synthesize watchAppLibraryEnabled=_watchAppLibraryEnabled;
@property(readonly, nonatomic, getter=isWatchAppStreamingEnabled) _Bool watchAppStreamingEnabled; // @synthesize watchAppStreamingEnabled=_watchAppStreamingEnabled;
@property(readonly, nonatomic, getter=isWatchIntegrationEnabled) _Bool watchIntegrationEnabled; // @synthesize watchIntegrationEnabled=_watchIntegrationEnabled;
@property(readonly, nonatomic, getter=isWatchAccessoryLoggingEnabled) _Bool watchAccessoryLoggingEnabled; // @synthesize watchAccessoryLoggingEnabled=_watchAccessoryLoggingEnabled;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isShowsCollectionFeatureEnabled) _Bool showsCollectionFeatureEnabled;
- (void)applicationStateChanged;
- (void)sessionWatchStateDidChange:(id)arg1;
- (void)sessionReachabilityDidChange:(id)arg1;
- (void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)setWatchAppOfflineEnabled:(_Bool)arg1;
- (void)setWatchAppLibraryOnboardingEnabled:(_Bool)arg1;
- (void)setWatchAppLibraryEnabled:(_Bool)arg1;
- (void)setWatchAppStreamingEnabled:(_Bool)arg1;
- (void)setWatchAccessoryLoggingEnabled:(_Bool)arg1;
- (void)setWatchIntegrationEnabled:(_Bool)arg1;
- (void)evaluateWatchAppOfflineEnabled;
- (void)evaluateWatchIntegrationEnabledState;
- (void)initFlagSignals;
- (id)initWithFeatureFlagFactory:(id)arg1 remoteConfigurationResolver:(id)arg2 watchConnectivityManager:(id)arg3 userDefaults:(id)arg4 productState:(id)arg5 externalIntegrationDebugLog:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

