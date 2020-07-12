//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTNavigationItemsConsumer-Protocol.h"

@class SPBarViewController, SPTMenuController, UIViewController;
@protocol MetaViewControllerDelegate, SPTBarOverlayViewController, SPTFullscreenPlaybackPresentationManager, SPTMetaViewControllerObserver, SPTMetaViewControllerRootViewPresenter, SPTModalPresentationController, SPTTabBarControllerProtocol;

@protocol SPTMetaViewController <SPTNavigationItemsConsumer>
- (void)setModalPresentationController:(id <SPTModalPresentationController>)arg1;
- (void)hideNowPlayingViewControllerAnimated:(_Bool)arg1 completionHandler:(void (^)(void))arg2;
- (void)showNowPlayingViewControllerAnimated:(_Bool)arg1 completionHandler:(void (^)(void))arg2;
- (void)showNowPlayingViewControllerAnimated:(_Bool)arg1;
- (void)switchToLoginViewForLogoutForgetUser:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)switchToLoginViewAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)switchFromLoginAnimated:(_Bool)arg1 manualLogin:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)switchToMainViewAnimated:(_Bool)arg1 manualLogin:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)switchToViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)removeRootViewPresenter:(id <SPTMetaViewControllerRootViewPresenter>)arg1;
- (void)addRootViewPresenter:(id <SPTMetaViewControllerRootViewPresenter>)arg1;
- (void)selectTab:(UIViewController *)arg1;
@property(nonatomic, readonly) UIViewController *defaultTab;
@property(nonatomic, readonly) UIViewController *top;
@property(nonatomic, retain) id <SPTFullscreenPlaybackPresentationManager> fullscreenPlaybackPresentationManager;
- (_Bool)isShowingMainView;
- (_Bool)isShowingLoginView;
- (_Bool)isLoadingUIComplete;
@property(nonatomic, readonly) UIViewController<SPTBarOverlayViewController> *nowPlaying;
@property(nonatomic, readonly) SPTMenuController *menuController;
@property(nonatomic, readonly) UIViewController *rootContainer;
@property(nonatomic, readonly) SPBarViewController *barViewController;
@property(nonatomic) __weak id <MetaViewControllerDelegate> delegate;
- (void)removeObserver:(id <SPTMetaViewControllerObserver>)arg1;
- (void)addObserver:(id <SPTMetaViewControllerObserver>)arg1;
@property(readonly, nonatomic) UIViewController<SPTTabBarControllerProtocol> *tabs;

// Remaining properties
@property(nonatomic, readonly) _Bool loadingUIComplete;
@property(nonatomic, readonly) _Bool showingLoginView;
@property(nonatomic, readonly) _Bool showingMainView;
@end

