//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAuthLoginController, SPTConnectivityApplicationScopeConfiguration, SPTConnectivityBackgroundThreadTimerManager;
@protocol SPTConnectivityAsyncScheduler;

@interface SPTConnectivityApplicationScope : NSObject
{
    struct unique_ptr<spotify::connectivity::ApplicationScope, std::__1::default_delete<spotify::connectivity::ApplicationScope>> _cppApplicationScope;
    struct ApplicationScope *_cppApplicationScopePtr;
    struct unique_ptr<spotify::connectivity::objc::impl::SPTConnectivitySchedulerBridge, std::__1::default_delete<spotify::connectivity::objc::impl::SPTConnectivitySchedulerBridge>> _cppSchedulerBridge;
    SPTAuthLoginController *_singletonLoginController;
    SPTConnectivityApplicationScopeConfiguration *_configuration;
    id <SPTConnectivityAsyncScheduler> _defaultScheduler;
    SPTConnectivityBackgroundThreadTimerManager *_backgroundThreadTimerManager;
    id <SPTConnectivityAsyncScheduler> _scheduler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SPTConnectivityAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) SPTConnectivityBackgroundThreadTimerManager *backgroundThreadTimerManager; // @synthesize backgroundThreadTimerManager=_backgroundThreadTimerManager;
@property(retain, nonatomic) id <SPTConnectivityAsyncScheduler> defaultScheduler; // @synthesize defaultScheduler=_defaultScheduler;
@property(retain, nonatomic) SPTConnectivityApplicationScopeConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) SPTAuthLoginController *singletonLoginController; // @synthesize singletonLoginController=_singletonLoginController;
- (id)createAccesspointResolverWithDelegate:(id)arg1;
- (id)createRequestAccounting;
- (id)loginControllerWithConfiguration:(id)arg1 analyticsDelegate:(id)arg2;
@property(readonly, nonatomic) struct Scheduler *cppScheduler;
@property(readonly, nonatomic) struct ApplicationScope *cpp;
- (void)prepareForShutdown;
- (void)destroy;
- (void)dealloc;
- (id)initWithConnectivityApplicationScope:(struct ApplicationScope *)arg1 loginController:(struct LoginController *)arg2 scheduler:(id)arg3 configuration:(id)arg4;
- (id)initWithAnalyticsDelegate:(id)arg1 connectionTypeProvider:(id)arg2 connectivityPolicyProvider:(id)arg3 credentialsStorage:(id)arg4 configuration:(id)arg5;
- (id)initWithScheduler:(id)arg1 analyticsDelegate:(id)arg2 connectionTypeProvider:(id)arg3 connectivityPolicyProvider:(id)arg4 credentialsStorage:(id)arg5 configuration:(id)arg6;

@end

