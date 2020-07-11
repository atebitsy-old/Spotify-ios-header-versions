//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSnackbarService-Protocol.h"

@class NSString, SPTAllocationContext, SPTSnackbarAnimationView, SPTSnackbarPresenterImplementation;
@protocol SPTContainerUIService, SPTExternalIntegrationDriverDistractionService, SPTFeatureFlaggingService, SPTFreeTierUIService, SPTGLUEService, SPTSnackbarTestManager;

@interface SPTSnackbarServiceImplementation : NSObject <SPTSnackbarService>
{
    id <SPTGLUEService> _glueService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTFreeTierUIService> _freeTierUIService;
    id <SPTExternalIntegrationDriverDistractionService> _driverDistractionService;
    SPTSnackbarPresenterImplementation *_presenter;
    SPTSnackbarAnimationView *_snackbarAnimationView;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTSnackbarTestManager> _snackBarTestManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTSnackbarTestManager> snackBarTestManager; // @synthesize snackBarTestManager=_snackBarTestManager;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(retain, nonatomic) SPTSnackbarAnimationView *snackbarAnimationView; // @synthesize snackbarAnimationView=_snackbarAnimationView;
@property(retain, nonatomic) SPTSnackbarPresenterImplementation *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) __weak id <SPTExternalIntegrationDriverDistractionService> driverDistractionService; // @synthesize driverDistractionService=_driverDistractionService;
@property(nonatomic) __weak id <SPTFreeTierUIService> freeTierUIService; // @synthesize freeTierUIService=_freeTierUIService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
- (void).cxx_destruct;
- (id)provideTestManager;
- (id)provideSnackbarPresenterForViewURI:(id)arg1;
- (id)provideSnackbarPresenter;
- (void)disableSnackbarService;
- (void)enableSnackbarService;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

