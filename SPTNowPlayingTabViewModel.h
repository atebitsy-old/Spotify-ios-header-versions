//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTStatefulPlayerObserver-Protocol.h"

@class NSString, SPTStatefulPlayer;
@protocol SPTInAppMessageMessageRequester, SPTNowPlayingContentLayerResolver, SPTNowPlayingTabViewModelDelegate, SPTNowPlayingTestManager;

@interface SPTNowPlayingTabViewModel : NSObject <SPTStatefulPlayerObserver>
{
    _Bool _canvasTabVisible;
    _Bool _lyricsTabVisible;
    _Bool _videoTabVisible;
    id <SPTNowPlayingTabViewModelDelegate> _delegate;
    NSString *_canvasTabTitle;
    NSString *_albumArtTabTitle;
    NSString *_lyricsTabTitle;
    NSString *_videoTabTitle;
    long long _selectedTab;
    SPTStatefulPlayer *_player;
    id <SPTNowPlayingTestManager> _testManager;
    id <SPTNowPlayingContentLayerResolver> _contentLayerResolver;
    id <SPTInAppMessageMessageRequester> _inAppMessageRequester;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTInAppMessageMessageRequester> inAppMessageRequester; // @synthesize inAppMessageRequester=_inAppMessageRequester;
@property(retain, nonatomic) id <SPTNowPlayingContentLayerResolver> contentLayerResolver; // @synthesize contentLayerResolver=_contentLayerResolver;
@property(nonatomic) _Bool videoTabVisible; // @synthesize videoTabVisible=_videoTabVisible;
@property(retain, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTStatefulPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool lyricsTabVisible; // @synthesize lyricsTabVisible=_lyricsTabVisible;
@property(nonatomic) _Bool canvasTabVisible; // @synthesize canvasTabVisible=_canvasTabVisible;
@property(readonly, nonatomic) long long selectedTab; // @synthesize selectedTab=_selectedTab;
@property(readonly, nonatomic) NSString *videoTabTitle; // @synthesize videoTabTitle=_videoTabTitle;
@property(readonly, nonatomic) NSString *lyricsTabTitle; // @synthesize lyricsTabTitle=_lyricsTabTitle;
@property(readonly, nonatomic) NSString *albumArtTabTitle; // @synthesize albumArtTabTitle=_albumArtTabTitle;
@property(readonly, nonatomic) NSString *canvasTabTitle; // @synthesize canvasTabTitle=_canvasTabTitle;
@property(nonatomic) __weak id <SPTNowPlayingTabViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playerDidUpdateTrackPosition:(id)arg1;
- (void)playerDidUpdatePlaybackControls:(id)arg1;
- (void)playerDidReceiveStateUpdate:(id)arg1;
- (void)player:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)didTapVideoTab;
- (void)didTapLyricsTab;
- (void)didTapCoverArtTab;
- (void)didTapCanvasTab;
- (void)selectActiveTab;
- (_Bool)currentTrackHasVideo;
- (_Bool)currentTrackHasLyrics;
- (_Bool)currentTrackHasCanvas;
- (id)initWithStatefulPlayer:(id)arg1 contentLayerResolver:(id)arg2 messageRequester:(id)arg3 testManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

