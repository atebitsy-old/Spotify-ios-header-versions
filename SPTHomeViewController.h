//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HUBOverlayViewComponentDelegate-Protocol.h"
#import "HUBViewComponentDelegate-Protocol.h"
#import "HUBViewContentOffsetObserver-Protocol.h"
#import "SPTContentBottomLayoutGuideObserver-Protocol.h"
#import "SPTHomeViewModelProviderDelegate-Protocol.h"
#import "SPTHubViewModelProviderDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTScrollToTopViewController-Protocol.h"
#import "SPViewController-Protocol.h"

@class HUBComponentRegistry, NSMutableDictionary, NSString, NSURL, SPTHomeFeatureProperties, SPTHomeLocalViewModelOverrides, SPTHomeNavigationItemDecorator, SPTHomeView, SPTHomeViewModelProvider, SPTProgressView;
@protocol GLUETheme, HUBCommandHandler, HUBComponentEventHandler, HUBComponentLayoutManager, HUBImageLoaderFactory, SPTHomeCacheRenderDelegate, SPTHubImpressionLogger, SPTHubLoadingLogger, SPTOfflineModeState, SPTPageContainer, SPTShareDragDelegateFactory;

@interface SPTHomeViewController : UIViewController <SPTContentBottomLayoutGuideObserver, SPTScrollToTopViewController, HUBViewContentOffsetObserver, SPTHubViewModelProviderDelegate, HUBOverlayViewComponentDelegate, HUBViewComponentDelegate, SPTOfflineModeStateObserver, SPTPageController, SPTNavigationControllerNavigationBarState, SPViewController, SPTHomeViewModelProviderDelegate>
{
    _Bool _currentlyOffline;
    _Bool _didLoadInitialViewModel;
    NSString *_pageIdentifier;
    NSURL *_pageURI;
    id <SPTHomeCacheRenderDelegate> _cacheRenderDelegate;
    SPTHomeNavigationItemDecorator *_navigationItemDecorator;
    id <GLUETheme> _theme;
    NSURL *_viewURI;
    HUBComponentRegistry *_componentRegistry;
    id <HUBComponentLayoutManager> _componentLayoutManager;
    id <HUBImageLoaderFactory> _imageLoaderFactory;
    id <HUBCommandHandler> _commandHandler;
    id <SPTHubLoadingLogger> _loadingLogger;
    id <SPTHubImpressionLogger> _impressionLogger;
    SPTHomeViewModelProvider *_viewModelProvider;
    id <SPTShareDragDelegateFactory> _shareDragDelegateFactory;
    id <SPTOfflineModeState> _offlineState;
    SPTHomeLocalViewModelOverrides *_overrides;
    SPTHomeFeatureProperties *_featureProperties;
    id <HUBComponentEventHandler> _componentEventHandler;
    SPTProgressView *_loadingIndicator;
    unsigned long long _dataLoadingSource;
    double _navigationbarAlpha;
    NSMutableDictionary *_dragDelegateHolders;
}

@property(nonatomic) _Bool didLoadInitialViewModel; // @synthesize didLoadInitialViewModel=_didLoadInitialViewModel;
@property(nonatomic, getter=isCurrentlyOffline) _Bool currentlyOffline; // @synthesize currentlyOffline=_currentlyOffline;
@property(retain, nonatomic) NSMutableDictionary *dragDelegateHolders; // @synthesize dragDelegateHolders=_dragDelegateHolders;
@property(nonatomic) double navigationbarAlpha; // @synthesize navigationbarAlpha=_navigationbarAlpha;
@property(nonatomic) unsigned long long dataLoadingSource; // @synthesize dataLoadingSource=_dataLoadingSource;
@property(readonly, nonatomic) SPTProgressView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) id <HUBComponentEventHandler> componentEventHandler; // @synthesize componentEventHandler=_componentEventHandler;
@property(readonly, nonatomic) SPTHomeFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(readonly, nonatomic) SPTHomeLocalViewModelOverrides *overrides; // @synthesize overrides=_overrides;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineState; // @synthesize offlineState=_offlineState;
@property(readonly, nonatomic) id <SPTShareDragDelegateFactory> shareDragDelegateFactory; // @synthesize shareDragDelegateFactory=_shareDragDelegateFactory;
@property(readonly, nonatomic) SPTHomeViewModelProvider *viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
@property(readonly, nonatomic) id <SPTHubImpressionLogger> impressionLogger; // @synthesize impressionLogger=_impressionLogger;
@property(readonly, nonatomic) id <SPTHubLoadingLogger> loadingLogger; // @synthesize loadingLogger=_loadingLogger;
@property(readonly, nonatomic) id <HUBCommandHandler> commandHandler; // @synthesize commandHandler=_commandHandler;
@property(readonly, nonatomic) id <HUBImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <HUBComponentLayoutManager> componentLayoutManager; // @synthesize componentLayoutManager=_componentLayoutManager;
@property(readonly, nonatomic) HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTHomeNavigationItemDecorator *navigationItemDecorator; // @synthesize navigationItemDecorator=_navigationItemDecorator;
@property(nonatomic) __weak id <SPTHomeCacheRenderDelegate> cacheRenderDelegate; // @synthesize cacheRenderDelegate=_cacheRenderDelegate;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (id)shareDragDelegateWithModel:(id)arg1;
- (void)sp_updateContentInsets;
- (void)layoutGuideChanged;
- (void)overlayView:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)overlayView:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)hubView:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)hubView:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)updateNavigationBarAlpha;
- (void)spt_scrollToTop;
- (void)contentSizeCategoryDidChange;
- (void)loadViewModelWithSource:(unsigned long long)arg1;
- (id)provideStatusBarBackgroundColorForScrollProgress:(double)arg1;
- (void)hubView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, nonatomic) NSURL *URI;
- (void)updateViewWithViewModel:(id)arg1 dataSource:(unsigned long long)arg2;
- (void)logViewModelDidLoadWithDataSource:(unsigned long long)arg1 error:(id)arg2;
- (void)viewModelProvider:(id)arg1 didLoadRemoteViewModel:(id)arg2 withError:(id)arg3;
- (void)viewModelProviderWillLoadRemoteViewModel:(id)arg1;
- (void)viewModelProvider:(id)arg1 didLoadCachedViewModel:(id)arg2 withError:(id)arg3;
- (void)viewModelProviderWillLoadCachedViewModel:(id)arg1;
- (void)viewModelDidLoad:(id)arg1 dataSource:(unsigned long long)arg2;
- (void)viewModelDidLoad:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 viewURI:(id)arg2 componentRegistry:(id)arg3 componentLayoutManager:(id)arg4 imageLoaderFactory:(id)arg5 commandHandler:(id)arg6 loadingLogger:(id)arg7 impressionLogger:(id)arg8 viewModelProvider:(id)arg9 shareDragDelegateFactory:(id)arg10 offlineState:(id)arg11 overrides:(id)arg12 featureProperties:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTHomeView *view; // @dynamic view;

@end

