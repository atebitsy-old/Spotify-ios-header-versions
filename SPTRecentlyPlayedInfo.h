//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SPTRecentlyPlayedInfo : NSObject
{
    NSString *_title;
    unsigned long long _index;
    NSDictionary *_loggingData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *loggingData; // @synthesize loggingData=_loggingData;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 index:(unsigned long long)arg2 loggingData:(id)arg3;

@end

