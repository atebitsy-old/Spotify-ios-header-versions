//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistPlatformFieldName-Protocol.h"
#import "SPTPlaylistPlatformFieldURL-Protocol.h"

@class NSString, NSURL;

@interface SPTPlaylistPlatformPlaylistTrackFieldsArtistImplementation : NSObject <SPTPlaylistPlatformFieldName, SPTPlaylistPlatformFieldURL>
{
    NSString *_name;
    NSURL *_URL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToArtist:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 URL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

