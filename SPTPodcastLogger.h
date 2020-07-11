//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastLogger-Protocol.h"

@class NSString;
@protocol SPTLogCenter;

@interface SPTPodcastLogger : NSObject <SPTPodcastLogger>
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logNavigateBrowsePodcastsPageInViewURL:(id)arg1 featureId:(id)arg2;
- (void)logNavigateToShowPageInViewURL:(id)arg1 targetURL:(id)arg2;
- (void)logMarkAsPlayedEpisodePageInViewURL:(id)arg1 featureId:(id)arg2 episodeURI:(id)arg3 indexPath:(id)arg4;
- (void)logRemoveDownloadedEpisodeInViewURL:(id)arg1 featureId:(id)arg2 episodeURI:(id)arg3 indexPath:(id)arg4;
- (void)logDownloadEpisodeInViewURL:(id)arg1 featureId:(id)arg2 episodeURI:(id)arg3 indexPath:(id)arg4;
- (void)logContextMenuToEpisodePageInViewURL:(id)arg1 featureId:(id)arg2 episodeURI:(id)arg3 indexPath:(id)arg4;
- (void)logNavigateToEpisodePageInViewURL:(id)arg1 featureId:(id)arg2 episodeURI:(id)arg3 indexPath:(id)arg4;
- (void)logPauseEpisodeInViewURL:(id)arg1 featureId:(id)arg2 episodeURI:(id)arg3 indexPath:(id)arg4;
- (void)logPlayEpisodeInViewURL:(id)arg1 featureId:(id)arg2 episodeURI:(id)arg3 indexPath:(id)arg4;
- (void)logLoadShowViewURL:(id)arg1;
- (void)logUIImpressionForFeatureID:(id)arg1 pageURI:(id)arg2 section:(id)arg3 itemIndex:(long long)arg4 targetURI:(id)arg5;
- (void)logSpeedControlSelected:(id)arg1;
- (void)logMarkAsPlayedUnplayedContextMenu:(id)arg1 episodeURI:(id)arg2 played:(_Bool)arg3;
- (void)logOpenContextMenuShowInViewURL:(id)arg1;
- (void)logOpenContextMenuEpisodeInViewURL:(id)arg1 episodeURI:(id)arg2 indexPath:(id)arg3;
- (void)logDescriptionExpanded:(id)arg1;
- (void)logNavigatToTopicPage:(id)arg1 topicURI:(id)arg2;
- (void)logShowFollowInViewURL:(id)arg1 didFollow:(_Bool)arg2 fromContextMenu:(_Bool)arg3 autoFollow:(_Bool)arg4;
- (void)logEpisodeSortingInViewURL:(id)arg1 sorting:(unsigned long long)arg2;
- (void)logEpisodeFilterResetInViewURL:(id)arg1;
- (void)logEpisodeFilterSetInViewURL:(id)arg1 filter:(id)arg2 previousFilter:(id)arg3;
- (id)sectionNameForSection:(long long)arg1 pageURI:(id)arg2;
- (void)logInteractionMessageWithPageURI:(id)arg1 featureId:(id)arg2 sectionID:(id)arg3 itemIndex:(long long)arg4 targetURI:(id)arg5 userIntent:(id)arg6;
- (id)initWithLogCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

