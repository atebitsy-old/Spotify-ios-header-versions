//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLyricsLineSet, SPTLyricsV2Colors;

@interface SPTLyricsV2Model : NSObject
{
    _Bool _isVocalRemovalAvailable;
    _Bool _isLyricsEastAsian;
    SPTLyricsV2Colors *_colors;
    SPTLyricsLineSet *_lyrics;
}

@property(readonly, nonatomic) _Bool isLyricsEastAsian; // @synthesize isLyricsEastAsian=_isLyricsEastAsian;
@property(readonly, nonatomic) _Bool isVocalRemovalAvailable; // @synthesize isVocalRemovalAvailable=_isVocalRemovalAvailable;
@property(readonly, nonatomic) SPTLyricsLineSet *lyrics; // @synthesize lyrics=_lyrics;
@property(readonly, nonatomic) SPTLyricsV2Colors *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

