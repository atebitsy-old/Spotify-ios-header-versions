//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter, SPTUBILogger, SPTUBIMobileCollectionArtistEventFactory;

@interface SPTCollectionArtistLogger : NSObject
{
    id <SPTUBIMobileCollectionArtistEventFactory> _eventFactory;
    id <SPTUBILogger> _ubiLogger;
    id <SPTLogCenter> _logCenter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTUBIMobileCollectionArtistEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
- (void)logUBIImpressionEvent:(id)arg1;
- (void)logUBIInteractionEvent:(id)arg1;
- (void)logUIInteractionWithFeatureId:(id)arg1 pageURI:(id)arg2 sectionId:(id)arg3 itemIndex:(long long)arg4 targetURI:(id)arg5 interactionType:(id)arg6 userIntent:(id)arg7;
- (void)logUIInteractionOnPageURI:(id)arg1 sectionId:(id)arg2 itemIndex:(long long)arg3 targetURI:(id)arg4 interactionType:(id)arg5 userIntent:(id)arg6;
- (void)logEmptyViewImpressionWithReason:(unsigned long long)arg1;
- (void)logCancelRemoveDownloadsOnPageURI:(id)arg1;
- (void)logDownloadInteractionOnPageURI:(id)arg1 requestedDownload:(_Bool)arg2;
- (void)logFollowButtonOnPageURI:(id)arg1 isFollowed:(_Bool)arg2;
- (void)logPlayButtonOnPageURI:(id)arg1;
- (void)logContextMenuButtonOnPageURI:(id)arg1;
- (void)logListItemContextMenuSelectedOnPageURI:(id)arg1 index:(unsigned long long)arg2 targetURL:(id)arg3;
- (void)logSwipeActionOnPageURI:(id)arg1 index:(unsigned long long)arg2 targetURL:(id)arg3 shelfAction:(long long)arg4;
- (void)logListItemSelectedOnPageURI:(id)arg1 index:(unsigned long long)arg2 targetURL:(id)arg3;
- (id)initWithEventFactory:(id)arg1 ubiLogger:(id)arg2 logCenter:(id)arg3;

@end

