//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTRadioTestManager-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagSignal, SPTProductState, SPTRadioRemoteConfigProperties;

@interface SPTRadioTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTRadioTestManager>
{
    _Bool userOnFreeProduct;
    id <SPTProductState> _productState;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    id <SPTRadioRemoteConfigProperties> _radioConfiguration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTRadioRemoteConfigProperties> radioConfiguration; // @synthesize radioConfiguration=_radioConfiguration;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic, getter=isUserOnFreeProduct) _Bool userOnFreeProduct; // @synthesize userOnFreeProduct;
- (_Bool)isNPTUser;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
@property(readonly, nonatomic, getter=isRadioURITransitionEnabled) _Bool radioURITransitionEnabled;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)dealloc;
- (id)initWithProductState:(id)arg1 freeTierEnabledSignal:(id)arg2 radioConfiguration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

