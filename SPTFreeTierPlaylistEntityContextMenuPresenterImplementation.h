//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistEntityContextMenuPresenter-Protocol.h"

@class NSString, SPTFreeTierPlaylistLogger;
@protocol SPContextMenuFeature, SPTAlertInterface, SPTContextMenuPresenter, SPTCreatePlaylistTestManager, SPTFreeTierPlaylistItemsViewModel, SPTFreeTierPlaylistViewModel;

@interface SPTFreeTierPlaylistEntityContextMenuPresenterImplementation : NSObject <SPTFreeTierPlaylistEntityContextMenuPresenter>
{
    id <SPTFreeTierPlaylistViewModel> _playlistViewModel;
    id <SPTFreeTierPlaylistItemsViewModel> _itemsViewModel;
    id <SPContextMenuFeature> _contextMenuService;
    SPTFreeTierPlaylistLogger *_logger;
    id <SPTCreatePlaylistTestManager> _createPlaylistTestManager;
    id <SPTAlertInterface> _alertInterface;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
}

@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(retain, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(retain, nonatomic) id <SPTCreatePlaylistTestManager> createPlaylistTestManager; // @synthesize createPlaylistTestManager=_createPlaylistTestManager;
@property(readonly, nonatomic) SPTFreeTierPlaylistLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistItemsViewModel> itemsViewModel; // @synthesize itemsViewModel=_itemsViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistViewModel> playlistViewModel; // @synthesize playlistViewModel=_playlistViewModel;
- (void).cxx_destruct;
- (void)addActionWithIdentifier:(id)arg1 toActions:(id)arg2;
- (void)presentContextMenuInViewController:(id)arg1 sender:(id)arg2;
- (id)initWithPlaylistViewModel:(id)arg1 itemsViewModel:(id)arg2 contextMenuService:(id)arg3 logger:(id)arg4 createPlaylistTestManager:(id)arg5 alertInterface:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

