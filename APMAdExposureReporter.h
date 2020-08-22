//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface APMAdExposureReporter : NSObject
{
    NSMutableDictionary *_adUnitCounts;
    NSMutableDictionary *_adUnitStartTimes;
    double _adExposureStartTime;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _reportingEnabled;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isReportingEnabled) _Bool reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
- (void).cxx_destruct;
- (void)handleAppWillResignActiveWithScreen:(id)arg1;
- (void)handleAppDidBecomeActive;
- (void)handleEngagementTimer:(id)arg1;
- (void)handleScreenDidChangeFromScreen:(id)arg1 toScreen:(id)arg2;
- (void)logAdUnitExposureEventOnSerialQueueWithID:(id)arg1 endTime:(double)arg2 screenParameters:(id)arg3;
- (void)logAdExposureEventOnSerialQueueWithEndTime:(double)arg1 screenParameters:(id)arg2;
- (void)logExposureEventsOnSerialQueueWithEndTime:(double)arg1 screenParameters:(id)arg2;
- (void)logExposureEventsWithScreenParameters:(id)arg1;
- (void)updateStartTimesOnSerialQueue:(double)arg1;
- (double)currentTime;
- (void)endAdUnitExposure:(id)arg1;
- (void)beginAdUnitExposure:(id)arg1;
- (void)dealloc;
- (id)init;

@end

