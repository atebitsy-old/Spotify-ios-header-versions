//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationPlaybackCoordinator-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "SPTService-Protocol.h"

@class NSMutableArray, NSString, SPTAllocationContext, SPTExternalIntegrationPlaybackServiceImplementation;
@protocol SPTNetworkService, SPTPlayer;

@interface SPTExternalIntegrationAlbumPlaybackCoordinatorService : NSObject <SPTPlayerObserver, SPTService, SPTExternalIntegrationPlaybackCoordinator>
{
    id <SPTNetworkService> _networkService;
    SPTExternalIntegrationPlaybackServiceImplementation *_playbackService;
    NSMutableArray *_activeDataLoaders;
    id <SPTPlayer> _player;
    CDUnknownBlockType _completionHandler;
}

+ (id)serviceIdentifier;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) NSMutableArray *activeDataLoaders; // @synthesize activeDataLoaders=_activeDataLoaders;
@property(readonly, nonatomic) __weak SPTExternalIntegrationPlaybackServiceImplementation *playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
- (void).cxx_destruct;
- (id)createPlayContextWithData:(id)arg1;
- (void)player:(id)arg1 didEncounterError:(id)arg2;
- (void)playContentWithURI:(id)arg1 withOptions:(id)arg2 origin:(id)arg3 requestOptions:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)canPlayContentWithURI:(id)arg1;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

