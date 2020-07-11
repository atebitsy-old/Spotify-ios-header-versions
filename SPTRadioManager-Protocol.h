//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTRadioObserver;

@protocol SPTRadioManager <NSObject>
- (void)removeRadioObserver:(id <SPTRadioObserver>)arg1;
- (void)addRadioObserver:(id <SPTRadioObserver>)arg1;
- (long long)feedbackForTrackURL:(NSURL *)arg1;
- (void)radioThumbTrackURL:(NSURL *)arg1 isUp:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)startRadioStationWithSeedURL:(NSURL *)arg1 startedFromElement:(NSString *)arg2 referrerIdentifier:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (_Bool)startRadioStationWithSeedURL:(NSURL *)arg1 startedFromElement:(NSString *)arg2 referrerIdentifier:(NSString *)arg3;
- (NSString *)playbackDescriptionForURL:(NSURL *)arg1;
@end

