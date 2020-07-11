//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCarDetectionStateObserver-Protocol.h"
#import "SPTCarDetector-Protocol.h"

@class NSArray, NSString, SPTCarDetectionState, SPTObserverManager;

@interface SPTCarDetectorMiddleware : NSObject <SPTCarDetectionStateObserver, SPTCarDetector>
{
    NSArray *_carDetectors;
    SPTObserverManager *_observerProxy;
    SPTCarDetectionState *_currentState;
}

@property(retain, nonatomic) SPTCarDetectionState *currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) SPTObserverManager *observerProxy; // @synthesize observerProxy=_observerProxy;
@property(readonly, nonatomic) NSArray *carDetectors; // @synthesize carDetectors=_carDetectors;
- (void).cxx_destruct;
- (void)removeObserverToAllDetectors;
- (void)addObserverToAllDetectors;
- (id)checkMiddlewareCarDetectionStateFromUnderlyingDetectors;
- (void)carDetector:(id)arg1 carDetectionStateDidChange:(id)arg2;
- (void)notifyCarDetectionStateChanged:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithCarDetectorsArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

