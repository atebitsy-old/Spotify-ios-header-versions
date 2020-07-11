//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccessoryStateObserver-Protocol.h"
#import "SPTCarDetector-Protocol.h"

@class NSHashTable, NSString, SPTCarDetectionState;
@protocol SPTAccessoryStateManager, SPTExternalIntegrationDebugLog;

@interface SPTCarDetectionAccessoryBasedCarDetector : NSObject <SPTAccessoryStateObserver, SPTCarDetector>
{
    id <SPTAccessoryStateManager> _accessoryManager;
    NSHashTable *_observers;
    id <SPTExternalIntegrationDebugLog> _debugLog;
    SPTCarDetectionState *_currentState;
}

@property(retain, nonatomic) SPTCarDetectionState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTAccessoryStateManager> accessoryManager; // @synthesize accessoryManager=_accessoryManager;
- (void).cxx_destruct;
- (_Bool)accessoriesContainCar:(id)arg1;
- (void)accessoryStateManager:(id)arg1 accessoryDidDisconnect:(id)arg2;
- (void)accessoryStateManager:(id)arg1 accessoryDidConnect:(id)arg2;
- (void)notifyCarDetectionStateChanged:(id)arg1;
- (void)updateCarDetectionStateWithAccessories:(id)arg1;
- (void)endObservingCarDetectionState;
- (void)beginObservingCarDetectionState;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithAccessoryManager:(id)arg1 debugLog:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

