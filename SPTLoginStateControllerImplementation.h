//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCoreLoginControllerDelegate-Protocol.h"
#import "SPTLoginStateController-Protocol.h"

@class NSError, NSString, SPCore, SPTHTTPService, SPTImageLoaderServiceManager, SPTLoginDbManager, SPTLoginDeferredDispatcher, SPTLoginDialogController, SPTLoginErrorDecorator, SPTLoginTestManager, SPTObserverManager, SPTSigninWithAppleHandler, SPTStartupTracer;
@protocol SPTAlertInterface, SPTCrashReporter, SPTLinkDispatcher, SPTLogCenter, SPTLoginKeychainManager, SPTLoginLogger, SPTLoginPhoneNumberLoginStateDelegate, SPTMetaViewController;

@interface SPTLoginStateControllerImplementation : NSObject <SPTCoreLoginControllerDelegate, SPTLoginStateController>
{
    _Bool _userDidSignUp;
    NSError *_lastConnectionError;
    id <SPTLoginPhoneNumberLoginStateDelegate> _phoneNumberLoginDelegate;
    SPCore *_core;
    SPTImageLoaderServiceManager *_imageLoaderServiceManager;
    SPTHTTPService *_httpService;
    id <SPTLogCenter> _logCenter;
    id <SPTCrashReporter> _crashReporter;
    SPTStartupTracer *_startupTracer;
    CDUnknownBlockType _loginDoneBlock;
    CDUnknownBlockType _signupRequiredBlock;
    id <SPTMetaViewController> _metaviewController;
    CDUnknownBlockType _containerLogoutHandler;
    id <SPTLoginKeychainManager> _keychainManager;
    id <SPTAlertInterface> _alertInterface;
    SPTLoginDeferredDispatcher *_deferredErrorDispatcher;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTLoginDialogController *_errorDialogController;
    SPTLoginErrorDecorator *_errorDecorator;
    id <SPTLoginLogger> _loginLogger;
    SPTObserverManager *_observerManager;
    SPTSigninWithAppleHandler *_appleHandler;
    SPTLoginTestManager *_login5TestManager;
    SPTLoginDbManager *_databaseManager;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool userDidSignUp; // @synthesize userDidSignUp=_userDidSignUp;
@property(readonly, nonatomic) SPTLoginDbManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(readonly, nonatomic) SPTLoginTestManager *login5TestManager; // @synthesize login5TestManager=_login5TestManager;
@property(readonly, nonatomic) SPTSigninWithAppleHandler *appleHandler; // @synthesize appleHandler=_appleHandler;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) id <SPTLoginLogger> loginLogger; // @synthesize loginLogger=_loginLogger;
@property(retain, nonatomic) SPTLoginErrorDecorator *errorDecorator; // @synthesize errorDecorator=_errorDecorator;
@property(retain, nonatomic) SPTLoginDialogController *errorDialogController; // @synthesize errorDialogController=_errorDialogController;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTLoginDeferredDispatcher *deferredErrorDispatcher; // @synthesize deferredErrorDispatcher=_deferredErrorDispatcher;
@property(retain, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(retain, nonatomic) id <SPTLoginKeychainManager> keychainManager; // @synthesize keychainManager=_keychainManager;
@property(readonly, nonatomic) CDUnknownBlockType containerLogoutHandler; // @synthesize containerLogoutHandler=_containerLogoutHandler;
@property(retain, nonatomic) id <SPTMetaViewController> metaviewController; // @synthesize metaviewController=_metaviewController;
@property(copy, nonatomic) CDUnknownBlockType signupRequiredBlock; // @synthesize signupRequiredBlock=_signupRequiredBlock;
@property(copy, nonatomic) CDUnknownBlockType loginDoneBlock; // @synthesize loginDoneBlock=_loginDoneBlock;
@property(nonatomic) __weak SPTStartupTracer *startupTracer; // @synthesize startupTracer=_startupTracer;
@property(retain, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) SPTHTTPService *httpService; // @synthesize httpService=_httpService;
@property(retain, nonatomic) SPTImageLoaderServiceManager *imageLoaderServiceManager; // @synthesize imageLoaderServiceManager=_imageLoaderServiceManager;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(nonatomic) __weak id <SPTLoginPhoneNumberLoginStateDelegate> phoneNumberLoginDelegate; // @synthesize phoneNumberLoginDelegate=_phoneNumberLoginDelegate;
@property(retain, nonatomic) NSError *lastConnectionError; // @synthesize lastConnectionError=_lastConnectionError;
- (void)dealloc;
- (void)sessionObserverDidReceiveSiARevocationUpdate;
- (void)sessionObserverDidReceiveAutoUpdate;
- (void)showAutoUpdateAlert;
- (void)reportLoginDoneWithError:(id)arg1;
- (void)reloginWithCredentials:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reloginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)logoutForgetUser:(_Bool)arg1;
- (void)loginWithAppleIDCredentials:(id)arg1 options:(id)arg2 onLoginComplete:(CDUnknownBlockType)arg3 onSignupRequired:(CDUnknownBlockType)arg4;
- (void)loginWithCredentials:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loginWithCredentials:(id)arg1 options:(id)arg2 userDidSignUp:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loginWithStoredCredentials:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loginWithPhoneNumberIdentifier:(id)arg1;
- (void)loginWithOneTimeToken:(id)arg1 options:(id)arg2 userDidSignUp:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notifyServicesOnLoginWithCore:(id)arg1;
- (void)presentCoreReloginError:(id)arg1;
- (id)core:(id)arg1 localizedDescriptionForLoginErrorCode:(int)arg2;
- (void)coreDidLogout:(id)arg1;
- (void)notifyThatWeWillLogOut;
- (void)coreDidRelogin:(id)arg1 withError:(id)arg2 isPermanent:(_Bool)arg3;
- (void)core:(id)arg1 didReceiveSignupInformation:(id)arg2;
- (void)core:(id)arg1 didReceiveChallenge:(id)arg2;
- (void)core:(id)arg1 failedLoginWithError:(id)arg2 legacyError:(id)arg3;
- (void)coreDidLogin:(id)arg1;
- (void)removeLoginStateObserver:(id)arg1;
- (void)addLoginStateObserver:(id)arg1;
- (id)currentCredentials;
- (void)didLogin;
@property(readonly, nonatomic, getter=isLoggedIn) _Bool loggedIn;
@property(nonatomic) _Bool allowErrorDispatch;
- (id)initWithCore:(id)arg1 logCenter:(id)arg2 crashReporter:(id)arg3 startupTracer:(id)arg4 containerLogoutHandler:(CDUnknownBlockType)arg5 httpService:(id)arg6 imageLoaderServiceManager:(id)arg7 keychainManager:(id)arg8 metaViewController:(id)arg9 alertInterface:(id)arg10 deferredErrorDispatcher:(id)arg11 linkDispatcher:(id)arg12 errorDialogController:(id)arg13 errorDecorator:(id)arg14 loginLogger:(id)arg15 appleHandler:(id)arg16 login5TestManager:(id)arg17 databaseManager:(id)arg18;
- (id)sessionStateAwaiter;
- (id)waitForLoginCompletion;
- (id)waitForLogoutCompletion;
- (id)taskedLoginWithStoredCredentials;
- (id)taskedReloginWithCredentials:(id)arg1 options:(id)arg2;
- (id)taskedRelogin;
- (id)taskedLogoutForgetUser:(_Bool)arg1;
- (id)taskedLoginWithCredentials:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

