//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistPlatformPlaylistTrackFields-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface SPTPlaylistPlatformPlaylistTrackFieldsImplementation : NSObject <SPTPlaylistPlatformPlaylistTrackFields>
{
    _Bool _isPlayable;
    _Bool _isLocallyPlayable;
    _Bool _isPlayStatePlayable;
    _Bool _inCollection;
    _Bool _isBanned;
    _Bool _isExplicit;
    _Bool _is19PlusOnly;
    _Bool _isLocalTrack;
    _Bool _isPremiumOnly;
    _Bool _isBackgroundable;
    _Bool _isEpisode;
    _Bool _isPlayed;
    NSString *_name;
    NSURL *_URL;
    NSString *_rowId;
    NSURL *_albumURL;
    NSArray *_artists;
    NSString *_albumName;
    NSDictionary *_albumCovers;
    NSString *_freeformDescription;
    NSDictionary *_freezeFrames;
    NSDictionary *_covers;
    NSString *_manifestID;
    NSString *_mediaType;
    NSDictionary *_formatListAttributes;
    unsigned long long _availableOfflineStatus;
    unsigned long long _playStateRestriction;
    NSDate *_addedAt;
    NSString *_ownerUsername;
    NSString *_ownerName;
    NSString *_previewID;
    NSDictionary *_displayCovers;
    NSString *_publisherName;
    NSString *_showName;
    NSDate *_publishDate;
    double _duration;
    double _timeLeft;
}

@property(nonatomic) _Bool isPlayed; // @synthesize isPlayed=_isPlayed;
@property(nonatomic) double timeLeft; // @synthesize timeLeft=_timeLeft;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isEpisode; // @synthesize isEpisode=_isEpisode;
@property(retain, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(copy, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(retain, nonatomic) NSDictionary *displayCovers; // @synthesize displayCovers=_displayCovers;
@property(copy, nonatomic) NSString *previewID; // @synthesize previewID=_previewID;
@property(copy, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(copy, nonatomic) NSString *ownerUsername; // @synthesize ownerUsername=_ownerUsername;
@property(retain, nonatomic) NSDate *addedAt; // @synthesize addedAt=_addedAt;
@property(nonatomic) unsigned long long playStateRestriction; // @synthesize playStateRestriction=_playStateRestriction;
@property(nonatomic) unsigned long long availableOfflineStatus; // @synthesize availableOfflineStatus=_availableOfflineStatus;
@property(nonatomic) _Bool isBackgroundable; // @synthesize isBackgroundable=_isBackgroundable;
@property(nonatomic) _Bool isPremiumOnly; // @synthesize isPremiumOnly=_isPremiumOnly;
@property(nonatomic) _Bool isLocalTrack; // @synthesize isLocalTrack=_isLocalTrack;
@property(nonatomic) _Bool is19PlusOnly; // @synthesize is19PlusOnly=_is19PlusOnly;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(nonatomic) _Bool isBanned; // @synthesize isBanned=_isBanned;
@property(nonatomic) _Bool inCollection; // @synthesize inCollection=_inCollection;
@property(nonatomic) _Bool isPlayStatePlayable; // @synthesize isPlayStatePlayable=_isPlayStatePlayable;
@property(nonatomic) _Bool isLocallyPlayable; // @synthesize isLocallyPlayable=_isLocallyPlayable;
@property(nonatomic) _Bool isPlayable; // @synthesize isPlayable=_isPlayable;
@property(retain, nonatomic) NSDictionary *formatListAttributes; // @synthesize formatListAttributes=_formatListAttributes;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *manifestID; // @synthesize manifestID=_manifestID;
@property(retain, nonatomic) NSDictionary *covers; // @synthesize covers=_covers;
@property(retain, nonatomic) NSDictionary *freezeFrames; // @synthesize freezeFrames=_freezeFrames;
@property(copy, nonatomic) NSString *freeformDescription; // @synthesize freeformDescription=_freeformDescription;
@property(retain, nonatomic) NSDictionary *albumCovers; // @synthesize albumCovers=_albumCovers;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(retain, nonatomic) NSURL *albumURL; // @synthesize albumURL=_albumURL;
@property(copy, nonatomic) NSString *rowId; // @synthesize rowId=_rowId;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

