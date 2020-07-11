//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VISREFBaseHeaderController.h"

#import "SPTFreeTierPlaylistVISREFHeaderController-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"

@class NSString, NSURL, UIButton, UIImage, UIView, VISREFArtworkContentView, VISREFFadingContainerTopAccessoryView, VISREFFreeTierPlaylistFollowButtonViewModel, VISREFGradientBackgroundView, VISREFPlayButtonForegroundView;
@protocol SPTFreeTierEntityOfflineViewModel, SPTFreeTierPlaylistDefaultHeaderViewModel, SPTFreeTierPlaylistFollowViewModel, SPTFreeTierPlaylistFullbleedHeaderViewModel, SPTFreeTierPlaylistPlayViewModel, SPTFreeTierPlaylistVISREFHeaderControllerDelegate, SPTFreeTierPlaylistVISREFHeaderViewModel, SPTImageLoader;

@interface SPTFreeTierPlaylistVISREFHeaderControllerImplementation : VISREFBaseHeaderController <SPTImageLoaderDelegate, SPTFreeTierPlaylistVISREFHeaderController>
{
    id <SPTFreeTierPlaylistVISREFHeaderControllerDelegate> _delegate;
    double _headerHeight;
    double _navigationBarHeight;
    VISREFGradientBackgroundView *_backgroundView;
    VISREFArtworkContentView *_contentView;
    VISREFFadingContainerTopAccessoryView *_topAccessoryView;
    VISREFPlayButtonForegroundView *_foregroundView;
    id <SPTImageLoader> _imageLoader;
    NSURL *_lastImageURL;
    NSURL *_lastCreatorImageURL;
    id <SPTFreeTierPlaylistPlayViewModel> _playViewModel;
    id <SPTFreeTierPlaylistFollowViewModel> _followViewModel;
    id <SPTFreeTierPlaylistDefaultHeaderViewModel> _defaultHeaderViewModel;
    id <SPTFreeTierPlaylistFullbleedHeaderViewModel> _fullbleedHeaderViewModel;
    id <SPTFreeTierEntityOfflineViewModel> _playlistOfflineViewModel;
    VISREFFreeTierPlaylistFollowButtonViewModel *_followButtonViewModel;
    id <SPTFreeTierPlaylistVISREFHeaderViewModel> _visrefHeaderViewModel;
    UIButton *_contextMenuButton;
    UIButton *_followButton;
    UIButton *_offlineButton;
    UIView *_searchView;
    UIImage *_placeHolderImage;
    UIImage *_lastCreatorImage;
    NSString *_playButtonAccessibilityString;
    NSString *_shufflePlayButtonAccessibilityString;
    NSString *_pauseButtonAccessibilityString;
}

@property(copy, nonatomic) NSString *pauseButtonAccessibilityString; // @synthesize pauseButtonAccessibilityString=_pauseButtonAccessibilityString;
@property(copy, nonatomic) NSString *shufflePlayButtonAccessibilityString; // @synthesize shufflePlayButtonAccessibilityString=_shufflePlayButtonAccessibilityString;
@property(copy, nonatomic) NSString *playButtonAccessibilityString; // @synthesize playButtonAccessibilityString=_playButtonAccessibilityString;
@property(retain, nonatomic) UIImage *lastCreatorImage; // @synthesize lastCreatorImage=_lastCreatorImage;
@property(retain, nonatomic) UIImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;
@property(retain, nonatomic) UIView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) UIButton *offlineButton; // @synthesize offlineButton=_offlineButton;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(retain, nonatomic) id <SPTFreeTierPlaylistVISREFHeaderViewModel> visrefHeaderViewModel; // @synthesize visrefHeaderViewModel=_visrefHeaderViewModel;
@property(retain, nonatomic) VISREFFreeTierPlaylistFollowButtonViewModel *followButtonViewModel; // @synthesize followButtonViewModel=_followButtonViewModel;
@property(retain, nonatomic) id <SPTFreeTierEntityOfflineViewModel> playlistOfflineViewModel; // @synthesize playlistOfflineViewModel=_playlistOfflineViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistFullbleedHeaderViewModel> fullbleedHeaderViewModel; // @synthesize fullbleedHeaderViewModel=_fullbleedHeaderViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistDefaultHeaderViewModel> defaultHeaderViewModel; // @synthesize defaultHeaderViewModel=_defaultHeaderViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistFollowViewModel> followViewModel; // @synthesize followViewModel=_followViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistPlayViewModel> playViewModel; // @synthesize playViewModel=_playViewModel;
@property(retain, nonatomic) NSURL *lastCreatorImageURL; // @synthesize lastCreatorImageURL=_lastCreatorImageURL;
@property(retain, nonatomic) NSURL *lastImageURL; // @synthesize lastImageURL=_lastImageURL;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) VISREFPlayButtonForegroundView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(retain, nonatomic) VISREFFadingContainerTopAccessoryView *topAccessoryView; // @synthesize topAccessoryView=_topAccessoryView;
@property(retain, nonatomic) VISREFArtworkContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) VISREFGradientBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) __weak id <SPTFreeTierPlaylistVISREFHeaderControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)update;
- (void)configureWithHeaderConfiguration:(id)arg1 filterSortBarView:(id)arg2;
- (void)headerViewViewHierarchyDidChange:(id)arg1;
- (void)headerView:(id)arg1 headerViewVisibleAreaChanged:(double)arg2;
- (double)totalHeaderHeight;
- (double)minimumContentHeight;
- (double)minimumHeight;
- (void)headerPrimaryButtonTapped:(id)arg1;
- (id)extractNavigationBarGradientFromBackgroundGradient;
- (void)setImage:(id)arg1;
- (void)setCustomBackButton:(id)arg1;
- (void)navigationBarHeightDidChange:(double)arg1 forceUpdate:(_Bool)arg2;
- (void)updateForegroundView;
- (void)updateContentView;
- (void)setupForegroundView;
- (void)setup;
- (id)initWithHeaderHeight:(double)arg1 andTheme:(id)arg2 imageLoader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

