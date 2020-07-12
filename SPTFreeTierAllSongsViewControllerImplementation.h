//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTFreeTierAllSongsCellConfiguratorDelegate-Protocol.h"
#import "SPTFreeTierAllSongsViewModelDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, NSURL, SPTEntityHeaderViewController, SPTFreeTierAllSongsCellConfigurator, SPTFreeTierAllSongsFeatureProperties, SPTFreeTierAllSongsHeaderViewController, SPTFreeTierAllSongsLogger, SPTFreeTierAllSongsTheme, SPTFreeTierAllSongsViewModel, SPTInfoView, SPTProgressView, SPTTableView;
@protocol SPTPageContainer;

@interface SPTFreeTierAllSongsViewControllerImplementation : UIViewController <UITableViewDataSource, UITableViewDelegate, SPTNavigationControllerNavigationBarState, SPTFreeTierAllSongsCellConfiguratorDelegate, SPTPageController, SPTFreeTierAllSongsViewModelDelegate>
{
    _Bool _contextMenuToBePresented;
    SPTTableView *_tableView;
    SPTFreeTierAllSongsViewModel *_viewModel;
    SPTProgressView *_progressView;
    SPTInfoView *_infoView;
    SPTFreeTierAllSongsCellConfigurator *_cellConfigurator;
    SPTFreeTierAllSongsTheme *_theme;
    SPTFreeTierAllSongsHeaderViewController *_allSongsHeaderViewController;
    SPTEntityHeaderViewController *_headerContainerViewController;
    SPTFreeTierAllSongsFeatureProperties *_featureProperties;
    SPTFreeTierAllSongsLogger *_logger;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isContextMenuToBePresented) _Bool contextMenuToBePresented; // @synthesize contextMenuToBePresented=_contextMenuToBePresented;
@property(readonly, nonatomic) SPTFreeTierAllSongsLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTFreeTierAllSongsFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(retain, nonatomic) SPTEntityHeaderViewController *headerContainerViewController; // @synthesize headerContainerViewController=_headerContainerViewController;
@property(retain, nonatomic) SPTFreeTierAllSongsHeaderViewController *allSongsHeaderViewController; // @synthesize allSongsHeaderViewController=_allSongsHeaderViewController;
@property(retain, nonatomic) SPTFreeTierAllSongsTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTFreeTierAllSongsCellConfigurator *cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTFreeTierAllSongsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
- (void)cellConfiguratorWillPresentContextMenu:(id)arg1;
- (void)freeTierAllSongsModelRequiresReloadWithViewModel:(id)arg1;
- (void)freeTierAllSongsModelDidFailToLoad:(id)arg1;
- (void)freeTierAllSongsModelDidLoadWithViewModel:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (unsigned long long)preferredNavigationBarState;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateBarState;
- (_Bool)hasHeader;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateHeaderWithViewModel:(id)arg1;
- (void)createHeader;
- (void)willDismissViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)initWithViewModel:(id)arg1 cellConfigurator:(id)arg2 theme:(id)arg3 featureProperties:(id)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

