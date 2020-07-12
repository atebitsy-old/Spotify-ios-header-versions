//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTChurnLockObservationInteractorDelegate-Protocol.h"
#import "SPTChurnLockPresenterDelegate-Protocol.h"

@class NSString, SPTChurnLockDowngradeInteractor, SPTChurnLockObservationInteractor, SPTChurnLockPlayerInteractor, SPTChurnLockPresenter, SPTChurnLockTimecheckInteractor;

@interface SPTChurnLockInteractor : NSObject <SPTChurnLockObservationInteractorDelegate, SPTChurnLockPresenterDelegate>
{
    SPTChurnLockObservationInteractor *_observationInteractor;
    SPTChurnLockTimecheckInteractor *_timecheckInteractor;
    SPTChurnLockPlayerInteractor *_playerInteractor;
    SPTChurnLockDowngradeInteractor *_downgradeInteractor;
    SPTChurnLockPresenter *_presenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTChurnLockPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) SPTChurnLockDowngradeInteractor *downgradeInteractor; // @synthesize downgradeInteractor=_downgradeInteractor;
@property(retain, nonatomic) SPTChurnLockPlayerInteractor *playerInteractor; // @synthesize playerInteractor=_playerInteractor;
@property(retain, nonatomic) SPTChurnLockTimecheckInteractor *timecheckInteractor; // @synthesize timecheckInteractor=_timecheckInteractor;
@property(retain, nonatomic) SPTChurnLockObservationInteractor *observationInteractor; // @synthesize observationInteractor=_observationInteractor;
- (void)churnLockPresenterDidDismissChurnLock;
- (void)shouldShowChurnLock:(_Bool)arg1;
- (void)stopObserving;
- (void)startObserving;
- (void)setup;
- (id)initWithObservationInteractor:(id)arg1 timecheckInteractor:(id)arg2 playerInteractor:(id)arg3 downgradeInteractor:(id)arg4 presenter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

