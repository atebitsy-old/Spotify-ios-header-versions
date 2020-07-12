//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVolumeEventReceiver-Protocol.h"
#import "SPTVolumeSynchronizationManager-Protocol.h"

@class NSArray, NSString, SPTObserverManager;

@interface SPTVolumeSynchronizationManagerImplementation : NSObject <SPTVolumeEventReceiver, SPTVolumeSynchronizationManager>
{
    _Bool _shouldSyncRemoteVolume;
    _Bool _appIsActive;
    _Bool _localDeviceIsActive;
    _Bool _remoteLockScreenEnabled;
    _Bool _isBuffering;
    _Bool _interrupted;
    _Bool _localPlaybackEnabled;
    _Bool _systemPopupDisabled;
    _Bool _hasWirelessConnection;
    _Bool _isRecordingAudio;
    NSArray *_volumeEventEmitters;
    SPTObserverManager *_observers;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRecordingAudio; // @synthesize isRecordingAudio=_isRecordingAudio;
@property(nonatomic) _Bool hasWirelessConnection; // @synthesize hasWirelessConnection=_hasWirelessConnection;
@property(nonatomic) _Bool systemPopupDisabled; // @synthesize systemPopupDisabled=_systemPopupDisabled;
@property(nonatomic) _Bool localPlaybackEnabled; // @synthesize localPlaybackEnabled=_localPlaybackEnabled;
@property(nonatomic) _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(nonatomic) _Bool isBuffering; // @synthesize isBuffering=_isBuffering;
@property(nonatomic) _Bool remoteLockScreenEnabled; // @synthesize remoteLockScreenEnabled=_remoteLockScreenEnabled;
@property(nonatomic) _Bool localDeviceIsActive; // @synthesize localDeviceIsActive=_localDeviceIsActive;
@property(nonatomic) _Bool appIsActive; // @synthesize appIsActive=_appIsActive;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSArray *volumeEventEmitters; // @synthesize volumeEventEmitters=_volumeEventEmitters;
@property(nonatomic) _Bool shouldSyncRemoteVolume; // @synthesize shouldSyncRemoteVolume=_shouldSyncRemoteVolume;
@property(readonly, copy) NSString *description;
- (void)eventEmitter:(id)arg1 didEmitEvent:(unsigned long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) _Bool shouldAcceptRemoteVolumeUpdates;
@property(readonly, nonatomic) _Bool shouldConvertVolumeSteps;
@property(readonly, nonatomic) _Bool shouldSendVolumeCommands;
- (_Bool)calculateShouldSyncRemoteVolume;
- (void)updateStateWithEvent:(unsigned long long)arg1;
- (void)setupEmittersDelegate;
- (id)initWithEventEmitters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

