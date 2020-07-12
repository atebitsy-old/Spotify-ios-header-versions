//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierEntityContextMenuButtonViewModel-Protocol.h"

@class NSDictionary, NSString, NSURL, SPTFreeTierAlbumViewModel;
@protocol SPTCollectionPlatformTestManager, SPTContextMenuActionsProvider, SPTContextMenuPresenterFactory, SPTFreeTierEntityContextMenuButtonViewModelDelegate;

@interface SPTFreeTierAlbumContextMenuButtonViewModel : NSObject <SPTFreeTierEntityContextMenuButtonViewModel>
{
    id <SPTFreeTierEntityContextMenuButtonViewModelDelegate> _delegate;
    unsigned long long _state;
    SPTFreeTierAlbumViewModel *_albumViewModel;
    id <SPTContextMenuPresenterFactory> _presenterFactory;
    id <SPTContextMenuActionsProvider> _actionFactory;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    NSURL *_viewURI;
    NSDictionary *_metadata;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) id <SPTContextMenuActionsProvider> actionFactory; // @synthesize actionFactory=_actionFactory;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> presenterFactory; // @synthesize presenterFactory=_presenterFactory;
@property(readonly, nonatomic) SPTFreeTierAlbumViewModel *albumViewModel; // @synthesize albumViewModel=_albumViewModel;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <SPTFreeTierEntityContextMenuButtonViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)createStashTask;
- (id)createRadioTask;
- (id)createAddToQueueTask;
- (id)createAddToPlaylistTask;
- (id)createLikeAllTracksTask;
- (id)createShareAlbumTask;
- (id)createViewArtistTask;
- (id)createLikeTask;
- (id)createContextMenuTasks;
- (id)contextMenuPresenterWithSenderView:(id)arg1;
- (void)transitionToState:(unsigned long long)arg1;
- (void)tapContextMenuButton:(id)arg1;
- (void)configureWithViewURI:(id)arg1 metadata:(id)arg2;
- (id)initWithPresenterFactory:(id)arg1 actionFactory:(id)arg2 albumViewModel:(id)arg3 collectionTestManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

