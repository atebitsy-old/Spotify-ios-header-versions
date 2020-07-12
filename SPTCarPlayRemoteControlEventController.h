//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationCollectionControllerObserver-Protocol.h"
#import "SPTNowPlayingRemoteControlEventPolicyController-Protocol.h"

@class MPRemoteCommandCenter, NSString, NSTimer, SPTAccessory, SPTCarPlayFeatureProperties;
@protocol SPTAccessoryActionLogger, SPTExternalIntegrationPlatform, SPTNowPlayingRemoteControlEventPolicyControllerDelegate, SPTNowPlayingRemoteControlPolicy;

@interface SPTCarPlayRemoteControlEventController : NSObject <SPTExternalIntegrationCollectionControllerObserver, SPTNowPlayingRemoteControlEventPolicyController>
{
    NSTimer *_seekTimer;
    _Bool _activeForRemoteControlPolicyUpdates;
    id <SPTNowPlayingRemoteControlEventPolicyControllerDelegate> _delegate;
    id <SPTExternalIntegrationPlatform> _externalIntegrationPlatform;
    id <SPTAccessoryActionLogger> _actionLogger;
    SPTAccessory *_accessory;
    NSString *_accessorySessionId;
    MPRemoteCommandCenter *_remoteCommandCenter;
    SPTCarPlayFeatureProperties *_properties;
    id <SPTNowPlayingRemoteControlPolicy> _remoteControlPolicy;
    long long _eventControllerPriority;
}

- (void).cxx_destruct;
@property(nonatomic) long long eventControllerPriority; // @synthesize eventControllerPriority=_eventControllerPriority;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
@property(readonly, nonatomic) SPTCarPlayFeatureProperties *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) MPRemoteCommandCenter *remoteCommandCenter; // @synthesize remoteCommandCenter=_remoteCommandCenter;
@property(readonly, nonatomic) NSString *accessorySessionId; // @synthesize accessorySessionId=_accessorySessionId;
@property(readonly, nonatomic) SPTAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) id <SPTAccessoryActionLogger> actionLogger; // @synthesize actionLogger=_actionLogger;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlatform> externalIntegrationPlatform; // @synthesize externalIntegrationPlatform=_externalIntegrationPlatform;
@property(nonatomic) __weak id <SPTNowPlayingRemoteControlEventPolicyControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isActiveForRemoteControlPolicyUpdates) _Bool activeForRemoteControlPolicyUpdates; // @synthesize activeForRemoteControlPolicyUpdates=_activeForRemoteControlPolicyUpdates;
- (id)eventSourceIdentifierForEvent:(id)arg1;
- (id)externalActionOriginForEvent:(id)arg1;
- (_Bool)shouldSeekToBeginning;
- (_Bool)isPodcastContext;
- (void)performSkipToPreviousWithCommandEvent:(id)arg1;
- (void)perfromSkipToNextWithCommandEvent:(id)arg1;
- (_Bool)shouldSkip15sInsteadOfChangingTrackForEvent:(id)arg1;
- (_Bool)shouldCommandEventOverrideCustomPodcastSkipBehaviour:(id)arg1;
- (void)didReceiveUpdatedCollectionNotification;
- (void)externalIntegrationCollectionController:(id)arg1 didReceiveNewCollectionStateForCurrentTrack:(_Bool)arg2;
- (long long)doNothing:(id)arg1;
- (long long)changePlaybackRateCommandPressed:(id)arg1;
- (long long)shuffleTypeFollowingCurrentShuffleType:(long long)arg1;
- (long long)shuffleButtonPressed:(id)arg1;
- (long long)repeatTypeFollowingCurrentRepeatType:(long long)arg1;
- (long long)repeatButtonPressed:(id)arg1;
- (long long)addToCollectionPressed:(id)arg1;
- (long long)dislikeButtonPressed:(id)arg1;
- (long long)likeButtonPressed:(id)arg1;
- (long long)handleChangePlaybackPosition:(id)arg1;
- (void)seekForward;
- (void)seekBackward;
- (long long)handleSeekForwardCommand:(id)arg1;
- (long long)handleSeekBackwardCommand:(id)arg1;
- (long long)handleSkipForward:(id)arg1;
- (long long)handleSkipBackward:(id)arg1;
- (long long)handlePreviousTrackCommand:(id)arg1;
- (long long)handleNextTrackCommand:(id)arg1;
- (long long)handlePauseCommand:(id)arg1;
- (long long)handlePlayCommand:(id)arg1;
- (long long)handleTogglePlayPause:(id)arg1;
- (void)setupAddToCollectionCommand:(id)arg1;
- (void)applyPolicyToCommand:(id)arg1 shouldBeAvailable:(_Bool)arg2 shouldBeEnabled:(_Bool)arg3 action:(SEL)arg4;
- (void)applyRemoteControlPolicy:(id)arg1;
- (void)disableAllRemoteCommandsAndUnsubscribeEventHandlers;
- (void)updateRemoteControlCenterWithPolicy:(id)arg1;
- (long long)priorityForUpdatingRemoteControlPolicy;
- (void)disconnectedFromCarPlay;
- (void)connectedToCarPlay;
- (void)dealloc;
- (id)initWithExternalIntegrationPlatform:(id)arg1 remoteCommandCenter:(id)arg2 featureProperties:(id)arg3 actionLogger:(id)arg4 accessory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

