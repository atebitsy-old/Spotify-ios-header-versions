//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNavigationControllerObserver-Protocol.h"

@class NSMapTable, NSPointerArray, NSString, SPTObserverManager;
@protocol SPTNavigationControllerProtocol;

@interface SPTNavigationManager : NSObject <SPTNavigationControllerObserver>
{
    NSMapTable *_lastSelectedVCInNavigationContexts;
    id <SPTNavigationControllerProtocol> _lastSelectedNavigationController;
    id <SPTNavigationControllerProtocol> _preModalNavigationController;
    NSPointerArray *_modalViewControllers;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) NSPointerArray *modalViewControllers; // @synthesize modalViewControllers=_modalViewControllers;
@property(nonatomic) __weak id <SPTNavigationControllerProtocol> preModalNavigationController; // @synthesize preModalNavigationController=_preModalNavigationController;
@property(nonatomic) __weak id <SPTNavigationControllerProtocol> lastSelectedNavigationController; // @synthesize lastSelectedNavigationController=_lastSelectedNavigationController;
@property(retain, nonatomic) NSMapTable *lastSelectedVCInNavigationContexts; // @synthesize lastSelectedVCInNavigationContexts=_lastSelectedVCInNavigationContexts;
- (void).cxx_destruct;
- (id)keyForNavigationController:(id)arg1;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)modalNavigationDidPopViewController;
- (void)modalNavigationWillPopViewController;
- (void)modalNavigationDidPushViewController:(id)arg1;
- (void)modalNavigationWillPushViewController:(id)arg1;
- (void)selectNavigationController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

