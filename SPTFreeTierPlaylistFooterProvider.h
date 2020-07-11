//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SPTFreeTierRecommendationsPlaylistViewProvider, SPTPageCreationContext;

@interface SPTFreeTierPlaylistFooterProvider : NSObject
{
    id <SPTFreeTierRecommendationsPlaylistViewProvider> _recommenedPlaylistViewProvider;
    NSURL *_playlistURL;
    id <SPTPageCreationContext> _context;
}

@property(readonly, nonatomic) id <SPTPageCreationContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(readonly, nonatomic) id <SPTFreeTierRecommendationsPlaylistViewProvider> recommenedPlaylistViewProvider; // @synthesize recommenedPlaylistViewProvider=_recommenedPlaylistViewProvider;
- (void).cxx_destruct;
- (id)recommendedPlaylistFooterViewController;
- (id)initWithRecommenedPlaylistViewProvider:(id)arg1 playlistURL:(id)arg2 context:(id)arg3;

@end

