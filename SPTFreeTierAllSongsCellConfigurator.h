//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, SPTFreeTierAllSongsContextMenuPresenter, SPTFreeTierAllSongsLogger, SPTFreeTierAllSongsTheme, SPTFreeTierAllSongsViewModel;
@protocol GLUEImageLoader, SPTAudioPreviewModelFactory, SPTAudioPreviewUIFactory, SPTFreeTierAllSongsCellConfiguratorDelegate;

@interface SPTFreeTierAllSongsCellConfigurator : NSObject
{
    double _preferredRowHeight;
    id <SPTFreeTierAllSongsCellConfiguratorDelegate> _delegate;
    NSURL *_viewURI;
    SPTFreeTierAllSongsTheme *_theme;
    SPTFreeTierAllSongsViewModel *_viewModel;
    id <GLUEImageLoader> _imageLoader;
    id <SPTAudioPreviewUIFactory> _audioPreviewUIFactory;
    id <SPTAudioPreviewModelFactory> _audioPreviewModelFactory;
    SPTFreeTierAllSongsContextMenuPresenter *_contextMenuPresenter;
    SPTFreeTierAllSongsLogger *_logger;
}

@property(readonly, nonatomic) SPTFreeTierAllSongsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTFreeTierAllSongsContextMenuPresenter *contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(readonly, nonatomic) id <SPTAudioPreviewModelFactory> audioPreviewModelFactory; // @synthesize audioPreviewModelFactory=_audioPreviewModelFactory;
@property(readonly, nonatomic) id <SPTAudioPreviewUIFactory> audioPreviewUIFactory; // @synthesize audioPreviewUIFactory=_audioPreviewUIFactory;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTFreeTierAllSongsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) SPTFreeTierAllSongsTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(nonatomic) __weak id <SPTFreeTierAllSongsCellConfiguratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double preferredRowHeight; // @synthesize preferredRowHeight=_preferredRowHeight;
- (void).cxx_destruct;
- (id)cellStyleForIndexPath:(id)arg1;
- (id)previewStyleForIndexPath:(id)arg1;
- (void)presentContextMenuAtIndexPath:(id)arg1 fromView:(id)arg2;
- (void)updatePreferredRowHeight;
- (id)indexPathForButton:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (void)cellImagePreviewButtonDidTouchUpInside:(id)arg1;
- (void)cellContextMenuButtonDidTouchUpInside:(id)arg1;
- (_Bool)shouldSelectCellForIndexPath:(id)arg1;
- (void)didSelectCell:(id)arg1;
- (id)provideHeaderViewForSection:(long long)arg1;
- (void)setupTrailingAccessoryForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setupLeadingAccessoryForCell:(id)arg1 atIndexPath:(id)arg2;
- (long long)configureMultipleAccessoriesViewForCell:(id)arg1 subtitleAccessoryView:(id)arg2 indexPath:(id)arg3;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (Class)cellClass;
- (id)initWithViewURI:(id)arg1 theme:(id)arg2 viewModel:(id)arg3 imageLoader:(id)arg4 audioPreviewUIFactory:(id)arg5 audioPreviewModelFactory:(id)arg6 contextMenuPresenter:(id)arg7 logger:(id)arg8;

@end

