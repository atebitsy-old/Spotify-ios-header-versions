//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTAdsBaseCosmosBridge;

@interface SPTAdTestingHandler : NSObject
{
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
}

@property(readonly, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
- (void).cxx_destruct;
- (void)overrideRequestCountry:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)changeFocusValue:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addStreamTime:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithCosmosBridge:(id)arg1;

@end

