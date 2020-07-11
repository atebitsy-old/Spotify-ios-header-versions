//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTVideoBaseTracker.h"

@protocol BMLogger, BMLoggerDataProvider;

@interface SPTVideoPlaybackEventsErrorLogger : SPTVideoBaseTracker
{
    _Bool _playbackStarted;
    id <BMLogger> _logger;
    id <BMLoggerDataProvider> _loggerDataProvider;
}

@property(nonatomic) _Bool playbackStarted; // @synthesize playbackStarted=_playbackStarted;
@property(retain, nonatomic) id <BMLoggerDataProvider> loggerDataProvider; // @synthesize loggerDataProvider=_loggerDataProvider;
@property(retain, nonatomic) id <BMLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)makeErrorDictionary;
- (void)logVideoError:(id)arg1;
- (void)didFailWithFatalError:(id)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didFailWithRecoverableError:(id)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didBecomeReadyAtPosition:(double)arg1 timestamp:(double)arg2;
- (id)initWithLogger:(id)arg1 identity:(id)arg2 loggerDataProvider:(id)arg3;

@end

