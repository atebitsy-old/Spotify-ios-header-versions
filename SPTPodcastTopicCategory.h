//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP31PodcastCreatorEntityPageFeature15SPTPodcastTopic_-Protocol.h"

@class NSString, NSURL;

@interface SPTPodcastTopicCategory : NSObject <_TtP31PodcastCreatorEntityPageFeature15SPTPodcastTopic_>
{
    NSString *_title;
    NSURL *_uri;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithDictionary:(id)arg1;

@end

