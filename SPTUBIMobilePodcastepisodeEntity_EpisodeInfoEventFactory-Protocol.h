//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_EpisodeDescriptionEventFactory, SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_PublishDateDurationLabelEventFactory;

@protocol SPTUBIMobilePodcastepisodeEntity_EpisodeInfoEventFactory <NSObject>
- (id <SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_PublishDateDurationLabelEventFactory>)publishDateDurationLabelFactory;
- (id <SPTUBIMobilePodcastepisodeEntity_EpisodeInfo_EpisodeDescriptionEventFactory>)episodeDescriptionFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

