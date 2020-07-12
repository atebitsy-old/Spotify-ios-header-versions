//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTTableContext-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableSet, NSString, UITableView, UIViewController;
@protocol SPTTableAdapterAppearanceDelegate, SPTTableAdapterDataSource, UIScrollViewDelegate;

@interface SPTTableAdapter : NSObject <UITableViewDataSource, UITableViewDelegate, SPTTableContext>
{
    id <SPTTableAdapterDataSource> _dataSource;
    id <UIScrollViewDelegate> _scrollDelegate;
    id <SPTTableAdapterAppearanceDelegate> _tableAdapterDelegate;
    UITableView *_tableView;
    UIViewController *_viewController;
    NSArray *_sectionAdapters;
    NSMutableSet *_registeredCellClasses;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *registeredCellClasses; // @synthesize registeredCellClasses=_registeredCellClasses;
@property(retain, nonatomic) NSArray *sectionAdapters; // @synthesize sectionAdapters=_sectionAdapters;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SPTTableAdapterAppearanceDelegate> tableAdapterDelegate; // @synthesize tableAdapterDelegate=_tableAdapterDelegate;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak id <SPTTableAdapterDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)indexPathForRowAdapter:(id)arg1;
- (id)rowAdapterAtIndexPath:(id)arg1;
- (id)sectionAdapterAtIndex:(long long)arg1;
- (id)indexPathForSectionAdapter:(id)arg1 index:(long long)arg2;
- (void)deselectSelectedCell:(_Bool)arg1;
- (id)cellForRowAdapter:(id)arg1;
- (id)dequeueReusableCellOfClass:(Class)arg1 forRowAdapter:(id)arg2;
@property(readonly, nonatomic) struct CGPoint contentOffset;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)indexPathsForVisibleRows;
- (void)reloadTableData;
- (id)initWithTableView:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

