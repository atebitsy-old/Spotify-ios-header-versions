//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GLUEThemeObserver-Protocol.h"
#import "SPContentInsetViewController-Protocol.h"
#import "SPTArtistAboutBiographyViewDelegate-Protocol.h"
#import "SPTArtistAboutViewModelDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSString, NSURL, SPTArtistAboutBiographyView, SPTArtistAboutContextMenuViewModel, SPTArtistAboutGLUETheme, SPTArtistAboutImageGalleryViewController, SPTArtistAboutLogger, SPTArtistAboutMonthlyListenersView, SPTArtistAboutStateProvider, SPTArtistAboutViewModel, SPTInfoView, SPTProgressView, UIStackView;
@protocol GLUEImageLoader, SPTLinkDispatcher, SPTPageContainer, SPTViewLogger;

@interface SPTArtistAboutViewController : UIViewController <SPTArtistAboutViewModelDelegate, SPTArtistAboutBiographyViewDelegate, GLUEThemeObserver, SPTNavigationControllerNavigationBarState, SPContentInsetViewController, SPTPageController>
{
    SPTArtistAboutViewModel *_viewModel;
    SPTArtistAboutContextMenuViewModel *_contextMenuViewModel;
    SPTArtistAboutStateProvider *_stateProvider;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTViewLogger> _viewLogger;
    SPTArtistAboutLogger *_logger;
    SPTArtistAboutGLUETheme *_theme;
    SPTProgressView *_loadingView;
    SPTInfoView *_infoView;
    UIStackView *_rootStackView;
    UIStackView *_textStackView;
    SPTArtistAboutImageGalleryViewController *_imageGalleryViewController;
    SPTArtistAboutMonthlyListenersView *_monthlyListenersView;
    SPTArtistAboutBiographyView *_biographyView;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTArtistAboutBiographyView *biographyView; // @synthesize biographyView=_biographyView;
@property(retain, nonatomic) SPTArtistAboutMonthlyListenersView *monthlyListenersView; // @synthesize monthlyListenersView=_monthlyListenersView;
@property(retain, nonatomic) SPTArtistAboutImageGalleryViewController *imageGalleryViewController; // @synthesize imageGalleryViewController=_imageGalleryViewController;
@property(retain, nonatomic) UIStackView *textStackView; // @synthesize textStackView=_textStackView;
@property(retain, nonatomic) UIStackView *rootStackView; // @synthesize rootStackView=_rootStackView;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTProgressView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SPTArtistAboutGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTArtistAboutLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) SPTArtistAboutStateProvider *stateProvider; // @synthesize stateProvider=_stateProvider;
@property(retain, nonatomic) SPTArtistAboutContextMenuViewModel *contextMenuViewModel; // @synthesize contextMenuViewModel=_contextMenuViewModel;
@property(retain, nonatomic) SPTArtistAboutViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)rightButtonPressed:(id)arg1;
- (void)sp_updateContentInsets;
- (unsigned long long)preferredNavigationBarState;
- (void)externalLinkTapped:(id)arg1;
- (void)externalSocialLinkTappedForType:(unsigned long long)arg1;
- (void)isOfflineWithNoData;
- (void)didFailToLoadArtistAboutWithError:(id)arg1;
- (void)configureViewsForArtistAbout:(id)arg1;
- (void)didLoadArtistAbout:(id)arg1;
- (void)isLoadingArtistAbout;
- (void)showInfoViewForError:(id)arg1;
- (void)showOfflineView;
- (void)showErrorView;
- (void)hideInfoView;
- (void)showInfoView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)themeUpdated:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addLayoutConstraints;
- (void)configureContextMenuForEnabledState:(_Bool)arg1;
- (void)setupViews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 contextMenuViewModel:(id)arg2 stateProvider:(id)arg3 glueImageLoader:(id)arg4 theme:(id)arg5 viewLogger:(id)arg6 logger:(id)arg7 linkDispatcher:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

