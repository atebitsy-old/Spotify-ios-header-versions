//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

@protocol HUBComponentViewChildDelegate;

@interface _TtC7SPTTing21CarouselComponentView : HUGSThemableComponentView
{
    // Error parsing type: , name: childSizeProvider
    // Error parsing type: , name: childDelegate
    // Error parsing type: , name: layout
    // Error parsing type: , name: collectionView
}

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)restoreUIState:(id)arg1;
- (id)currentUIState;
- (void)viewDidDisappear;
- (void)viewWillAppear;
@property(nonatomic) __weak id <HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end
