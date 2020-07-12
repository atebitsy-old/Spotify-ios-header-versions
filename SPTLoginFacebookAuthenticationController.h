//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginThirdPartyLoginController-Protocol.h"

@class NSString, SPFacebookSSO, SPTAuthenticationHandler, SPTLoginDialogController, SPTLoginErrorDecorator, SPTLoginErrorDialogLogger, SPTLoginFacebookErrorLogger;
@protocol SPTLoginNavigationCoordinator, SPTLoginThirdPartyLoginControllerDelegate;

@interface SPTLoginFacebookAuthenticationController : NSObject <SPTLoginThirdPartyLoginController>
{
    id <SPTLoginThirdPartyLoginControllerDelegate> delegate;
    SPFacebookSSO *_facebookSSO;
    SPTAuthenticationHandler *_authenticationHandler;
    id <SPTLoginNavigationCoordinator> _navigationCoordinator;
    SPTLoginErrorDecorator *_errorDecorator;
    SPTLoginDialogController *_dialogController;
    SPTLoginErrorDialogLogger *_dialogLogger;
    SPTLoginFacebookErrorLogger *_errorLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTLoginFacebookErrorLogger *errorLogger; // @synthesize errorLogger=_errorLogger;
@property(readonly, nonatomic) SPTLoginErrorDialogLogger *dialogLogger; // @synthesize dialogLogger=_dialogLogger;
@property(readonly, nonatomic) SPTLoginDialogController *dialogController; // @synthesize dialogController=_dialogController;
@property(readonly, nonatomic) SPTLoginErrorDecorator *errorDecorator; // @synthesize errorDecorator=_errorDecorator;
@property(readonly, nonatomic) id <SPTLoginNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(readonly, nonatomic) SPTAuthenticationHandler *authenticationHandler; // @synthesize authenticationHandler=_authenticationHandler;
@property(readonly, nonatomic) SPFacebookSSO *facebookSSO; // @synthesize facebookSSO=_facebookSSO;
@property(nonatomic) __weak id <SPTLoginThirdPartyLoginControllerDelegate> delegate; // @synthesize delegate;
- (void)handleFacebookLoginWithError:(id)arg1 userInfo:(id)arg2;
- (void)startLoginWithThirdParty;
- (id)initWithFacebookSSO:(id)arg1 authenticationHandler:(id)arg2 navigationCoordinator:(id)arg3 errorDecorator:(id)arg4 dialogLogger:(id)arg5 dialogController:(id)arg6 errorLogger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

