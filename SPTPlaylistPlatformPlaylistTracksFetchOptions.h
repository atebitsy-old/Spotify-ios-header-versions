//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPlaylistPlatformOptions.h"

@interface SPTPlaylistPlatformPlaylistTracksFetchOptions : SPTPlaylistPlatformOptions
{
    _Bool _shouldIncludeEpisodes;
    _Bool _loadRecommendations;
    unsigned long long _truncatePlaylistToMaxNumberOfTracks;
}

@property(nonatomic) unsigned long long truncatePlaylistToMaxNumberOfTracks; // @synthesize truncatePlaylistToMaxNumberOfTracks=_truncatePlaylistToMaxNumberOfTracks;
@property(nonatomic) _Bool loadRecommendations; // @synthesize loadRecommendations=_loadRecommendations;
@property(nonatomic) _Bool shouldIncludeEpisodes; // @synthesize shouldIncludeEpisodes=_shouldIncludeEpisodes;

@end

