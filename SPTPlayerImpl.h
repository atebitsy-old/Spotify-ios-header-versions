//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayer-Protocol.h"
#import "SPTPlayerSubscriptionObserver-Protocol.h"

@class NSHashTable, NSString, NSURL, SPTPlayerContext, SPTPlayerState, SPTPlayerSubscription;
@protocol OS_dispatch_queue, SPTPlayerLocalObservers, SPTResolver;

@interface SPTPlayerImpl : NSObject <SPTPlayerSubscriptionObserver, SPTPlayer>
{
    id <SPTResolver> _resolver;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_featureIdentifier;
    NSString *_featureVersion;
    NSHashTable *_observers;
    NSHashTable *_queueObservers;
    SPTPlayerState *_lastState;
    CDUnknownBlockType _timeGetter;
    SPTPlayerSubscription *_subscription;
    NSHashTable *_pendingObservers;
    NSURL *_viewURI;
    NSString *_referrerIdentifier;
    id <SPTPlayerLocalObservers> _localObservers;
}

+ (id)playerStateJsonToDict:(id)arg1;
+ (id)errorRequest;
+ (id)makeRequestWithAction:(id)arg1 suffix:(id)arg2 body:(id)arg3;
+ (id)failedTaskWithLocalizedErrorString:(id)arg1;
+ (id)makeErrorWithLocalizedString:(id)arg1;
+ (id)requestHeaders;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPlayerLocalObservers> localObservers; // @synthesize localObservers=_localObservers;
@property(readonly, copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
- (id)globalPlayerSubscription:(id)arg1 parseStateUpdate:(id)arg2;
- (void)globalPlayerSubscription:(id)arg1 gotStateUpdate:(id)arg2;
@property(readonly, copy, nonatomic) SPTPlayerState *state;
- (void)addStagedContextObserver:(id)arg1;
@property(retain, nonatomic) SPTPlayerContext *stagedContext;
- (void)fetchState:(CDUnknownBlockType)arg1 reverseCap:(long long)arg2 futureCap:(long long)arg3 on:(id)arg4;
- (void)fetchState:(CDUnknownBlockType)arg1 on:(id)arg2;
- (void)removePlayerObserver:(id)arg1;
- (void)addPlayerObserver:(id)arg1;
- (void)emitStateUpdate:(id)arg1 oldState:(id)arg2 observer:(id)arg3;
- (_Bool)hasObserver:(id)arg1;
- (id)loggingParamsWithTimestamp:(id)arg1;
- (id)loggingParamsWithTimestampDictionary;
- (void)removePlayerQueueObserver:(id)arg1;
- (void)addPlayerQueueObserver:(id)arg1;
- (id)addToQueue:(id)arg1 options:(id)arg2 loggingParams:(id)arg3;
- (id)addToQueue:(id)arg1 options:(id)arg2;
- (id)addToQueue:(id)arg1;
- (id)setQueue:(id)arg1 options:(id)arg2 loggingParams:(id)arg3;
- (id)setQueue:(id)arg1 options:(id)arg2;
- (id)setQueue:(id)arg1;
- (void)fetchQueue:(CDUnknownBlockType)arg1 on:(id)arg2;
- (void)getOrSubQueue:(CDUnknownBlockType)arg1 action:(id)arg2;
- (id)performPutWithEndpointSuffix:(id)arg1 body:(id)arg2;
- (id)updateWithContext:(id)arg1;
- (id)seekTo:(double)arg1 options:(id)arg2;
- (id)seekTo:(double)arg1;
- (id)setOptions:(id)arg1;
- (id)setRepeatingTrack:(_Bool)arg1;
- (id)setRepeatingContext:(_Bool)arg1;
- (id)setShufflingContext:(_Bool)arg1;
- (id)skipToNextTrackWithOptions:(id)arg1 track:(id)arg2;
- (id)skipToPreviousTrackWithOptions:(id)arg1 track:(id)arg2;
- (id)skipToNextTrackWithOptions:(id)arg1;
- (id)skipToPreviousTrackWithOptions:(id)arg1;
- (id)pause:(id)arg1;
- (id)resume;
- (id)stop;
- (id)preparePlaybackOfContext:(id)arg1 options:(id)arg2 viewURI:(id)arg3;
- (id)playContext:(id)arg1 options:(id)arg2 loggingParams:(id)arg3 origin:(id)arg4;
- (id)playContext:(id)arg1 options:(id)arg2 origin:(id)arg3;
- (id)playContext:(id)arg1 options:(id)arg2 externalReferrer:(id)arg3;
- (id)playContext:(id)arg1 options:(id)arg2 loggingParams:(id)arg3;
- (id)playContext:(id)arg1 options:(id)arg2;
- (id)playContext:(id)arg1 options:(id)arg2 viewURI:(id)arg3;
- (id)playOrPrepareContext:(id)arg1 options:(id)arg2 loggingParams:(id)arg3 origin:(id)arg4 prepare:(_Bool)arg5;
- (id)playOriginWithViewURIOverride:(id)arg1 externalReferrer:(id)arg2;
- (id)sendRequestWithAction:(id)arg1 loggingParams:(id)arg2;
- (id)sendRequestWithAction:(id)arg1 parameters:(id)arg2;
- (id)initWithResolver:(id)arg1 queue:(id)arg2 timeGetter:(CDUnknownBlockType)arg3 playerSubscription:(id)arg4 localObservers:(id)arg5 viewURI:(id)arg6 referrerIdentifier:(id)arg7 featureIdentifier:(id)arg8 featureVersion:(id)arg9;
- (id)initWithResolver:(id)arg1 queue:(id)arg2 playerSubscription:(id)arg3 localObservers:(id)arg4 viewURI:(id)arg5 referrerIdentifier:(id)arg6 featureIdentifier:(id)arg7 featureVersion:(id)arg8;
- (id)initWithResolver:(id)arg1 queue:(id)arg2 timeGetter:(CDUnknownBlockType)arg3 localObservers:(id)arg4 viewURI:(id)arg5 referrerIdentifier:(id)arg6 featureIdentifier:(id)arg7 featureVersion:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

