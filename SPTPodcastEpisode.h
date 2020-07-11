//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastEpisode-Protocol.h"

@class NSDate, NSString, NSURL;

@interface SPTPodcastEpisode : NSObject <SPTPodcastEpisode>
{
    _Bool _inCollection;
    _Bool _newEpisode;
    _Bool _unplayedEpisode;
    _Bool _playable;
    _Bool _available;
    _Bool _played;
    _Bool _explicit;
    _Bool _followingPodcast;
    _Bool _videoShowMediaType;
    NSString *_title;
    NSString *_longDescription;
    NSString *_podcastTitle;
    NSURL *_podcastURL;
    NSString *_publisherName;
    NSDate *_publicationDate;
    double _duration;
    double _listenedDuration;
    NSURL *_URL;
    NSURL *_imageURL;
    NSURL *_largeImageURL;
    NSURL *_podcastImageURL;
    NSURL *_largePodcastImageURL;
    NSString *_manifestId;
    long long _offlineSyncStatus;
    unsigned long long _syncProgress;
    double _lastPlayedAt;
    unsigned long long _type;
}

+ (id)stringFromTimeInterval:(double)arg1;
@property(nonatomic, getter=isVideoShowMediaType) _Bool videoShowMediaType; // @synthesize videoShowMediaType=_videoShowMediaType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic, getter=isFollowingPodcast) _Bool followingPodcast; // @synthesize followingPodcast=_followingPodcast;
@property(nonatomic, getter=isExplicit) _Bool explicit; // @synthesize explicit=_explicit;
@property(nonatomic) double lastPlayedAt; // @synthesize lastPlayedAt=_lastPlayedAt;
@property(nonatomic) unsigned long long syncProgress; // @synthesize syncProgress=_syncProgress;
@property(nonatomic) long long offlineSyncStatus; // @synthesize offlineSyncStatus=_offlineSyncStatus;
@property(nonatomic, getter=isPlayed) _Bool played; // @synthesize played=_played;
@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(nonatomic, getter=isPlayable) _Bool playable; // @synthesize playable=_playable;
@property(nonatomic, getter=isUnplayed) _Bool unplayedEpisode; // @synthesize unplayedEpisode=_unplayedEpisode;
@property(nonatomic, getter=isNewEpisode) _Bool newEpisode; // @synthesize newEpisode=_newEpisode;
@property(nonatomic) _Bool inCollection; // @synthesize inCollection=_inCollection;
@property(copy, nonatomic) NSString *manifestId; // @synthesize manifestId=_manifestId;
@property(copy, nonatomic) NSURL *largePodcastImageURL; // @synthesize largePodcastImageURL=_largePodcastImageURL;
@property(copy, nonatomic) NSURL *podcastImageURL; // @synthesize podcastImageURL=_podcastImageURL;
@property(copy, nonatomic) NSURL *largeImageURL; // @synthesize largeImageURL=_largeImageURL;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) double listenedDuration; // @synthesize listenedDuration=_listenedDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSDate *publicationDate; // @synthesize publicationDate=_publicationDate;
@property(copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(copy, nonatomic) NSURL *podcastURL; // @synthesize podcastURL=_podcastURL;
@property(copy, nonatomic) NSString *podcastTitle; // @synthesize podcastTitle=_podcastTitle;
@property(copy, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToPodcastEntity:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isAudioMediaType) _Bool audioMediaType;
@property(readonly, nonatomic, getter=isVideoMediaType) _Bool videoMediaType;
- (id)localizedDate;
- (id)localizedTime;
- (id)localizedDuration;
@property(readonly, nonatomic) double listeningProgress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

