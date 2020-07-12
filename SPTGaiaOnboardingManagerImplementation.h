//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectManagerObserver-Protocol.h"

@class NSString, SPTGaiaConnectDevice, SPTGaiaDeviceAppearanceMapping, SPTGaiaOnboardingPopupController;
@protocol SPTGaiaConnectManager, SPTGaiaWirelessRoutesAPI;

@interface SPTGaiaOnboardingManagerImplementation : NSObject <SPTGaiaConnectManagerObserver>
{
    SPTGaiaConnectDevice *_newlyDiscoveredDevice;
    id <SPTGaiaWirelessRoutesAPI> _wirelessRoutesManager;
    SPTGaiaOnboardingPopupController *_popupController;
    SPTGaiaDeviceAppearanceMapping *_iconMapper;
    id <SPTGaiaConnectManager> _connectManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) SPTGaiaDeviceAppearanceMapping *iconMapper; // @synthesize iconMapper=_iconMapper;
@property(readonly, nonatomic) SPTGaiaOnboardingPopupController *popupController; // @synthesize popupController=_popupController;
@property(readonly, nonatomic) id <SPTGaiaWirelessRoutesAPI> wirelessRoutesManager; // @synthesize wirelessRoutesManager=_wirelessRoutesManager;
@property(retain, nonatomic) SPTGaiaConnectDevice *newlyDiscoveredDevice; // @synthesize newlyDiscoveredDevice=_newlyDiscoveredDevice;
- (_Bool)isBlockedForTA;
- (void)activateDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)notifyOnboardingOfDevice:(id)arg1 didComplete:(_Bool)arg2;
- (void)presentPopupOnboardingWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectManager:(id)arg1 deviceRequiringOnboardingDidChange:(id)arg2;
- (void)dealloc;
- (id)initWithWirelessRoutesManager:(id)arg1 popupController:(id)arg2 deviceIconMapper:(id)arg3 connectManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

