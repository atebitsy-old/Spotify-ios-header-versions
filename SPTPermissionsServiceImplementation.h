//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPermissionsService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTPermissionsOnDemandState, SPTSessionService;

@interface SPTPermissionsServiceImplementation : NSObject <SPTPermissionsService>
{
    id <SPTSessionService> _sessionService;
    id <SPTPermissionsOnDemandState> _onDemandPermissionState;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPermissionsOnDemandState> onDemandPermissionState; // @synthesize onDemandPermissionState=_onDemandPermissionState;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
- (id)provideOnDemandPermissionState;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

