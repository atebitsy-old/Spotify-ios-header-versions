//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistPlayViewModel-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSString;
@protocol SPTFreeTierPlaylistPlayModel, SPTFreeTierPlaylistPlayViewModel;

@interface SPTPodcastMixOnDemandPlaylistPlayViewModel : NSObject <SPTPlayerObserver, SPTFreeTierPlaylistPlayViewModel>
{
    _Bool _shouldLaunchNPV;
    id <SPTFreeTierPlaylistPlayModel> _playModel;
    id <SPTFreeTierPlaylistPlayViewModel> _playViewModel;
}

@property(nonatomic) _Bool shouldLaunchNPV; // @synthesize shouldLaunchNPV=_shouldLaunchNPV;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistPlayViewModel> playViewModel; // @synthesize playViewModel=_playViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistPlayModel> playModel; // @synthesize playModel=_playModel;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPlayButtonPausingPlay) _Bool playButtonPausingPlay;
@property(readonly, nonatomic) _Bool shouldShowPlayButton;
@property(readonly, nonatomic, getter=isPlaylistPlaying) _Bool playlistPlaying;
- (void)playTrackEntity:(id)arg1;
- (void)play;
@property(readonly, nonatomic, getter=isPlayButtonUsedForPlayback) _Bool playButtonUsedForPlayback;
- (id)initWithPlayViewModel:(id)arg1 playModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
