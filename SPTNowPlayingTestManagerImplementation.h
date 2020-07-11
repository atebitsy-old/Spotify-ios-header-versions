//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTNowPlayingTestManager-Protocol.h"

@class NSString, SPTNowPlayingFeatureProperties, SPTNowPlayingScrollConfiguration, SPTObserverManager;
@protocol SPTAbbaFeatureFlags, SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTLocalSettings;

@interface SPTNowPlayingTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTNowPlayingTestManager>
{
    _Bool _freeTierEnabled;
    _Bool _localBansEnabled;
    _Bool _noSkipLimitEnabled;
    _Bool _musicSleepTimerEnabled;
    _Bool _nowPlayingBarImprovementsEnabled;
    _Bool _contextAwareEditorialTrackSharingEnabled;
    _Bool _pivotsTestEnabled;
    _Bool _feedbackCardsTestEnabled;
    _Bool _podcastChaptersTestEnabled;
    _Bool _concertCardsTestEnabled;
    SPTNowPlayingFeatureProperties *_remoteConfigurationProperties;
    id <SPTAbbaFeatureFlags> _featureFlags;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    SPTObserverManager *_observerManager;
    id <SPTFeatureFlagSignal> _scrollPivotsSignal;
    id <SPTFeatureFlagSignal> _feedbackCardsSignal;
    id <SPTFeatureFlagSignal> _contextAwareEditorialTrackSharingSignal;
    id <SPTFeatureFlagSignal> _podcastChaptersSignal;
    id <SPTFeatureFlagSignal> _concertCardsSignal;
    id <SPTFeatureFlagSignal> _noSkipLimitEnabledSignal;
    id <SPTFeatureFlagSignal> _musicSleepTimerSignal;
    id <SPTFeatureFlagSignal> _nowPlayingBarImprovementsSignal;
    id <SPTLocalSettings> _localSettings;
    SPTNowPlayingScrollConfiguration *_scrollConfiguration;
}

@property(nonatomic) _Bool concertCardsTestEnabled; // @synthesize concertCardsTestEnabled=_concertCardsTestEnabled;
@property(nonatomic) _Bool podcastChaptersTestEnabled; // @synthesize podcastChaptersTestEnabled=_podcastChaptersTestEnabled;
@property(nonatomic) _Bool feedbackCardsTestEnabled; // @synthesize feedbackCardsTestEnabled=_feedbackCardsTestEnabled;
@property(nonatomic) _Bool pivotsTestEnabled; // @synthesize pivotsTestEnabled=_pivotsTestEnabled;
@property(nonatomic, getter=isContextAwareEditorialTrackSharingEnabled) _Bool contextAwareEditorialTrackSharingEnabled; // @synthesize contextAwareEditorialTrackSharingEnabled=_contextAwareEditorialTrackSharingEnabled;
@property(retain, nonatomic) SPTNowPlayingScrollConfiguration *scrollConfiguration; // @synthesize scrollConfiguration=_scrollConfiguration;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> nowPlayingBarImprovementsSignal; // @synthesize nowPlayingBarImprovementsSignal=_nowPlayingBarImprovementsSignal;
@property(nonatomic, getter=isNowPlayingBarImprovementsEnabled) _Bool nowPlayingBarImprovementsEnabled; // @synthesize nowPlayingBarImprovementsEnabled=_nowPlayingBarImprovementsEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> musicSleepTimerSignal; // @synthesize musicSleepTimerSignal=_musicSleepTimerSignal;
@property(nonatomic, getter=isMusicSleepTimerEnabled) _Bool musicSleepTimerEnabled; // @synthesize musicSleepTimerEnabled=_musicSleepTimerEnabled;
@property(nonatomic, getter=isNoSkipLimitEnabled) _Bool noSkipLimitEnabled; // @synthesize noSkipLimitEnabled=_noSkipLimitEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> noSkipLimitEnabledSignal; // @synthesize noSkipLimitEnabledSignal=_noSkipLimitEnabledSignal;
@property(nonatomic, getter=isLocalBansEnabled) _Bool localBansEnabled; // @synthesize localBansEnabled=_localBansEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> concertCardsSignal; // @synthesize concertCardsSignal=_concertCardsSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> podcastChaptersSignal; // @synthesize podcastChaptersSignal=_podcastChaptersSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> contextAwareEditorialTrackSharingSignal; // @synthesize contextAwareEditorialTrackSharingSignal=_contextAwareEditorialTrackSharingSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> feedbackCardsSignal; // @synthesize feedbackCardsSignal=_feedbackCardsSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> scrollPivotsSignal; // @synthesize scrollPivotsSignal=_scrollPivotsSignal;
@property(nonatomic, getter=isFreeTierEnabled) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) SPTNowPlayingFeatureProperties *remoteConfigurationProperties; // @synthesize remoteConfigurationProperties=_remoteConfigurationProperties;
- (void).cxx_destruct;
- (void)updateCurrentScrollConfiguration;
- (void)updateEnabledScrollFlagsWithEnabledSignal:(id)arg1;
- (_Bool)isScrollSignal:(id)arg1;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (_Bool)isPodcast:(id)arg1;
@property(readonly, nonatomic, getter=isShowsFormatContextAwareSharingEnabled) _Bool showsFormatContextAwareSharingEnabled;
- (void)createContextAwareEditorialTrackSharingSignal;
- (void)createFeedbackCardsSignal;
- (void)createScrollPivotsSignal;
- (void)createConcertCardsSignal;
- (void)createPodcastChaptersSignal;
- (void)createNowPlayingBarImprovementsSignal;
- (void)createMusicSleepTimerSignal;
- (void)createNoSkipLimitSignal;
@property(readonly, nonatomic, getter=isRemoteControlEventSubtypeDeprecationEnabled) _Bool remoteControlEventSubtypeDeprecationEnabled;
- (_Bool)isSamplesTestEnabled;
- (_Bool)isPodcastInspectorTestEnabled;
- (void)setupRemoteConfiguration;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithAbbaFeatureFlags:(id)arg1 featureFlagFactory:(id)arg2 freeTierEnabledSignal:(id)arg3 localSettings:(id)arg4 remoteConfigurationResolver:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

