//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastEpisodeFeaturedContentViewProvider-Protocol.h"

@class NSString, SPTPodcastEpisodeFeaturedContentContentOperationFactory, SPTPodcastEpisodeFeaturedContentContextMenuPresenter, SPTPodcastEpisodeFeaturedContentDataLoader, SPTPodcastEpisodeFeaturedContentLogger;
@protocol GLUEImageLoader, GLUETheme, SPTHubsRendererFactory, SPTHugsFactory, SPTLinkDispatcher, SPTPlayerFeature, SPTPodcastEpisodeFeaturedContentTestManager;

@interface SPTPodcastEpisodeFeaturedContentViewProviderImplementation : NSObject <SPTPodcastEpisodeFeaturedContentViewProvider>
{
    SPTPodcastEpisodeFeaturedContentDataLoader *_dataLoader;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    id <GLUETheme> _theme;
    id <GLUEImageLoader> _imageLoader;
    id <SPTPlayerFeature> _playerService;
    id <SPTPodcastEpisodeFeaturedContentTestManager> _testManager;
    SPTPodcastEpisodeFeaturedContentContentOperationFactory *_contentOperationsFactory;
    SPTPodcastEpisodeFeaturedContentContextMenuPresenter *_contextMenuPresenter;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTPodcastEpisodeFeaturedContentLogger *_logger;
}

@property(readonly, nonatomic) SPTPodcastEpisodeFeaturedContentLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTPodcastEpisodeFeaturedContentContextMenuPresenter *contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(readonly, nonatomic) SPTPodcastEpisodeFeaturedContentContentOperationFactory *contentOperationsFactory; // @synthesize contentOperationsFactory=_contentOperationsFactory;
@property(readonly, nonatomic) id <SPTPodcastEpisodeFeaturedContentTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) SPTPodcastEpisodeFeaturedContentDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)managerForURL:(id)arg1 referrerIdentifier:(id)arg2;
- (id)featuredContentTimelineLinkForEpisodeURL:(id)arg1 withContext:(id)arg2;
- (id)featuredContentTimelineForEpisodeURL:(id)arg1 withContext:(id)arg2 configureForEmbeddingInScrollView:(_Bool)arg3;
- (id)featuredContentTimelineForEpisodeURL:(id)arg1 withContext:(id)arg2;
- (id)featuredContentTrackListForEpisodeURL:(id)arg1 withContext:(id)arg2;
- (id)featuredContentForEpisodeURL:(id)arg1 withContext:(id)arg2;
- (id)initWithHubsRendererFactory:(id)arg1 hugsFactory:(id)arg2 theme:(id)arg3 imageLoader:(id)arg4 testManager:(id)arg5 contentOperationFactory:(id)arg6 dataLoaderFactory:(id)arg7 contextMenuPresenter:(id)arg8 playerService:(id)arg9 linkDispatcher:(id)arg10 logger:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

