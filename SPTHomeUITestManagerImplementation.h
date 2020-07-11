//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTHomeUITestManager-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTFeatureSettingsItemFactory, SPTLocalSettings;

@interface SPTHomeUITestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTHomeUITestManager>
{
    _Bool _homeComponentsMockEnabled;
    _Bool _homePromoV2ComponentsMockEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureFlagSignal> _homeComponentsMockEnabledSignal;
    id <SPTFeatureFlagSignal> _homeComponentsMockPromoV2EnabledSignal;
}

@property(nonatomic, getter=isHomePromoV2ComponentsMockEnabled) _Bool homePromoV2ComponentsMockEnabled; // @synthesize homePromoV2ComponentsMockEnabled=_homePromoV2ComponentsMockEnabled;
@property(nonatomic, getter=isHomeComponentsMockEnabled) _Bool homeComponentsMockEnabled; // @synthesize homeComponentsMockEnabled=_homeComponentsMockEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> homeComponentsMockPromoV2EnabledSignal; // @synthesize homeComponentsMockPromoV2EnabledSignal=_homeComponentsMockPromoV2EnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> homeComponentsMockEnabledSignal; // @synthesize homeComponentsMockEnabledSignal=_homeComponentsMockEnabledSignal;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupSignals;
- (id)initWithFeatureFlagFactory:(id)arg1 featureSettingsItemFactory:(id)arg2 localSettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

