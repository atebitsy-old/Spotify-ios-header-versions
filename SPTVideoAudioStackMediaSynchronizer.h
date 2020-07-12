//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMEventObserver-Protocol.h"
#import "SPTAudioPlayerMediaClockObserver-Protocol.h"

@class NSString, NSTimer;
@protocol BMPlaybackIdentity, OS_dispatch_queue, SPTAudioPlayerMediaClock, SPTAudioPlayerMediaClockService;

@interface SPTVideoAudioStackMediaSynchronizer : NSObject <SPTAudioPlayerMediaClockObserver, BMEventObserver>
{
    CDUnknownBlockType _videoPlayerProvider;
    NSTimer *_pollingTimer;
    id <SPTAudioPlayerMediaClockService> _audioPlayerMediaClockService;
    id <SPTAudioPlayerMediaClock> _audioClock;
    double _lastSeekDelay;
    id <BMPlaybackIdentity> _identity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <BMPlaybackIdentity> identity; // @synthesize identity=_identity;
@property(nonatomic) double lastSeekDelay; // @synthesize lastSeekDelay=_lastSeekDelay;
@property(retain, nonatomic) id <SPTAudioPlayerMediaClock> audioClock; // @synthesize audioClock=_audioClock;
@property(retain, nonatomic) id <SPTAudioPlayerMediaClockService> audioPlayerMediaClockService; // @synthesize audioPlayerMediaClockService=_audioPlayerMediaClockService;
@property(retain, nonatomic) NSTimer *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(copy, nonatomic) CDUnknownBlockType videoPlayerProvider; // @synthesize videoPlayerProvider=_videoPlayerProvider;
- (void)didCreatePlaybackInBackground:(_Bool)arg1 timestamp:(double)arg2;
- (void)audioPlayerMediaClock:(id)arg1 didStopTrackingPositionOfTrackURI:(id)arg2;
- (void)audioPlayerMediaClock:(id)arg1 didStartTrackingPositionOfTrackURI:(id)arg2;
- (void)stopSyncPolling;
- (void)startSyncPolling;
- (void)setVideoPlaybackSpeed:(float)arg1 timeDifference:(double)arg2;
- (float)adjustedPlaybackSpeed:(float)arg1 forTimeDifference:(double)arg2;
- (void)syncUsingPlaybackSpeed:(float)arg1 timeDifference:(double)arg2;
- (void)seekVideoTo:(double)arg1 playbackSpeed:(float)arg2;
- (void)syncIfNeeded;
- (id)betamaxPlayer;
- (void)dealloc;
- (id)initWithVideoPlayerProvider:(CDUnknownBlockType)arg1 audioPlayerMediaClockService:(id)arg2 identity:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

