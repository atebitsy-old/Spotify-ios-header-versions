//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class NSURL, SPTPlayerTrack;
@protocol SPTLogCenter, SPTTrackCreditsService;

@interface SPTTrackCreditsAction : SPAction
{
    SPTPlayerTrack *_track;
    NSURL *_sourceURL;
    NSURL *_entityURL;
    id <SPTLogCenter> _logCenter;
    id <SPTTrackCreditsService> _trackCreditsService;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTTrackCreditsService> trackCreditsService; // @synthesize trackCreditsService=_trackCreditsService;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
- (void)logTrackCreditsSelected;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithTrack:(id)arg1 sourceURL:(id)arg2 entityURL:(id)arg3 logContext:(id)arg4 logCenter:(id)arg5 trackCreditsService:(id)arg6;

@end

