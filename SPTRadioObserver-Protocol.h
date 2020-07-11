//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSURL;
@protocol SPTRadioManager;

@protocol SPTRadioObserver <NSObject>

@optional
- (void)radioManager:(id <SPTRadioManager>)arg1 error:(NSError *)arg2;
- (void)radioManager:(id <SPTRadioManager>)arg1 playbackStateChanged:(unsigned long long)arg2;
- (void)radioManager:(id <SPTRadioManager>)arg1 thumbsFeedbackChangedForTrackURL:(NSURL *)arg2 trackFeedback:(long long)arg3;
@end

