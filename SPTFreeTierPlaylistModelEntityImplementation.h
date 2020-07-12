//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistModelEntity-Protocol.h"

@class NSArray, NSString;
@protocol SPTFreeTierPlaylistModelEntityMetadataFields;

@interface SPTFreeTierPlaylistModelEntityImplementation : NSObject <SPTFreeTierPlaylistModelEntity>
{
    id <SPTFreeTierPlaylistModelEntityMetadataFields> _metadata;
    NSArray *_tracks;
    NSArray *_recommendations;
    unsigned long long _unrangedTracksLength;
    unsigned long long onDemandType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long onDemandType; // @synthesize onDemandType;
@property(nonatomic) unsigned long long unrangedTracksLength; // @synthesize unrangedTracksLength=_unrangedTracksLength;
@property(copy, nonatomic) NSArray *recommendations; // @synthesize recommendations=_recommendations;
@property(copy, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) id <SPTFreeTierPlaylistModelEntityMetadataFields> metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSArray *__recommendations;
@property(readonly, copy, nonatomic) NSArray *__tracks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

