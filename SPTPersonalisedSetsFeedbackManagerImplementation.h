//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFormatListPlatformRemoteControlPolicyManagerObserver-Protocol.h"
#import "SPTNowPlayingFeedbackManager-Protocol.h"

@class NSHashTable, NSString;
@protocol SPTFeedbackManager, SPTFormatListPlatformRemoteControlPolicyManager, SPTPlaylistModel;

@interface SPTPersonalisedSetsFeedbackManagerImplementation : NSObject <SPTFormatListPlatformRemoteControlPolicyManagerObserver, SPTNowPlayingFeedbackManager>
{
    id <SPTFormatListPlatformRemoteControlPolicyManager> _remoteControlPolicyManager;
    id <SPTPlaylistModel> _playlistModel;
    id <SPTFeedbackManager> _feedbackManager;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTFeedbackManager> feedbackManager; // @synthesize feedbackManager=_feedbackManager;
@property(readonly, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(readonly, nonatomic) id <SPTFormatListPlatformRemoteControlPolicyManager> remoteControlPolicyManager; // @synthesize remoteControlPolicyManager=_remoteControlPolicyManager;
- (void)dealloc;
- (void)remoteControlPolicyManagerDidFinishDislikeFeedback:(id)arg1 track:(id)arg2 contextURI:(id)arg3 identifier:(id)arg4 error:(id)arg5;
- (void)remoteControlPolicyManagerDidFinishUnlikeFeedback:(id)arg1 track:(id)arg2 contextURI:(id)arg3 error:(id)arg4;
- (void)remoteControlPolicyManagerDidFinishLikeFeedback:(id)arg1 track:(id)arg2 contextURI:(id)arg3 error:(id)arg4;
- (void)remoteControlPolicyManagerDislikeButtonPressed:(id)arg1 track:(id)arg2 contextURI:(id)arg3 identifier:(id)arg4;
- (void)remoteControlPolicyManagerUnlikeButtonPressed:(id)arg1 track:(id)arg2 contextURI:(id)arg3;
- (void)remoteControlPolicyManagerLikeButtonPressed:(id)arg1 track:(id)arg2 contextURI:(id)arg3;
- (void)undoFeedbackType:(long long)arg1 track:(id)arg2 contextURL:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resyncPlaylist:(id)arg1;
- (id)initWithRemoteControlPolicyManager:(id)arg1 playlistModel:(id)arg2 feedbackManager:(id)arg3;
- (void)undoPositiveSongFeedbackForTrack:(id)arg1 contextURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)undoNegativeArtistFeedbackForTrack:(id)arg1 contextURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)undoNegativeSongFeedbackForTrack:(id)arg1 contextURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic, getter=isFinite) _Bool finite;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

