//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SPTSortingFilteringSortRule;

@protocol SPTSortingFilteringPreferences <NSObject>
- (NSArray *)preferredFilterRulesFromAvailableFilterRules:(NSArray *)arg1;
- (void)savePreferredFilteringRules:(NSArray *)arg1;
- (id <SPTSortingFilteringSortRule>)preferredSortingRuleFromAvailableSortingRules:(NSArray *)arg1 withDefaultSortRuleIdentifier:(NSString *)arg2;
- (id <SPTSortingFilteringSortRule>)preferredSortingRuleFromAvailableSortingRules:(NSArray *)arg1;
- (void)savePreferredSortingRule:(id <SPTSortingFilteringSortRule>)arg1;
@end

