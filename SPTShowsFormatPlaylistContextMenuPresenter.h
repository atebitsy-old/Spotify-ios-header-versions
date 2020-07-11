//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuPresenterDelegate-Protocol.h"
#import "SPTFreeTierPlaylistContextMenuPresenter-Protocol.h"

@class NSString, NSURL;
@protocol SPTContextMenuPresenter, SPTContextMenuPresenterFactory, SPTShowsFormatVideoContextMenuProvider;

@interface SPTShowsFormatPlaylistContextMenuPresenter : NSObject <SPTContextMenuPresenterDelegate, SPTFreeTierPlaylistContextMenuPresenter>
{
    _Bool _contextAwareSharingEnabled;
    id <SPTShowsFormatVideoContextMenuProvider> _videoContextMenuProvider;
    NSURL *_pageURI;
    id <SPTContextMenuPresenterFactory> _presenterFactory;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
}

@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(retain, nonatomic) id <SPTContextMenuPresenterFactory> presenterFactory; // @synthesize presenterFactory=_presenterFactory;
@property(retain, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, nonatomic) id <SPTShowsFormatVideoContextMenuProvider> videoContextMenuProvider; // @synthesize videoContextMenuProvider=_videoContextMenuProvider;
@property(readonly, nonatomic) _Bool contextAwareSharingEnabled; // @synthesize contextAwareSharingEnabled=_contextAwareSharingEnabled;
- (void).cxx_destruct;
- (_Bool)presentContextMenuForItemAtIndexPath:(id)arg1 itemsViewModel:(id)arg2 sender:(id)arg3 viewController:(id)arg4;
- (id)initWithVideoContextMenuPresenter:(id)arg1 presenterFactory:(id)arg2 contextAwareSharingEnabled:(_Bool)arg3 pageURI:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

