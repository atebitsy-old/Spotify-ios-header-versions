//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPlaylistModelDecorator.h"

@class SPTShadowPlaylistURIResolver;

@interface SPTShadowPlaylistModel : SPTPlaylistModelDecorator
{
    SPTShadowPlaylistURIResolver *_shadowUriResolver;
}

@property(retain, nonatomic) SPTShadowPlaylistURIResolver *shadowUriResolver; // @synthesize shadowUriResolver=_shadowUriResolver;
- (void).cxx_destruct;
- (void)playlistContainsTrackURLs:(id)arg1 playlistURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeTrackURLs:(id)arg1 fromPlaylistURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addTrackURLs:(id)arg1 toPlaylistURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPlaylistModel:(id)arg1 uriResolver:(id)arg2;

@end

