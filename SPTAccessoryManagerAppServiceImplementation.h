//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccessoryManagerService-Protocol.h"

@class NSString, SPTAccessoryDetector, SPTAccessoryEndStreamTracker, SPTAccessoryManagerLogging, SPTAccessoryStateManagerImplementation, SPTAllocationContext;
@protocol SPTContainerService, SPTCrashReporterService, SPTExternalIntegrationDebugLogService, SPTNetworkService;

@interface SPTAccessoryManagerAppServiceImplementation : NSObject <SPTAccessoryManagerService>
{
    SPTAccessoryStateManagerImplementation *_stateManager;
    SPTAccessoryManagerLogging *_logger;
    SPTAccessoryEndStreamTracker *_endStreamTracker;
    SPTAccessoryDetector *_accessoryDetector;
    id <SPTContainerService> _containerService;
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTExternalIntegrationDebugLogService> _debugLogService;
    id <SPTNetworkService> _networkService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTExternalIntegrationDebugLogService> debugLogService; // @synthesize debugLogService=_debugLogService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(retain, nonatomic) SPTAccessoryDetector *accessoryDetector; // @synthesize accessoryDetector=_accessoryDetector;
@property(retain, nonatomic) SPTAccessoryEndStreamTracker *endStreamTracker; // @synthesize endStreamTracker=_endStreamTracker;
@property(retain, nonatomic) SPTAccessoryManagerLogging *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTAccessoryStateManagerImplementation *stateManager; // @synthesize stateManager=_stateManager;
- (void).cxx_destruct;
- (id)provideAccessoryStateManager;
- (void)unloadAccessoryManagerSessionService:(id)arg1;
- (void)loadAccessoryManagerSessionService:(id)arg1;
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

