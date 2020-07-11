//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTFeatureFlagSignalImplementation.h"

#import "SPTAbbaFeatureFlagsObserver-Protocol.h"

@class NSString;
@protocol SPTAbbaFeatureFlags;

@interface SPTAbbaFeatureFlagSignal : SPTFeatureFlagSignalImplementation <SPTAbbaFeatureFlagsObserver>
{
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    NSString *_key;
    CDUnknownBlockType _mapper;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType mapper; // @synthesize mapper=_mapper;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
- (void).cxx_destruct;
- (void)logExposure;
- (void)featureFlagsDidChange:(id)arg1;
- (long long)calculateState;
- (void)updateValue;
- (void)dealloc;
- (id)initWithAbbaFeatureFlags:(id)arg1 key:(id)arg2 mapper:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

