//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdOverlayContentUnitDelegate-Protocol.h"
#import "SPTAdsBaseRegistryObserver-Protocol.h"
#import "SPTBannerViewDelegate-Protocol.h"
#import "SPTNavigationManagerDelegate-Protocol.h"
#import "SPTSlateDataSource-Protocol.h"
#import "SPTSlateDelegate-Protocol.h"
#import "SPTSlateWireframeCustomPresentationDelegate-Protocol.h"

@class NSString, NSTimer, SPTAdFeatureFlagChecks, SPTNavigationManager, SPTTheme;
@protocol GLUEImageLoader, SPTAdOverlayImageContentViewDataSource, SPTAdsBaseCosmosBridge, SPTAdsBaseImageEntity, SPTAdsBaseRegistry, SPTAdsManager, SPTBannerPresentationManager, SPTBannerPresentationManagerTicket, SPTLinkDispatcher, SPTPlayer, SPTSlate, SPTSlateBuilderProvider, SPTSlateManager, SPTUIPresentationService;

@interface SPTAdMobileOverlayController : NSObject <SPTAdOverlayContentUnitDelegate, SPTAdsBaseRegistryObserver, SPTSlateDataSource, SPTSlateDelegate, SPTSlateWireframeCustomPresentationDelegate, SPTBannerViewDelegate, SPTNavigationManagerDelegate>
{
    _Bool _shouldAnimateSlate;
    _Bool _shouldForceDisplay;
    _Bool _shouldShowTopBanner;
    id <SPTAdsBaseRegistry> _registry;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    SPTTheme *_theme;
    id <SPTPlayer> _player;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    id <SPTSlateManager> _slateManager;
    id <SPTAdsManager> _manager;
    id <SPTUIPresentationService> _presentationService;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <GLUEImageLoader> _imageLoader;
    SPTAdFeatureFlagChecks *_featureChecker;
    SPTNavigationManager *_navigationManagager;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTSlate> _slate;
    id <SPTAdOverlayImageContentViewDataSource> _contentViewDataSource;
    NSTimer *_fetchTimer;
    NSTimer *_audioPlusFetchTimer;
    CDUnknownBlockType _contentUnitDismissalCompletionBlock;
    id <SPTBannerPresentationManagerTicket> _bannerTicket;
    double _inactivityThreshold;
}

@property(nonatomic) _Bool shouldShowTopBanner; // @synthesize shouldShowTopBanner=_shouldShowTopBanner;
@property(nonatomic) _Bool shouldForceDisplay; // @synthesize shouldForceDisplay=_shouldForceDisplay;
@property(nonatomic) _Bool shouldAnimateSlate; // @synthesize shouldAnimateSlate=_shouldAnimateSlate;
@property(nonatomic) double inactivityThreshold; // @synthesize inactivityThreshold=_inactivityThreshold;
@property(retain, nonatomic) id <SPTBannerPresentationManagerTicket> bannerTicket; // @synthesize bannerTicket=_bannerTicket;
@property(copy, nonatomic) CDUnknownBlockType contentUnitDismissalCompletionBlock; // @synthesize contentUnitDismissalCompletionBlock=_contentUnitDismissalCompletionBlock;
@property(retain, nonatomic) NSTimer *audioPlusFetchTimer; // @synthesize audioPlusFetchTimer=_audioPlusFetchTimer;
@property(retain, nonatomic) NSTimer *fetchTimer; // @synthesize fetchTimer=_fetchTimer;
@property(retain, nonatomic) id <SPTAdOverlayImageContentViewDataSource> contentViewDataSource; // @synthesize contentViewDataSource=_contentViewDataSource;
@property(retain, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTNavigationManager *navigationManagager; // @synthesize navigationManagager=_navigationManagager;
@property(readonly, nonatomic) SPTAdFeatureFlagChecks *featureChecker; // @synthesize featureChecker=_featureChecker;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) __weak id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(readonly, nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(readonly, nonatomic) __weak id <SPTAdsManager> manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) __weak id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(readonly, nonatomic) __weak id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(readonly, nonatomic) __weak id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) __weak SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) __weak id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(readonly, nonatomic) __weak id <SPTAdsBaseRegistry> registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
- (void)navigationManager:(id)arg1 didNavigateFromViewController:(id)arg2 toViewController:(id)arg3;
- (void)closeButtonTappedInBannerView:(id)arg1;
- (void)actionButtonTappedInBannerView:(id)arg1;
- (void)hideBanner;
- (void)showBanner;
- (_Bool)isIPad;
- (id)provideSlate;
- (void)triggerSlot:(id)arg1;
@property(readonly, nonatomic) id <SPTAdsBaseImageEntity> availableEntity;
- (void)configureOverlayThreshold:(CDUnknownBlockType)arg1;
- (_Bool)shouldDisplay;
- (void)fetch;
- (void)dismissAdOverlayContentUnit:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (double)preferredHorizontalMargin;
- (id)dismissTextForSlate:(id)arg1;
- (id)titleForSlate:(id)arg1;
- (_Bool)slateShouldDismiss:(id)arg1;
- (void)slateSwiped:(id)arg1;
- (void)dismissSlateViewControllerInCustomMode:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentSlateViewControllerInCustomMode:(id)arg1 animated:(_Bool)arg2;
- (void)slateDidDismiss:(id)arg1;
- (id)contentUnitForSlateViewController:(id)arg1;
- (void)adRegistry:(id)arg1 didProcessAdEntity:(id)arg2 event:(long long)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)addObservers;
- (void)forceDisplayWithTopBanner:(_Bool)arg1;
- (void)dealloc;
- (void)invalidateAudioPlusFetchTimer;
- (void)invalidateFetchTimer;
- (void)startAudioPlusTimerIfNeeded;
- (void)startFetchTimer;
- (id)initWithRegistry:(id)arg1 cosmosBridge:(id)arg2 theme:(id)arg3 player:(id)arg4 slateBuilderProvider:(id)arg5 slateManager:(id)arg6 manager:(id)arg7 imageLoader:(id)arg8 linkDispatcher:(id)arg9 presentationService:(id)arg10 featureChecker:(id)arg11 bannerPresentationManager:(id)arg12 navigationManager:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

