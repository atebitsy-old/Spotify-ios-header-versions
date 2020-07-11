//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVolumeRemoteController-Protocol.h"

@class NSNumber, NSString, SPTVolumeCosmosResolver;
@protocol SPTGaiaConnectAPI, SPTGaiaDeviceProtocol, SPTVolumeRemoteDelegate;

@interface SPTVolumeConnectController : NSObject <SPTVolumeRemoteController>
{
    id <SPTVolumeRemoteDelegate> delegate;
    SPTVolumeCosmosResolver *_resolver;
    id <SPTGaiaConnectAPI> _connectManager;
    double _cachedVolume;
    id <SPTGaiaDeviceProtocol> _cachedDevice;
}

@property(retain, nonatomic) id <SPTGaiaDeviceProtocol> cachedDevice; // @synthesize cachedDevice=_cachedDevice;
@property(nonatomic) double cachedVolume; // @synthesize cachedVolume=_cachedVolume;
@property(readonly, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) SPTVolumeCosmosResolver *resolver; // @synthesize resolver=_resolver;
@property(nonatomic) __weak id <SPTVolumeRemoteDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) double volumeStep; // @dynamic volumeStep;
- (void)sendVolumeUpdate:(double)arg1;
@property(readonly, nonatomic) NSNumber *lastKnownVolumeForActiveDevice;
@property(readonly, nonatomic) _Bool activeDeviceSupportsVolume;
@property(readonly, nonatomic) _Bool isActive;
- (_Bool)isVolumeCacheValid;
- (void)cacheVolumeForActiveDevice:(double)arg1;
- (void)didReceiveRemoteVolume:(double)arg1;
- (void)startObservingRemoteVolume;
- (id)initWithResolver:(id)arg1 connectManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

