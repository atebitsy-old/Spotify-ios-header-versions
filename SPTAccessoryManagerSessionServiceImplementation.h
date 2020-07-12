//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccessoryManagerSessionService-Protocol.h"

@class NSString, SPTAccessoryActionLoggerImplementation, SPTAccessoryManagerAppServiceImplementation, SPTAllocationContext;
@protocol GaiaFeature, SPTPlayerFeature, SPTRemoteConfigurationResolver, SPTRemoteConfigurationService, SPTSessionService, SPTUBIService;

@interface SPTAccessoryManagerSessionServiceImplementation : NSObject <SPTAccessoryManagerSessionService>
{
    id <SPTPlayerFeature> _playerFeature;
    id <GaiaFeature> _gaiaFeature;
    id <SPTSessionService> _sessionService;
    SPTAccessoryManagerAppServiceImplementation *_accessoryManagerAppService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTUBIService> _ubiService;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTAccessoryActionLoggerImplementation *_actionLogger;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) SPTAccessoryActionLoggerImplementation *actionLogger; // @synthesize actionLogger=_actionLogger;
@property(readonly, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(readonly, nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(readonly, nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(readonly, nonatomic) __weak SPTAccessoryManagerAppServiceImplementation *accessoryManagerAppService; // @synthesize accessoryManagerAppService=_accessoryManagerAppService;
@property(readonly, nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(readonly, nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
- (id)provideAccessoryActionLogger;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

