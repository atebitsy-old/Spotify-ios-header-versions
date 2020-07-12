//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTNowPlayingBaseUnitProvider.h"

@class SPTNowPlayingBarLogger, SPTNowPlayingBarModel, SPTNowPlayingModel, SPTStatefulPlayer, SPTTheme, UIViewController;
@protocol BMVideoSurfaceManager, SPTGLUEImageLoaderFactory, SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingManager;

@interface SPTNowPlayingBarLeftAccessoryUnitProvider : SPTNowPlayingBaseUnitProvider
{
    id <SPTNowPlayingManager> _nowPlayingManager;
    SPTTheme *_theme;
    UIViewController *_leftAccessoryViewController;
    SPTNowPlayingModel *_nowPlayingModel;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTNowPlayingBarLogger *_logger;
    id <SPTGLUEImageLoaderFactory> _imageLoaderFactory;
    SPTNowPlayingBarModel *_nowPlayingBarModel;
    id <BMVideoSurfaceManager> _videoSurfaceManager;
    SPTStatefulPlayer *_statefulPlayer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTStatefulPlayer *statefulPlayer; // @synthesize statefulPlayer=_statefulPlayer;
@property(readonly, nonatomic) id <BMVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(readonly, nonatomic) SPTNowPlayingBarModel *nowPlayingBarModel; // @synthesize nowPlayingBarModel=_nowPlayingBarModel;
@property(readonly, nonatomic) id <SPTGLUEImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) SPTNowPlayingBarLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(retain, nonatomic) SPTNowPlayingModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(retain, nonatomic) UIViewController *leftAccessoryViewController; // @synthesize leftAccessoryViewController=_leftAccessoryViewController;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
- (void)processPlayerStateChange:(id)arg1 toggleMode:(unsigned long long)arg2;
- (void)createVideoUnit;
- (void)createCoverArtUnit;
- (void)createEmptyUnit;
- (id)initWithPlayer:(id)arg1 nowPlayingManager:(id)arg2 theme:(id)arg3 nowPlayingModel:(id)arg4 auxiliaryActionsHandler:(id)arg5 logger:(id)arg6 imageLoaderFactory:(id)arg7 nowPlayingBarModel:(id)arg8 videoSurfaceManager:(id)arg9 statefulPlayer:(id)arg10;

@end

