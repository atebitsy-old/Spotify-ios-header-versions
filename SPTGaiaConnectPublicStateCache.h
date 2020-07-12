//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectManagerObserver-Protocol.h"
#import "SPTGaiaWirelessRoutesObserver-Protocol.h"
#import "SPTNetworkConnectivityControllerObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSString, SPTCastManager, SPTPlayerState;
@protocol SPTCrashReporter, SPTGaiaConnectManager, SPTGaiaConnectPublicStateCacheObserver, SPTGaiaWirelessRoutesAPI, SPTNetworkConnectivityController, SPTOfflineModeState, SPTPlayer;

@interface SPTGaiaConnectPublicStateCache : NSObject <SPTGaiaWirelessRoutesObserver, SPTNetworkConnectivityControllerObserver, SPTPlayerObserver, SPTGaiaConnectManagerObserver>
{
    _Bool _hasAvailableDevices;
    long long _remoteConnectionState;
    long long _activeConnectionType;
    NSString *_activeDeviceName;
    id <SPTGaiaConnectPublicStateCacheObserver> _delegate;
    id <SPTGaiaConnectManager> _connectManager;
    id <SPTGaiaWirelessRoutesAPI> _wirelessRoutesManager;
    SPTCastManager *_castManager;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    id <SPTPlayer> _player;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTCrashReporter> _crashReporter;
    SPTPlayerState *_playerState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) __weak SPTCastManager *castManager; // @synthesize castManager=_castManager;
@property(readonly, nonatomic) id <SPTGaiaWirelessRoutesAPI> wirelessRoutesManager; // @synthesize wirelessRoutesManager=_wirelessRoutesManager;
@property(readonly, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(nonatomic) __weak id <SPTGaiaConnectPublicStateCacheObserver> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *activeDeviceName; // @synthesize activeDeviceName=_activeDeviceName;
@property(nonatomic) long long activeConnectionType; // @synthesize activeConnectionType=_activeConnectionType;
@property(nonatomic) long long remoteConnectionState; // @synthesize remoteConnectionState=_remoteConnectionState;
@property(nonatomic) _Bool hasAvailableDevices; // @synthesize hasAvailableDevices=_hasAvailableDevices;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (void)dealloc;
- (id)deviceActiveName;
- (_Bool)isActiveDeviceCast;
- (_Bool)deviceIsBeingActivated;
- (_Bool)activeDeviceExists;
- (_Bool)isDeviceBeingActivatedSameAsActive;
- (id)devices;
- (void)wirelessRoutesDidChangeAvailability:(_Bool)arg1;
- (void)wirelessActiveDeviceDidChange;
- (void)connectManager:(id)arg1 deviceBeingActivatedDidChange:(id)arg2;
- (void)connectManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)connectManager:(id)arg1 availableDevicesDidChange:(id)arg2;
- (void)connectManager:(id)arg1 playingRemotelyDidChange:(_Bool)arg2;
- (void)calculateActiveDeviceName;
- (void)calculateActiveConnectionType;
- (void)calculateHasAvailableDevices;
- (void)calculateActive;
- (id)initWithConnectManager:(id)arg1 wirelessRoutesManager:(id)arg2 castManager:(id)arg3 networkConnectivityController:(id)arg4 player:(id)arg5 offlineModeState:(id)arg6 crashReporter:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

