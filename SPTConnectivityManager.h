//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConnectivityManager-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, SPTConnectivityAsyncScheduler, SPTConnectivityManagerDelegate;

@interface SPTConnectivityManager : NSObject <SPTConnectivityManager>
{
    struct unique_ptr<spotify::connectivity::ConnectivityManager, std::__1::default_delete<spotify::connectivity::ConnectivityManager>> _connectivityManager;
    struct TimerManager *_timerManager;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct mutex _mutex;
    unsigned long long _nextCallbackTimerId;
    struct unordered_map<unsigned long long, std::__1::shared_ptr<spotify::async::Timer>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::shared_ptr<spotify::async::Timer>>>> _callbackTimers;
    struct scoped_connection _connectivityManagerStateChangeConnection;
    id <SPTConnectivityManagerDelegate> delegate;
    id <SPTConnectivityAsyncScheduler> _scheduler;
}

+ (void)deferCallback:(CDUnknownBlockType)arg1 forConnectivityManager:(id)arg2 callbackQueue:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTConnectivityAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) __weak id <SPTConnectivityManagerDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) struct ConnectivityManager *cpp;
@property _Bool keepAliveAPNetwork;
- (void)setKeepAliveAPNetwork:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setAllowNetwork:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
@property _Bool allowNetwork;
- (void)setAllowSyncOver3G:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
@property _Bool allowSyncOver3G;
- (void)setConnectionType:(long long)arg1 callback:(CDUnknownBlockType)arg2;
@property long long connectionType;
- (void)addDeferedCallback:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)invalidate;
- (id)initWithAnalyticsDelegate:(id)arg1 allowNetwork:(_Bool)arg2 scheduler:(id)arg3 timerManager:(struct TimerManager *)arg4 callbackQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

