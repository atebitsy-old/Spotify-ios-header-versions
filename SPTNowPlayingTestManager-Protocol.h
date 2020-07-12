//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTNowPlayingScrollConfiguration, SPTPlayerState;
@protocol SPTNowPlayingTestManagerObserver;

@protocol SPTNowPlayingTestManager <NSObject>
@property(readonly, nonatomic, getter=isRemoteControlEventLoggingEnabled) _Bool remoteControlEventLoggingEnabled;
@property(readonly, nonatomic, getter=isRemoteControlEventSubtypeDeprecationEnabled) _Bool remoteControlEventSubtypeDeprecationEnabled;
@property(readonly, nonatomic) _Bool isLyricsUpsellPopupEnabled;
@property(readonly, nonatomic) _Bool isContentLayerLyricsTabEnabled;
@property(readonly, nonatomic) _Bool isContentLayerLyricsButtonEnabled;
@property(readonly, nonatomic) _Bool isNowPlayingBarLyricsLabelEnabled;
@property(readonly, nonatomic) SPTNowPlayingScrollConfiguration *scrollConfiguration;
@property(readonly, nonatomic, getter=isContentLayerVideoTabEnabled) _Bool videoTabEnabled;
@property(readonly, nonatomic, getter=isPrideAnimatedHeartEnabled) _Bool prideAnimatedHeartEnabled;
@property(readonly, nonatomic, getter=isAnimatedHeartEnabled) _Bool animatedHeartEnabled;
@property(readonly, nonatomic, getter=isMixedMediaEpisodeModeEnabled) _Bool mixedMediaEpisodeModeEnabled;
@property(readonly, nonatomic, getter=isContextAwareEditorialTrackSharingEnabled) _Bool contextAwareEditorialTrackSharingEnabled;
@property(readonly, nonatomic, getter=isLocalBansEnabled) _Bool localBansEnabled;
@property(readonly, nonatomic, getter=isFreeTierEnabled) _Bool freeTierEnabled;
@property(readonly, nonatomic, getter=isShowsFormatContextAwareSharingEnabled) _Bool showsFormatContextAwareSharingEnabled;
- (_Bool)setLocalBansEnabled:(_Bool)arg1;
- (_Bool)isPodcast:(SPTPlayerState *)arg1;
- (void)removeObserver:(id <SPTNowPlayingTestManagerObserver>)arg1;
- (void)addObserver:(id <SPTNowPlayingTestManagerObserver>)arg1;
@end

