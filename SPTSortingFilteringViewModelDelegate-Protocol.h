//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, SPTSortingFilteringViewModel;
@protocol SPTSortingFilteringFilterRule, SPTSortingFilteringSortRule;

@protocol SPTSortingFilteringViewModelDelegate <NSObject>
- (void)sortingFilteringViewModel:(SPTSortingFilteringViewModel *)arg1 deselectedFilterRule:(id <SPTSortingFilteringFilterRule>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)sortingFilteringViewModel:(SPTSortingFilteringViewModel *)arg1 selectedFilterRule:(id <SPTSortingFilteringFilterRule>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)sortingFilteringViewModel:(SPTSortingFilteringViewModel *)arg1 selectedSortRule:(id <SPTSortingFilteringSortRule>)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

