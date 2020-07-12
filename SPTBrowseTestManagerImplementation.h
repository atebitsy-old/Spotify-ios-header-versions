//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBrowseTestManager-Protocol.h"
#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTFeatureSettingsItemFactory;

@interface SPTBrowseTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTBrowseTestManager>
{
    _Bool _browseMockEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTFeatureFlagSignal> _browseMockEnabledSignal;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isBrowseMockEnabled) _Bool browseMockEnabled; // @synthesize browseMockEnabled=_browseMockEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> browseMockEnabledSignal; // @synthesize browseMockEnabledSignal=_browseMockEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupBrowseMockSignal;
- (id)initWithFeatureFlagFactory:(id)arg1 featureSettingsItemFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

