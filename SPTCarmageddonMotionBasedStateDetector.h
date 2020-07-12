//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCarmageddonCarDetector-Protocol.h"
#import "SPTCarmageddonMotionManagerDelegate-Protocol.h"

@class NSMutableArray, NSNotificationCenter, NSString, NSTimer, SPTCarmageddonCarDetectionState, SPTCarmageddonMotionDetectionLoader, SPTCarmageddonMotionManager, SPTObserverManager;
@protocol SPTCarmageddonMotionBasedStateDetectorDelegate;

@interface SPTCarmageddonMotionBasedStateDetector : NSObject <SPTCarmageddonMotionManagerDelegate, SPTCarmageddonCarDetector>
{
    _Bool _observing;
    id <SPTCarmageddonMotionBasedStateDetectorDelegate> _delegate;
    SPTCarmageddonMotionManager *_motionManager;
    SPTCarmageddonMotionDetectionLoader *_dataLoader;
    NSNotificationCenter *_notificationCenter;
    double _recordingDelay;
    SPTObserverManager *_observerProxy;
    SPTCarmageddonCarDetectionState *_currentState;
    NSTimer *_delayedRecordingTimer;
    NSMutableArray *_sensorsResults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sensorsResults; // @synthesize sensorsResults=_sensorsResults;
@property(retain, nonatomic) NSTimer *delayedRecordingTimer; // @synthesize delayedRecordingTimer=_delayedRecordingTimer;
@property(retain, nonatomic) SPTCarmageddonCarDetectionState *currentState; // @synthesize currentState=_currentState;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(readonly, nonatomic) SPTObserverManager *observerProxy; // @synthesize observerProxy=_observerProxy;
@property(readonly, nonatomic) double recordingDelay; // @synthesize recordingDelay=_recordingDelay;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTCarmageddonMotionDetectionLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) SPTCarmageddonMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) __weak id <SPTCarmageddonMotionBasedStateDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)motionManagerDidFinishProcessingAllRequestedBatches:(id)arg1;
- (void)motionManager:(id)arg1 didFinishBatchRecordingWithResult:(id)arg2;
- (void)predictCarmageddonStateForMotionData:(id)arg1;
- (void)startRecordingSensorData;
- (_Bool)audioSourceChangedFromAUXLineoutToIrrelevantWithNewPort:(id)arg1 oldPort:(id)arg2;
- (_Bool)audioSourceChangedFromIrrelevantToAUXLineoutWithNewPort:(id)arg1 oldPort:(id)arg2;
- (_Bool)isAudioSourceAUXLineoutWithPort:(id)arg1;
- (id)getOldOutputPortFromNotification:(id)arg1;
- (void)stopRecording;
- (void)configureDelayedRecording;
- (void)audioRouteChanged:(id)arg1;
- (void)updateWithState:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)endObservingCarDetectionState;
- (void)beginObservingCarDetectionState;
- (void)stopSamplingSensorsManually;
- (void)startSamplingSensorsManually;
- (id)initWithMotionManager:(id)arg1 dataLoader:(id)arg2 notificationCenter:(id)arg3 recordingDelay:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

