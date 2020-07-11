//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobilePlaylistEntity_AddSongsButtonEventFactory, SPTUBIMobilePlaylistEntity_DeeplinkingEventFactory, SPTUBIMobilePlaylistEntity_DownloadToggleEventFactory, SPTUBIMobilePlaylistEntity_EditButtonEventFactory, SPTUBIMobilePlaylistEntity_EmptyViewEventFactory, SPTUBIMobilePlaylistEntity_FilterAndSortEventFactory, SPTUBIMobilePlaylistEntity_HeaderEventFactory, SPTUBIMobilePlaylistEntity_ItemListEventFactory, SPTUBIMobilePlaylistEntity_PlayButtonEventFactory, SPTUBIMobilePlaylistEntity_ToolbarEventFactory, SPTUBIMobilePlaylistEntity_TrackCloudEventFactory;

@protocol SPTUBIMobilePlaylistEntityEventFactory <NSObject>
- (id <SPTUBIMobilePlaylistEntity_ItemListEventFactory>)itemListFactory;
- (id <SPTUBIMobilePlaylistEntity_FilterAndSortEventFactory>)filterAndSortFactory;
- (id <SPTUBIMobilePlaylistEntity_EmptyViewEventFactory>)emptyViewFactory;
- (id <SPTUBIMobilePlaylistEntity_TrackCloudEventFactory>)trackCloudFactory;
- (id <SPTUBIMobilePlaylistEntity_EditButtonEventFactory>)editButtonFactory;
- (id <SPTUBIMobilePlaylistEntity_DownloadToggleEventFactory>)downloadToggleFactory;
- (id <SPTUBIMobilePlaylistEntity_AddSongsButtonEventFactory>)addSongsButtonFactory;
- (id <SPTUBIMobilePlaylistEntity_PlayButtonEventFactory>)playButtonFactory;
- (id <SPTUBIMobilePlaylistEntity_HeaderEventFactory>)headerFactory;
- (id <SPTUBIMobilePlaylistEntity_ToolbarEventFactory>)toolbarFactory;
- (id <SPTUBIMobilePlaylistEntity_DeeplinkingEventFactory>)deeplinkingFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

