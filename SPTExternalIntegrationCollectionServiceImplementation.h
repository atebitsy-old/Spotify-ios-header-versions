//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationCollectionService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTCollectionPlatformService, SPTContainerService, SPTExternalIntegrationCollectionController, SPTExternalIntegrationDebugLogService, SPTExternalIntegrationPlaybackService, SPTPlaylistPlatformService;

@interface SPTExternalIntegrationCollectionServiceImplementation : NSObject <SPTExternalIntegrationCollectionService>
{
    id <SPTExternalIntegrationCollectionController> _sharedController;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTExternalIntegrationDebugLogService> _debugLogService;
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <SPTContainerService> _containerService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(readonly, nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationDebugLogService> debugLogService; // @synthesize debugLogService=_debugLogService;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTExternalIntegrationCollectionController> sharedController; // @synthesize sharedController=_sharedController;
- (id)provideCollectionController;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

