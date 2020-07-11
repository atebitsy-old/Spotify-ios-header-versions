//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTUBINowPlayingBarEventFactory, SPTUserBehaviourInstrumentationLogger;

@interface SPTNowPlayingBarLogger : NSObject
{
    id <SPTUserBehaviourInstrumentationLogger> _ubiLogger;
    id <SPTUBINowPlayingBarEventFactory> _nowPlayingBarEventFactory;
}

@property(retain, nonatomic) id <SPTUBINowPlayingBarEventFactory> nowPlayingBarEventFactory; // @synthesize nowPlayingBarEventFactory=_nowPlayingBarEventFactory;
@property(retain, nonatomic) id <SPTUserBehaviourInstrumentationLogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
- (void).cxx_destruct;
- (void)logBarHeartButtonTapped:(long long)arg1 playerState:(id)arg2;
- (void)logBarSwipeToOpenWithPlayerState:(id)arg1;
- (void)logBarSwipeToPreviousWithPlayerState:(id)arg1;
- (void)logBarSwipeToNextWithPlayerState:(id)arg1;
- (void)logBarPlayButtonTappedWithBehavior:(long long)arg1 playerState:(id)arg2;
- (id)initWithUbiLogger:(id)arg1 nowPlayingBarEventFactory:(id)arg2;

@end

