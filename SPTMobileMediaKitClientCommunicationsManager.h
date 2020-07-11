//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKAuthorizationDelegate-Protocol.h"
#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTExternalIntegrationPlaybackControllerObserver-Protocol.h"
#import "SPTGaiaConnectObserver-Protocol.h"

@class KeychainItemWrapper, MMKClientManager, NSString, SPTAccessory, SPTDataLoader, SPTMobileMediaKitAPKeepAliveHandler, SPTMobileMediaKitAudioPlaybackManager;
@protocol MMKAuthorizationDelegate, MMKLogging, SPTAccessoryStateManager, SPTGaiaConnectAPI;

@interface SPTMobileMediaKitClientCommunicationsManager : NSObject <SPTExternalIntegrationPlaybackControllerObserver, MMKAuthorizationDelegate, SPTDataLoaderDelegate, SPTGaiaConnectObserver>
{
    MMKClientManager *_clientManager;
    SPTMobileMediaKitAudioPlaybackManager *_playbackManager;
    id <SPTAccessoryStateManager> _accessoryManager;
    id <SPTGaiaConnectAPI> _connectManager;
    SPTMobileMediaKitAPKeepAliveHandler *_keepAliveHandler;
    NSString *_token;
    SPTAccessory *_accessory;
    SPTDataLoader *_dataLoader;
    id <MMKLogging> _logger;
    KeychainItemWrapper *_keychainItem;
    id <MMKAuthorizationDelegate> _mmkDelegateWrapper;
}

@property(retain, nonatomic) id <MMKAuthorizationDelegate> mmkDelegateWrapper; // @synthesize mmkDelegateWrapper=_mmkDelegateWrapper;
@property(retain, nonatomic) KeychainItemWrapper *keychainItem; // @synthesize keychainItem=_keychainItem;
@property(retain, nonatomic) id <MMKLogging> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTAccessory *accessory; // @synthesize accessory=_accessory;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) SPTMobileMediaKitAPKeepAliveHandler *keepAliveHandler; // @synthesize keepAliveHandler=_keepAliveHandler;
@property(readonly, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) id <SPTAccessoryStateManager> accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(readonly, nonatomic) SPTMobileMediaKitAudioPlaybackManager *playbackManager; // @synthesize playbackManager=_playbackManager;
@property(readonly, nonatomic) MMKClientManager *clientManager; // @synthesize clientManager=_clientManager;
- (void).cxx_destruct;
- (id)fetchAndResetLastTransactionId;
- (void)sendPlayerEvent:(id)arg1 transactionId:(id)arg2;
- (_Bool)isPlaybackControlledOnExternalDevice;
- (void)connectActiveDeviceDidChange:(id)arg1;
- (void)didDisconnect;
- (void)didConnect;
- (void)authorizationCompleteReceived:(id)arg1 sharedSecret:(id)arg2;
- (void)authorizationResponseReceived:(id)arg1;
- (void)authorizationSuccessReceived:(id)arg1;
- (void)authorizationRequestReceived:(id)arg1;
- (void)externalIntegrationPlaybackController:(id)arg1 didReceiveNewPlayerState:(id)arg2 oldPlayerState:(id)arg3;
- (id)dataFromResponseJSON:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)urlForAPIName:(id)arg1;
- (void)performDataLoaderRequestForURL:(id)arg1 withParameters:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)invalidateSharedSecret;
- (void)stopMobileMediaKit;
- (void)startMobileMediaKit;
- (id)initWithPlaybackManager:(id)arg1 playbackController:(id)arg2 connectManager:(id)arg3 clientManager:(id)arg4 accessoryManager:(id)arg5 dataLoader:(id)arg6 logger:(id)arg7 keychainItem:(id)arg8 keepAliveHandler:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

