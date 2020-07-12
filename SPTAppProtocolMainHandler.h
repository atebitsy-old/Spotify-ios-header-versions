//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPSession, SPTAppProtocolCallForwarder, SPTAppProtocolConnectionHandler;
@protocol SPTExternalIntegrationPlatform, SPTGaiaConnectAPI, SPTNetworkConnectivityController, SPTProductState;

@interface SPTAppProtocolMainHandler : NSObject
{
    SPTAppProtocolConnectionHandler *_connectionHandler;
    id <SPTGaiaConnectAPI> _connectManager;
    SPSession *_currentSession;
    id <SPTProductState> _productState;
    id <SPTExternalIntegrationPlatform> _externalIntegrationPlatform;
    id <SPTNetworkConnectivityController> _connectivityController;
    SPTAppProtocolCallForwarder *_appProtocolForwarder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTAppProtocolCallForwarder *appProtocolForwarder; // @synthesize appProtocolForwarder=_appProtocolForwarder;
@property(readonly, nonatomic) id <SPTNetworkConnectivityController> connectivityController; // @synthesize connectivityController=_connectivityController;
@property(nonatomic) __weak id <SPTExternalIntegrationPlatform> externalIntegrationPlatform; // @synthesize externalIntegrationPlatform=_externalIntegrationPlatform;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) __weak SPSession *currentSession; // @synthesize currentSession=_currentSession;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(retain, nonatomic) SPTAppProtocolConnectionHandler *connectionHandler; // @synthesize connectionHandler=_connectionHandler;
- (void)handleUnsubscribeMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleSubscribeMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (id)initWithExternalIntegrationPlatform:(id)arg1 connectionHandler:(id)arg2 networkConnectivityController:(id)arg3 currentSession:(id)arg4 productState:(id)arg5 connectManager:(id)arg6 appProtocolForwarder:(id)arg7;

@end

