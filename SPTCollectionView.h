//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "SPTThemableView-Protocol.h"

@class NSString;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTCollectionView : UICollectionView <SPTThemableView>
{
    _Bool _hasHeaderViews;
    _Bool _hasFooterViews;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasFooterViews; // @synthesize hasFooterViews=_hasFooterViews;
@property(nonatomic) _Bool hasHeaderViews; // @synthesize hasHeaderViews=_hasHeaderViews;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void)applyThemeLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithDefaultLayoutAndFrame:(struct CGRect)arg1 headerViews:(_Bool)arg2 footerViews:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

