//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, SPTEntitySeeAllSongsViewModel;
@protocol SPTContextMenuOptionsFactory, SPTContextMenuPresenter, SPTContextMenuPresenterFactory;

@interface SPTEntitySeeAllSongsContextMenuPresenter : NSObject
{
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    SPTEntitySeeAllSongsViewModel *_viewModel;
    NSURL *_viewURI;
    id <SPTContextMenuPresenter> _presenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTContextMenuPresenter> presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) SPTEntitySeeAllSongsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
- (void)presentContextMenuAtIndexPath:(id)arg1 fromView:(id)arg2;
- (id)initWithViewURI:(id)arg1 contextMenuPresenterFactory:(id)arg2 contextMenuOptionsFactory:(id)arg3 viewModel:(id)arg4;

@end

