//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdsBaseRegistry-Protocol.h"

@class NSArray, NSMutableArray, NSString, SPTObserverManager;
@protocol SPTAdsBaseCosmosBridge;

@interface SPTAdsBaseRegistryImplementation : NSObject <SPTAdsBaseRegistry>
{
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    NSMutableArray *_entities;
    SPTObserverManager *_observerManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) NSMutableArray *entities; // @synthesize entities=_entities;
@property(readonly, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
- (long long)adEventFromString:(id)arg1;
- (id)adEntityFromMetadata:(id)arg1 format:(id)arg2 slot:(id)arg3;
- (void)notifyObserversOfAdEntity:(id)arg1 event:(long long)arg2;
- (void)processMetadata:(id)arg1;
- (void)subscribeToEvents;
- (void)subscribeToSlots;
- (void)subscribeToFormats;
- (id)adEntityWithIdentifier:(id)arg1;
- (void)discardAd:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *availableEntities;
- (id)initWithCosmosBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

