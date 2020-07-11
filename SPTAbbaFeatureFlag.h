//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTLegacyFeatureFlag-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal;

@interface SPTAbbaFeatureFlag : NSObject <SPTFeatureFlagSignalObserver, SPTLegacyFeatureFlag>
{
    _Bool _enabledByDefault;
    NSString *_featureFlagKey;
    NSString *_enabledGroup;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _abbaSignal;
    id <SPTFeatureFlagSignal> _finalSignal;
    long long _latestState;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(nonatomic) long long latestState; // @synthesize latestState=_latestState;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> finalSignal; // @synthesize finalSignal=_finalSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> abbaSignal; // @synthesize abbaSignal=_abbaSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, copy, nonatomic) NSString *enabledGroup; // @synthesize enabledGroup=_enabledGroup;
@property(readonly, copy, nonatomic) NSString *featureFlagKey; // @synthesize featureFlagKey=_featureFlagKey;
@property(nonatomic, getter=isEnabledByDefault) _Bool enabledByDefault; // @synthesize enabledByDefault=_enabledByDefault;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)stop;
- (void)start;
@property(readonly, nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1 featureFlagKey:(id)arg2 enabledGroup:(id)arg3;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

