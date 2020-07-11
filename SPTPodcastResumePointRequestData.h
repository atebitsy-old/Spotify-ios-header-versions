//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastRequestData-Protocol.h"

@class NSArray, NSData, NSPredicate, NSString;

@interface SPTPodcastResumePointRequestData : NSObject <SPTPodcastRequestData>
{
    NSString *_requestStringTemplate;
    NSData *_requestBody;
    NSString *_requestAction;
}

@property(copy, nonatomic) NSString *requestAction; // @synthesize requestAction=_requestAction;
@property(copy, nonatomic) NSData *requestBody; // @synthesize requestBody=_requestBody;
@property(copy, nonatomic) NSString *requestStringTemplate; // @synthesize requestStringTemplate=_requestStringTemplate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *sortDescriptors;
@property(readonly, nonatomic) NSPredicate *filterPredicate;
- (id)initWithItemURIs:(id)arg1;
- (id)initSubscription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isGrouped) _Bool grouped;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

