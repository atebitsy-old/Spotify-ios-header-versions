//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC23MusicVideoUIFeatureImpl40MusicVideoNowPlayingContentLayerProvider.h"

#import "SPTNowPlayingContentLayerProvider-Protocol.h"

@interface _TtC23MusicVideoUIFeatureImpl40MusicVideoNowPlayingContentLayerProvider (MusicVideoUIFeatureImpl) <SPTNowPlayingContentLayerProvider>
- (_Bool)displaysFullScreenContentForTrack:(id)arg1;
- (_Bool)requiresOverlayForTrack:(id)arg1;
- (_Bool)isActiveForTrack:(id)arg1 playerState:(id)arg2;
- (void)configureCell:(id)arg1 withTrack:(id)arg2 windowedContentInsets:(struct UIEdgeInsets)arg3 peekingDisallowed:(_Bool)arg4;
- (Class)cellClass;
- (id)reuseIdentifier;
- (unsigned long long)contentType;
@end
