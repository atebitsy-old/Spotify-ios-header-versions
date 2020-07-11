//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistContextMenuPresenter-Protocol.h"

@class NSString;
@protocol SPContextMenuFeature, SPTFreeTierPlaylistViewModel;

@interface SPTFreeTierPlaylistAudioContextMenuPresenter : NSObject <SPTFreeTierPlaylistContextMenuPresenter>
{
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTFreeTierPlaylistViewModel> _playlistViewModel;
}

@property(readonly, nonatomic) __weak id <SPTFreeTierPlaylistViewModel> playlistViewModel; // @synthesize playlistViewModel=_playlistViewModel;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
- (void).cxx_destruct;
- (_Bool)presentContextMenuForItemAtIndexPath:(id)arg1 itemsViewModel:(id)arg2 sender:(id)arg3 viewController:(id)arg4;
- (id)initWithContextMenuService:(id)arg1 playlistViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

