//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTPodcastFilterHeaderViewTarget-Protocol.h"
#import "SPTPodcastHeaderDescriptionViewDelegate-Protocol.h"
#import "SPTPodcastTestManagerObserver-Protocol.h"
#import "SPTPodcastViewModelDelegate-Protocol.h"
#import "SPTShareableContext-Protocol.h"
#import "SPTShowContextMenuControllerDelegate-Protocol.h"
#import "SPViewController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, NSURL, SPTEntityTableHeaderView, SPTFreeTierEntityNavigationDecorator, SPTInfoView, SPTPodcastFilterHeaderView, SPTPodcastHeaderProvider, SPTPodcastViewModel, SPTProgressView, SPTShowContextMenuController, SPTTableView, SPTTheme;
@protocol GLUEImageLoader, GLUETheme, SPTCollectionLogger, SPTCollectionPlatformTestManager, SPTLinkDispatcher, SPTPageContainer, SPTPodcastContextMenuProvider, SPTPodcastEpisodeCellActionTarget, SPTPodcastEpisodeCellConfigurator, SPTPodcastLogger, SPTPodcastTestManager, SPTShareFeature, SPTUIPresentationService, SPTViewLogger;

@interface SPTPodcastViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPTPodcastViewModelDelegate, SPTShowContextMenuControllerDelegate, SPTShareableContext, SPTPodcastHeaderDescriptionViewDelegate, SPTPodcastTestManagerObserver, SPTPodcastFilterHeaderViewTarget, UITableViewDelegate, UITableViewDataSource, SPTPageController, SPViewController>
{
    _Bool _dataLoaded;
    _Bool _firstTimeShowing;
    SPTPodcastViewModel *_viewModel;
    CDUnknownBlockType _contextResponseHandler;
    SPTFreeTierEntityNavigationDecorator *_navigationItemDecorator;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    SPTShowContextMenuController *_showContextMenuController;
    id <SPTPodcastEpisodeCellConfigurator> _cellConfigurator;
    id <SPTPodcastEpisodeCellActionTarget> _cellActionHandler;
    SPTTableView *_tableView;
    SPTProgressView *_progressView;
    SPTInfoView *_infoView;
    SPTPodcastHeaderProvider *_podcastHeaderProvider;
    SPTEntityTableHeaderView *_headerView;
    SPTPodcastFilterHeaderView *_filterHeader;
    id <GLUETheme> _legacyTheme;
    SPTTheme *_theme;
    id <SPTShareFeature> _shareFeature;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTUIPresentationService> _presentationService;
    id <SPTPodcastLogger> _logger;
    id <SPTCollectionLogger> _collectionLogger;
    id <SPTViewLogger> _viewLogger;
    NSURL *_firstRowImpressionEpisode;
}

@property(copy, nonatomic) NSURL *firstRowImpressionEpisode; // @synthesize firstRowImpressionEpisode=_firstRowImpressionEpisode;
@property(nonatomic) _Bool firstTimeShowing; // @synthesize firstTimeShowing=_firstTimeShowing;
@property(nonatomic, getter=isDataLoaded) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) id <SPTPodcastLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <GLUETheme> legacyTheme; // @synthesize legacyTheme=_legacyTheme;
@property(retain, nonatomic) SPTPodcastFilterHeaderView *filterHeader; // @synthesize filterHeader=_filterHeader;
@property(retain, nonatomic) SPTEntityTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SPTPodcastHeaderProvider *podcastHeaderProvider; // @synthesize podcastHeaderProvider=_podcastHeaderProvider;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <SPTPodcastEpisodeCellActionTarget> cellActionHandler; // @synthesize cellActionHandler=_cellActionHandler;
@property(retain, nonatomic) id <SPTPodcastEpisodeCellConfigurator> cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) SPTShowContextMenuController *showContextMenuController; // @synthesize showContextMenuController=_showContextMenuController;
@property(retain, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) SPTFreeTierEntityNavigationDecorator *navigationItemDecorator; // @synthesize navigationItemDecorator=_navigationItemDecorator;
@property(copy, nonatomic) CDUnknownBlockType contextResponseHandler; // @synthesize contextResponseHandler=_contextResponseHandler;
@property(retain, nonatomic) SPTPodcastViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)podcastTestManagerDidUpdate:(id)arg1;
- (void)playURIInContext:(id)arg1;
- (void)evaluatePendingContextResponseHandlerWithViewModel:(id)arg1;
- (void)determineIfContextContainsURI:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)didTapPodcastDescriptionTextOnLabel:(id)arg1;
- (id)configurePodcastCell:(id)arg1 atIndexPath:(id)arg2;
- (void)showContextMenuController:(id)arg1 didUpdateFollowedState:(_Bool)arg2 forShow:(id)arg3;
@property(readonly, nonatomic) NSURL *URI;
- (void)podcastViewModelDidUpdatePlaybackRestrictions:(id)arg1;
- (double)expectedContentHeightForTableView;
- (double)tableViewTotalContentInsetTop;
- (_Bool)canCollapseHeaderCompletely;
- (void)viewModelPodcastLatestPlayedEpisode:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)cellIsVisibleAtIndexPath:(id)arg1;
- (void)viewModelPodcastDidUpdatePlayingEpisode:(id)arg1 atIndexPath:(id)arg2;
- (void)showInfoViewWithError:(id)arg1;
- (void)viewModelFinishedLoadingWithoutPlayerStateChange:(id)arg1;
- (void)viewModel:(id)arg1 podcastDidFinishLoadingWithError:(id)arg2;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)sp_updateContentInsets;
- (unsigned long long)preferredNavigationBarState;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collapseHeaderViewOnEnteringViewIfFollowed;
- (void)updateHeaderViewImage;
- (void)updatePodcastHeader;
- (void)setupPodcastHeaders;
- (void)filterAction:(id)arg1;
- (void)followButtonTapped:(id)arg1;
- (void)ensureCorrectTableViewSubviewOrder;
- (void)reloadActiveRow;
- (void)setupTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)invokeHeaderContextMenu:(id)arg1;
- (void)updateBarButtons;
- (void)setupBarButtons;
- (void)setupConstraints;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPodcastViewModel:(id)arg1 glueImageLoader:(id)arg2 logger:(id)arg3 collectionLogger:(id)arg4 showContextMenuController:(id)arg5 episodeCellConfigurator:(id)arg6 collectionTestManager:(id)arg7 podcastTestManager:(id)arg8 podcastContextMenuProvider:(id)arg9 shareFeature:(id)arg10 linkDispatcher:(id)arg11 navigationDecorator:(id)arg12 cellActionHandler:(id)arg13 presentationService:(id)arg14 viewLogger:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

