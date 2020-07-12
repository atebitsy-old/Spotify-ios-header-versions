//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPSessionObserver-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSString, SPCore, SPSession, SPTObserverManager;
@protocol SPTInAppMessageTriggerConfigurationsPrerequisitesObserver, SPTOfflineModeState;

@interface SPTInAppMessageTriggerConfigurationsPrerequisites : NSObject <SPTOfflineModeStateObserver, SPSessionObserver>
{
    _Bool _satisfied;
    id <SPTOfflineModeState> _offlineState;
    SPTObserverManager *_observerManager;
    SPCore *_core;
    long long _lastLoginMode;
    SPSession *_currentSession;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SPSession *currentSession; // @synthesize currentSession=_currentSession;
@property(nonatomic) long long lastLoginMode; // @synthesize lastLoginMode=_lastLoginMode;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineState; // @synthesize offlineState=_offlineState;
@property(nonatomic, getter=isSatisfied) _Bool satisfied; // @synthesize satisfied=_satisfied;
- (void)sessionLoginModeChanged:(id)arg1;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)checkPrerequisitesSatisfiedState;
- (_Bool)checkClientIsOnline;
- (void)updateSatisfiedState;
@property(readonly, nonatomic) id <SPTInAppMessageTriggerConfigurationsPrerequisitesObserver> observerNotifierProxy;
- (void)removeConfigurationsPrerequisitesObserver:(id)arg1;
- (void)addConfigurationsPrerequisitesObserver:(id)arg1;
- (void)removeSessionObservers;
- (void)dealloc;
- (void)coreSessionChanged;
- (id)initWithOfflineState:(id)arg1 core:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

