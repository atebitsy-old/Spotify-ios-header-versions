//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagSignal;

@interface SPTFeedbackFeatureFlagSignalObserver : NSObject <SPTFeatureFlagSignalObserver>
{
    _Bool _signalEnabled;
    id <SPTFeatureFlagSignal> _featureFlagSignal;
}

@property(readonly, nonatomic) id <SPTFeatureFlagSignal> featureFlagSignal; // @synthesize featureFlagSignal=_featureFlagSignal;
@property(nonatomic, getter=isSignalEnabled) _Bool signalEnabled; // @synthesize signalEnabled=_signalEnabled;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)dealloc;
- (id)initWithFeatureFlagSignal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

