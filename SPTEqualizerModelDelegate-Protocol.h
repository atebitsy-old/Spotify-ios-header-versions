//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTEqualizerModel;

@protocol SPTEqualizerModelDelegate <NSObject>
- (void)equalizerModelDidChangeConnectActive:(SPTEqualizerModel *)arg1;
- (void)equalizerModelDidUpdatePreset:(SPTEqualizerModel *)arg1;
- (void)equalizerModelDidChangeValue:(SPTEqualizerModel *)arg1;
- (void)equalizerModelDidChangeBypass:(SPTEqualizerModel *)arg1;
- (void)equalizerModelDidChangeOn:(SPTEqualizerModel *)arg1;
@end

