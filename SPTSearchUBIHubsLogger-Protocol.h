//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HUBComponentEvent, NSURL;
@protocol HUBComponentModel;

@protocol SPTSearchUBIHubsLogger <NSObject>
- (void)logImpressionWithComponentModel:(id <HUBComponentModel>)arg1;
- (void)logNavigateWithDestination:(NSURL *)arg1 event:(HUBComponentEvent *)arg2;
- (void)logRetryWithEvent:(HUBComponentEvent *)arg1;
- (void)logRemoveSearchItemWithEvent:(HUBComponentEvent *)arg1;
- (void)logClearRecentSearchesWithEvent:(HUBComponentEvent *)arg1;
- (void)logUIRevealWithEvent:(HUBComponentEvent *)arg1;
- (void)logPlayWithItemToBePlayed:(NSURL *)arg1 event:(HUBComponentEvent *)arg2;
@end

