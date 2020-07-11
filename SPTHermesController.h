//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue, SPTConnectivityAsyncScheduler;

@interface SPTHermesController : NSObject
{
    id <SPTConnectivityAsyncScheduler> _scheduler;
    struct TimerManager *_coreScheduler;
    struct HermesHandler *_hermesHandler;
    NSObject<OS_dispatch_queue> *_inFlightAccessQueue;
    NSMutableSet *_inFlight;
}

+ (id)hermesControllerWithScheduler:(id)arg1 internalCoreScheduler:(struct TimerManager *)arg2 hermesHandler:(struct HermesHandler *)arg3;
@property(retain, nonatomic) NSMutableSet *inFlight; // @synthesize inFlight=_inFlight;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *inFlightAccessQueue; // @synthesize inFlightAccessQueue=_inFlightAccessQueue;
@property(nonatomic) struct HermesHandler *hermesHandler; // @synthesize hermesHandler=_hermesHandler;
@property(nonatomic) struct TimerManager *coreScheduler; // @synthesize coreScheduler=_coreScheduler;
@property(nonatomic) __weak id <SPTConnectivityAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
- (void)noLongerInFlight:(id)arg1;
- (void)invalidate;
- (id)request:(id)arg1 usingMethod:(id)arg2 payload:(id)arg3 whenDone:(CDUnknownBlockType)arg4;
- (id)request:(id)arg1 usingMethod:(id)arg2 whenDone:(CDUnknownBlockType)arg3;
- (id)initWithScheduler:(id)arg1 internalCoreScheduler:(struct TimerManager *)arg2 hermesHandler:(struct HermesHandler *)arg3;

@end

