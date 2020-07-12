//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationContentService-Protocol.h"

@class NSSet, NSString, SPTAllocationContext, SPTExternalIntegrationContentControllerImplementation;
@protocol SPTContainerService, SPTExplicitContentService, SPTExternalIntegrationDebugLogService, SPTNetworkService;

@interface SPTExternalIntegrationContentServiceImplementation : NSObject <SPTExternalIntegrationContentService>
{
    SPTExternalIntegrationContentControllerImplementation *_sharedController;
    id <SPTExternalIntegrationDebugLogService> _debugLogService;
    id <SPTNetworkService> _networkService;
    id <SPTContainerService> _containerService;
    id <SPTExplicitContentService> _explicitContentService;
    NSSet *_contentProviderRegistry;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *contentProviderRegistry; // @synthesize contentProviderRegistry=_contentProviderRegistry;
@property(readonly, nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(readonly, nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(readonly, nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationDebugLogService> debugLogService; // @synthesize debugLogService=_debugLogService;
- (void)updateControllerRegistry;
- (void)registerContentProvider:(id)arg1;
@property(readonly, nonatomic) SPTExternalIntegrationContentControllerImplementation *sharedController; // @synthesize sharedController=_sharedController;
- (id)provideContentController;
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

