//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPodcastEpisodeViewModelDelegate-Protocol.h"

@class GLUEAccessoryIconButton, GLUEButton, NSString, SPTPodcastEpisodeLogger, SPTPodcastEpisodeViewModel, UILayoutGuide, UIStackView, UIView;
@protocol GLUETheme, SPTPodcastUIDownloadButton, SPTShareFeature;

@interface SPTPodcastEpisodeActionRowViewController : UIViewController <SPTPodcastEpisodeViewModelDelegate>
{
    SPTPodcastEpisodeViewModel *_viewModel;
    SPTPodcastEpisodeLogger *_logger;
    id <GLUETheme> _theme;
    id <SPTShareFeature> _shareFeature;
    UILayoutGuide *_contentLayoutGuide;
    UIView *_mainActionContainer;
    GLUEButton *_mainActionButton;
    UIStackView *_secondaryActionsStackView;
    GLUEAccessoryIconButton *_shareButton;
    GLUEAccessoryIconButton<SPTPodcastUIDownloadButton> *_downloadButton;
}

@property(retain, nonatomic) GLUEAccessoryIconButton<SPTPodcastUIDownloadButton> *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) GLUEAccessoryIconButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIStackView *secondaryActionsStackView; // @synthesize secondaryActionsStackView=_secondaryActionsStackView;
@property(retain, nonatomic) GLUEButton *mainActionButton; // @synthesize mainActionButton=_mainActionButton;
@property(retain, nonatomic) UIView *mainActionContainer; // @synthesize mainActionContainer=_mainActionContainer;
@property(retain, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
@property(readonly, nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTPodcastEpisodeLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTPodcastEpisodeViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)viewModelUpdatedPlaybackState:(id)arg1;
- (void)viewModel:(id)arg1 didUpdateWithError:(id)arg2;
- (void)downloadButtonTapped:(id)arg1;
- (void)shareButtonTapped:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (void)setUpActions;
- (void)setUpConstraints;
- (void)setUpView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 shareFeature:(id)arg3 buttonsFactory:(id)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

