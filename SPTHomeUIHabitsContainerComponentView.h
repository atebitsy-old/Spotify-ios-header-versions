//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithChildren-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, UICollectionView;
@protocol HUBComponentViewChildDelegate;

@interface SPTHomeUIHabitsContainerComponentView : HUGSThemableComponentView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, HUBComponentViewWithChildren>
{
    id <HUBComponentViewChildDelegate> childDelegate;
    UICollectionView *_collectionView;
}

+ (long long)numberOfCardsForItems:(long long)arg1 withSizeClass:(long long)arg2;
+ (double)cardContainerHeightForRows:(unsigned long long)arg1 theme:(id)arg2;
+ (double)cardContainerHeightForModel:(id)arg1 containerViewSize:(struct CGSize)arg2 horizontalSizeClass:(long long)arg3 theme:(id)arg4;
+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 sizeClass:(long long)arg3 theme:(id)arg4;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureWithModel:(id)arg1;
- (void)addGradientView;
- (void)layoutSubviews;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

