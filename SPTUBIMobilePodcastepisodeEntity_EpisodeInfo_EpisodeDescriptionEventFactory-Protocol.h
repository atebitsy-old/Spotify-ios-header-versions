//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_EpisodeDescription_EmailLinkEventFactory, SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_EpisodeDescription_SeeMoreButtonEventFactory, SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_EpisodeDescription_SpotifyLinkEventFactory, SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_EpisodeDescription_TimestampEventFactory, SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_EpisodeDescription_WebLinkEventFactory;

@protocol SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_EpisodeDescriptionEventFactory <NSObject>
- (id <SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_EpisodeDescription_SeeMoreButtonEventFactory>)seeMoreButtonFactory;
- (id <SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_EpisodeDescription_SpotifyLinkEventFactory>)spotifyLinkFactory;
- (id <SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_EpisodeDescription_EmailLinkEventFactory>)emailLinkFactory;
- (id <SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_EpisodeDescription_WebLinkEventFactory>)webLinkFactory;
- (id <SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_EpisodeDescription_TimestampEventFactory>)timestampFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

