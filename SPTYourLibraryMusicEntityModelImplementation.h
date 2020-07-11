//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicAvailableContentMonitorDelegate-Protocol.h"
#import "SPTYourLibraryMusicEntityModel-Protocol.h"
#import "SPTYourLibraryMusicExternalSortDelegate-Protocol.h"
#import "SPTYourLibraryMusicHiddenContentModelDelegate-Protocol.h"
#import "SPTYourLibraryMusicRangeDataSourceDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SPTYourLibraryMusicFilterSortManager;
@protocol SPTSortingFilteringSortRule, SPTYourLibraryMusicAvailableContentMonitor, SPTYourLibraryMusicEntityModelDelegate, SPTYourLibraryMusicExternalSort, SPTYourLibraryMusicHiddenContentModel;

@interface SPTYourLibraryMusicEntityModelImplementation : NSObject <SPTYourLibraryMusicHiddenContentModelDelegate, SPTYourLibraryMusicEntityModel, SPTYourLibraryMusicRangeDataSourceDelegate, SPTYourLibraryMusicExternalSortDelegate, SPTYourLibraryMusicAvailableContentMonitorDelegate>
{
    _Bool hasHiddenContent;
    _Bool _firstLoadPerformed;
    _Bool _loaded;
    _Bool _entityItemsArePlayable;
    id <SPTYourLibraryMusicEntityModelDelegate> delegate;
    NSString *_textFilter;
    NSArray *_activeFilters;
    NSArray *_availableFilters;
    id <SPTSortingFilteringSortRule> _selectedSortRule;
    NSArray *_availableSortRules;
    long long _numberOfItems;
    id <SPTYourLibraryMusicHiddenContentModel> _hiddenContentModel;
    SPTYourLibraryMusicFilterSortManager *_filterSortManager;
    id <SPTYourLibraryMusicExternalSort> _externalSort;
    id <SPTYourLibraryMusicAvailableContentMonitor> _availableContentMonitor;
    NSMutableArray *_dataSources;
    NSArray *_cachedSectionIndexTitles;
}

@property(copy, nonatomic) NSArray *cachedSectionIndexTitles; // @synthesize cachedSectionIndexTitles=_cachedSectionIndexTitles;
@property(retain, nonatomic) NSMutableArray *dataSources; // @synthesize dataSources=_dataSources;
@property(retain, nonatomic) id <SPTYourLibraryMusicAvailableContentMonitor> availableContentMonitor; // @synthesize availableContentMonitor=_availableContentMonitor;
@property(retain, nonatomic) id <SPTYourLibraryMusicExternalSort> externalSort; // @synthesize externalSort=_externalSort;
@property(retain, nonatomic) SPTYourLibraryMusicFilterSortManager *filterSortManager; // @synthesize filterSortManager=_filterSortManager;
@property(retain, nonatomic) id <SPTYourLibraryMusicHiddenContentModel> hiddenContentModel; // @synthesize hiddenContentModel=_hiddenContentModel;
@property(nonatomic, getter=isEntityItemsArePlayable) _Bool entityItemsArePlayable; // @synthesize entityItemsArePlayable=_entityItemsArePlayable;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic, getter=isFirstLoadPerformed) _Bool firstLoadPerformed; // @synthesize firstLoadPerformed=_firstLoadPerformed;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(readonly, copy, nonatomic) NSArray *availableSortRules; // @synthesize availableSortRules=_availableSortRules;
@property(copy, nonatomic) id <SPTSortingFilteringSortRule> selectedSortRule; // @synthesize selectedSortRule=_selectedSortRule;
@property(readonly, copy, nonatomic) NSArray *availableFilters; // @synthesize availableFilters=_availableFilters;
@property(copy, nonatomic) NSArray *activeFilters; // @synthesize activeFilters=_activeFilters;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
@property(nonatomic) _Bool hasHiddenContent; // @synthesize hasHiddenContent;
@property(nonatomic) __weak id <SPTYourLibraryMusicEntityModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)notifyModelUpdateIfLoaded;
- (void)availableContentMonitorChanged:(id)arg1;
- (void)didChangeExternalSort:(id)arg1;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered;
- (void)removeFilterAtIndex:(long long)arg1;
- (void)resetFilters;
- (void)rangeDataSource:(id)arg1 error:(id)arg2;
- (void)rangeDataSourceUpdated:(id)arg1 itemsCountChanged:(_Bool)arg2;
- (void)hiddenContentModel:(id)arg1 didFailWithError:(id)arg2;
- (void)hiddenContentModelDidUpdate:(id)arg1;
- (void)reloadData;
- (void)loadModel;
- (void)addDataSource:(id)arg1 withItemAction:(CDUnknownBlockType)arg2;
- (void)performItemActionAtIndex:(unsigned long long)arg1 inGroup:(unsigned long long)arg2;
- (id)itemAtIndex:(unsigned long long)arg1 inGroup:(unsigned long long)arg2;
- (unsigned long long)locationForSectionIndex:(long long)arg1;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
- (unsigned long long)numberOfItemsInGroup:(unsigned long long)arg1;
- (unsigned long long)numberOfItemGroups;
- (id)initWithHiddenContentModel:(id)arg1 filterSortManager:(id)arg2 externalSort:(id)arg3 availableContentMonitor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

