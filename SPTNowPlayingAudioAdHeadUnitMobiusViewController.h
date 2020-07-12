//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTAdPlayerObserver-Protocol.h"
#import "SPTNowPlayingAdUnitViewController-Protocol.h"
#import "SPTNowPlayingContainedViewController-Protocol.h"

@class GLUELabel, NSArray, NSString, SPTAdFeatureFlagChecks, SPTAdNowPlayingAuxiliaryActionsHandler, SPTAdPlayerObservable, SPTNowPlayingHeadUnitView, SPTTheme, _TtC19SPTAdsNowPlayingKit27SPTNowPlayingAdHeadUnitLoop;
@protocol SPTAdNowPlayingRemoteControlPolicy, SPTAdsBaseEntity, SPTAdsManager, SPTNowPlayingContainingViewController;

@interface SPTNowPlayingAudioAdHeadUnitMobiusViewController : UIViewController <SPTAdPlayerObserver, SPTNowPlayingContainedViewController, SPTNowPlayingAdUnitViewController>
{
    id <SPTAdsManager> _adsManager;
    SPTAdPlayerObservable *_observable;
    SPTTheme *_theme;
    GLUELabel *_skipDelayLabel;
    SPTAdNowPlayingAuxiliaryActionsHandler *_actionsHandler;
    SPTAdFeatureFlagChecks *_featureChecker;
    NSArray *_layoutConstraints;
    id <SPTAdNowPlayingRemoteControlPolicy> _remoteControlPolicy;
    id <SPTAdsBaseEntity> _adEntity;
    _TtC19SPTAdsNowPlayingKit27SPTNowPlayingAdHeadUnitLoop *_loop;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC19SPTAdsNowPlayingKit27SPTNowPlayingAdHeadUnitLoop *loop; // @synthesize loop=_loop;
@property(nonatomic) __weak id <SPTAdsBaseEntity> adEntity; // @synthesize adEntity=_adEntity;
@property(retain, nonatomic) id <SPTAdNowPlayingRemoteControlPolicy> remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, nonatomic) SPTAdFeatureFlagChecks *featureChecker; // @synthesize featureChecker=_featureChecker;
@property(readonly, nonatomic) SPTAdNowPlayingAuxiliaryActionsHandler *actionsHandler; // @synthesize actionsHandler=_actionsHandler;
@property(readonly, nonatomic) GLUELabel *skipDelayLabel; // @synthesize skipDelayLabel=_skipDelayLabel;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTAdPlayerObservable *observable; // @synthesize observable=_observable;
@property(readonly, nonatomic) id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
- (void)adPlayerDisplayLinkFiredWithTrack:(id)arg1;
- (void)adPlayerStateDidChangeToTrack:(id)arg1;
- (id)skipDelayAttributedText:(unsigned long long)arg1;
- (void)reloadViewControllerWithAdEntity:(id)arg1;
- (struct CGSize)preferredContentSize;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)didTapNegativeFeedbackButton:(id)arg1;
- (void)didTapPositiveFeedbackButton:(id)arg1;
- (void)skipToNext:(id)arg1;
- (void)didTapPlaybackButton:(id)arg1;
- (long long)findBestSkipDelayLabelWidth;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithAdManager:(id)arg1 playerObservable:(id)arg2 actionsHandler:(id)arg3 featureChecker:(id)arg4 theme:(id)arg5;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SPTNowPlayingHeadUnitView *view; // @dynamic view;

@end

