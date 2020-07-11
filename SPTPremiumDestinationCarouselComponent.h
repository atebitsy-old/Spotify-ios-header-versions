//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponent-Protocol.h"
#import "HUBComponentWithChildren-Protocol.h"
#import "SPTPremiumDestinationCarouselItemSizeCalculator-Protocol.h"

@class NSSet, NSString, SPTPremiumDestinationGLUETheme;
@protocol HUBComponentChildDelegate;

@interface SPTPremiumDestinationCarouselComponent : NSObject <SPTPremiumDestinationCarouselItemSizeCalculator, HUBComponent, HUBComponentWithChildren>
{
    id <HUBComponentChildDelegate> _childDelegate;
    SPTPremiumDestinationGLUETheme *_theme;
}

@property(retain, nonatomic) SPTPremiumDestinationGLUETheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (void).cxx_destruct;
- (struct CGSize)calculateItemSizeForModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)createViewWithFrame:(struct CGRect)arg1;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

