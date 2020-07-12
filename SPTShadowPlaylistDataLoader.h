//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPlaylistDataLoaderDecorator.h"

@class SPTShadowPlaylistURIResolver;
@protocol SPTPlaylistPlatformDataLoaderRequestToken;

@interface SPTShadowPlaylistDataLoader : SPTPlaylistDataLoaderDecorator
{
    SPTShadowPlaylistURIResolver *_shadowUriResolver;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _metadataSubscription;
}

@property(retain, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> metadataSubscription; // @synthesize metadataSubscription=_metadataSubscription;
@property(retain, nonatomic) SPTShadowPlaylistURIResolver *shadowUriResolver; // @synthesize shadowUriResolver=_shadowUriResolver;
- (void).cxx_destruct;
- (id)subscribeFolderItemsForFolderURL:(id)arg1 options:(id)arg2 withFolderPolicyProtocols:(id)arg3 withPlaylistPolicyProtocols:(id)arg4 completion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (id)subscribePlaylistViewWithRecommendationsForPlaylistURL:(id)arg1 options:(id)arg2 withMetadataProtocols:(id)arg3 andTrackProtocols:(id)arg4 completion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (id)subscribePlaylistViewForPlaylistURL:(id)arg1 options:(id)arg2 withMetadataProtocols:(id)arg3 andTrackProtocols:(id)arg4 completion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (id)subscribePlaylistTracksForPlaylistURL:(id)arg1 options:(id)arg2 withPolicyProtocols:(id)arg3 completion:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (id)subscribePlaylistMetadataForPlaylistURL:(id)arg1 options:(id)arg2 withPolicyProtocols:(id)arg3 completion:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (void)playWithURL:(id)arg1 playOptions:(id)arg2 playlistOptions:(id)arg3 completion:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (void)fetchPlaylistViewForPlaylistURL:(id)arg1 options:(id)arg2 withMetadataProtocols:(id)arg3 andTrackProtocols:(id)arg4 completion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (void)fetchPlaylistTracksForPlaylistURL:(id)arg1 options:(id)arg2 withPolicyProtocols:(id)arg3 replyOnMainThread:(_Bool)arg4 completion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (void)fetchPlaylistMetadataForPlaylistURL:(id)arg1 options:(id)arg2 withPolicyProtocols:(id)arg3 replyOnMainThread:(_Bool)arg4 completion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (id)initWithDataLoader:(id)arg1 uriResolver:(id)arg2;

@end

