//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SPTVoiceInteractionBehavior : NSObject
{
    double _gradientRadius;
    NSArray *_backgroundGradientLocations;
    NSArray *_shadeGradientLocations;
}

@property(retain, nonatomic) NSArray *shadeGradientLocations; // @synthesize shadeGradientLocations=_shadeGradientLocations;
@property(retain, nonatomic) NSArray *backgroundGradientLocations; // @synthesize backgroundGradientLocations=_backgroundGradientLocations;
@property(nonatomic) double gradientRadius; // @synthesize gradientRadius=_gradientRadius;
- (void).cxx_destruct;
- (id)initWithGradientRadius:(double)arg1 backgroundGradientLocations:(id)arg2 shadeGradientLocations:(id)arg3;

@end

