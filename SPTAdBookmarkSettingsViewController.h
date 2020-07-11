//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTSavedAdsViewModelDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUELabel, NSString, NSURL, SPTAdBookmarkSettingsTrailingAccessoryView, SPTFreeTierPreCurationTheme, SPTSavedAdsViewModel, SPTTableView;
@protocol GLUEImageLoader, SPTAdsBaseCosmosBridge, SPTAudioPreviewModelFactory, SPTAudioPreviewUIFactory, SPTLinkDispatcher, SPTLogCenter, SPTPageContainer, SPTSnackbarConditionalPresenter;

@interface SPTAdBookmarkSettingsViewController : UIViewController <SPTSavedAdsViewModelDelegate, UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, SPContentInsetViewController, SPTPageController>
{
    SPTSavedAdsViewModel *_viewModel;
    SPTAdBookmarkSettingsTrailingAccessoryView *_trailingAccessoryView;
    SPTTableView *_tableView;
    GLUELabel *_emptyStateLabel;
    id <GLUEImageLoader> _imageLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTLogCenter> _logCenter;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    id <SPTAudioPreviewModelFactory> _audioPreviewModelFactory;
    id <SPTAudioPreviewUIFactory> _audioPreviewUIFactory;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    SPTFreeTierPreCurationTheme *_theme;
}

@property(readonly, nonatomic) SPTFreeTierPreCurationTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(readonly, nonatomic) id <SPTAudioPreviewUIFactory> audioPreviewUIFactory; // @synthesize audioPreviewUIFactory=_audioPreviewUIFactory;
@property(readonly, nonatomic) id <SPTAudioPreviewModelFactory> audioPreviewModelFactory; // @synthesize audioPreviewModelFactory=_audioPreviewModelFactory;
@property(readonly, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) GLUELabel *emptyStateLabel; // @synthesize emptyStateLabel=_emptyStateLabel;
@property(readonly, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) SPTAdBookmarkSettingsTrailingAccessoryView *trailingAccessoryView; // @synthesize trailingAccessoryView=_trailingAccessoryView;
@property(readonly, nonatomic) SPTSavedAdsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)updateUI;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)sp_updateContentInsets;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)setupTrailingAccessoryForCell:(id)arg1 forEntity:(id)arg2;
- (void)setupLeadingAccessoryForCell:(id)arg1 forEntity:(id)arg2;
- (void)didTapAccessoryView:(id)arg1;
- (void)viewModelDidFailToSavedAds:(id)arg1;
- (void)viewModelDidLoadSavedAds:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addConstraints;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 glueImageLoader:(id)arg2 linkDispatcher:(id)arg3 logCenter:(id)arg4 cosmosBridge:(id)arg5 audioPreviewModelFactory:(id)arg6 audioPreviewUIFactory:(id)arg7 snackbarPresenter:(id)arg8 theme:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

