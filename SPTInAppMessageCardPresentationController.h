//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessagePresenter-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTSlateDataSource-Protocol.h"
#import "SPTSlateDelegate-Protocol.h"

@class NSDictionary, NSString, SPTInAppMessageServiceLogger, UIView;
@protocol SPTAuthController, SPTCarDetector, SPTCrashReporter, SPTInAppMessageSDKMessageViewModel, SPTOfflineModeState, SPTSlate, SPTSlateBuilderProvider, SPTSlateManager;

@interface SPTInAppMessageCardPresentationController : NSObject <SPTSlateDelegate, SPTSlateDataSource, SPTOfflineModeStateObserver, SPTInAppMessagePresenter>
{
    _Bool _presentingCard;
    _Bool _offline;
    id <SPTInAppMessageSDKMessageViewModel> _viewModel;
    NSString *_matchedPattern;
    NSString *_triggerType;
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    id <SPTSlate> _slate;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTCarDetector> _carDetector;
    SPTInAppMessageServiceLogger *_serviceLogger;
    NSDictionary *_cancelationInfo;
    id <SPTCrashReporter> _crashReporter;
    UIView *_containerView;
    id <SPTAuthController> _authController;
    double _presentationStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) double presentationStartTime; // @synthesize presentationStartTime=_presentationStartTime;
@property(readonly, nonatomic) id <SPTAuthController> authController; // @synthesize authController=_authController;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(copy, nonatomic) NSDictionary *cancelationInfo; // @synthesize cancelationInfo=_cancelationInfo;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(readonly, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(readonly, nonatomic) id <SPTCarDetector> carDetector; // @synthesize carDetector=_carDetector;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
@property(readonly, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(copy, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property(copy, nonatomic) NSString *matchedPattern; // @synthesize matchedPattern=_matchedPattern;
@property(readonly, nonatomic) id <SPTInAppMessageSDKMessageViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic, getter=isPresentingCard) _Bool presentingCard; // @synthesize presentingCard=_presentingCard;
- (void)logDismissEventWithDismissType:(long long)arg1;
- (void)dismissCardMessageIfAdPlaying;
- (_Bool)canPresentSlate;
- (id)provideSlate;
- (_Bool)isIpad;
- (void)logMessagePresentationPerformace;
- (void)logMessageDiscardedWithReason:(id)arg1;
- (void)logMessagePresented;
- (void)dismiss;
- (void)presentInAppMessageView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)slateShouldOnlyDismissOnFooterTap:(id)arg1;
- (_Bool)slateShouldDismiss:(id)arg1;
- (_Bool)shouldHideImageForSlate:(id)arg1;
- (id)dismissTextForSlate:(id)arg1;
- (void)slateDidDismiss:(id)arg1;
- (_Bool)shouldFullscreen;
- (id)contentUnitForSlateViewController:(id)arg1;
- (void)cancelMessagePresentation:(id)arg1;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 matchedPattern:(id)arg2 triggerType:(id)arg3 slateManager:(id)arg4 slateBuilderProvider:(id)arg5 offlineModeState:(id)arg6 carDetector:(id)arg7 serviceLogger:(id)arg8 crashReporter:(id)arg9 authController:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

