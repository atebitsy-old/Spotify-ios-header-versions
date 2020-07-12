//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccountControllerProductActivationDelegate-Protocol.h"
#import "SPTAccountProductActivationController-Protocol.h"
#import "SPTAccountTrialDeferredControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SPTObserverManager;
@protocol InAppPurchaseController, SPTAccountTrialDeferredController;

@interface SPTAccountProductActivationControllerImplementation : NSObject <SPTAccountControllerProductActivationDelegate, SPTAccountTrialDeferredControllerDelegate, SPTAccountProductActivationController>
{
    id <InAppPurchaseController> _inAppPurchaseController;
    id <SPTAccountTrialDeferredController> _deferredTrialController;
    NSMutableArray *_productActivationOrders;
    NSArray *_productsBeingActivated;
    SPTObserverManager *_observerManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(copy, nonatomic) NSArray *productsBeingActivated; // @synthesize productsBeingActivated=_productsBeingActivated;
@property(retain, nonatomic) NSMutableArray *productActivationOrders; // @synthesize productActivationOrders=_productActivationOrders;
@property(retain, nonatomic) id <SPTAccountTrialDeferredController> deferredTrialController; // @synthesize deferredTrialController=_deferredTrialController;
@property(retain, nonatomic) id <InAppPurchaseController> inAppPurchaseController; // @synthesize inAppPurchaseController=_inAppPurchaseController;
- (void)accountDeferredTrialControllerTrialTaskActivationDidFailWithError:(id)arg1;
- (void)accountDeferredTrialControllerDidFinishTrialTaskActivation;
- (void)accountDeferredTrialControllerDidStartTrialTaskActivation;
- (void)productActivation:(id)arg1 didFailWithError:(id)arg2;
- (void)productActivationDidFinish:(id)arg1;
- (void)productActivationDidStart:(id)arg1;
- (void)removeProductActivationObserver:(id)arg1;
- (void)addProductActivationObserver:(id)arg1;
- (void)updateProductsBeingActivated;
- (void)startActivationOrder:(id)arg1;
- (void)startActivatingAvailableProduct:(long long)arg1;
- (id)activationOrderForProduct:(long long)arg1;
- (id)initWithInAppPurchaseController:(id)arg1 deferredTrialController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

