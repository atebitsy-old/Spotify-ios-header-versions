//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTNowPlayingTestManager-Protocol.h"

@class NSString, SPTNowPlayingFeatureProperties, SPTNowPlayingScrollConfiguration, SPTObserverManager;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal;

@interface SPTNowPlayingTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTNowPlayingTestManager>
{
    _Bool _freeTierEnabled;
    _Bool _localBansEnabled;
    _Bool _contextAwareEditorialTrackSharingEnabled;
    _Bool _isNowPlayingBarLyricsLabelEnabled;
    _Bool _isContentLayerLyricsButtonEnabled;
    _Bool _isContentLayerLyricsTabEnabled;
    _Bool _isLyricsUpsellPopupEnabled;
    SPTNowPlayingFeatureProperties *_remoteConfigurationProperties;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    SPTObserverManager *_observerManager;
    id <SPTFeatureFlagSignal> _contextAwareEditorialTrackSharingSignal;
    SPTNowPlayingScrollConfiguration *_scrollConfiguration;
    id <SPTFeatureFlagSignal> _lyricsNPBLabelSignal;
    id <SPTFeatureFlagSignal> _lyricsContentLayerButtonSignal;
    id <SPTFeatureFlagSignal> _contentLayerLyricsTabSignal;
    id <SPTFeatureFlagSignal> _lyricsUpsellPopupSignal;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLyricsUpsellPopupEnabled; // @synthesize isLyricsUpsellPopupEnabled=_isLyricsUpsellPopupEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> lyricsUpsellPopupSignal; // @synthesize lyricsUpsellPopupSignal=_lyricsUpsellPopupSignal;
@property(nonatomic) _Bool isContentLayerLyricsTabEnabled; // @synthesize isContentLayerLyricsTabEnabled=_isContentLayerLyricsTabEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> contentLayerLyricsTabSignal; // @synthesize contentLayerLyricsTabSignal=_contentLayerLyricsTabSignal;
@property(nonatomic) _Bool isContentLayerLyricsButtonEnabled; // @synthesize isContentLayerLyricsButtonEnabled=_isContentLayerLyricsButtonEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> lyricsContentLayerButtonSignal; // @synthesize lyricsContentLayerButtonSignal=_lyricsContentLayerButtonSignal;
@property(nonatomic) _Bool isNowPlayingBarLyricsLabelEnabled; // @synthesize isNowPlayingBarLyricsLabelEnabled=_isNowPlayingBarLyricsLabelEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> lyricsNPBLabelSignal; // @synthesize lyricsNPBLabelSignal=_lyricsNPBLabelSignal;
@property(nonatomic, getter=isContextAwareEditorialTrackSharingEnabled) _Bool contextAwareEditorialTrackSharingEnabled; // @synthesize contextAwareEditorialTrackSharingEnabled=_contextAwareEditorialTrackSharingEnabled;
@property(retain, nonatomic) SPTNowPlayingScrollConfiguration *scrollConfiguration; // @synthesize scrollConfiguration=_scrollConfiguration;
@property(nonatomic, getter=isLocalBansEnabled) _Bool localBansEnabled; // @synthesize localBansEnabled=_localBansEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> contextAwareEditorialTrackSharingSignal; // @synthesize contextAwareEditorialTrackSharingSignal=_contextAwareEditorialTrackSharingSignal;
@property(nonatomic, getter=isFreeTierEnabled) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, nonatomic) SPTNowPlayingFeatureProperties *remoteConfigurationProperties; // @synthesize remoteConfigurationProperties=_remoteConfigurationProperties;
- (void)updateCurrentScrollConfiguration;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (_Bool)isPodcast:(id)arg1;
@property(readonly, nonatomic, getter=isShowsFormatContextAwareSharingEnabled) _Bool showsFormatContextAwareSharingEnabled;
- (void)createContextAwareEditorialTrackSharingSignal;
- (void)setupLyricsUpsellPopupSignal;
- (void)setupContentLayerLyricsTabSignal;
- (void)setupLyricsInNPVContentLayer;
- (void)setupLyricsNowPlayingBarLabel;
@property(readonly, nonatomic, getter=isContentLayerVideoTabEnabled) _Bool videoTabEnabled;
@property(readonly, nonatomic, getter=isPrideAnimatedHeartEnabled) _Bool prideAnimatedHeartEnabled;
@property(readonly, nonatomic, getter=isAnimatedHeartEnabled) _Bool animatedHeartEnabled;
@property(readonly, nonatomic, getter=isRemoteControlEventLoggingEnabled) _Bool remoteControlEventLoggingEnabled;
@property(readonly, nonatomic, getter=isRemoteControlEventSubtypeDeprecationEnabled) _Bool remoteControlEventSubtypeDeprecationEnabled;
@property(readonly, nonatomic, getter=isMixedMediaEpisodeModeEnabled) _Bool mixedMediaEpisodeModeEnabled;
- (_Bool)isSamplesTestEnabled;
- (_Bool)isPodcastInspectorTestEnabled;
- (void)setupRemoteConfiguration;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1 freeTierEnabledSignal:(id)arg2 localSettings:(id)arg3 remoteConfigurationResolver:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

