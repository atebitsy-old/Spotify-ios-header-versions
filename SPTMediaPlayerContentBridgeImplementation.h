//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPPlayableContentDataSource-Protocol.h"
#import "MPPlayableContentDelegate-Protocol.h"
#import "SPTMediaPlayerContentBridge-Protocol.h"

@class MPContentItem, MPPlayableContentManager, NSMutableIndexSet, NSString;
@protocol MPPlayableContentDataSource, MPPlayableContentDelegate, SPTPlaybackQueueInitializer;

@interface SPTMediaPlayerContentBridgeImplementation : NSObject <SPTMediaPlayerContentBridge, MPPlayableContentDataSource, MPPlayableContentDelegate>
{
    id <MPPlayableContentDelegate> _playableContentSubDelegate;
    id <MPPlayableContentDataSource> _playableContentDataSource;
    id <SPTPlaybackQueueInitializer> _playbackQueueInitializer;
    MPContentItem *_tabMenuDummyItem;
    MPPlayableContentManager *_contentManager;
    NSMutableIndexSet *_startLoadTaskIdentifiers;
}

@property(retain, nonatomic) NSMutableIndexSet *startLoadTaskIdentifiers; // @synthesize startLoadTaskIdentifiers=_startLoadTaskIdentifiers;
@property(retain, nonatomic) MPPlayableContentManager *contentManager; // @synthesize contentManager=_contentManager;
@property(nonatomic) __weak id <SPTPlaybackQueueInitializer> playbackQueueInitializer; // @synthesize playbackQueueInitializer=_playbackQueueInitializer;
@property(nonatomic) __weak id <MPPlayableContentDataSource> playableContentDataSource; // @synthesize playableContentDataSource=_playableContentDataSource;
@property(nonatomic) __weak id <MPPlayableContentDelegate> playableContentSubDelegate; // @synthesize playableContentSubDelegate=_playableContentSubDelegate;
- (void).cxx_destruct;
- (void)playableContentManager:(id)arg1 didUpdateContext:(id)arg2;
- (void)playableContentManager:(id)arg1 initializePlaybackQueueWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)playableContentManager:(id)arg1 initiatePlaybackOfContentItemAtIndexPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)contentItemAtIndexPath:(id)arg1;
- (long long)numberOfChildItemsAtIndexPath:(id)arg1;
- (_Bool)childItemsDisplayPlaybackProgressAtIndexPath:(id)arg1;
- (void)beginLoadingChildItemsAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)endBackgroundTask:(unsigned long long)arg1;
- (void)endLoadDataSourceBackgroundTask;
- (unsigned long long)startBackgroundTask;
- (void)startLoadDataSourceBackgroundTask;
@property(readonly, nonatomic) MPContentItem *tabMenuDummyItem; // @synthesize tabMenuDummyItem=_tabMenuDummyItem;
- (id)initWithContentManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

