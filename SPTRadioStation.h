//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTRadioModel.h"

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSURL, SPTPlayerTrack;

@interface SPTRadioStation : SPTRadioModel
{
    _Bool _saved;
    NSString *_stationId;
    NSString *_title;
    NSURL *_titleURI;
    NSString *_subtitle;
    NSURL *_subtitleURI;
    NSURL *_imageURI;
    NSArray *_relatedArtists;
    NSString *_stationDescription;
    NSDate *_lastUpdate;
    NSMutableArray *_shuffledTracks;
    NSMutableDictionary *_trackFeedbacks;
    NSArray *_tracks;
    SPTPlayerTrack *_lastPlayedTrack;
    NSArray *_subtitles;
    NSArray *_seeds;
}

+ (void)shuffleTracks:(id)arg1;
+ (id)stationFromCreateStationResponsePOST:(id)arg1;
+ (id)stationFromData:(id)arg1;
@property(retain, nonatomic) NSArray *seeds; // @synthesize seeds=_seeds;
@property(copy, nonatomic) NSArray *subtitles; // @synthesize subtitles=_subtitles;
@property(retain, nonatomic) SPTPlayerTrack *lastPlayedTrack; // @synthesize lastPlayedTrack=_lastPlayedTrack;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) NSMutableDictionary *trackFeedbacks; // @synthesize trackFeedbacks=_trackFeedbacks;
@property(nonatomic, getter=isSaved) _Bool saved; // @synthesize saved=_saved;
@property(retain, nonatomic) NSMutableArray *shuffledTracks; // @synthesize shuffledTracks=_shuffledTracks;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(copy, nonatomic) NSString *stationDescription; // @synthesize stationDescription=_stationDescription;
@property(retain, nonatomic) NSArray *relatedArtists; // @synthesize relatedArtists=_relatedArtists;
@property(retain, nonatomic) NSURL *imageURI; // @synthesize imageURI=_imageURI;
@property(retain, nonatomic) NSURL *subtitleURI; // @synthesize subtitleURI=_subtitleURI;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSURL *titleURI; // @synthesize titleURI=_titleURI;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *stationId; // @synthesize stationId=_stationId;
- (void).cxx_destruct;
- (id)GDPRSafeRepresentation;
- (void)addTracks:(id)arg1;
- (id)identifier;
@property(readonly, nonatomic) NSURL *seed;
@property(readonly, nonatomic) long long lastPlayedTrackIndex;
- (id)objectRepresentation;
- (_Bool)restoreWithObjectRepresentation:(id)arg1;
- (id)asData;
- (id)init;
- (id)initWithSeedURI:(id)arg1;
- (id)initWithURI:(id)arg1;

@end

