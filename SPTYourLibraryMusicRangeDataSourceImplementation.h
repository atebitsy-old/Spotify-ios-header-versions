//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicRangeDataLoaderDelegate-Protocol.h"
#import "SPTYourLibraryMusicRangeDataSource-Protocol.h"

@class NSArray, NSMutableOrderedSet, NSString;
@protocol SPTYourLibraryMusicRangeDataLoader, SPTYourLibraryMusicRangeDataSourceDelegate;

@interface SPTYourLibraryMusicRangeDataSourceImplementation : NSObject <SPTYourLibraryMusicRangeDataLoaderDelegate, SPTYourLibraryMusicRangeDataSource>
{
    _Bool _requestInProgress;
    _Bool _forceReload;
    id <SPTYourLibraryMusicRangeDataSourceDelegate> delegate;
    id <SPTYourLibraryMusicRangeDataLoader> _dataLoader;
    long long _itemsPerPage;
    unsigned long long _totalNumberOfItemsAtLastUpdate;
    NSArray *_items;
    long long _thresholdItemOffset;
    NSArray *_sortRules;
    NSArray *_filterRules;
    NSString *_textFilter;
    NSMutableOrderedSet *_lastUnavailableIndexes;
    struct _NSRange _requestedRange;
    struct _NSRange _currentRange;
    struct _NSRange _itemsRange;
}

+ (id)defaultRangedDataSourceWithDataLoader:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableOrderedSet *lastUnavailableIndexes; // @synthesize lastUnavailableIndexes=_lastUnavailableIndexes;
@property(nonatomic) _Bool forceReload; // @synthesize forceReload=_forceReload;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
@property(copy, nonatomic) NSArray *filterRules; // @synthesize filterRules=_filterRules;
@property(copy, nonatomic) NSArray *sortRules; // @synthesize sortRules=_sortRules;
@property(nonatomic) long long thresholdItemOffset; // @synthesize thresholdItemOffset=_thresholdItemOffset;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) struct _NSRange itemsRange; // @synthesize itemsRange=_itemsRange;
@property(nonatomic) unsigned long long totalNumberOfItemsAtLastUpdate; // @synthesize totalNumberOfItemsAtLastUpdate=_totalNumberOfItemsAtLastUpdate;
@property(nonatomic) struct _NSRange currentRange; // @synthesize currentRange=_currentRange;
@property(nonatomic) _Bool requestInProgress; // @synthesize requestInProgress=_requestInProgress;
@property(nonatomic) struct _NSRange requestedRange; // @synthesize requestedRange=_requestedRange;
@property(nonatomic) long long itemsPerPage; // @synthesize itemsPerPage=_itemsPerPage;
@property(retain, nonatomic) id <SPTYourLibraryMusicRangeDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTYourLibraryMusicRangeDataSourceDelegate> delegate; // @synthesize delegate;
- (void)rangeDataLoader:(id)arg1 error:(id)arg2;
- (void)rangeDataLoader:(id)arg1 didLoadItems:(id)arg2 forRange:(struct _NSRange)arg3;
- (_Bool)isThresholdHitBottomForIndexPath:(id)arg1;
- (_Bool)isThresholdHitTopForIndexPath:(id)arg1;
- (void)updateDataLoaderRangeForIndexPath:(id)arg1;
- (void)willDisplayItemAIndex:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (_Bool)recentlyUnavailableRequestedIndex:(long long)arg1;
- (void)addUnavailableIndex:(long long)arg1;
@property(readonly, nonatomic) NSArray *sectionIndices;
@property(readonly, nonatomic) long long totalNumberOfItems;
- (void)loadWithSortRules:(id)arg1 filterRules:(id)arg2 textFilter:(id)arg3;
- (id)initWithDataLoader:(id)arg1 itemsPerPage:(long long)arg2 threshold:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

