//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOfflineContentModel-Protocol.h"

@class NSArray, NSNumber, NSString, SPTOfflineMusicModelEntity;
@protocol SPTCollectionPlatformConfiguration, SPTCollectionPlatformDataLoader, SPTCollectionPlatformDataLoaderRequestToken, SPTLocalSettings, SPTOfflineContentModelDelegate, SPTOfflineTestManager, SPTPlaylistPlatformDataLoaderRequestToken, SPTPlaylistPlatformPlaylistDataLoader, SPTProductState;

@interface SPTOfflineMusicModel : NSObject <SPTOfflineContentModel>
{
    _Bool _loaded;
    id <SPTOfflineContentModelDelegate> delegate;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTCollectionPlatformDataLoader> _collectionDataLoader;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTOfflineTestManager> _testManager;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _playlistsSubscription;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionSubscription;
    id <SPTCollectionPlatformDataLoaderRequestToken> _likedSongsSubscription;
    NSArray *_playlists;
    NSArray *_albums;
    NSNumber *_likedSongsAvailability;
    SPTOfflineMusicModelEntity *_currentEntity;
    struct _NSRange _currentAlbumRequestRange;
}

@property(nonatomic) struct _NSRange currentAlbumRequestRange; // @synthesize currentAlbumRequestRange=_currentAlbumRequestRange;
@property(retain, nonatomic) SPTOfflineMusicModelEntity *currentEntity; // @synthesize currentEntity=_currentEntity;
@property(nonatomic) NSNumber *likedSongsAvailability; // @synthesize likedSongsAvailability=_likedSongsAvailability;
@property(copy, nonatomic) NSArray *albums; // @synthesize albums=_albums;
@property(copy, nonatomic) NSArray *playlists; // @synthesize playlists=_playlists;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> likedSongsSubscription; // @synthesize likedSongsSubscription=_likedSongsSubscription;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionSubscription; // @synthesize collectionSubscription=_collectionSubscription;
@property(retain, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> playlistsSubscription; // @synthesize playlistsSubscription=_playlistsSubscription;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTOfflineTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(readonly, nonatomic) id <SPTCollectionPlatformDataLoader> collectionDataLoader; // @synthesize collectionDataLoader=_collectionDataLoader;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(nonatomic) __weak id <SPTOfflineContentModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)handleError:(id)arg1 withContext:(id)arg2;
- (void)updateModelEntity;
- (void)checkPlaylistResponseForFullySyncedPlaylists:(id)arg1;
- (void)rerequestAlbumsWithIncreasedWindow;
- (void)checkAlbumResponseForFullySyncedAlbums:(SPTCollectionPlatformDataLoaderResponse_f5c2288a *)arg1;
- (void)loadLikedSongs;
- (void)loadOfflineAlbumsWithRange:(struct _NSRange)arg1;
- (void)loadOfflinePlaylists;
- (void)storeEntity:(id)arg1;
- (void)loadLocallyStoredEntity;
- (void)tearDown;
- (void)loadModel;
- (id)initWithPlaylistDataLoader:(id)arg1 collectionDataLoader:(id)arg2 collectionConfiguration:(id)arg3 testManager:(id)arg4 productState:(id)arg5 localSettings:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

