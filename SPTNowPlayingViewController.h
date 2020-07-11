//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTBarOverlayViewController-Protocol.h"
#import "SPTNowPlayingContainerIdleMonitorLoggingDelegate-Protocol.h"
#import "SPTNowPlayingContainerIdleMonitorObserver-Protocol.h"
#import "SPTNowPlayingContainerIdleMonitorReceiving-Protocol.h"
#import "SPTNowPlayingContainingViewController-Protocol.h"
#import "SPTNowPlayingContentContainingViewController-Protocol.h"
#import "SPTNowPlayingModeLayoutDelegate-Protocol.h"
#import "SPTNowPlayingModeResolverObserver-Protocol.h"

@class NSArray, NSHashTable, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, SPTNowPlayingContainerIdleMonitor, SPTNowPlayingContentViewProvider, SPTNowPlayingLogger, SPTNowPlayingModel, SPTTheme, UIStackView;
@protocol SPTNowPlayingContainedViewController, SPTNowPlayingContentViewController, SPTNowPlayingModeResolver, SPTShareFeature;

@interface SPTNowPlayingViewController : UIViewController <SPTNowPlayingContainingViewController, SPTNowPlayingContainerIdleMonitorObserver, SPTNowPlayingContainerIdleMonitorLoggingDelegate, SPTNowPlayingModeResolverObserver, SPTNowPlayingModeLayoutDelegate, SPTBarOverlayViewController, SPTNowPlayingContentContainingViewController, SPTNowPlayingContainerIdleMonitorReceiving>
{
    SPTNowPlayingModel *_model;
    SPTTheme *_theme;
    NSHashTable *_viewControllers;
    NSArray *_providers;
    SPTNowPlayingLogger *_logger;
    SPTNowPlayingContainerIdleMonitor *_idleMonitor;
    NSMutableArray *_layoutConstraints;
    UIStackView *_topStackView;
    UIStackView *_bottomStackView;
    id <SPTShareFeature> _shareFeature;
    id <SPTNowPlayingModeResolver> _modeResolver;
    UIViewController<SPTNowPlayingContainedViewController> *_navigationBarUnitViewController;
    SPTNowPlayingContentViewProvider *_contentViewProvider;
    UIViewController<SPTNowPlayingContentViewController> *_contentViewController;
    NSMutableDictionary *_viewConstraints;
    NSLayoutConstraint *_topStackViewHeightConstraint;
    NSLayoutConstraint *_bottomStackViewHeightConstraint;
    NSLayoutConstraint *_bottomStackViewBottomConstraint;
    double _topMargin;
    double _topStackViewHeight;
    double _bottomStackViewHeight;
}

@property(nonatomic) double bottomStackViewHeight; // @synthesize bottomStackViewHeight=_bottomStackViewHeight;
@property(nonatomic) double topStackViewHeight; // @synthesize topStackViewHeight=_topStackViewHeight;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) NSLayoutConstraint *bottomStackViewBottomConstraint; // @synthesize bottomStackViewBottomConstraint=_bottomStackViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomStackViewHeightConstraint; // @synthesize bottomStackViewHeightConstraint=_bottomStackViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topStackViewHeightConstraint; // @synthesize topStackViewHeightConstraint=_topStackViewHeightConstraint;
@property(retain, nonatomic) NSMutableDictionary *viewConstraints; // @synthesize viewConstraints=_viewConstraints;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContentViewController> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) SPTNowPlayingContentViewProvider *contentViewProvider; // @synthesize contentViewProvider=_contentViewProvider;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *navigationBarUnitViewController; // @synthesize navigationBarUnitViewController=_navigationBarUnitViewController;
@property(retain, nonatomic) id <SPTNowPlayingModeResolver> modeResolver; // @synthesize modeResolver=_modeResolver;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(retain, nonatomic) UIStackView *bottomStackView; // @synthesize bottomStackView=_bottomStackView;
@property(retain, nonatomic) UIStackView *topStackView; // @synthesize topStackView=_topStackView;
@property(retain, nonatomic) NSMutableArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) SPTNowPlayingContainerIdleMonitor *idleMonitor; // @synthesize idleMonitor=_idleMonitor;
@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(retain, nonatomic) NSHashTable *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLayoutForMode:(id)arg1;
- (void)setupForMode:(id)arg1 fromMode:(id)arg2;
- (id)viewControllersForMode:(id)arg1;
- (void)modeResolver:(id)arg1 didChangeToMode:(id)arg2 fromMode:(id)arg3;
- (void)logIdleMonitorIntent:(id)arg1;
- (void)logUserDidEndIdlePeriod;
- (void)logUserDidBeginIdlePeriod;
- (void)idlePeriodDidEnd;
- (void)idlePeriodDidBegin;
- (void)statusBarOrientationDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)addChildViewController:(id)arg1;
- (void)containedViewController:(id)arg1 didUpdatePreferredSizeTo:(struct CGSize)arg2;
- (_Bool)barViewControllerInteractiveTransitionEnabled:(id)arg1;
- (id)replacementViewsForBarTransition:(id)arg1;
- (double)preferredHeightForViewController:(id)arg1;
- (void)replaceViewController:(id)arg1 with:(id)arg2;
- (void)setupContentViewController;
- (void)emptyStackViews;
- (void)setupStackViews;
- (void)viewWillAppear:(_Bool)arg1;
- (id)viewControllersForEdge:(unsigned long long)arg1;
- (void)updateViewConstraints;
- (void)updateWindowedContentSpace;
- (double)maxHeight;
- (void)viewDidLayoutSubviews;
- (void)setupConstraints;
- (void)forceUpdateViewConstraints;
- (void)viewDidLoad;
- (_Bool)shouldAutorotate;
- (id)initWithModel:(id)arg1 theme:(id)arg2 modeResolver:(id)arg3 shareFeature:(id)arg4 logger:(id)arg5 contentViewProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

