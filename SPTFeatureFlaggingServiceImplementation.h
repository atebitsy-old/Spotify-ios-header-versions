//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlaggingService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTAbbaService, SPTContainerService, SPTSessionService, SPTSettingsFeature;

@interface SPTFeatureFlaggingServiceImplementation : NSObject <SPTFeatureFlaggingService>
{
    id <SPTAbbaService> _abbaService;
    id <SPTContainerService> _containerService;
    id <SPTSessionService> _sessionService;
    id <SPTSettingsFeature> _settingsService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
- (id)provideFeatureFlagFactoryForService:(id)arg1;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

