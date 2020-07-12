//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPartnerNavigationIntegration-Protocol.h"
#import "SPTWazeNavigationStateObserver-Protocol.h"

@class NSString, SPTObserverManager, SPTWazePresenter, SPTWazeViewModel, UIImage;
@protocol SPTWazeTestManager;

@interface SPTWazePartnerIntegration : NSObject <SPTWazeNavigationStateObserver, SPTPartnerNavigationIntegration>
{
    SPTWazeViewModel *_viewModel;
    id <SPTWazeTestManager> _testManager;
    SPTObserverManager *_observerManager;
    SPTWazePresenter *_presenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTWazePresenter *presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTWazeTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTWazeViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)wazeNavigationDidEnd;
- (void)wazeNavigationDidStart;
@property(readonly, nonatomic, getter=isInstalled) _Bool installed;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)openAppStore;
- (void)openApp;
@property(readonly, copy, nonatomic) NSString *sentToReasonForLogging;
@property(readonly, copy, nonatomic) NSString *appNameForLogging;
- (_Bool)isPresentingActiveBanner;
@property(readonly, nonatomic, getter=isNavigating) _Bool navigating;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, nonatomic) NSString *redirectURIPath;
@property(readonly, nonatomic) NSString *redirectURI;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) NSString *name;
- (id)initWithViewModel:(id)arg1 testManager:(id)arg2 presenter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

