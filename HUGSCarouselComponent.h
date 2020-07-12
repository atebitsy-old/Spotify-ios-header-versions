//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "HUBComponent-Protocol.h"
#import "HUBComponentWithChildren-Protocol.h"

@class NSSet;
@protocol HUBComponentChildDelegate;

@interface HUGSCarouselComponent : HUGSThemableComponent <HUBComponent, HUBComponentWithChildren>
{
    id <HUBComponentChildDelegate> _childDelegate;
    Class _collectionViewClass;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Class collectionViewClass; // @synthesize collectionViewClass=_collectionViewClass;
@property(nonatomic) __weak id <HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (struct CGSize)calculateChildItemSizeToSatisfyDesignRules:(struct CGSize)arg1 containerViewSize:(struct CGSize)arg2;
- (struct CGSize)calculateItemSizeForModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1 collectionViewClass:(Class)arg2;
- (id)initWithTheme:(id)arg1;

@end

