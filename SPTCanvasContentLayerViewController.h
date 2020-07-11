//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTCanvasContentLayerViewControllerViewModelDelegate-Protocol.h"
#import "SPTCanvasTapArtistAttributionDelegate-Protocol.h"

@class NSString, SPTCanvasActivityIndicatorView, SPTCanvasAttributionView, SPTCanvasContentLayerViewControllerViewModel, SPTCanvasNowPlayingOverlayView, UIImageView, UILabel, UIView;

@interface SPTCanvasContentLayerViewController : UIViewController <SPTCanvasTapArtistAttributionDelegate, SPTCanvasContentLayerViewControllerViewModelDelegate>
{
    _Bool _showsAttributionView;
    SPTCanvasContentLayerViewControllerViewModel *_viewModel;
    UIView *_videoPlayerView;
    UIImageView *_imageView;
    SPTCanvasNowPlayingOverlayView *_overlayView;
    SPTCanvasAttributionView *_attributionView;
    SPTCanvasActivityIndicatorView *_activityIndicatorView;
    UILabel *_qaDebugLabel;
}

@property(nonatomic) _Bool showsAttributionView; // @synthesize showsAttributionView=_showsAttributionView;
@property(retain, nonatomic) UILabel *qaDebugLabel; // @synthesize qaDebugLabel=_qaDebugLabel;
@property(readonly, nonatomic) SPTCanvasActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, nonatomic) SPTCanvasAttributionView *attributionView; // @synthesize attributionView=_attributionView;
@property(retain, nonatomic) SPTCanvasNowPlayingOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) SPTCanvasContentLayerViewControllerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)animateWithAnimations:(CDUnknownBlockType)arg1;
- (void)didLoadVideoPlayer;
- (void)willLoadVideoPlayer;
- (void)removeVideoPlayerView;
- (void)addVideoPlayerView:(id)arg1;
- (void)updateCanvasImage:(id)arg1;
- (void)updateArtistAvatarImage:(id)arg1 artistName:(id)arg2;
- (void)setshowsAttributionView:(_Bool)arg1;
- (void)hideAttributionView;
- (void)showAttributionView;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)hideOverlay;
- (void)showOverlay;
- (void)didTapArtistAttribution;
- (void)didReceiveLoggerNotification:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

