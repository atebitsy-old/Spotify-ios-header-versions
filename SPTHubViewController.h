//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBViewController.h"

#import "HUBHeaderViewComponentDelegate-Protocol.h"
#import "HUBOverlayViewComponentDelegate-Protocol.h"
#import "HUBViewComponentDelegate-Protocol.h"
#import "HUBViewScrollDelegate-Protocol.h"
#import "SPContentInsetViewController-Protocol.h"
#import "SPTHubKeyboardManagerNavigationBarProvider-Protocol.h"
#import "SPTHubViewModelProviderDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTScrollToTopViewController-Protocol.h"

@class NSMutableDictionary, NSString, NSURL, SPTHubKeyboardManager, SPTHubShelvesManager, SPTHubViewModelProvider, SPTTheme;
@protocol SPTHubImpressionLogger, SPTHubLoadingLogger, SPTPageContainer, SPTShareDragDelegateFactory;

@interface SPTHubViewController : HUBViewController <SPTScrollToTopViewController, HUBViewScrollDelegate, SPTHubKeyboardManagerNavigationBarProvider, SPTHubViewModelProviderDelegate, SPContentInsetViewController, SPTPageController, SPTNavigationControllerNavigationBarState, HUBViewComponentDelegate, HUBHeaderViewComponentDelegate, HUBOverlayViewComponentDelegate>
{
    _Bool _wasInitialLoadViewModelPerformed;
    NSString *_pageIdentifier;
    NSURL *_viewURI;
    SPTHubViewModelProvider *_viewModelProvider;
    unsigned long long _preferredNavigationBarState;
    unsigned long long _viewModelLoadingType;
    NSMutableDictionary *_dragDelegateHolders;
    SPTTheme *_theme;
    SPTHubShelvesManager *_shelvesManager;
    SPTHubKeyboardManager *_keyboardManager;
    id <SPTHubImpressionLogger> _impressionLogger;
    id <SPTHubLoadingLogger> _loadingLogger;
    id <SPTShareDragDelegateFactory> _shareDragDelegateFactory;
}

@property(retain, nonatomic) id <SPTShareDragDelegateFactory> shareDragDelegateFactory; // @synthesize shareDragDelegateFactory=_shareDragDelegateFactory;
@property(nonatomic) _Bool wasInitialLoadViewModelPerformed; // @synthesize wasInitialLoadViewModelPerformed=_wasInitialLoadViewModelPerformed;
@property(readonly, nonatomic) id <SPTHubLoadingLogger> loadingLogger; // @synthesize loadingLogger=_loadingLogger;
@property(readonly, nonatomic) id <SPTHubImpressionLogger> impressionLogger; // @synthesize impressionLogger=_impressionLogger;
@property(retain, nonatomic) SPTHubKeyboardManager *keyboardManager; // @synthesize keyboardManager=_keyboardManager;
@property(retain, nonatomic) SPTHubShelvesManager *shelvesManager; // @synthesize shelvesManager=_shelvesManager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSMutableDictionary *dragDelegateHolders; // @synthesize dragDelegateHolders=_dragDelegateHolders;
@property(nonatomic) unsigned long long viewModelLoadingType; // @synthesize viewModelLoadingType=_viewModelLoadingType;
@property(nonatomic) unsigned long long preferredNavigationBarState; // @synthesize preferredNavigationBarState=_preferredNavigationBarState;
@property(readonly, nonatomic) SPTHubViewModelProvider *viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void).cxx_destruct;
- (id)shareDragDelegateWithModel:(id)arg1;
- (void)loadViewModel;
- (id)provideNavigationBar;
- (void)sp_updateContentInsets;
- (void)overlayView:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)overlayView:(id)arg1 componentViewWillAppear:(id)arg2;
- (_Bool)hubViewShouldStartScrolling:(id)arg1;
- (void)hubView:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)hubView:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)headerView:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)headerView:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)viewModelDidLoad:(id)arg1 dataSource:(unsigned long long)arg2;
- (void)viewModelDidLoad:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)enableShelves:(id)arg1 componentModelURIResolver:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithTheme:(id)arg1 pageIdentifier:(id)arg2 pageURI:(id)arg3 componentRegistry:(id)arg4 componentLayoutManager:(id)arg5 imageLoaderFactory:(id)arg6 commandHandler:(id)arg7 viewModelProvider:(id)arg8 impressionLogger:(id)arg9 loadingLogger:(id)arg10 shareDragDelegateFactory:(id)arg11;
- (void)spt_scrollToTopAnimated:(_Bool)arg1;
- (void)spt_scrollToTop;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

