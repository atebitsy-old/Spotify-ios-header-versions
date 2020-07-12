//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingArtistLabelUBILogger-Protocol.h"
#import "SPTNowPlayingCloseButtonUBILogger-Protocol.h"
#import "SPTNowPlayingConnectButtonUBILogger-Protocol.h"
#import "SPTNowPlayingContextMenuButtonUBILogger-Protocol.h"
#import "SPTNowPlayingCoverArtUBILogger-Protocol.h"
#import "SPTNowPlayingPlayButtonUBILogger-Protocol.h"
#import "SPTNowPlayingPlaybackSourceLabelUBILogger-Protocol.h"
#import "SPTNowPlayingProgressBarUBILogger-Protocol.h"
#import "SPTNowPlayingScrollUBILogger-Protocol.h"
#import "SPTNowPlayingShareButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSkip15SecondsBackwardButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSkip15SecondsForwardButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSleepTimerButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSpeedControlUBILogger-Protocol.h"
#import "SPTNowPlayingTrackTitleLabelUBILogger-Protocol.h"
#import "SPTNowPlayingViewUBILogger-Protocol.h"

@class NSString;
@protocol SPTUBILogger, SPTUBIMobileNowPlayingViewPodcastEventFactory;

@interface SPTNowPlayingPodcastModeUBILoggerImplementation : NSObject <SPTNowPlayingViewUBILogger, SPTNowPlayingScrollUBILogger, SPTNowPlayingConnectButtonUBILogger, SPTNowPlayingPlayButtonUBILogger, SPTNowPlayingProgressBarUBILogger, SPTNowPlayingArtistLabelUBILogger, SPTNowPlayingTrackTitleLabelUBILogger, SPTNowPlayingCoverArtUBILogger, SPTNowPlayingContextMenuButtonUBILogger, SPTNowPlayingPlaybackSourceLabelUBILogger, SPTNowPlayingCloseButtonUBILogger, SPTNowPlayingSpeedControlUBILogger, SPTNowPlayingSkip15SecondsBackwardButtonUBILogger, SPTNowPlayingSkip15SecondsForwardButtonUBILogger, SPTNowPlayingShareButtonUBILogger, SPTNowPlayingSleepTimerButtonUBILogger>
{
    id <SPTUBILogger> _ubiLogger;
    id <SPTUBIMobileNowPlayingViewPodcastEventFactory> _eventFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTUBIMobileNowPlayingViewPodcastEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
- (void)logSleepTimerButtonTapped;
- (void)logShareButtonTapped;
- (void)logSkip15SecondsBackwardTapped;
- (void)logSkip15SecondsForwardTapped;
- (void)logSpeedControlMenuButtonTapped;
- (void)logCloseButtonTapped;
- (void)logGoToPlayContextButtonTappedWithContextURI:(id)arg1;
- (void)logContextMenuButtonTapped;
- (void)logTapToToggleControls;
- (void)logSwipeToPreviousWithPlayerState:(id)arg1;
- (void)logSwipeToNextWithPlayerState:(id)arg1;
- (void)logGoToAlbum:(id)arg1;
- (void)logTapToOpenArtist:(id)arg1;
- (void)logProgressSliderScrubbedWithPlayerState:(id)arg1;
- (void)logPlayButtonTappedWithBehavior:(long long)arg1 playerState:(id)arg2;
- (void)logOpenConnectButtonTapped;
- (void)logScrollSwipeInteraction;
- (void)logScrollPageImpression;
- (void)logScrollComponentImpressionWithIdentifier:(id)arg1 position:(unsigned long long)arg2;
- (void)logSwipeToClose;
- (id)initWithUbiLogger:(id)arg1 eventFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

