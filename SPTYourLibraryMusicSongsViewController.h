//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GLUEThemeObserver-Protocol.h"
#import "SPContentInsetViewController-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTOfflineSwitchDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTYourLibraryMusicSongCellConfiguratorDelegate-Protocol.h"
#import "SPTYourLibraryMusicSongsViewModelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEEmptyStateView, NSString, NSURL, SPTEntityHeaderViewController, SPTProgressView, SPTTableViewOfflineSwitchCell, SPTYourLibraryMusicGLUETheme, SPTYourLibraryMusicOfflineSwitchFactory, SPTYourLibraryMusicSongCellConfigurator, SPTYourLibraryMusicSongsHeaderViewController, SPTYourLibraryMusicSongsTableView;
@protocol GLUEImageLoader, SPTAlertInterface, SPTAssistedCurationUIService, SPTPageContainer, SPTShareDragDelegateFactory, SPTSortingFilteringUIFactory, SPTViewLogger, SPTYourLibraryMusicSongsViewModel, SPTYourLibraryMusicTestManager, UITableViewDragDelegate;

@interface SPTYourLibraryMusicSongsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SPTYourLibraryMusicSongCellConfiguratorDelegate, SPTNavigationControllerNavigationBarState, SPContentInsetViewController, SPTOfflineSwitchDelegate, GLUEThemeObserver, SPTYourLibraryMusicSongsViewModelDelegate, SPTPageController>
{
    _Bool _contextMenuToBePresented;
    SPTYourLibraryMusicSongsTableView *_tableView;
    SPTProgressView *_progressView;
    SPTYourLibraryMusicGLUETheme *_theme;
    id <SPTYourLibraryMusicSongsViewModel> _viewModel;
    id <GLUEImageLoader> _imageLoader;
    SPTYourLibraryMusicSongCellConfigurator *_cellConfigurator;
    SPTYourLibraryMusicSongsHeaderViewController *_headerViewController;
    SPTEntityHeaderViewController *_headerView;
    GLUEEmptyStateView *_emptyView;
    GLUEEmptyStateView *_noResultEmptyView;
    id <SPTViewLogger> _viewLogger;
    id <SPTAlertInterface> _alertInterface;
    SPTYourLibraryMusicOfflineSwitchFactory *_offlineSwitchFactory;
    SPTTableViewOfflineSwitchCell *_offlineSwitchCell;
    id <SPTSortingFilteringUIFactory> _sortingFilteringUIFactory;
    id <SPTShareDragDelegateFactory> _shareDragDelegateFactory;
    id <UITableViewDragDelegate> _dragDelegateHolder;
    id <SPTYourLibraryMusicTestManager> _testManager;
    id <SPTAssistedCurationUIService> _assistedCurationUIService;
}

@property(nonatomic) __weak id <SPTAssistedCurationUIService> assistedCurationUIService; // @synthesize assistedCurationUIService=_assistedCurationUIService;
@property(retain, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <UITableViewDragDelegate> dragDelegateHolder; // @synthesize dragDelegateHolder=_dragDelegateHolder;
@property(retain, nonatomic) id <SPTShareDragDelegateFactory> shareDragDelegateFactory; // @synthesize shareDragDelegateFactory=_shareDragDelegateFactory;
@property(nonatomic, getter=isContextMenuToBePresented) _Bool contextMenuToBePresented; // @synthesize contextMenuToBePresented=_contextMenuToBePresented;
@property(retain, nonatomic) id <SPTSortingFilteringUIFactory> sortingFilteringUIFactory; // @synthesize sortingFilteringUIFactory=_sortingFilteringUIFactory;
@property(retain, nonatomic) SPTTableViewOfflineSwitchCell *offlineSwitchCell; // @synthesize offlineSwitchCell=_offlineSwitchCell;
@property(readonly, nonatomic) SPTYourLibraryMusicOfflineSwitchFactory *offlineSwitchFactory; // @synthesize offlineSwitchFactory=_offlineSwitchFactory;
@property(retain, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) GLUEEmptyStateView *noResultEmptyView; // @synthesize noResultEmptyView=_noResultEmptyView;
@property(retain, nonatomic) GLUEEmptyStateView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) SPTEntityHeaderViewController *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SPTYourLibraryMusicSongsHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) SPTYourLibraryMusicSongCellConfigurator *cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTYourLibraryMusicSongsViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTYourLibraryMusicGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTYourLibraryMusicSongsTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)buttonSectionHeaderWithViewModel:(id)arg1;
- (id)defaultSectionHeaderWithViewModel:(id)arg1;
- (id)entitySectionHeaderWithViewModel:(id)arg1;
- (id)logContext;
- (void)themeUpdated:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (unsigned long long)preferredNavigationBarState;
- (unsigned long long)offlineSwitchCellOfflineAvailability:(id)arg1;
- (void)offlineSwitchCellDidChangeState:(id)arg1 isOn:(_Bool)arg2;
- (void)songsViewModel:(id)arg1 error:(id)arg2;
- (void)songsViewModelDidChange:(id)arg1;
- (void)handleEmptyView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)songCellConfigurator:(id)arg1 trailingSectionHeaderButton:(id)arg2;
- (void)songCellConfigurator:(id)arg1 mainSectionHeaderButton:(id)arg2;
- (void)songCellConfigurator:(id)arg1 didTapOnEntitySectionHeader:(id)arg2 withViewModel:(id)arg3;
- (void)songCellConfigurator:(id)arg1 didSwipeCell:(id)arg2;
- (void)songCellConfigurator:(id)arg1 didEndAudioPreview:(id)arg2;
- (void)songCellConfigurator:(id)arg1 didStartAudioPreview:(id)arg2;
- (void)songCellConfigurator:(id)arg1 trackPreview:(id)arg2;
- (void)songCellConfigurator:(id)arg1 banButton:(id)arg2;
- (void)songCellConfigurator:(id)arg1 likeButton:(id)arg2;
- (void)songCellConfigurator:(id)arg1 contextMenuButton:(id)arg2;
- (id)indexPathOfSubview:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)sp_updateContentInsets;
- (id)indexPathForCell:(id)arg1;
- (void)hideProgressViewWithError:(id)arg1;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)setupConstraints;
- (void)initializeInterface;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 collectionConfiguration:(id)arg3 imageLoader:(id)arg4 audioPreviewModelFactory:(id)arg5 audioPreviewUIFactory:(id)arg6 emptyView:(id)arg7 viewLogger:(id)arg8 alertInterface:(id)arg9 offlineSwitchFactory:(id)arg10 sortingFilteringUIFactory:(id)arg11 shelves:(id)arg12 shareDragDelegateFactory:(id)arg13 testManager:(id)arg14 trackRowFactory:(id)arg15 assistedCurationUIService:(id)arg16;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

