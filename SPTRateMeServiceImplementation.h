//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRateMeService-Protocol.h"

@class NSString, SPTAllocationContext, SPTRateMeController;
@protocol SPTAccountService, SPTContainerUIService, SPTPartnerService, SPTPlayerFeature, SPTSessionService, SPTSettingsFeature, SPTURIDispatchService;

@interface SPTRateMeServiceImplementation : NSObject <SPTRateMeService>
{
    id <SPTAccountService> _accountService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTPartnerService> _partnerService;
    SPTRateMeController *_rateMeController;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTRateMeController *rateMeController; // @synthesize rateMeController=_rateMeController;
@property(nonatomic) __weak id <SPTPartnerService> partnerService; // @synthesize partnerService=_partnerService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTAccountService> accountService; // @synthesize accountService=_accountService;
- (void).cxx_destruct;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

