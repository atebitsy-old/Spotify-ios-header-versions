//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTGeniusModel.h"

@class NSString;

@interface SPTGeniusAuthor : SPTGeniusModel
{
    _Bool _verified;
    NSString *_spotifyId;
    NSString *_displayName;
    NSString *_avatarURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *spotifyId; // @synthesize spotifyId=_spotifyId;
@property(nonatomic) _Bool verified; // @synthesize verified=_verified;
- (id)objectRepresentation;
- (_Bool)restoreWithObjectRepresentation:(id)arg1;

@end

