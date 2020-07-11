//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPForegroundObserverDelegate-Protocol.h"
#import "SPTCanvasLoadStateTrackerObserver-Protocol.h"
#import "SPTCanvasNowPlayingViewStateObserver-Protocol.h"
#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTGaiaConnectObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSString, NSURL, SPForegroundObserver, SPTCanvasLoadStateTracker, SPTCanvasNowPlayingViewState, SPTCanvasTrackCheckerImplementation, SPTPlayerState;
@protocol SPTFeatureFlagSignal, SPTGaiaConnectAPI, SPTLogCenter, SPTPlayerFeature;

@interface SPTCanvasLogger : NSObject <SPForegroundObserverDelegate, SPTFeatureFlagSignalObserver, SPTPlayerObserver, SPTGaiaConnectObserver, SPTCanvasLoadStateTrackerObserver, SPTCanvasNowPlayingViewStateObserver>
{
    _Bool _isPlayingRemotely;
    _Bool _dataSaverEnabled;
    NSString *_currentVisualState;
    id <SPTLogCenter> _logCenter;
    SPTCanvasTrackCheckerImplementation *_trackChecker;
    SPTCanvasLoadStateTracker *_loadStateTracker;
    SPTCanvasNowPlayingViewState *_nowPlayingState;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTGaiaConnectAPI> _connectManager;
    SPForegroundObserver *_foregroundObserver;
    SPTPlayerState *_currentPlayerState;
    NSString *_currentAppState;
    NSString *_currentAudioState;
    NSURL *_currentTrackURI;
    NSString *_currentPageSource;
    id <SPTFeatureFlagSignal> _dataSaverFeatureFlagSignal;
}

+ (id)appStateForForegroundObserver:(id)arg1;
+ (id)logDescriptionForNotification:(id)arg1;
@property(nonatomic, getter=isDataSaverEnabled) _Bool dataSaverEnabled; // @synthesize dataSaverEnabled=_dataSaverEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> dataSaverFeatureFlagSignal; // @synthesize dataSaverFeatureFlagSignal=_dataSaverFeatureFlagSignal;
@property(nonatomic) _Bool isPlayingRemotely; // @synthesize isPlayingRemotely=_isPlayingRemotely;
@property(copy, nonatomic) NSString *currentPageSource; // @synthesize currentPageSource=_currentPageSource;
@property(retain, nonatomic) NSURL *currentTrackURI; // @synthesize currentTrackURI=_currentTrackURI;
@property(retain, nonatomic) NSString *currentAudioState; // @synthesize currentAudioState=_currentAudioState;
@property(retain, nonatomic) NSString *currentAppState; // @synthesize currentAppState=_currentAppState;
@property(retain, nonatomic) SPTPlayerState *currentPlayerState; // @synthesize currentPlayerState=_currentPlayerState;
@property(readonly, nonatomic) SPForegroundObserver *foregroundObserver; // @synthesize foregroundObserver=_foregroundObserver;
@property(readonly, nonatomic) __weak id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(readonly, nonatomic) SPTCanvasNowPlayingViewState *nowPlayingState; // @synthesize nowPlayingState=_nowPlayingState;
@property(readonly, nonatomic) SPTCanvasLoadStateTracker *loadStateTracker; // @synthesize loadStateTracker=_loadStateTracker;
@property(readonly, nonatomic) SPTCanvasTrackCheckerImplementation *trackChecker; // @synthesize trackChecker=_trackChecker;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (id)audioStateForPlayerState:(id)arg1;
- (id)canvasIdForPlayerState:(id)arg1;
- (_Bool)isPlayerStatePlaying:(id)arg1;
- (void)logStateChangeForPlaybackId:(id)arg1 canvasId:(id)arg2 entityUri:(id)arg3 trackTime:(double)arg4 trackTotalTime:(double)arg5 visualState:(id)arg6 audioState:(id)arg7 appFocusState:(id)arg8 loadState:(id)arg9 pageSource:(id)arg10 isRemote:(_Bool)arg11;
- (void)logWithPlayerState:(id)arg1 audioState:(id)arg2;
- (void)logTrackDidEndWithPlayerState:(id)arg1;
- (void)logTrackDidStartWithPlayerState:(id)arg1;
- (void)logWithPlayerState:(id)arg1;
- (void)logCurrentState;
- (_Bool)shouldLogWithPlayerState:(id)arg1;
- (void)connectActiveDeviceDidChange:(id)arg1;
- (void)nowPlayingViewWillDisappear;
- (void)nowPlayingViewWillAppear;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)foregroundObserverDidHibernate:(id)arg1;
- (void)foregroundObserverDidAwake:(id)arg1;
- (void)updateAppStateWithForegroundObserver:(id)arg1;
- (void)loadStateUpdater:(id)arg1 didUpdateforCanvasId:(id)arg2;
- (void)removeObservers;
- (void)addObservers;
@property(retain, nonatomic) NSString *currentVisualState; // @synthesize currentVisualState=_currentVisualState;
- (void)dealloc;
- (id)initWithLogCenter:(id)arg1 canvasTrackChecker:(id)arg2 loadStateTracker:(id)arg3 nowPlayingState:(id)arg4 playerFeature:(id)arg5 connectManager:(id)arg6 dataSaverFeatureFlagSignal:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

