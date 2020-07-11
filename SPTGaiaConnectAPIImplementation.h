//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectAPI-Protocol.h"
#import "SPTGaiaConnectManagerObserver-Protocol.h"
#import "SPTGaiaConnectPublicStateCacheObserver-Protocol.h"

@class NSArray, NSString, SPTGaiaConnectPublicStateCache, SPTObserverManager;
@protocol SPTGaiaConnectManager, SPTGaiaDeviceProtocol, SPTGaiaLocalDeviceProtocol;

@interface SPTGaiaConnectAPIImplementation : NSObject <SPTGaiaConnectManagerObserver, SPTGaiaConnectPublicStateCacheObserver, SPTGaiaConnectAPI>
{
    id <SPTGaiaConnectManager> _connectManager;
    SPTGaiaConnectPublicStateCache *_connectStateCache;
    SPTObserverManager *_observers;
}

@property(retain, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) SPTGaiaConnectPublicStateCache *connectStateCache; // @synthesize connectStateCache=_connectStateCache;
@property(readonly, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
- (void).cxx_destruct;
- (void)connectDidChangeCurrentConnectionType:(id)arg1;
- (void)connectDidChangeRemoteConnectionState:(id)arg1;
- (void)connectDidChangeActiveDeviceName:(id)arg1;
- (void)connectDidChangeAvailable:(id)arg1;
- (void)connectManager:(id)arg1 deviceBeingActivatedDidChange:(id)arg2;
- (void)connectManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)connectManager:(id)arg1 availableDevicesDidChange:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)discoverDevices;
- (void)renameDevice:(id)arg1 name:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)deactivateActiveDeviceWithResponseBlock:(CDUnknownBlockType)arg1;
- (void)activateDevice:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (id)findDeviceWithPhysicalIdentifier:(id)arg1;
- (id)findDeviceWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *activeDeviceDisplayName;
@property(readonly, nonatomic) long long connectionState;
@property(readonly, nonatomic) long long activeConnectionType;
@property(readonly, nonatomic) _Bool canConnectToAnyDevice;
@property(readonly, nonatomic) id <SPTGaiaDeviceProtocol> deviceBeingActivated;
@property(readonly, nonatomic) id <SPTGaiaLocalDeviceProtocol> localDevice;
@property(readonly, nonatomic) id <SPTGaiaDeviceProtocol> activeDevice;
@property(readonly, nonatomic) NSArray *devices;
- (void)dealloc;
- (id)initWithConnectManager:(id)arg1 connectStateCache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

