//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface SPTVideoCDNSupressed : NSObject
{
    NSDate *_lastFailed;
    unsigned long long _failCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long failCount; // @synthesize failCount=_failCount;
@property(retain, nonatomic) NSDate *lastFailed; // @synthesize lastFailed=_lastFailed;

@end

