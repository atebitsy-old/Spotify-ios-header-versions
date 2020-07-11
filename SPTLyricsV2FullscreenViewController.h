//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTGaiaConnectObserver-Protocol.h"
#import "SPTLyricsV2FullscreenFooterViewControllerDelegate-Protocol.h"
#import "SPTLyricsV2LyricsViewControllerDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTVocalRemovalFeedbackBannerPresenterDelegate-Protocol.h"
#import "SPTVocalRemovalMenuButtonViewModelDelegate-Protocol.h"

@class NSString, NSURL, SPTLyricsV2Configuration, SPTLyricsV2FullscreenFooterViewController, SPTLyricsV2FullscreenHeaderViewController, SPTLyricsV2FullscreenView, SPTLyricsV2GLUETheme, SPTLyricsV2LyricsViewController, SPTPlayerTrack, SPTProgressView, SPTVocalRemovalConfiguration, SPTVocalRemovalFeedbackBannerPresenter, UIButton;
@protocol SPTAutoLockOverrideToken, SPTContextMenuPresenter, SPTPageContainer;

@interface SPTLyricsV2FullscreenViewController : UIViewController <SPTLyricsV2FullscreenFooterViewControllerDelegate, SPTLyricsV2LyricsViewControllerDelegate, SPTVocalRemovalMenuButtonViewModelDelegate, SPTVocalRemovalFeedbackBannerPresenterDelegate, SPTGaiaConnectObserver, SPTPageController>
{
    _Bool _wasVocalRemovalEnabledAtLeastOnce;
    NSString *_cardTitle;
    SPTLyricsV2Configuration *_lyricsConfiguration;
    SPTLyricsV2GLUETheme *_theme;
    SPTPlayerTrack *_track;
    SPTVocalRemovalConfiguration *_vocalRemovalConfiguration;
    id <SPTAutoLockOverrideToken> _autoLockToken;
    id <SPTContextMenuPresenter> _presenter;
    SPTLyricsV2FullscreenFooterViewController *_footerViewController;
    SPTLyricsV2FullscreenHeaderViewController *_headerViewController;
    SPTLyricsV2LyricsViewController *_lyricsViewController;
    SPTProgressView *_progressView;
    SPTVocalRemovalFeedbackBannerPresenter *_bannerPresenter;
    UIButton *_closeButton;
    CDUnknownBlockType _cardViewFrameCallback;
    CDUnknownBlockType _lyricsViewFrameCallback;
}

@property(nonatomic) _Bool wasVocalRemovalEnabledAtLeastOnce; // @synthesize wasVocalRemovalEnabledAtLeastOnce=_wasVocalRemovalEnabledAtLeastOnce;
@property(copy, nonatomic) CDUnknownBlockType lyricsViewFrameCallback; // @synthesize lyricsViewFrameCallback=_lyricsViewFrameCallback;
@property(copy, nonatomic) CDUnknownBlockType cardViewFrameCallback; // @synthesize cardViewFrameCallback=_cardViewFrameCallback;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) SPTVocalRemovalFeedbackBannerPresenter *bannerPresenter; // @synthesize bannerPresenter=_bannerPresenter;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTLyricsV2LyricsViewController *lyricsViewController; // @synthesize lyricsViewController=_lyricsViewController;
@property(retain, nonatomic) SPTLyricsV2FullscreenHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) SPTLyricsV2FullscreenFooterViewController *footerViewController; // @synthesize footerViewController=_footerViewController;
@property(retain, nonatomic) id <SPTContextMenuPresenter> presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) id <SPTAutoLockOverrideToken> autoLockToken; // @synthesize autoLockToken=_autoLockToken;
@property(readonly, nonatomic) SPTVocalRemovalConfiguration *vocalRemovalConfiguration; // @synthesize vocalRemovalConfiguration=_vocalRemovalConfiguration;
@property(readonly, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
@property(readonly, nonatomic) SPTLyricsV2GLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTLyricsV2Configuration *lyricsConfiguration; // @synthesize lyricsConfiguration=_lyricsConfiguration;
@property(readonly, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)vocalRemovalFeedbackBannerPresenterDidTapCloseButton:(id)arg1;
- (void)connectActiveDeviceDidChange:(id)arg1;
- (void)didPressVocalRemovalMenuButton:(id)arg1;
- (void)lyricsViewControllerDidTapSyncTheseLyricsLink:(id)arg1;
- (void)lyricsViewController:(id)arg1 didShowNumberOfCharacters:(long long)arg2;
- (void)fullscreenFooterViewControllerDidTapVocalRemovalButton:(id)arg1;
- (void)fullscreenFooterViewControllerDidShowContextMenuButton:(id)arg1;
- (void)fullscreenFooterViewControllerDidShowVocalRemovalButton:(id)arg1;
- (void)fullscreenFooterViewController:(id)arg1 didScrubToPosition:(double)arg2;
- (void)fullscreenFooterViewControllerDidEndScrubbing:(id)arg1;
- (void)fullscreenFooterViewControllerDidBeginScrubbing:(id)arg1;
- (void)fullscreenFooterViewController:(id)arg1 didTapPlayPauseButtonWithState:(_Bool)arg2;
- (void)volumeUpButtonPressed;
- (void)volumeDownButtonPressed;
- (void)reportButtonPressed;
- (void)sendFeedback;
- (id)vocalRemovalMenuActions;
- (void)presentContextMenu:(id)arg1;
- (void)presentConnectDialog;
- (void)triggerQuicksilverEvent;
- (void)dismissProgressView;
- (void)showFailureView;
- (void)showLoadingView;
- (void)switchVocalRemovalToActiveState:(_Bool)arg1;
- (void)setupConstraints;
- (void)dismiss;
- (void)updateStyle;
- (void)didTapHeaderView;
- (void)setScreenLockingEnabled:(_Bool)arg1;
- (void)collapse:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded;
- (void)expand;
- (void)startExpading;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1 title:(id)arg2 track:(id)arg3 lyricsLineSet:(id)arg4 cardViewFrameCallback:(CDUnknownBlockType)arg5 lyricsViewFrameCallback:(CDUnknownBlockType)arg6 lyricsConfiguration:(id)arg7 vocalRemovalConfiguration:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTLyricsV2FullscreenView *view; // @dynamic view;

@end

