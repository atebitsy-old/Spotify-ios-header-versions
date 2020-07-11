//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistHeaderConfigurator-Protocol.h"
#import "SPTFreeTierPlaylistHeaderContentViewDelegate-Protocol.h"
#import "SPTFreeTierPlaylistHeaderMetadataViewDelegate-Protocol.h"
#import "SPTFreeTierPlaylistHeaderPageContainerViewDelegate-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"

@class GLUEButton, GLUELabel, NSString, NSURL, SPTFreeTierPlaylistGLUETheme, SPTFreeTierPlaylistHeaderContentView, SPTFreeTierPlaylistHeaderGradientBackgroundView, SPTFreeTierPlaylistHeaderMetadataView, SPTFreeTierPlaylistLogger, UIView;
@protocol SPTCollectionPlatformConfiguration, SPTFreeTierPlaylistDefaultHeaderViewModel, SPTFreeTierPlaylistFollowViewModel, SPTFreeTierPlaylistPlayViewModel, SPTImageLoader;

@interface SPTFreeTierPlaylistHeaderDefaultConfigurator : NSObject <SPTImageLoaderDelegate, SPTFreeTierPlaylistHeaderContentViewDelegate, SPTFreeTierPlaylistHeaderMetadataViewDelegate, SPTFreeTierPlaylistHeaderPageContainerViewDelegate, SPTFreeTierPlaylistHeaderConfigurator>
{
    SPTFreeTierPlaylistHeaderContentView *_contentView;
    SPTFreeTierPlaylistHeaderMetadataView *_metadataView;
    SPTFreeTierPlaylistHeaderGradientBackgroundView *_gradientBackgroundView;
    GLUEButton *_playButton;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    SPTFreeTierPlaylistGLUETheme *_theme;
    SPTFreeTierPlaylistLogger *_logger;
    id <SPTImageLoader> _imageLoader;
    UIView *_filterSearchBar;
    id <SPTFreeTierPlaylistDefaultHeaderViewModel> _defaultHeaderViewModel;
    id <SPTFreeTierPlaylistPlayViewModel> _playViewModel;
    id <SPTFreeTierPlaylistFollowViewModel> _followViewModel;
    NSURL *_lastImageURL;
    NSURL *_lastProfileImageURL;
    GLUELabel *_navigationTitleView;
}

@property(retain, nonatomic) GLUELabel *navigationTitleView; // @synthesize navigationTitleView=_navigationTitleView;
@property(retain, nonatomic) NSURL *lastProfileImageURL; // @synthesize lastProfileImageURL=_lastProfileImageURL;
@property(retain, nonatomic) NSURL *lastImageURL; // @synthesize lastImageURL=_lastImageURL;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistFollowViewModel> followViewModel; // @synthesize followViewModel=_followViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistPlayViewModel> playViewModel; // @synthesize playViewModel=_playViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistDefaultHeaderViewModel> defaultHeaderViewModel; // @synthesize defaultHeaderViewModel=_defaultHeaderViewModel;
@property(readonly, nonatomic) UIView *filterSearchBar; // @synthesize filterSearchBar=_filterSearchBar;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTFreeTierPlaylistLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTFreeTierPlaylistGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(retain, nonatomic) GLUEButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) SPTFreeTierPlaylistHeaderGradientBackgroundView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
@property(retain, nonatomic) SPTFreeTierPlaylistHeaderMetadataView *metadataView; // @synthesize metadataView=_metadataView;
@property(retain, nonatomic) SPTFreeTierPlaylistHeaderContentView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)pageContainerView:(id)arg1 didSwipeToPageWithIndex:(unsigned long long)arg2;
- (void)playlistMetadataView:(id)arg1 ownerViewTapped:(id)arg2 isOwnerName:(_Bool)arg3;
- (void)contentViewDelegateDidPressFollowButton:(id)arg1;
- (void)contentViewDelegateDidTapShuffleBadge:(id)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)headerDidScroll;
- (void)updateHeaderPlayButton;
- (void)updateMetadataView;
- (void)updateContentViewWithImage:(id)arg1;
- (void)updateContentView;
- (void)updateImageInBackgroundAndContentView;
- (void)setupTitleView;
- (id)supplementaryView;
- (void)headerDidAppear;
- (id)title;
- (void)updateHeaderView:(id)arg1;
- (id)createHeaderView;
- (id)initWithHeaderViewModel:(id)arg1 playViewModel:(id)arg2 followViewModel:(id)arg3 imageLoader:(id)arg4 collectionConfiguration:(id)arg5 filterSearchBar:(id)arg6 theme:(id)arg7 logger:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

