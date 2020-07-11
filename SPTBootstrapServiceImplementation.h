//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBootstrapService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTCoreService, SPTRemoteConfigurationContextService, SPTSessionBootstrapDelegate;

@interface SPTBootstrapServiceImplementation : NSObject <SPTBootstrapService>
{
    id <SPTRemoteConfigurationContextService> _remoteConfigurationContextService;
    id <SPTCoreService> _coreService;
    id <SPTSessionBootstrapDelegate> _bootstrapModule;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTSessionBootstrapDelegate> bootstrapModule; // @synthesize bootstrapModule=_bootstrapModule;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTRemoteConfigurationContextService> remoteConfigurationContextService; // @synthesize remoteConfigurationContextService=_remoteConfigurationContextService;
- (void).cxx_destruct;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;
- (id)provideRemoteConfigurationPayload;
- (id)provideBootstrapModule;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

