//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingContentLayerProvider-Protocol.h"

@class NSString, SPTTheme;
@protocol SPTNowPlayingContentLayerProviderDelegate, SPTNowPlayingTestManager;

@interface SPTNowPlayingYoutubeVideoProvider : NSObject <SPTNowPlayingContentLayerProvider>
{
    SPTTheme *_theme;
    id <SPTNowPlayingTestManager> _testManger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManger; // @synthesize testManger=_testManger;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (_Bool)displaysFullScreenContentForTrack:(id)arg1;
- (_Bool)requiresOverlayForTrack:(id)arg1;
- (_Bool)canHideControlsForTrack:(id)arg1;
- (_Bool)isActiveForTrack:(id)arg1 playerState:(id)arg2;
- (void)configureCell:(id)arg1 withTrack:(id)arg2 windowedContentInsets:(struct UIEdgeInsets)arg3 peekingDisallowed:(_Bool)arg4;
- (Class)cellClass;
- (id)reuseIdentifier;
- (unsigned long long)contentType;
- (id)initWithTheme:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SPTNowPlayingContentLayerProviderDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

