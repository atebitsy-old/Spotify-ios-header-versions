//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAsyncScheduler-Protocol.h"

@class NSRunLoop, NSThread, NSTimer;

@interface SPTCoreSchedulerThread : NSObject <SPTAsyncScheduler>
{
    struct unique_ptr<spotify::async::TimerManager, std::__1::default_delete<spotify::async::TimerManager>> _cppScheduler;
    NSThread *_coreThread;
    NSTimer *_coreTimer;
    NSRunLoop *_coreRunLoop;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRunLoop *coreRunLoop; // @synthesize coreRunLoop=_coreRunLoop;
@property(retain, nonatomic) NSTimer *coreTimer; // @synthesize coreTimer=_coreTimer;
@property(retain, nonatomic) NSThread *coreThread; // @synthesize coreThread=_coreThread;
- (void)coreTimerFunc:(id)arg1;
- (void)coreTimerNotify;
- (int)runCoreDispatch;
- (void)runBlock:(CDUnknownBlockType)arg1;
- (void)postBlock:(CDUnknownBlockType)arg1;
- (_Bool)isOnSameThread;
- (void)performBlock:(CDUnknownBlockType)arg1 withSelector:(SEL)arg2 synchronous:(_Bool)arg3;
- (void)executeBlockRunner:(id)arg1;
- (void)coreThreadFunc;
- (void)coreSchedulingSetup;
- (struct TimerManager *)cppScheduler;
- (void)interruptAndThen:(CDUnknownBlockType)arg1;
- (void)interrupt;
- (id)init;

@end

