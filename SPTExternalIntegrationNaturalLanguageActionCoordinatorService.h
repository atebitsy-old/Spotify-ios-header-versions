//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationActionCoordinator-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTExternalIntegrationNaturalLanguageActionResolver;
@protocol GaiaFeature, SPTExternalIntegrationPlaybackService, SPTNetworkService;

@interface SPTExternalIntegrationNaturalLanguageActionCoordinatorService : NSObject <SPTService, SPTExternalIntegrationActionCoordinator>
{
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <SPTNetworkService> _networkService;
    id <GaiaFeature> _gaiaService;
    SPTExternalIntegrationNaturalLanguageActionResolver *_resolver;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTExternalIntegrationNaturalLanguageActionResolver *resolver; // @synthesize resolver=_resolver;
@property(nonatomic) __weak id <GaiaFeature> gaiaService; // @synthesize gaiaService=_gaiaService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
- (void).cxx_destruct;
- (void)performActionWithURI:(id)arg1 externalActionOrigin:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canPerformActionWithURI:(id)arg1;
- (void)handlePullContextIntentFromAction:(id)arg1 externalActionOrigin:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handlePlayIntentFromAction:(id)arg1 externalActionOrigin:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performAction:(id)arg1 externalActionOrigin:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
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

