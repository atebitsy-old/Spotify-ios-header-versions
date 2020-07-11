//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SPTSearchProtoAlbum, SPTSearchProtoArtist, SPTSearchProtoAudioEpisode, SPTSearchProtoAudioShow, SPTSearchProtoGenre, SPTSearchProtoPlaylist, SPTSearchProtoProfile, SPTSearchProtoTrack;

@interface SPTSearchProtoEntity : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SPTSearchProtoAlbum *album; // @dynamic album;
@property(retain, nonatomic) SPTSearchProtoArtist *artist; // @dynamic artist;
@property(retain, nonatomic) SPTSearchProtoAudioEpisode *audioEpisode; // @dynamic audioEpisode;
@property(retain, nonatomic) SPTSearchProtoAudioShow *audioShow; // @dynamic audioShow;
@property(readonly, nonatomic) int entityOneOfCase; // @dynamic entityOneOfCase;
@property(retain, nonatomic) SPTSearchProtoGenre *genre; // @dynamic genre;
@property(copy, nonatomic) NSString *imageUri; // @dynamic imageUri;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) SPTSearchProtoPlaylist *playlist; // @dynamic playlist;
@property(retain, nonatomic) SPTSearchProtoProfile *profile; // @dynamic profile;
@property(retain, nonatomic) SPTSearchProtoTrack *track; // @dynamic track;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;

@end

