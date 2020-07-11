//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAuthLoginTaskDelegate-Protocol.h"
#import "SPTAuthSessionDelegate-Protocol.h"
#import "SPTCoreLoginController-Protocol.h"

@class NSString, SPSession, SPTAuthLoginController, SPTAuthLoginTask, SPTAuthSession, SPTConnectivityApplicationScope, SPTConnectivityManager, SPTCoreCreateOptions, SPTCoreSchedulerThread, SPTEventSenderBridge, SPTPreferencesImplementation;
@protocol SPTCoreLoginControllerDelegate, SPTCoreLoginControllerLoginDelegate, SPTOfflineModeState, SPTSessionBootstrapDelegate;

@interface SPCore : NSObject <SPTAuthSessionDelegate, SPTAuthLoginTaskDelegate, SPTCoreLoginController>
{
    struct unique_ptr<spotify::client::Core, std::__1::default_delete<spotify::client::Core>> _core;
    SPSession *_session;
    id <SPTCoreLoginControllerDelegate> _loginControllerDelegate;
    SPTConnectivityApplicationScope *_connectivityApplicationScope;
    SPTPreferencesImplementation *_preferences;
    SPTConnectivityManager *_connectivityManager;
    id <SPTOfflineModeState> _offlineNotifier;
    SPTAuthLoginController *_loginController;
    SPTAuthSession *_authSession;
    SPTCoreSchedulerThread *_coreScheduler;
    SPTEventSenderBridge *_eventSenderBridge;
    SPSession *_internalSession;
    SPTCoreCreateOptions *_createOptions;
    id <SPTSessionBootstrapDelegate> _bootstrapDelegate;
    id <SPTCoreLoginControllerLoginDelegate> _currentLoginDelegate;
    SPTAuthLoginTask *_loginTask;
}

+ (id)coreWithCreateOptions:(id)arg1 bootstrapDelegate:(id)arg2 scheduler:(id)arg3 eventSender:(id)arg4 error:(id *)arg5;
+ (id)coreWithCreateOptions:(id)arg1 bootstrapDelegate:(id)arg2 scheduler:(id)arg3 error:(id *)arg4;
+ (id)coreWithCreateOptions:(id)arg1 scheduler:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) SPTAuthLoginTask *loginTask; // @synthesize loginTask=_loginTask;
@property(nonatomic) __weak id <SPTCoreLoginControllerLoginDelegate> currentLoginDelegate; // @synthesize currentLoginDelegate=_currentLoginDelegate;
@property(nonatomic) __weak id <SPTSessionBootstrapDelegate> bootstrapDelegate; // @synthesize bootstrapDelegate=_bootstrapDelegate;
@property(retain, nonatomic) SPTCoreCreateOptions *createOptions; // @synthesize createOptions=_createOptions;
@property(retain, nonatomic) SPSession *internalSession; // @synthesize internalSession=_internalSession;
@property(retain, nonatomic) SPTEventSenderBridge *eventSenderBridge; // @synthesize eventSenderBridge=_eventSenderBridge;
@property(retain, nonatomic) SPTCoreSchedulerThread *coreScheduler; // @synthesize coreScheduler=_coreScheduler;
@property(retain, nonatomic) SPTAuthSession *authSession; // @synthesize authSession=_authSession;
@property(nonatomic) __weak SPTAuthLoginController *loginController; // @synthesize loginController=_loginController;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(retain, nonatomic) SPTConnectivityManager *connectivityManager; // @synthesize connectivityManager=_connectivityManager;
@property(retain, nonatomic) SPTPreferencesImplementation *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) SPTConnectivityApplicationScope *connectivityApplicationScope; // @synthesize connectivityApplicationScope=_connectivityApplicationScope;
@property(nonatomic) __weak id <SPTCoreLoginControllerDelegate> loginControllerDelegate; // @synthesize loginControllerDelegate=_loginControllerDelegate;
@property(retain, nonatomic) SPSession *session; // @synthesize session=_session;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createAccesspointResolverWithDelegate:(id)arg1;
- (id)createRequestAccounting;
- (void)notifyLogoutOnMainThread;
- (void)onLoginSuccess;
- (void)notifyLoginSuccessOnMainThread;
- (id)legacyErrorForErrorCode:(const struct error_code *)arg1;
- (id)legacyErrorForError:(id)arg1;
- (id)errorForErrorCode:(const struct error_code *)arg1 description:(const basic_string_90719d97 *)arg2;
- (void)teardownServices;
- (void)destroySession;
- (void)onLogout;
- (void)onLoginSuccess:(id)arg1;
- (void)flushCaches;
- (void)setRememberMeModeForUsername:(id)arg1 rememberMe:(_Bool)arg2;
- (void)prepareForShutdown;
- (void)eraseOfflineUser:(id)arg1;
- (void)forgetStoredCredentials;
- (_Bool)hasStoredCredentials;
- (id)serializableCredentialsAndCanonicalUsername:(id *)arg1;
- (id)storedCredentialsAndCanonicalUsername:(id *)arg1;
- (void)loginWithCredentials:(id)arg1 options:(id)arg2;
- (void)loginWithAppleSignInCredential:(id)arg1 options:(id)arg2;
- (void)loginWithParentChildCredential:(id)arg1 options:(id)arg2;
- (void)loginWithOneTimeTokenCredential:(id)arg1 options:(id)arg2;
- (void)loginWithPhoneNumberIdentifier:(id)arg1 options:(id)arg2;
- (void)loginWithTask:(id)arg1;
- (void)notifyChallengeSucceededWithSignupInformation:(id)arg1;
- (void)notifyChallengeReceivedWithCode:(id)arg1;
- (void)notifyFailureWithErrorCode:(struct error_code)arg1 description:(basic_string_90719d97)arg2;
- (void)loginTask:(id)arg1 didRequireBootstrapUsingWebgateSession:(id)arg2 completionCallback:(CDUnknownBlockType)arg3;
- (void)loginTask:(id)arg1 didFailWithError:(struct LoginFailure *)arg2;
- (void)loginTask:(id)arg1 didRequireSignup:(id)arg2;
- (void)loginTask:(id)arg1 didRequireCode:(id)arg2;
- (void)loginTask:(id)arg1 didFinishWithSession:(id)arg2;
- (void)loginTask:(id)arg1 didFinishWithWebgateSession:(id)arg2;
- (void)session:(id)arg1 didReloginWithError:(const struct error_code *)arg2 description:(id)arg3 isPermanent:(_Bool)arg4;
- (void)session:(id)arg1 didLogoutWithError:(id)arg2;
- (void)respondToBootstrapChallenge:(id)arg1 completionCallback:(CDUnknownBlockType)arg2;
- (struct TimerManager *)mainScheduler;
- (struct Core *)cpp;
- (void)invalidate;
- (void)dealloc;
- (id)initWithCreateOptions:(id)arg1 bootstrapDelegate:(id)arg2 scheduler:(id)arg3 eventSender:(id)arg4 error:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

