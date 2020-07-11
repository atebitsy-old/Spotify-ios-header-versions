//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SPTLyricsLine : NSObject
{
    NSString *_text;
    double _startTime;
    NSArray *_syllables;
}

@property(readonly, nonatomic) NSArray *syllables; // @synthesize syllables=_syllables;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)syllableAtIndex:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;

@end

