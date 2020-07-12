//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, NSURL, SPTAudioPreview;
@protocol SPTAudioPreviewPlayerObserver;

@protocol SPTAudioPreviewPlayer <NSObject>
- (void)play:(void (^)(_Bool, NSError *))arg1;
- (void)removeObserver:(id <SPTAudioPreviewPlayerObserver>)arg1;
- (void)addObserver:(id <SPTAudioPreviewPlayerObserver>)arg1;
- (void)stop;
- (void)pause:(void (^)(_Bool, NSError *))arg1;
- (void)play:(void (^)(_Bool, NSError *))arg1 trackIdentifier:(NSString *)arg2 trackURI:(NSURL *)arg3 maximumPlayTime:(NSNumber *)arg4 shouldLoop:(_Bool)arg5 origin:(long long)arg6;
@property(nonatomic, readonly) NSURL *trackURI;
@property(nonatomic, readonly) NSString *trackIdentifier;
@property(nonatomic, readonly) long long origin;
@property(nonatomic, readonly) double endTime;
@property(nonatomic, readonly) double startTime;
@property(nonatomic, readonly) double playTime;
- (_Bool)isPaused;
- (_Bool)isPlaying;
@property(readonly, nonatomic) SPTAudioPreview *preview;

// Remaining properties
@property(nonatomic, readonly) _Bool paused;
@property(nonatomic, readonly) _Bool playing;
@end

