//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastOffliningManager-Protocol.h"

@class NSString;
@protocol SPTAlertInterface, SPTLinkDispatcher, SPTNetworkConnectivityController, SPTOfflineManager, SPTPodcastOffliningPlaylistManager;

@interface SPTPodcastOffliningManagerImplementation : NSObject <SPTPodcastOffliningManager>
{
    id <SPTOfflineManager> _offlineManager;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    id <SPTAlertInterface> _alertInterface;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTPodcastOffliningPlaylistManager> _playlistManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTPodcastOffliningPlaylistManager> playlistManager; // @synthesize playlistManager=_playlistManager;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(readonly, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
- (void)showDeleteDownloadsAlertWithBlock:(CDUnknownBlockType)arg1;
- (void)showDownloadsOnCellularAlert;
- (void)removeOfflineWithConfirmationForEpisodeWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)toggleOfflineForEpisodeWithURL:(id)arg1 currentOfflineSyncStatus:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithOfflineManager:(id)arg1 networkConnectivityController:(id)arg2 alertInterface:(id)arg3 linkDispatcher:(id)arg4 playlistManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

