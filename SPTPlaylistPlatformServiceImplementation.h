//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistPlatformService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol CosmosFeature, SPTCosmosDataLoaderService, SPTPlaylistPlatformPlaylistSynchroniser, SPTResolver;

@interface SPTPlaylistPlatformServiceImplementation : NSObject <SPTPlaylistPlatformService>
{
    CDUnknownBlockType _timeGetter;
    id <CosmosFeature> _cosmosFeature;
    id <SPTCosmosDataLoaderService> _cosmosDataLoaderService;
    id <SPTResolver> _playlistCosmosRouter;
    id <SPTPlaylistPlatformPlaylistSynchroniser> _playlistSynchroniser;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistSynchroniser> playlistSynchroniser; // @synthesize playlistSynchroniser=_playlistSynchroniser;
@property(retain, nonatomic) id <SPTResolver> playlistCosmosRouter; // @synthesize playlistCosmosRouter=_playlistCosmosRouter;
@property(retain, nonatomic) id <SPTCosmosDataLoaderService> cosmosDataLoaderService; // @synthesize cosmosDataLoaderService=_cosmosDataLoaderService;
@property(retain, nonatomic) id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(copy, nonatomic) CDUnknownBlockType timeGetter; // @synthesize timeGetter=_timeGetter;
- (id)provideResolverPlaylist;
- (id)providePlaylistURIResolver;
- (id)providePlaylistSynchroniser;
- (id)providePlaylistPlatformDataLoader;
- (id)providePlaylistModel;
- (void)configureWithServices:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

