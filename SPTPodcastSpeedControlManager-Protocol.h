//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSNumber, UIImage, UIViewController;
@protocol SPTPodcastPlaybackSpeed, SPTPodcastPreferencesObserver;

@protocol SPTPodcastSpeedControlManager <NSObject>
- (id <SPTPodcastPlaybackSpeed>)currentPodcastPlaybackSpeed;
- (void)setCurrentPodcastPlaybackSpeedOption:(unsigned long long)arg1;
- (id <SPTPodcastPlaybackSpeed>)providePodcastPlaybackSpeedForValue:(NSNumber *)arg1;
- (NSArray *)providePodcastPlaybackSpeeds;
- (void)removePodcastPreferencesObserver:(id <SPTPodcastPreferencesObserver>)arg1;
- (void)addPodcastPreferencesObserver:(id <SPTPodcastPreferencesObserver>)arg1;
- (UIImage *)currentPodcastPlaybackSpeedIconWithSize:(struct CGSize)arg1;
- (UIImage *)provideSpeedControlIconImage;
- (UIViewController *)providePodcastSpeedControlViewController;
@end

