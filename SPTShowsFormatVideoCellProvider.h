//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistCellProvider-Protocol.h"

@class BMPlaybackRequestFactory, NSString;
@protocol GLUEImageLoader, GLUETheme, SPTFreeTierPlaylistCellProviderDelegate, SPTFreeTierPlaylistItemsViewModel, SPTNetworkConnectivityController, SPTVideoCacheOptions, SPTVideoFeaturePlayerFactory, SPTVideoURLAssetLoader;

@interface SPTShowsFormatVideoCellProvider : NSObject <SPTFreeTierPlaylistCellProvider>
{
    _Bool _useBetamaxPlayer;
    id <SPTFreeTierPlaylistCellProviderDelegate> _delegate;
    id <GLUEImageLoader> _imageLoader;
    id <SPTVideoURLAssetLoader> _videoAssetLoader;
    id <SPTFreeTierPlaylistItemsViewModel> _itemsViewModel;
    id <GLUETheme> _glueTheme;
    id <SPTVideoFeaturePlayerFactory> _playerFactory;
    BMPlaybackRequestFactory *_playbackRequestFactory;
    id <SPTVideoCacheOptions> _videoCacheOptions;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) id <SPTVideoCacheOptions> videoCacheOptions; // @synthesize videoCacheOptions=_videoCacheOptions;
@property(readonly, nonatomic) BMPlaybackRequestFactory *playbackRequestFactory; // @synthesize playbackRequestFactory=_playbackRequestFactory;
@property(readonly, nonatomic) id <SPTVideoFeaturePlayerFactory> playerFactory; // @synthesize playerFactory=_playerFactory;
@property(readonly, nonatomic) _Bool useBetamaxPlayer; // @synthesize useBetamaxPlayer=_useBetamaxPlayer;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(nonatomic) __weak id <SPTFreeTierPlaylistItemsViewModel> itemsViewModel; // @synthesize itemsViewModel=_itemsViewModel;
@property(retain, nonatomic) id <SPTVideoURLAssetLoader> videoAssetLoader; // @synthesize videoAssetLoader=_videoAssetLoader;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) __weak id <SPTFreeTierPlaylistCellProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)formatCellViewModelForPlaylistTrackViewModel:(id)arg1;
- (id)identifierForCellForRowAtIndexPath:(id)arg1;
- (void)startPreviewInLegacyVideoLayer:(id)arg1 indexPath:(id)arg2;
- (void)configurePlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)didEndDisplayingPlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)willDisplayPlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)didSelectPlaylistCell:(id)arg1 atIndexPath:(id)arg2;
- (id)reuseIdentifiers;
- (double)heightForRowAtIndexPath:(id)arg1;
- (_Bool)handlesCellAtIndexPath:(id)arg1;
- (id)initWithImageLoader:(id)arg1 videoAssetLoader:(id)arg2 itemsViewModel:(id)arg3 rowStyle:(id)arg4 theme:(id)arg5 playerFactory:(id)arg6 videoCacheOptions:(id)arg7 playbackRequestFactory:(id)arg8 networkConnectivityController:(id)arg9 useBetamaxPlayer:(_Bool)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

