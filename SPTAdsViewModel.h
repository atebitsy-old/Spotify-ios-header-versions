//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdContextManagerObserver-Protocol.h"
#import "SPTAdsBaseRegistryObserver-Protocol.h"

@class NSString, NSURL, SPTAdContextManager, SPTAdRulesManager;
@protocol SPTAdsBaseCosmosBridge, SPTAdsBaseEntity, SPTAdsBaseRegistry, SPTLogCenter, SPTPlayer;

@interface SPTAdsViewModel : NSObject <SPTAdContextManagerObserver, SPTAdsBaseRegistryObserver>
{
    id <SPTAdsBaseEntity> _activeEntity;
    id <SPTAdsBaseRegistry> _registry;
    id <SPTPlayer> _sptPlayer;
    id <SPTLogCenter> _logCenter;
    NSURL *_prerollContextURL;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    SPTAdRulesManager *_adRulesManager;
    SPTAdContextManager *_adContextManager;
}

@property(readonly, nonatomic) __weak SPTAdContextManager *adContextManager; // @synthesize adContextManager=_adContextManager;
@property(readonly, nonatomic) __weak SPTAdRulesManager *adRulesManager; // @synthesize adRulesManager=_adRulesManager;
@property(readonly, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(retain, nonatomic) NSURL *prerollContextURL; // @synthesize prerollContextURL=_prerollContextURL;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTPlayer> sptPlayer; // @synthesize sptPlayer=_sptPlayer;
@property(readonly, nonatomic) id <SPTAdsBaseRegistry> registry; // @synthesize registry=_registry;
@property(retain) id <SPTAdsBaseEntity> activeEntity; // @synthesize activeEntity=_activeEntity;
- (void).cxx_destruct;
- (id)getDependentSlotOrLogError;
- (void)skipToNextTrack;
- (void)reportAdClick;
- (_Bool)triggerAd;
- (void)logAdRequestEvent:(id)arg1 featureId:(id)arg2;
- (void)requestPrerollOffer:(_Bool)arg1;
- (void)requestPrerollIfNeeded;
- (void)adContextManager:(id)arg1 didChangeNavigationContext:(id)arg2 fromNavigationContext:(id)arg3;
- (void)skipCurrentAd;
@property(readonly, copy, nonatomic) NSString *actionMessage;
@property(readonly, nonatomic, getter=isVideoInProgress) _Bool videoInProgress;
@property(readonly, nonatomic, getter=isEndCard) _Bool endCard;
@property(readonly, nonatomic, getter=isOptOutOffer) _Bool optOutOffer;
@property(readonly, nonatomic, getter=isOptInOffer) _Bool optInOffer;
- (void)adRegistry:(id)arg1 didProcessAdEntity:(id)arg2 event:(long long)arg3;
- (void)dealloc;
- (id)initWithRegistry:(id)arg1 cosmosBridge:(id)arg2 adRulesManager:(id)arg3 adContextManager:(id)arg4 player:(id)arg5 logCenter:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

