//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SPTLyricsLineSet : NSObject
{
    NSString *_trackId;
    NSArray *_lyricLines;
    NSString *_publisherCredits;
    NSString *_songwriterCredits;
    NSString *_providerCredits;
    long long _syncType;
}

@property(readonly, nonatomic) long long syncType; // @synthesize syncType=_syncType;
@property(readonly, copy, nonatomic) NSString *providerCredits; // @synthesize providerCredits=_providerCredits;
@property(readonly, copy, nonatomic) NSString *songwriterCredits; // @synthesize songwriterCredits=_songwriterCredits;
@property(readonly, copy, nonatomic) NSString *publisherCredits; // @synthesize publisherCredits=_publisherCredits;
@property(readonly, copy, nonatomic) NSArray *lyricLines; // @synthesize lyricLines=_lyricLines;
@property(readonly, copy, nonatomic) NSString *trackId; // @synthesize trackId=_trackId;
- (void).cxx_destruct;
- (long long)syncTypeFromString:(id)arg1;
- (id)lyricsLineAtIndex:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;

@end

