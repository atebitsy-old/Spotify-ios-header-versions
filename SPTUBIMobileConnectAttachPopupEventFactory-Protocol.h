//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileConnectAttachPopup_CloseEventFactory, SPTUBIMobileConnectAttachPopup_ContinueButtonEventFactory, SPTUBIMobileConnectAttachPopup_ListenOnThisDeviceButtonEventFactory;

@protocol SPTUBIMobileConnectAttachPopupEventFactory <NSObject>
- (id <SPTUBIMobileConnectAttachPopup_CloseEventFactory>)closeFactoryWithReason:(NSString *)arg1;
- (id <SPTUBIMobileConnectAttachPopup_ListenOnThisDeviceButtonEventFactory>)listenOnThisDeviceButtonFactory;
- (id <SPTUBIMobileConnectAttachPopup_ContinueButtonEventFactory>)continueButtonFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

