//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccessoryStateObserver-Protocol.h"
#import "SPTAppProtocolBackgroundTaskDelegate-Protocol.h"
#import "SPTAudioSessionControllerObserver-Protocol.h"
#import "SPTExternalIntegrationPlaybackControllerObserver-Protocol.h"
#import "SPTGaiaConnectObserver-Protocol.h"

@class NSString, SPTAppProtocolBackgroundTask, SPTAudioSessionActivator, UIApplication;
@protocol SPTAccessoryStateManager, SPTAppProtocolBackgroundControllerDelegate, SPTAudioSessionController, SPTExternalIntegrationPlaybackController, SPTGaiaConnectAPI;

@interface SPTAppProtocolBackgroundController : NSObject <SPTAccessoryStateObserver, SPTAudioSessionControllerObserver, SPTExternalIntegrationPlaybackControllerObserver, SPTAppProtocolBackgroundTaskDelegate, SPTGaiaConnectObserver>
{
    _Bool _appRemoteConnected;
    _Bool _wasPlayingWhenInterruptionBegan;
    _Bool _handlingAudioInterruption;
    id <SPTAppProtocolBackgroundControllerDelegate> _delegate;
    id <SPTAccessoryStateManager> _accessoryStateManager;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    id <SPTAudioSessionController> _audioSessionController;
    id <SPTGaiaConnectAPI> _connectManager;
    UIApplication *_application;
    SPTAudioSessionActivator *_audioSessionActivator;
    SPTAppProtocolBackgroundTask *_backgroundTask;
    SPTAppProtocolBackgroundTask *_shutdownBackgroundTask;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isHandlingAudioInterruption) _Bool handlingAudioInterruption; // @synthesize handlingAudioInterruption=_handlingAudioInterruption;
@property(nonatomic) _Bool wasPlayingWhenInterruptionBegan; // @synthesize wasPlayingWhenInterruptionBegan=_wasPlayingWhenInterruptionBegan;
@property(nonatomic, getter=isAppRemoteConnected) _Bool appRemoteConnected; // @synthesize appRemoteConnected=_appRemoteConnected;
@property(readonly, nonatomic) SPTAppProtocolBackgroundTask *shutdownBackgroundTask; // @synthesize shutdownBackgroundTask=_shutdownBackgroundTask;
@property(readonly, nonatomic) SPTAppProtocolBackgroundTask *backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(retain, nonatomic) SPTAudioSessionActivator *audioSessionActivator; // @synthesize audioSessionActivator=_audioSessionActivator;
@property(readonly, nonatomic) __weak UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) __weak id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) __weak id <SPTAudioSessionController> audioSessionController; // @synthesize audioSessionController=_audioSessionController;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) __weak id <SPTAccessoryStateManager> accessoryStateManager; // @synthesize accessoryStateManager=_accessoryStateManager;
@property(nonatomic) __weak id <SPTAppProtocolBackgroundControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (void)backgroundTaskDidExpire:(id)arg1;
- (void)updateIsAppRemoteConnected;
- (void)accessoryStateManager:(id)arg1 accessoryDidDisconnect:(id)arg2;
- (void)accessoryStateManager:(id)arg1 accessoryDidConnect:(id)arg2;
- (void)connectActiveDeviceDidChange:(id)arg1;
- (void)updateWithPlayerState:(id)arg1;
- (void)externalIntegrationPlaybackController:(id)arg1 didReceiveNewPlayerState:(id)arg2 oldPlayerState:(id)arg3;
- (void)updateHandlingAudioInterruptionStatusWithNotification:(id)arg1 hasBeenHandled:(_Bool)arg2;
- (void)deactivateAudioSession;
- (void)activateAudioSession;
- (_Bool)attemptToReclaimAudioSession;
- (void)audioSessionController:(id)arg1 didFailSettingAudioSessionActive:(_Bool)arg2 error:(id)arg3;
- (void)audioSessionController:(id)arg1 willAttemptLockForAudioSessionConfiguration:(id)arg2;
- (void)audioSessionController:(id)arg1 didFailToHandleInterruptionNotification:(id)arg2 withError:(id)arg3;
- (void)audioSessionController:(id)arg1 didHandleInterruptionNotification:(id)arg2;
- (void)audioSessionController:(id)arg1 willHandleInterruptionNotification:(id)arg2;
- (void)restart;
- (void)shutdown;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 playbackController:(id)arg2 accessoryStateManager:(id)arg3 connectManager:(id)arg4 backgroundTask:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

