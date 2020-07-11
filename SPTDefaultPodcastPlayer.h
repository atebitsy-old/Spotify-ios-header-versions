//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"
#import "SPTPodcastPlayer-Protocol.h"

@class NSString, NSTimer, NSURL, SPTPlayerState;
@protocol SPTPlayer, SPTPodcastEpisode, SPTPodcastPlayerDelegate, SPTPodcastTestManager;

@interface SPTDefaultPodcastPlayer : NSObject <SPTPlayerObserver, SPTPodcastPlayer>
{
    _Bool _sortPlaybackOrder;
    id <SPTPodcastPlayerDelegate> _delegate;
    id <SPTPlayer> _player;
    NSURL *_currentlyPlayingTrack;
    SPTPlayerState *_lastState;
    id <SPTPodcastTestManager> _testManager;
    NSTimer *_progressTimer;
    id <SPTPodcastEpisode> _trailerEpisode;
}

@property(retain, nonatomic) id <SPTPodcastEpisode> trailerEpisode; // @synthesize trailerEpisode=_trailerEpisode;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTPlayerState *lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) NSURL *currentlyPlayingTrack; // @synthesize currentlyPlayingTrack=_currentlyPlayingTrack;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) _Bool sortPlaybackOrder; // @synthesize sortPlaybackOrder=_sortPlaybackOrder;
@property(nonatomic) __weak id <SPTPodcastPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyPodcastPlayerStateDidChange;
- (void)removePreviousTrackFromQueue:(id)arg1;
- (id)nextTracksArrayWithQueue:(id)arg1 trailerTrack:(id)arg2;
- (void)insertAndPlayTrailerTrackInQueue:(id)arg1;
- (id)provideDefaultPlayOptionsWithSkipTrack:(id)arg1 andPosition:(id)arg2;
- (void)fetchProgressState:(id)arg1;
- (void)scheduleFetchProgressTimerIfNecessary;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
- (id)restrictionsForPodcasts;
- (_Bool)isActiveContextURI:(id)arg1;
- (_Bool)isActiveEpisodeURL:(id)arg1 inEntityURL:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)playPodcastTrailerEpisode:(id)arg1;
- (_Bool)resumePodcast:(id)arg1 episodeUrl:(id)arg2;
- (void)playPodcastWithContext:(id)arg1 itemID:(id)arg2 fromTimestamp:(id)arg3;
- (void)playPodcastWithContextURI:(id)arg1 itemID:(id)arg2 fromTimestamp:(id)arg3;
- (void)playPodcast:(id)arg1 withEpisodes:(id)arg2 withOrigin:(id)arg3 startEpisodeUrl:(id)arg4 fromTimestamp:(id)arg5 resetPlay:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)playPodcast:(id)arg1 withEpisodes:(id)arg2 startEpisodeUrl:(id)arg3 fromTimestamp:(id)arg4 resetPlay:(_Bool)arg5;
- (void)pausePodcast:(id)arg1 startEpisodeUrl:(id)arg2;
@property(readonly, nonatomic) _Bool isPlayingPodcastEpisode;
@property(readonly, nonatomic) double currentTrackDuration;
- (_Bool)seekInPodcast:(id)arg1 episodeUrl:(id)arg2 toPosition:(double)arg3;
@property(readonly, nonatomic) double currentTrackPosition;
@property(readonly, nonatomic) double currentTrackProgress;
@property(readonly, nonatomic) NSURL *lastStateContextURI;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

