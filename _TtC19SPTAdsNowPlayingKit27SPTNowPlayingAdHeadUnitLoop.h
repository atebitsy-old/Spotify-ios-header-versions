//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC19SPTAdsNowPlayingKit27SPTNowPlayingAdHeadUnitLoop : NSObject
{
    // Error parsing type: , name: loop
}

- (void).cxx_destruct;
- (void)send_didTapPlaybackButton;
- (void)send_didTapNegativeFeedbackButton;
- (void)send_skipToNext;
- (void)send_didTapPositiveFeedbackButtonWithFeedbackButton:(id)arg1 performPositiveFeedback:(CDUnknownBlockType)arg2;
- (void)send_adPlayerDisplayLinkDidFireWithTrack:(id)arg1 shouldEnableSkipControl:(_Bool)arg2 nextNPVButton:(id)arg3 prevNPVButton:(id)arg4 redisplaySkipControl:(_Bool)arg5;
- (void)send_adPlayerStateDidChangeToTrackWithTrack:(id)arg1 playerState:(id)arg2 isVideoCompanionAd:(_Bool)arg3 isVideoInProgress:(_Bool)arg4;
- (void)send_reloadViewControllerWithAdEntityWithIsVideoCompanionAd:(_Bool)arg1 isVideoInProgress:(_Bool)arg2 playerState:(id)arg3 shouldEnableSkipControl:(_Bool)arg4 nextNPVButton:(id)arg5 prevNPVButton:(id)arg6 redisplaySkipControl:(_Bool)arg7;
- (void)subscribeWithSubscriber:(CDUnknownBlockType)arg1;
- (id)init;

@end

