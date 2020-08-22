//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTYourLibraryPageViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableOrderedSet, NSNumber, NSString, SPTYourLibraryPageViewControllerPage, UIScrollView;
@protocol SPTYourLibraryPageViewControllerDataSource, SPTYourLibraryPageViewControllerDelegate;

@interface SPTYourLibraryPageViewController : UIViewController <UIScrollViewDelegate, SPTYourLibraryPageViewDelegate>
{
    _Bool _pageNavigationDisabled;
    _Bool _ready;
    _Bool _respondsToDidChangeViewController;
    _Bool _visible;
    id <SPTYourLibraryPageViewControllerDataSource> _dataSource;
    id <SPTYourLibraryPageViewControllerDelegate> _delegate;
    UIScrollView *_scrollView;
    NSMutableOrderedSet *_visiblePages;
    NSNumber *_needReloadAtIndex;
    NSMutableArray *_animationEndBlocks;
    struct CGSize _currentSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) NSMutableArray *animationEndBlocks; // @synthesize animationEndBlocks=_animationEndBlocks;
@property(retain, nonatomic) NSNumber *needReloadAtIndex; // @synthesize needReloadAtIndex=_needReloadAtIndex;
@property(nonatomic) _Bool respondsToDidChangeViewController; // @synthesize respondsToDidChangeViewController=_respondsToDidChangeViewController;
@property(nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(retain, nonatomic) NSMutableOrderedSet *visiblePages; // @synthesize visiblePages=_visiblePages;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct CGSize currentSize; // @synthesize currentSize=_currentSize;
@property(nonatomic, getter=isPageNavigationDisabled) _Bool pageNavigationDisabled; // @synthesize pageNavigationDisabled=_pageNavigationDisabled;
@property(nonatomic) __weak id <SPTYourLibraryPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTYourLibraryPageViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)willChangeWidth:(double)arg1 forPageView:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (_Bool)isAnimatingSectionChange;
- (double)offsetForIndex:(unsigned long long)arg1;
- (_Bool)stopped;
- (double)calculateVisibilityFactorForRect:(struct CGRect)arg1;
- (void)sortVisiblePages;
- (void)internalTilePagesRTL;
- (void)internalTilePages;
- (void)tilePages;
- (_Bool)configurePage:(id)arg1 forIndex:(long long)arg2;
- (void)removeInvisiblePages:(id)arg1;
- (struct CGRect)frameForPageAtIndex:(long long)arg1;
- (_Bool)isDisplayingPageAtIndex:(long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)totalPages;
- (void)reload;
- (void)reloadAtIndex:(unsigned long long)arg1;
- (void)selectPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setHorizontalPageOffset:(double)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
@property(readonly, nonatomic) SPTYourLibraryPageViewControllerPage *firstVisiblePage;
@property(readonly, nonatomic) _Bool singleVisiblePage;
@property(readonly, nonatomic) long long currentPageIndex;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

