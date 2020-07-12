//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAbbaFeatureFlagsObserver-Protocol.h"
#import "SPTVolumeFlagsManager-Protocol.h"

@class NSNumber, NSString, SPTObserverManager;
@protocol SPTAbbaFeatureFlags;

@interface SPTVolumeFlagsManagerImplementation : NSObject <SPTAbbaFeatureFlagsObserver, SPTVolumeFlagsManager>
{
    id <SPTAbbaFeatureFlags> _featureFlags;
    NSNumber *_volumeFeatureEnabledOptionalFlag;
    NSNumber *_mobileToMobileEnabledOptionalFlag;
    SPTObserverManager *_observers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSNumber *mobileToMobileEnabledOptionalFlag; // @synthesize mobileToMobileEnabledOptionalFlag=_mobileToMobileEnabledOptionalFlag;
@property(retain, nonatomic) NSNumber *volumeFeatureEnabledOptionalFlag; // @synthesize volumeFeatureEnabledOptionalFlag=_volumeFeatureEnabledOptionalFlag;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
- (void)featureFlagsDidChange:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)mobileToMobileEnabled;
- (void)startObserving;
- (id)initWithFeatureFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

