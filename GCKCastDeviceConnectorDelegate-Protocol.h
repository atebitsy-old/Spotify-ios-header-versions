//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKCastDeviceConnector, GCKDevice, NSError;

@protocol GCKCastDeviceConnectorDelegate <NSObject>

@optional
- (void)deviceConnector:(GCKCastDeviceConnector *)arg1 didUpdateDevice:(GCKDevice *)arg2;
- (void)deviceConnector:(GCKCastDeviceConnector *)arg1 didDisconnectWithError:(NSError *)arg2 willTryToReconnect:(_Bool)arg3;
- (void)deviceConnectorDidDisconnect:(GCKCastDeviceConnector *)arg1;
- (void)deviceConnector:(GCKCastDeviceConnector *)arg1 didFailToConnectWithError:(NSError *)arg2 willTryToReconnect:(_Bool)arg3;
- (void)deviceConnectorDidConnect:(GCKCastDeviceConnector *)arg1;
- (void)deviceConnectorWillConnect:(GCKCastDeviceConnector *)arg1;
@end

