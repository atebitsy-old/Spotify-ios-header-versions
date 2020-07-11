//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPBarTransitableViewController-Protocol.h"
#import "SPForegroundObserverDelegate-Protocol.h"
#import "SPTNowPlayingBarModelObserver-Protocol.h"
#import "SPTNowPlayingBarVoiceCompanionDelegate-Protocol.h"
#import "SPTPlayerTrackScrollDataSourceDelegate-Protocol.h"
#import "SPTPlayerTrackScrollViewOffsetDelegate-Protocol.h"
#import "SPViewController-Protocol.h"

@class NSString, NSURL, SPForegroundObserver, SPTNowPlayingBarContentView, SPTNowPlayingBarLogger, SPTNowPlayingBarModel, SPTNowPlayingSkipLimitReachedMessageRequester, SPTPlayerTrackScrollDataSource, SPTTheme, UIView;
@protocol SPTGaiaConnectAPI, SPTGaiaDevicesAvailableView, SPTNowPlayingTestManager, _TtP18ConnectUIV2Feature33SPTConnectUIDevicePickerPresenter_;

@interface SPTNowPlayingBarPageViewController : UIViewController <SPBarTransitableViewController, SPForegroundObserverDelegate, SPTPlayerTrackScrollDataSourceDelegate, SPTPlayerTrackScrollViewOffsetDelegate, SPTNowPlayingBarModelObserver, SPTNowPlayingBarVoiceCompanionDelegate, SPViewController>
{
    SPTNowPlayingBarModel *_nowPlayingModel;
    SPTNowPlayingSkipLimitReachedMessageRequester *_skipLimitReachedMessageRequester;
    id <SPTGaiaConnectAPI> _connectManager;
    id <_TtP18ConnectUIV2Feature33SPTConnectUIDevicePickerPresenter_> _devicePickerPresenter;
    SPTTheme *_theme;
    UIView<SPTGaiaDevicesAvailableView> *_devicesAvailableView;
    id <SPTNowPlayingTestManager> _testManager;
    SPTNowPlayingBarContentView *_contentView;
    SPTPlayerTrackScrollDataSource *_playerTrackScrollDataSource;
    SPForegroundObserver *_foregroundObserver;
    SPTNowPlayingBarLogger *_logger;
}

@property(retain, nonatomic) SPTNowPlayingBarLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPForegroundObserver *foregroundObserver; // @synthesize foregroundObserver=_foregroundObserver;
@property(retain, nonatomic) SPTPlayerTrackScrollDataSource *playerTrackScrollDataSource; // @synthesize playerTrackScrollDataSource=_playerTrackScrollDataSource;
@property(retain, nonatomic) SPTNowPlayingBarContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) UIView<SPTGaiaDevicesAvailableView> *devicesAvailableView; // @synthesize devicesAvailableView=_devicesAvailableView;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <_TtP18ConnectUIV2Feature33SPTConnectUIDevicePickerPresenter_> devicePickerPresenter; // @synthesize devicePickerPresenter=_devicePickerPresenter;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) SPTNowPlayingSkipLimitReachedMessageRequester *skipLimitReachedMessageRequester; // @synthesize skipLimitReachedMessageRequester=_skipLimitReachedMessageRequester;
@property(retain, nonatomic) SPTNowPlayingBarModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
- (void).cxx_destruct;
- (void)didTapVoiceCompanionView;
- (void)playerTrackScrollView:(id)arg1 scrolledToRelativeIndex:(long long)arg2;
- (void)playerTrackScrollViewChangedOffset:(id)arg1;
- (void)nowPlayingBarModelDidUpdateLyricsLabelVisibility:(_Bool)arg1;
- (void)nowPlayingBarModelDidUpdateVoiceCompanionState:(id)arg1;
- (void)nowPlayingBarModelDidUpdateTrackMetaData:(id)arg1;
- (void)nowPlayingBarModelDidUpdatePlayingState:(id)arg1;
- (void)foregroundObserverDidHibernate:(id)arg1;
- (void)foregroundObserverDidAwake:(id)arg1;
- (id)playerTrackScrollDataSource:(id)arg1 pageViewWithFrame:(struct CGRect)arg2 reuseIdentifier:(id)arg3;
- (void)playPauseChanged;
- (void)playPause;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)sp_setBarTransitionProgress:(float)arg1;
@property(readonly, nonatomic) NSURL *URI;
- (void)dealloc;
- (id)initWithPlayingModel:(id)arg1 logger:(id)arg2 skipLimitReachedMessageRequester:(id)arg3 theme:(id)arg4 connectManager:(id)arg5 devicePickerPresenter:(id)arg6 devicesAvailableView:(id)arg7 testManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

