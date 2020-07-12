//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPSession, SPTAccessory, SPTAppProtocolBlockBasedImageLoader, SPTAppProtocolCallForwarder, SPTAppProtocolConnectionHandler;
@protocol SPTAccessoryActionLogger, SPTExternalIntegrationDebugLog, SPTExternalIntegrationExternalActionOrigin, SPTExternalIntegrationPlatform, SPTGaiaConnectAPI, SPTImageLoaderFactory, SPTNetworkConnectivityController, SPTPreferences;

@interface SPTAppProtocolCallMessageHandler : NSObject
{
    SPTAppProtocolConnectionHandler *_connectionHandler;
    id <SPTGaiaConnectAPI> _connectManager;
    SPSession *_session;
    id <SPTExternalIntegrationPlatform> _externalIntegrationPlatform;
    SPTAccessory *_currentAccessory;
    id <SPTAccessoryActionLogger> _actionLogger;
    id <SPTNetworkConnectivityController> _connectivityController;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    SPTAppProtocolBlockBasedImageLoader *_blockBasedImageLoader;
    id <SPTPreferences> _preferences;
    id <SPTExternalIntegrationExternalActionOrigin> _externalActionOrigin;
    SPTAppProtocolCallForwarder *_appProtocolForwarder;
    id <SPTExternalIntegrationDebugLog> _debugLog;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(readonly, nonatomic) SPTAppProtocolCallForwarder *appProtocolForwarder; // @synthesize appProtocolForwarder=_appProtocolForwarder;
@property(retain, nonatomic) id <SPTExternalIntegrationExternalActionOrigin> externalActionOrigin; // @synthesize externalActionOrigin=_externalActionOrigin;
@property(readonly, nonatomic) __weak id <SPTPreferences> preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) SPTAppProtocolBlockBasedImageLoader *blockBasedImageLoader; // @synthesize blockBasedImageLoader=_blockBasedImageLoader;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <SPTNetworkConnectivityController> connectivityController; // @synthesize connectivityController=_connectivityController;
@property(nonatomic) __weak id <SPTAccessoryActionLogger> actionLogger; // @synthesize actionLogger=_actionLogger;
@property(nonatomic) __weak SPTAccessory *currentAccessory; // @synthesize currentAccessory=_currentAccessory;
@property(nonatomic) __weak id <SPTExternalIntegrationPlatform> externalIntegrationPlatform; // @synthesize externalIntegrationPlatform=_externalIntegrationPlatform;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(retain, nonatomic) SPTAppProtocolConnectionHandler *connectionHandler; // @synthesize connectionHandler=_connectionHandler;
- (_Bool)isOffline;
- (id)propertyListRepresentationOfItems:(id)arg1;
- (id)propertyListRepresentationOfItems:(id)arg1 inRange:(struct _NSRange)arg2 ofTotalLength:(unsigned long long)arg3;
- (id)propertyListRepresentationOfItem:(id)arg1;
- (id)propertyListRepresentationOfRootItem:(id)arg1;
- (id)rootContentIdentifiersForContentType;
- (id)offlineCollectionsURIs;
- (void)offlineExternalIntegrationContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)replyWithOfflineRecommendationsForMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resolveChildContentOfParentURI:(id)arg1 getChildrenMessage:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)replyToMessage:(id)arg1 reply:(CDUnknownBlockType)arg2 items:(id)arg3 error:(id)arg4;
- (void)handleGetCrossfadeStateCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleLogMessage:(id)arg1;
- (void)handleQueueUriMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleSearchQueryMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetNextTracksMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetSessionStateMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetCapabilitiesMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleStartRadioMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)playURI:(id)arg1 message:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)handlePlayUriMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handlePlayItemMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetChildrenOfItemMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetRecommendedContentForTypeMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetRootItemMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetItemForURIMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetRecommendedRootItemsMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)imageRequestCompletionBlockWithMessage:(id)arg1 imageType:(unsigned long long)arg2 imageSize:(struct CGSize)arg3 andReply:(CDUnknownBlockType)arg4;
- (void)handleGetImageCallMessage:(id)arg1 asThumbnail:(_Bool)arg2 andReply:(CDUnknownBlockType)arg3;
- (id)getImageData:(id)arg1 withImageType:(unsigned long long)arg2 size:(struct CGSize)arg3;
- (void)handleGetTrackElapsedCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetCurrentContextCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetPlayerStateCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetCurrentTrackCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetRepeatCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleSetRepeatCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetAvailablePodcastPlaybackSpeedsCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetPodcastPlaybackSpeedCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleSetPodcastPlaybackSpeedCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetPlaybackSpeedCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleSeekToPositionCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleSetPlaybackPositionCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleSetPlaybackSpeedCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (id)protocolErrorForError:(id)arg1;
- (void)handleSkipPreviousCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleSkipNextCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetRatingCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleSetRatingCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetSavedCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleSetSavedCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleGetShuffleCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleSetShuffleCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleCallMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleMethodNamed:(id)arg1 sourceMessage:(id)arg2 andReply:(CDUnknownBlockType)arg3;
- (id)initWithExternalIntegrationPlatform:(id)arg1 connectionHandler:(id)arg2 networkConnectivityController:(id)arg3 imageLoaderFactory:(id)arg4 connectManager:(id)arg5 session:(id)arg6 preferences:(id)arg7 appProtocolForwarder:(id)arg8 actionLogger:(id)arg9 debugLog:(id)arg10;

@end

