//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEpisodeContextMenuControllerDelegate-Protocol.h"

@class NSString, SPTPodcastLogger;
@protocol SPTCollectionLogger, SPTCollectionPlatform, SPTOfflineManager, SPTPodcastDataLoader, SPTPodcastOffliningManager, SPTPodcastTestManager, SPTShow, SPTShowEntityService;

@interface SPTPodcastContextMenuDelegateObject : NSObject <SPTEpisodeContextMenuControllerDelegate>
{
    id <SPTOfflineManager> _offlineManager;
    id <SPTShowEntityService> _showEntityService;
    id <SPTPodcastDataLoader> _dataLoader;
    SPTPodcastLogger *_logger;
    id <SPTShow> _show;
    id <SPTCollectionLogger> _collectionLogger;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTPodcastTestManager> _testManager;
    id <SPTPodcastOffliningManager> _podcastOffliningManager;
}

@property(readonly, nonatomic) id <SPTPodcastOffliningManager> podcastOffliningManager; // @synthesize podcastOffliningManager=_podcastOffliningManager;
@property(nonatomic) __weak id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) __weak id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) id <SPTShow> show; // @synthesize show=_show;
@property(retain, nonatomic) SPTPodcastLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPTShowEntityService> showEntityService; // @synthesize showEntityService=_showEntityService;
@property(nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
- (void).cxx_destruct;
- (void)markEpisodeAsPlayed:(id)arg1 played:(_Bool)arg2;
- (void)updateFollowedState:(_Bool)arg1 forShow:(id)arg2;
- (void)toggleOfflineEpisode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)followPodcast:(id)arg1;
- (void)unfollowPodcast:(id)arg1;
- (void)loadPodcastWithURI:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPodcastOffliningManager:(id)arg1 showEntityService:(id)arg2 dataLoader:(id)arg3 logger:(id)arg4 collectionLogger:(id)arg5 collectionPlatform:(id)arg6 testManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

